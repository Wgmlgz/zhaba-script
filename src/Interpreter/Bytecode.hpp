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
#include <map>
#include <array>
#include "./Instructions.hpp"
// Order is important
/*0*/ #include "../Parser/Parser.hpp"
/*1*/ #include "../Compiler/Compiler.hpp"
/*2*/ #include "../TreeLib/TreeLib.hpp"

namespace zhin {
  class ByteCode {
   public:
    bytevec bytes;

    std::mt19937_64 gen = std::mt19937_64(time(0));
    std::array<int, 100000> labels;
    std::array<int, 100000> literals_labels;
    /**           string,  ptr */
    std::map<int64_t, byte*> owned_ptrs;
    std::map<int32_t, std::vector<byte>> literals_data;
    void push_pop_bytes(int val) {
      if (val == 0) return;
      pushVal(zhin::instr::pop_bytes);
      pushVal((int32_t)(val));
    }
    void push_push_bytes(int val) {
      if (val == 0) return;
      pushVal(zhin::instr::push_bytes);
      pushVal((int32_t)(val));
    }
    std::map<std::string, int> func_labels;
    std::map<types::TYPE, std::map<std::string, int>> structs_members_offsets;
    int label(int t) {
      if (labels[t] == -1) throw std::runtime_error("undefined label");
      return labels[t];
    }
    void loadLabels() {
      labels.fill(-1);
      literals_labels.fill(-1);
      size_t cur = 0;
      while (cur != bytes.size()) {
        auto op = *loadInstr(cur);
        ++cur;
        switch (op) {
          case instr::nop: break;
          case instr::label:{
            labels[*loadI32(cur)] = cur + 4;
            cur += 4;
          } break;
          case instr::label_data : {
            literals_labels[*loadI32(cur)] = cur + 8;
            cur += 4;
            auto size = *loadI32(cur);
            cur += 4;
            cur += size;
          } break;
          case instr::add_i32: break;
          case instr::add_i64: break;
          case instr::sub_i32: break;
          case instr::sub_i64: break;
          case instr::mul_i32: break;
          case instr::mul_i64: break;
          case instr::div_i32: break;
          case instr::div_i64: break;
          case instr::mod_i32: break;
          case instr::mod_i64: break;
          case instr::less_i32: break;
          case instr::less_i64: break;
          case instr::more_i32: break;
          case instr::more_i64: break;
          case instr::lesseq_i32: break;
          case instr::lesseq_i64: break;
          case instr::moreeq_i32: break;
          case instr::moreeq_i64: break;
          case instr::eq_64: break;
          case instr::eq_32: break;
          case instr::uneq_64: break;
          case instr::uneq_32: break;

          case instr::jmp: cur += 4; break;
          case instr::call: cur += 4; break;
          case instr::ret: cur += 4 + 4; break;
          
          case instr::jmp_if64: cur += 4; break;
          case instr::push_i32: cur += 4; break;
          case instr::push_frame: break;
          case instr::deref: cur += 4; break;
          case instr::assign: cur += 4; break;
          case instr::push_i64: cur += 8; break;
          case instr::push_literal_ptr: cur += 4; break;
          case instr::push_stack_ptr: cur += 8; break;
          case instr::push_bytes: cur += 4; break;
          case instr::pop_bytes: cur += 4; break;

          case instr::put_i32: break;
          case instr::put_i64: break;
          case instr::put_str: break;
          case instr::out_i32: break;
          case instr::out_i64: break;
          case instr::out_str: break;

          case instr::malloc: break;
          case instr::free: break;
          default: throw std::runtime_error("unimplemented loadLabels"); break;
        }
      }
    }
    size_t size() {return bytes.size();}
    byte* loadBytes(size_t index, size_t size) {
      if (index + size > bytes.size())
        throw RuntimeError("read outside bytecode");
      return bytes.data() + index;
    }
    instr* loadInstr(size_t index) { return (instr*)(loadBytes(index, 1)); }
    int32_t* loadI32(size_t index) { return (int32_t*)(loadBytes(index, 4)); }
    int64_t* loadI64(size_t index) { return (int64_t*)(loadBytes(index, 8)); }
    void popBytes(size_t size) {
      for (int i = 0; i < size; ++i) bytes.pop_back();
    }
    byte* loadLiteral(int64_t ptr, int size) {
      if ((ptr & 0xff54000000000000) != 0xff54000000000000)
        throw RuntimeError("ptr is not literals member");
      /** Unsafe as fck */
      return bytes.data() + (ptr & 0x0000FFFFFFFFFFFF);
    }

