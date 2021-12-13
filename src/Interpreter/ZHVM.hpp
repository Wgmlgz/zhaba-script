#pragma once
#include <inttypes.h>
#include <stdlib.h>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <stack>
#include <string>

/** Order is important */
/*0*/
#include "../Parser/Parser.hpp"
/*1*/
#include "../Compiler/Compiler.hpp"
/*2*/
#include "../TreeLib/TreeLib.hpp"

#include "./Bytecode.hpp"
#include "./Heap.hpp"
#include "./Stack.hpp"

namespace zhin {
/**
 * Memory addreses
 * 0x________________ :stack
 * 0xFF15____________ :heap
 * 0xFF54____________ :literals
 */
class ZHVM {
  Stack stack;
  Heap heap;
  ByteCode& bytecode;
  byte* getPtr(int64_t ptr, int size) {
    if ((ptr & 0xffff000000000000) == 0xff15000000000000)
      /** Heap */ return heap.access(ptr, size);
    else if ((ptr & 0xffff000000000000) == 0xff54000000000000)
      /** Literals */ return bytecode.loadLiteral(ptr, size);
    else
      /** Stack */ return stack.getBytesOrigin(ptr, size);
  }

 public:
  ZHVM(ByteCode& run_bytecode) : bytecode(run_bytecode) {
    bool do_stack_trace = zhdata.bools["stack_trace"];

    bytecode.loadLabels();
    auto [dis, mp] = bytecode.dis();
    if (zhdata.bools["show_bytecode"]) {
      std::cout << "bytecode:\n" << dis << std::endl;
    }
    size_t cur = 0;
    std::string res;
    std::vector<size_t> call_stack;
    std::vector<size_t> call_stack_frame;

    while (cur < bytecode.size()) {
      std::stringstream ss;
      auto op = *bytecode.loadInstr(cur);
      if (do_stack_trace) std::cout << mp[cur];
      ++cur;
      switch (op) {
        case instr::nop:
          break;

#define ARITHMETIC_BIN(name, type, op, size)                            \
  case instr::name: {                                                   \
    type b = *reinterpret_cast<type*>(stack.getBytes(-size, size));     \
    type a = *reinterpret_cast<type*>(stack.getBytes(-size * 2, size)); \
    type res = a op b;                                                  \
    stack.popBytes(size * 2);                                           \
    stack.push(res);                                                    \
  } break;

          ARITHMETIC_BIN(add_i32, int32_t, +, 4)
          ARITHMETIC_BIN(add_i64, int64_t, +, 8)
          ARITHMETIC_BIN(sub_i32, int32_t, -, 4)
          ARITHMETIC_BIN(sub_i64, int64_t, -, 8)
          ARITHMETIC_BIN(mul_i32, int32_t, *, 4)
          ARITHMETIC_BIN(mul_i64, int64_t, *, 8)
          ARITHMETIC_BIN(eq_64, int64_t, ==, 8)
          ARITHMETIC_BIN(eq_32, int32_t, ==, 4)
          ARITHMETIC_BIN(uneq_64, int64_t, !=, 8)
          ARITHMETIC_BIN(uneq_32, int32_t, !=, 4)
          ARITHMETIC_BIN(div_i32, int32_t, /, 4)
          ARITHMETIC_BIN(div_i64, int64_t, /, 8)
          ARITHMETIC_BIN(mod_i32, int32_t, %, 4)
          ARITHMETIC_BIN(mod_i64, int64_t, %, 8)
          ARITHMETIC_BIN(less_i32, int32_t, <, 4)
          ARITHMETIC_BIN(less_i64, int64_t, <, 8)
          ARITHMETIC_BIN(more_i32, int32_t, >, 4)
          ARITHMETIC_BIN(more_i64, int64_t, >, 8)
          ARITHMETIC_BIN(lesseq_i32, int32_t, <=, 4)
          ARITHMETIC_BIN(lesseq_i64, int64_t, <=, 8)
          ARITHMETIC_BIN(moreeq_i32, int32_t, >=, 4)
          ARITHMETIC_BIN(moreeq_i64, int64_t, >=, 8)

#define TOSi32 *reinterpret_cast<int32_t*>(stack.getBytes(-4, 4))
#define TOSi64 *reinterpret_cast<int64_t*>(stack.getBytes(-8, 8))

        case instr::jmp: {
          auto target = *bytecode.loadI32(cur);
          cur += 4;
          cur = bytecode.label(target);
        } break;
        case instr::call: {
          auto target = *bytecode.loadI32(cur);
          cur += 4;
          call_stack.push_back(cur);
          call_stack_frame.push_back(stack.getTop());
          cur = bytecode.label(target);
        } break;
        case instr::ret: {
          int args_size = *bytecode.loadI32(cur);
          cur += 4;
          int ret_size = *bytecode.loadI32(cur);
          byte *target = call_stack_frame.back() - args_size + stack.begin(),
               *begin = stack.getTopPtr() - ret_size, *end = stack.getTopPtr();
          std::copy(begin, end, target);

          cur = call_stack.back();
          stack.setTop(call_stack_frame.back() + ret_size - args_size);
          call_stack.pop_back();
          call_stack_frame.pop_back();
        } break;
        case instr::jmp_if64: {
          auto target = *bytecode.loadI32(cur);
          cur += 4;
          auto val = TOSi64;
          stack.popBytes(8);
          if (val) cur = bytecode.label(target);
        } break;
        case instr::push_i32: {
          auto val = *bytecode.loadI32(cur);
          cur += 4;
          stack.push(val);
        } break;
        case instr::push_i64: {
          auto val = *bytecode.loadI64(cur);
          cur += 8;
          stack.push(val);
        } break;
        case instr::push_stack_ptr: {
          auto val = *bytecode.loadI64(cur);
          val += call_stack_frame.back();
          cur += 8;
          stack.push(val);
        } break;
        case instr::push_literal_ptr: {
          auto literal_id = *bytecode.loadI32(cur);
          cur += 4;
          auto val = 0xff54000000000000 |
                     static_cast<int64_t>(bytecode.literals_labels[literal_id]);
          stack.push(val);
        } break;
        case instr::push_frame: {
          stack.push((int64_t)call_stack_frame.back());
        } break;
        case instr::deref: {
          auto size = *bytecode.loadI32(cur);
          cur += 4;
          auto ptr = TOSi64;  // get ptr
          stack.popBytes(8);
          auto mem = getPtr(ptr, size);  // get data
          auto target = stack.getTopPtr();
          stack.pushBytes(size);
          const byte* begin = mem;
          const byte* end = begin + size;
          std::copy(begin, end, target);
        } break;
        case instr::assign: {
          auto size = *bytecode.loadI32(cur);
          cur += 4;
          auto mem = stack.getBytes(-size, size);
          auto ptr = *reinterpret_cast<int64_t*>(stack.getBytes(-8 - size, 8));
          auto target = getPtr(ptr, size);
          const byte *begin = mem, *end = begin + size;
          std::copy(begin, end, target);
          stack.popBytes(8 + size);
        } break;
        case instr::label: {
          bytecode.loadI32(cur);
          cur += 4;
        } break;
        case instr::put_i32: {
          auto t = TOSi32;
          stack.popBytes(4);
          *zhdata.out << static_cast<int32_t>(t);
        } break;
        case instr::put_i64: {
          auto t = TOSi64;
          stack.popBytes(8);
          *zhdata.out << static_cast<int64_t>(t);
        } break;
        case instr::put_str: {
          auto char_ptr = TOSi64;
          stack.popBytes(8);
          auto mem = getPtr(char_ptr, 1);
          *zhdata.out << reinterpret_cast<char*>(mem);
        } break;
        case instr::out_i32: {
          auto t = TOSi32;
          stack.popBytes(4);
          *zhdata.out << static_cast<int32_t>(t) << std::endl;
        } break;
        case instr::out_i64: {
          auto t = TOSi64;
          stack.popBytes(8);
          *zhdata.out << static_cast<int64_t>(t) << std::endl;
        } break;
        case instr::out_str: {
          auto char_ptr = TOSi64;
          stack.popBytes(8);
          auto mem = getPtr(char_ptr, 1);
          *zhdata.out << reinterpret_cast<char*>(mem) << std::endl;
        } break;
        case instr::push_bytes: {
          auto val = *bytecode.loadI32(cur);
          cur += 4;
          stack.pushBytes(val);
        } break;
        case instr::pop_bytes: {
          auto val = *bytecode.loadI32(cur);
          cur += 4;
          stack.popBytes(val);
        } break;
        case instr::malloc: {
          auto size = TOSi64;
          stack.popBytes(8);
          auto ptr = heap.malloc(size);
          stack.push(ptr);
        } break;
        case instr::free: {
          auto ptr = TOSi64;
          stack.popBytes(8);
          heap.free(ptr);
        } break;
        default: {
          throw std::runtime_error("unimplemented op");
        } break;
      }
      if (do_stack_trace)
        std::cout << stack.trace64() << std::endl << std::endl;
    }
  }
};
}  // namespace zhin
