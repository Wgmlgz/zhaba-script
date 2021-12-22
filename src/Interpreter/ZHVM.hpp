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

#define ARITHMETIC_BIN(name, type, ret_type, op, size)                  \
  case instr::name: {                                                   \
    type b = *reinterpret_cast<type*>(stack.getBytes(-size, size));     \
    type a = *reinterpret_cast<type*>(stack.getBytes(-size * 2, size)); \
    ret_type res = a op b;                                              \
    stack.popBytes(size * 2);                                           \
    stack.push(res);                                                    \
  } break;

#define ARITHMETIC_PR(name, type, ret_type, op, size)                \
  case instr::name: {                                                \
    type a = *reinterpret_cast<type *>(stack.getBytes(-size, size)); \
    ret_type res = op a;                                             \
    stack.popBytes(size);                                            \
    stack.push(res);                                                 \
  } break;

          ARITHMETIC_BIN(add_i8, int8_t, int8_t, +, 1)
          ARITHMETIC_BIN(sub_i8, int8_t, int8_t, -, 1)
          ARITHMETIC_BIN(mul_i8, int8_t, int8_t, *, 1)
          ARITHMETIC_BIN(div_i8, int8_t, int8_t, /, 1)
          ARITHMETIC_BIN(mod_i8, int8_t, int8_t, %, 1)
          ARITHMETIC_BIN(less_i8, int8_t, bool, <, 1)
          ARITHMETIC_BIN(more_i8, int8_t, bool, >, 1)
          ARITHMETIC_BIN(lesseq_i8, int8_t, bool, <=, 1)
          ARITHMETIC_BIN(moreeq_i8, int8_t, bool, >=, 1)

          ARITHMETIC_BIN(add_i16, int16_t, int16_t, +, 2)
          ARITHMETIC_BIN(sub_i16, int16_t, int16_t, -, 2)
          ARITHMETIC_BIN(mul_i16, int16_t, int16_t, *, 2)
          ARITHMETIC_BIN(div_i16, int16_t, int16_t, /, 2)
          ARITHMETIC_BIN(mod_i16, int16_t, int16_t, %, 2)
          ARITHMETIC_BIN(less_i16, int16_t, bool, <, 2)
          ARITHMETIC_BIN(more_i16, int16_t, bool, >, 2)
          ARITHMETIC_BIN(lesseq_i16, int16_t, bool, <=, 2)
          ARITHMETIC_BIN(moreeq_i16, int16_t, bool, >=, 2)

          ARITHMETIC_BIN(add_i32, int32_t, int32_t, +, 4)
          ARITHMETIC_BIN(sub_i32, int32_t, int32_t, -, 4)
          ARITHMETIC_BIN(mul_i32, int32_t, int32_t, *, 4)
          ARITHMETIC_BIN(div_i32, int32_t, int32_t, /, 4)
          ARITHMETIC_BIN(mod_i32, int32_t, int32_t, %, 4)
          ARITHMETIC_BIN(less_i32, int32_t, bool, <, 4)
          ARITHMETIC_BIN(more_i32, int32_t, bool, >, 4)
          ARITHMETIC_BIN(lesseq_i32, int32_t, bool, <=, 4)
          ARITHMETIC_BIN(moreeq_i32, int32_t, bool, >=, 4)

          ARITHMETIC_BIN(add_i64, int64_t, int64_t, +, 8)
          ARITHMETIC_BIN(sub_i64, int64_t, int64_t, -, 8)
          ARITHMETIC_BIN(mul_i64, int64_t, int64_t, *, 8)
          ARITHMETIC_BIN(div_i64, int64_t, int64_t, /, 8)
          ARITHMETIC_BIN(mod_i64, int64_t, int64_t, %, 8)
          ARITHMETIC_BIN(less_i64, int64_t, bool, <, 8)
          ARITHMETIC_BIN(more_i64, int64_t, bool, >, 8)
          ARITHMETIC_BIN(lesseq_i64, int64_t, bool, <=, 8)
          ARITHMETIC_BIN(moreeq_i64, int64_t, bool, >=, 8)

          ARITHMETIC_BIN(eq_8, int8_t, bool, ==, 1)
          ARITHMETIC_BIN(uneq_8, int8_t, bool, !=, 1)
          ARITHMETIC_BIN(eq_16, int16_t, bool, ==, 2)
          ARITHMETIC_BIN(uneq_16, int16_t, bool, !=, 2)
          ARITHMETIC_BIN(eq_32, int32_t, bool, ==, 4)
          ARITHMETIC_BIN(uneq_32, int32_t, bool, !=, 4)
          ARITHMETIC_BIN(eq_64, int64_t, bool, ==, 8)
          ARITHMETIC_BIN(uneq_64, int64_t, bool, !=, 8)

          ARITHMETIC_BIN(add_u8, uint8_t, uint8_t, +, 1)
          ARITHMETIC_BIN(sub_u8, uint8_t, uint8_t, -, 1)
          ARITHMETIC_BIN(mul_u8, uint8_t, uint8_t, *, 1)
          ARITHMETIC_BIN(div_u8, uint8_t, uint8_t, /, 1)
          ARITHMETIC_BIN(mod_u8, uint8_t, uint8_t, %, 1)
          ARITHMETIC_BIN(less_u8, uint8_t, bool, <, 1)
          ARITHMETIC_BIN(more_u8, uint8_t, bool, >, 1)
          ARITHMETIC_BIN(lesseq_u8, uint8_t, bool, <=, 1)
          ARITHMETIC_BIN(moreeq_u8, uint8_t, bool, >=, 1)

          ARITHMETIC_BIN(add_u16, uint16_t, uint16_t, +, 2)
          ARITHMETIC_BIN(sub_u16, uint16_t, uint16_t, -, 2)
          ARITHMETIC_BIN(mul_u16, uint16_t, uint16_t, *, 2)
          ARITHMETIC_BIN(div_u16, uint16_t, uint16_t, /, 2)
          ARITHMETIC_BIN(mod_u16, uint16_t, uint16_t, %, 2)
          ARITHMETIC_BIN(less_u16, uint16_t, bool, <, 2)
          ARITHMETIC_BIN(more_u16, uint16_t, bool, >, 2)
          ARITHMETIC_BIN(lesseq_u16, uint16_t, bool, <=, 2)
          ARITHMETIC_BIN(moreeq_u16, uint16_t, bool, >=, 2)

          ARITHMETIC_BIN(add_u32, uint32_t, uint32_t, +, 4)
          ARITHMETIC_BIN(sub_u32, uint32_t, uint32_t, -, 4)
          ARITHMETIC_BIN(mul_u32, uint32_t, uint32_t, *, 4)
          ARITHMETIC_BIN(div_u32, uint32_t, uint32_t, /, 4)
          ARITHMETIC_BIN(mod_u32, uint32_t, uint32_t, %, 4)
          ARITHMETIC_BIN(less_u32, uint32_t, bool, <, 4)
          ARITHMETIC_BIN(more_u32, uint32_t, bool, >, 4)
          ARITHMETIC_BIN(lesseq_u32, uint32_t, bool, <=, 4)
          ARITHMETIC_BIN(moreeq_u32, uint32_t, bool, >=, 4)

          ARITHMETIC_BIN(add_u64, uint64_t, uint64_t, +, 8)
          ARITHMETIC_BIN(sub_u64, uint64_t, uint64_t, -, 8)
          ARITHMETIC_BIN(mul_u64, uint64_t, uint64_t, *, 8)
          ARITHMETIC_BIN(div_u64, uint64_t, uint64_t, /, 8)
          ARITHMETIC_BIN(mod_u64, uint64_t, uint64_t, %, 8)
          ARITHMETIC_BIN(less_u64, uint64_t, bool, <, 8)
          ARITHMETIC_BIN(more_u64, uint64_t, bool, >, 8)
          ARITHMETIC_BIN(lesseq_u64, uint64_t, bool, <=, 8)
          ARITHMETIC_BIN(moreeq_u64, uint64_t, bool, >=, 8)

          ARITHMETIC_BIN(and_bool, bool, bool, &&, 1)
          ARITHMETIC_BIN(or_bool, bool, bool, ||, 1)
          ARITHMETIC_PR(not_bool, bool, bool, !, 1)