    template <typename T>
    void pushVal(const T& object) {
      bytes.reserve(bytes.size() + sizeof(T));
      auto target = bytes.data() + bytes.size();
      bytes.resize(bytes.size() + sizeof(T));

      const byte* begin = reinterpret_cast<const byte*>(std::addressof(object));
      const byte* end = begin + sizeof(T);
      std::copy(begin, end, target);
    }

    template <typename T>
    void pushVal(T begin, T end) {
      auto size = std::distance(begin, end);
      bytes.reserve(bytes.size() + size);
      auto target = bytes.end();
      bytes.resize(bytes.size() + size);
      
      std::copy(begin, end, target);
    }

    std::pair<std::string, std::map<size_t, std::string>> dis() {
      size_t cur = 0;
      std::string all;
      std::map<size_t, std::string> mp;
      while (cur != bytes.size()) {
        std::stringstream ss;
        ss << std::setfill('0') << std::setw(4) << std::hex << cur;
        std::string res;
        res += ss.str();
        size_t old_cur = cur;
        auto op = *loadInstr(cur);
          ++cur;
        switch (op) {
#define INSTR(name)           \
  case instr::name:           \
    res += "    " #name "\n"; \
    break;
#define INSTR_I32(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadI32(cur)); \
    res += "\n";                          \
    cur += 4;                             \
    break;
#define INSTR_I64(name)                   \
  case instr::name:                       \
    res += "    " #name " ";              \
    res += std::to_string(*loadI64(cur)); \
    res += "\n";                          \
    cur += 8;                             \
    break;
          INSTR(nop)
          case instr::label:
            res += "  label ";
            res += std::to_string(*loadI32(cur));
            res += "\n";
            cur += 4;
          break;
          case instr::label_data: {
            auto id = *loadI32(cur);
            // literals_labels[id] = cur + 4;
            cur += 4;
            auto size = *loadI32(cur);
            cur += 4;
            res += "  label_data " + std::to_string(id) +
                   " " + std::to_string(size) + " ";
            res += std::string(reinterpret_cast<char*>(loadBytes(cur, 1)));
            cur += size;
            res += "\n";
          } break;
          INSTR_I32(jmp)
          INSTR_I32(call)
          INSTR_I32(jmp_if64)
          INSTR_I64(ret)
          INSTR_I32(push_literal_ptr)
          INSTR(add_i32)
          INSTR(add_i64)
          INSTR(sub_i32)
          INSTR(sub_i64)
          INSTR(mul_i32)
          INSTR(mul_i64)
          INSTR(div_i32)
          INSTR(div_i64)
          INSTR(mod_i32)
          INSTR(mod_i64)
          INSTR(less_i32)
          INSTR(less_i64)
          INSTR(more_i32)
          INSTR(more_i64)
          INSTR(lesseq_i32)
          INSTR(lesseq_i64)
          INSTR(moreeq_i32)
          INSTR(moreeq_i64)
          INSTR(eq_64)
          INSTR(eq_32)
          INSTR(uneq_64)
          INSTR(uneq_32)
          INSTR(put_i32)
          INSTR(put_i64)
          INSTR(put_str)
          INSTR(out_i32)
          INSTR(out_i64)
          INSTR(out_str)
          INSTR_I32(push_i32)
          INSTR(push_frame)
          INSTR_I32(deref)
          INSTR_I32(assign)
          INSTR_I64(push_i64)
          INSTR_I64(push_stack_ptr)
          INSTR_I32(push_bytes)
          INSTR_I32(pop_bytes)
          INSTR(malloc)
          INSTR(free)
          default:
            throw std::runtime_error("unimplemented dis");
            break;
        }
        all += res;
        mp[old_cur] = res;
      }
      return {all, mp};
    }
  };
}  // namespace zhin
