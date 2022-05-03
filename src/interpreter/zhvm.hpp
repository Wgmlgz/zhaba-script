#pragma once
#include <cinttypes>
#include <cstdlib>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <stack>
#include <string>

#include "../parser/parser.hpp"
#include "../compiler/Compiler.hpp"
#include "../tree_lib/TreeLib.hpp"

#include "./bytecode.hpp"
#include "./heap.hpp"
#include "./stack.hpp"

namespace zhin {
/**
 * Memory addresses
 * 0x________________ :stack
 * 0xFF15____________ :heap
 * 0xFF54____________ :literals
 */
class ZHVM {
  /** input/output stream for interpreter */
  std::istream *in = &std::cin;
  std::ostream *out = &std::cout;

  /** State */
  size_t cur = 0;
  std::string res;
  std::vector<size_t> call_stack;
  std::vector<size_t> call_stack_frame;
  Stack stack;
  Heap heap;

  std::map<size_t, std::string> mp;
  bool do_stack_trace = zhdata.flags["stack_trace"];

  ByteCode &bytecode;
  byte *getPtr(int64_t ptr, int size) {
    if ((ptr & 0xffff000000000000) == 0xff15000000000000)
      /** Heap */ return heap.access(ptr, size);
    else if ((ptr & 0xffff000000000000) == 0xff54000000000000)
      /** Literals */ return bytecode.loadLiteral(ptr, size);
    else
      /** Stack */ return stack.getBytesOrigin(ptr, size);
  }