#define TOSi8 *reinterpret_cast<int8_t *>(stack.getBytes(-1, 1))
#define TOSi16 *reinterpret_cast<int16_t *>(stack.getBytes(-2, 2))
#define TOSi32 *reinterpret_cast<int32_t *>(stack.getBytes(-4, 4))
#define TOSi64 *reinterpret_cast<int64_t *>(stack.getBytes(-8, 8))

#define TOSu8 *reinterpret_cast<uint8_t *>(stack.getBytes(-1, 1))
#define TOSu16 *reinterpret_cast<uint16_t *>(stack.getBytes(-2, 2))
#define TOSu32 *reinterpret_cast<uint32_t *>(stack.getBytes(-4, 4))
#define TOSu64 *reinterpret_cast<uint64_t *>(stack.getBytes(-8, 8))

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
        case instr::jmp_if_bool: {
          auto target = *bytecode.loadI32(cur);
          cur += 4;
          auto val = TOSi8;
          stack.popBytes(1);
          if (val) cur = bytecode.label(target);
        } break;
        case instr::push_8: {
          auto val = *bytecode.loadU8(cur);
          cur += 1;
          stack.push(val);
        } break;
        case instr::push_16: {
          auto val = *bytecode.loadU16(cur);
          cur += 2;
          stack.push(val);
        } break;
        case instr::push_32: {
          auto val = *bytecode.loadU32(cur);
          cur += 4;
          stack.push(val);
        } break;
        case instr::push_64: {
          auto val = *bytecode.loadU64(cur);
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
        case instr::not_bytes : {
          auto size = *bytecode.loadI32(cur);
          cur += 4;
          bool val = 0;
          for (auto i = stack.getTopPtr() - size; i < stack.getTopPtr(); ++i)
            val |= *i;
          stack.popBytes(size);
          stack.push(!val);
        } break;

#define MAKE_IO(type_, c_type_, print_type_, size_)                   \
  case instr::put_##type_: {                             \
    auto t = TOS##type_;                                 \
    stack.popBytes(size_);                               \
    *zhdata.out << static_cast<c_type_>(t);              \
  } break;                                               \
  case instr::out_##type_: {                             \
    auto t = TOS##type_;                                 \
    stack.popBytes(size_);                               \
    *zhdata.out << static_cast<c_type_>(t) << std::endl; \
  } break;                                               \
  case instr::in_##type_: {                              \
    c_type_ tmp;                                         \
    *zhdata.in >> tmp;                                   \
    stack.push(static_cast<print_type_>(tmp));               \
  } break;
          MAKE_IO(i8,  int64_t, int8_t, 1)
          MAKE_IO(i16, int64_t, int16_t, 2)
          MAKE_IO(i32, int64_t, int32_t, 4)
          MAKE_IO(i64, int64_t, int64_t, 8)

          MAKE_IO(u8,  uint64_t, uint8_t,  1)
          MAKE_IO(u16, uint64_t, uint16_t, 2)
          MAKE_IO(u32, uint64_t, uint32_t, 4)
          MAKE_IO(u64, uint64_t, uint64_t, 8)

        case instr::put_str: {
          auto char_ptr = TOSi64;
          stack.popBytes(8);
          auto mem = getPtr(char_ptr, 1);
          *zhdata.out << reinterpret_cast<char *>(mem);
        } break;
        case instr::out_str: {
          auto char_ptr = TOSi64;
          stack.popBytes(8);
          auto mem = getPtr(char_ptr, 1);
          *zhdata.out << reinterpret_cast<char*>(mem) << std::endl;
        } break;
        case instr::in_str: {
          std::string str;
          *zhdata.in >> str;
          auto ptr = heap.malloc(str.size() + 1);
          auto real_ptr = getPtr(ptr, str.size() + 1);
          std::copy_n(str.c_str(), str.size() + 1, real_ptr);
          stack.push(static_cast<int64_t>(ptr));
        } break;
        case instr::put_char: {
          auto ch = TOSi8;
          stack.popBytes(1);
          *zhdata.out << static_cast<char>(ch);
        } break;
        case instr::out_char: {
          auto ch = TOSi8;
          stack.popBytes(1);
          *zhdata.out << static_cast<char>(ch) << std::endl;
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