 public:
  ZHVM(ByteCode &run_bytecode) : bytecode(run_bytecode) {
    auto t = bytecode.dis();
    std::string dis;

    dis = t.first;
    mp = t.second;

    if (zhdata.flags["show_bytecode"]) {
      std::cout << "bytecode:\n" << dis << std::endl;
    }
    bytecode.loadLabels();
  }
  /**
   * @brief
   *
   * @param max_commands commands to run
   * @return true if run is not completed
   */
  bool runChunk(size_t max_commands = 1000) {
    for (size_t done = 0; cur < bytecode.size() && done < max_commands; ++done) {
      auto op = *bytecode.loadInstr(cur);
      if (do_stack_trace) std::cout << mp.at(cur);
      ++cur;
      switch (op) {
        case instr::nop:break;

#define ARITHMETIC_BIN(name, type, ret_type, op, size)                  \
  case instr::name: {                                                   \
    type b = *reinterpret_cast<type*>(stack.getBytes(-size, size));     \
    type a = *reinterpret_cast<type*>(stack.getBytes(-size * 2, size)); \
    ret_type res = (a op b);                                            \
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

#define MAKE_INT_BIN(type, zhtype, size)                \
  ARITHMETIC_BIN(zhtype##_add, type, type, +, size)     \
  ARITHMETIC_BIN(zhtype##_sub, type, type, -, size)     \
  ARITHMETIC_BIN(zhtype##_mul, type, type, *, size)     \
  ARITHMETIC_BIN(zhtype##_div, type, type, /, size)     \
  ARITHMETIC_BIN(zhtype##_mod, type, type, %, size)     \
  ARITHMETIC_BIN(zhtype##_bit_xor, type, type, ^, size) \
  ARITHMETIC_BIN(zhtype##_bit_or, type, type, |, size)  \
  ARITHMETIC_BIN(zhtype##_bit_and, type, type, &, size) \
  ARITHMETIC_BIN(zhtype##_eq, type, bool, ==, size)     \
  ARITHMETIC_BIN(zhtype##_uneq, type, bool, !=, size)   \
  ARITHMETIC_BIN(zhtype##_less, type, bool, <, size)    \
  ARITHMETIC_BIN(zhtype##_more, type, bool, >, size)    \
  ARITHMETIC_BIN(zhtype##_lesseq, type, bool, <=, size) \
  ARITHMETIC_BIN(zhtype##_moreeq, type, bool, >=, size) \
  ARITHMETIC_PR(zhtype##_not, type, bool, !, size)      \
  ARITHMETIC_PR(zhtype##_neg, type, type, -, size)      \
  ARITHMETIC_PR(zhtype##_bit_not, type, type, ~, size)

          MAKE_INT_BIN(int8_t, i8, 1)
          MAKE_INT_BIN(int16_t, i16, 2)
          MAKE_INT_BIN(int32_t, i32, 4)
          MAKE_INT_BIN(int64_t, i64, 8)
          MAKE_INT_BIN(uint8_t, u8, 1)
          MAKE_INT_BIN(uint16_t, u16, 2)
          MAKE_INT_BIN(uint32_t, u32, 4)
          MAKE_INT_BIN(uint64_t, u64, 8)
          MAKE_INT_BIN(char, char, 1)

#define MAKE_FLOAT_BIN(type, zhtype, size)              \
  ARITHMETIC_BIN(zhtype##_add, type, type, +, size)     \
  ARITHMETIC_BIN(zhtype##_sub, type, type, -, size)     \
  ARITHMETIC_BIN(zhtype##_mul, type, type, *, size)     \
  ARITHMETIC_BIN(zhtype##_div, type, type, /, size)     \
  ARITHMETIC_BIN(zhtype##_eq, type, bool, ==, size)     \
  ARITHMETIC_BIN(zhtype##_uneq, type, bool, !=, size)   \
  ARITHMETIC_BIN(zhtype##_less, type, bool, <, size)    \
  ARITHMETIC_BIN(zhtype##_more, type, bool, >, size)    \
  ARITHMETIC_BIN(zhtype##_lesseq, type, bool, <=, size) \
  ARITHMETIC_BIN(zhtype##_moreeq, type, bool, >=, size) \
  ARITHMETIC_PR(zhtype##_not, type, bool, !, size)      \
  ARITHMETIC_PR(zhtype##_neg, type, type, -, size)

          MAKE_FLOAT_BIN(float, f32, 4)
          MAKE_FLOAT_BIN(double, f64, 8)

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

#define TOSf32 *reinterpret_cast<float *>(stack.getBytes(-4, 4))
#define TOSf64 *reinterpret_cast<double *>(stack.getBytes(-8, 8))
#define TOSchar *reinterpret_cast<char *>(stack.getBytes(-1, 1))

        case instr::jmp: {
          auto target = *bytecode.loadI32(cur);
          cur += 4;
          cur = bytecode.label(target);
        }
          break;
        case instr::call: {
          auto target = TOSi32;
          stack.popBytes(4);
          call_stack.push_back(cur);
          call_stack_frame.push_back(stack.getTop());
          cur = bytecode.label(target);
        }
          break;
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
        }
          break;
        case instr::jmp_if_bool: {
          auto target = *bytecode.loadI32(cur);
          cur += 4;
          auto val = TOSi8;
          stack.popBytes(1);
          if (val) cur = bytecode.label(target);
        }
          break;
        case instr::push_8: {
          auto val = *bytecode.loadU8(cur);
          cur += 1;
          stack.push(val);
        }
          break;
        case instr::push_16: {
          auto val = *bytecode.loadU16(cur);
          cur += 2;
          stack.push(val);
        }
          break;
        case instr::push_32: {
          auto val = *bytecode.loadU32(cur);
          cur += 4;
          stack.push(val);
        } break;
        case instr::push_64: {
          auto val = *bytecode.loadU64(cur);
          cur += 8;
          stack.push(val);
        }
          break;
        case instr::push_stack_ptr: {
          auto val = *bytecode.loadI64(cur);
          val += call_stack_frame.back();
          cur += 8;
          stack.push(val);
        }
          break;
        case instr::push_literal_ptr: {
          auto literal_id = *bytecode.loadI32(cur);
          cur += 4;
          auto val = 0xff54000000000000 |
              static_cast<int64_t>(bytecode.literals_labels[literal_id]);
          stack.push(val);
        }
          break;
        case instr::push_frame: {
          stack.push((int64_t) call_stack_frame.back());
        }
          break;
        case instr::deref: {
          auto size = *bytecode.loadI32(cur);
          cur += 4;
          auto ptr = TOSi64;  // get ptr
          stack.popBytes(8);
          auto mem = getPtr(ptr, size);  // get data
          auto target = stack.getTopPtr();
          stack.pushBytes(size);
          const byte *begin = mem;
          const byte *end = begin + size;
          std::copy(begin, end, target);
        }
          break;
        case instr::assign: {
          auto size = *bytecode.loadI32(cur);
          cur += 4;
          auto mem = stack.getBytes(-size, size);
          auto ptr = *reinterpret_cast<int64_t *>(stack.getBytes(-8 - size, 8));
          auto target = getPtr(ptr, size);
          const byte *begin = mem, *end = begin + size;
          std::copy(begin, end, target);
          stack.popBytes(8 + size);
        }
          break;
        case instr::label: {
          bytecode.loadI32(cur);
          cur += 4;
        }
          break;

#define MAKE_IO(type_, c_type_, print_type_, size_)      \
  case instr::type_##_put: {                             \
    auto t = TOS##type_;                                 \
    stack.popBytes(size_);                               \
    *out << static_cast<c_type_>(t);              \
  } break;                                               \
  case instr::type_##_out: {                             \
    auto t = TOS##type_;                                 \
    stack.popBytes(size_);                               \
    *out << static_cast<c_type_>(t) << std::endl; \
  } break;                                               \
  case instr::type_##_in: {                              \
    c_type_ tmp;                                         \
    *in >> tmp;                                   \
    stack.push(static_cast<print_type_>(tmp));           \
  } break;

        MAKE_IO(i8, int64_t, int8_t, 1)
        MAKE_IO(i16, int64_t, int16_t, 2)
        MAKE_IO(i32, int64_t, int32_t, 4)
        MAKE_IO(i64, int64_t, int64_t, 8)

        MAKE_IO(u8, uint64_t, uint8_t, 1)
        MAKE_IO(u16, uint64_t, uint16_t, 2)
        MAKE_IO(u32, uint64_t, uint32_t, 4)
        MAKE_IO(u64, uint64_t, uint64_t, 8)
        MAKE_IO(char, char, char, 1)

        MAKE_IO(f32, float, float, 4)
        MAKE_IO(f64, double, double, 8)

        case instr::put_str: {
          auto char_ptr = TOSi64;
          stack.popBytes(8);
          auto mem = getPtr(char_ptr, 1);
          *out << reinterpret_cast<char *>(mem);
        }
          break;
        case instr::out_str: {
          auto char_ptr = TOSi64;
          stack.popBytes(8);
          auto mem = getPtr(char_ptr, 1);
          *out << reinterpret_cast<char *>(mem) << std::endl;
        }
          break;
        case instr::in_str: {
          std::string str;
          *in >> str;
          auto ptr = heap.malloc(str.size() + 1);
          auto real_ptr = getPtr(ptr, str.size() + 1);
          std::copy_n(str.c_str(), str.size() + 1, real_ptr);
          stack.push(static_cast<int64_t>(ptr));
        }
          break;
        case instr::push_bytes: {
          auto val = *bytecode.loadI32(cur);
          cur += 4;
          stack.pushBytes(val);
        }
          break;
        case instr::pop_bytes: {
          auto val = *bytecode.loadI32(cur);
          cur += 4;
          stack.popBytes(val);
        }
          break;
        case instr::malloc: {
          auto size = TOSi64;
          stack.popBytes(8);
          auto ptr = heap.malloc(size);
          stack.push(ptr);
        }
          break;
        case instr::free: {
          auto ptr = TOSi64;
          stack.popBytes(8);
          heap.free(ptr);
        }
          break;
        default: {
          throw std::runtime_error("unimplemented op" +
                                   std::to_string(static_cast<int>(op)));
        }
          break;
      }
      if (do_stack_trace)
        std::cout << stack.trace64() << std::endl << std::endl;
    }

    return cur < bytecode.size();
  }
};
}  // namespace zhin
