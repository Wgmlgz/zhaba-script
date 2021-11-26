#include <stdlib.h>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <stack>

// Order important
/*0*/ #include "../Parser/Parser.hpp"
/*1*/ #include "../Compiler/Compiler.hpp"
/*2*/ #include "../TreeLib/TreeLib.hpp"

namespace zhin {
  using byte = uint8_t;

  std::string hexbyte(byte i) {
    std::stringstream stream;
    stream << std::setfill('0') << std::setw(2) << std::hex << (int)(i);
    return stream.str();
  }

  struct RuntimeError {
    std::string msg;
    RuntimeError(const std::string& new_msg) : msg(new_msg) {}
    std::string what() { return msg; }
  };

  // namespace Data {
  // struct Data {
  //   virtual std::string toString() = 0;
  //   virtual std::string toStringVal() = 0;
  // };
  // struct I32 : public Data {
  //   int32_t val;
  //   I32(int32_t new_val) : val(new_val) {}
  //   virtual std::string toString() override {
  //     return "i32 " + std::to_string(val);
  //   }
  //   virtual std::string toStringVal() override { return std::to_string(val); }
  // };
  // struct I64 : public Data {
  //   int64_t val;
  //   I64(int64_t new_val) : val(new_val) {}
  //   virtual std::string toString() override {
  //     return "i64 " + std::to_string(val);
  //   }
  //   virtual std::string toStringVal() override { return std::to_string(val); }
  // };
  // }  // namespace Data

  enum class instr : byte {
    nop,    // nothing
    label,  // labes
    // pop, // pops n bytes
    add_i32,
    add_i64,
    dup,
    swp,
    push_i32,
    push_i64,
    push_bytes,  // allocates n bytes at the top of the stack
    pop_bytes,   // deallocates n bytes at the top of the stack
    print_i32
  };

  class ByteCode {
    std::vector<byte> bytes;
   public:
    size_t size() {return bytes.size();}
    byte* loadBytes(size_t index, size_t size) {
      if (index + size > bytes.size())
        throw RuntimeError("read outside bytecode");
      return bytes.data() + index;
    }
    instr* loadInstr(size_t index) { return (instr*)(loadBytes(index, 1)); }
    int32_t* loadI32(size_t index) { return (int32_t*)(loadBytes(index, 4)); }
    int64_t* loadI64(size_t index) { return (int64_t*)(loadBytes(index, 8)); }

    template <typename T>
    void pushVal(const T& object) {
      bytes.reserve(bytes.size() + sizeof(T));
      auto target = bytes.end();
      bytes.resize(bytes.size() + sizeof(T));

      const byte* begin = reinterpret_cast<const byte*>(std::addressof(object));
      const byte* end = begin + sizeof(T);
      std::copy(begin, end, target);
    }

    std::string dis() {
      size_t cur = 0;
      std::string res;
      while (cur != bytes.size()) {
        auto op = *loadInstr(cur);
          ++cur;
        switch (op) {
          case instr::nop:
            res += "  nop\n";
            break;
          case instr::label:
            res += "label ";
            res += std::to_string(*loadI32(cur));
            res += "\n";
            cur += 4;
            break;
          case instr::add_i32:
            res += "  add_i32\n";
            break;
          case instr::add_i64:
            res += "  add_i64\n";
            break;
          case instr::dup:
            res += "  dup\n";
            break;
          case instr::swp:
            res += "  swp\n";
            break;
          case instr::print_i32:
            res += "  print_i32\n";
            break;
          case instr::push_i32:
            res += "  push_i32 ";
            res += std::to_string(*loadI32(cur));
            res += "\n";
            cur += 4;
            break;
          case instr::push_i64:
            res += "  push_i32 ";
            res += std::to_string(*loadI64(cur));
            res += "\n";
            cur += 8;
            break;
          case instr::push_bytes:
            res += "  push_bytes ";
            res += std::to_string(*loadI32(cur));
            res += "\n";
            cur += 4;
            break;
          case instr::pop_bytes:
            res += "  pop_bytes ";
            res += std::to_string(*loadI32(cur));
            res += "\n";
            cur += 4;
            break;
          default:
            throw std::runtime_error("unimplemented");
            break;
        }
      }
      return res;
    }
  };

  class ZHVM {
    class Stack {
      std::vector<byte> stack;
      size_t top = 0;
     public:
      byte* getBytes(int offset, int size) {
        if (stack.empty()) throw RuntimeError("empty stack");
        if (-offset < size) throw RuntimeError("read too much stack");
        return
         stack.data() + stack.size() + offset;
      }
      void pushBytes(size_t size) {
        stack.reserve(top + size);
        auto target = top + stack.data();
        stack.resize(std::max(stack.size(), top + size));
        top += size;
      }
      void popBytes(size_t size) {
        if (top - size < 0) throw RuntimeError("read below stack");
        top -= size;
      }
      template <typename T>
      void push(const T& object) {
        stack.reserve(top + sizeof(T));
        auto target = top + stack.data();
        stack.resize(std::max(stack.size(), top + sizeof(T)));

        const byte* begin =
            reinterpret_cast<const byte*>(std::addressof(object));
        const byte* end = begin + sizeof(T);
        std::copy(begin, end, target);
        top += sizeof(T);
      }
      std::string trace() {
        std::string res;
        res += "stack {\n  hx dc\n";
        for (int i = 0; i < top; ++i) {
          res += "  ";
          res += hexbyte(stack[i]);
          res += " ";
          res += std::to_string(stack[i]);
          res += "\n";
        }
        res += "}";
        return res;
      }
    };
    Stack stack;
   public:
    void run(ByteCode& bytecode) {
      size_t cur = 0;
      std::string res;
      std::cout << stack.trace() << std::endl;
      while (cur != bytecode.size()) {
        auto op = *bytecode.loadInstr(cur);
        ++cur;
        switch (op) {
          case instr::nop: break;
          case instr::add_i32: {
            auto a = *reinterpret_cast<int32_t*>(stack.getBytes(-4, 4));
            auto b = *reinterpret_cast<int32_t*>(stack.getBytes(-8, 4));
            auto res = a + b;
            stack.popBytes(8);
            stack.push(res);
          } break;
          case instr::add_i64: {
            auto a = *reinterpret_cast<int32_t*>(stack.getBytes(-8, 8));
            auto b = *reinterpret_cast<int32_t*>(stack.getBytes(-16, 8));
            auto res = a + b;
            stack.popBytes(16);
            stack.push(res);
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
          case instr::label: {
            bytecode.loadI32(cur);
            cur += 4;
          } break;
          case instr::print_i32: {
            auto t = *reinterpret_cast<int32_t*>(stack.getBytes(-4, 4));
            stack.popBytes(4);
            std::cout << "out:" << std::to_string(t) << std::endl;
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
          default: {
            throw std::runtime_error("unimplemented op");
          }  break;
        }
        std::cout << stack.trace() << std::endl;
      }
    }
  };
} // namespace zhin


// int main() {
  // std::cout << "da" << std::endl;
  // zhin::ByteCode bytecode;
  // bytecode.pushVal(zhin::instr::push_i32);
  // bytecode.pushVal((int32_t)(2));
  // bytecode.pushVal(zhin::instr::push_i32);
  // bytecode.pushVal((int32_t)(4));
  // bytecode.pushVal(zhin::instr::add_i32);
  // bytecode.pushVal(zhin::instr::print_i32);
  // std::cout << bytecode.dis() << std::endl;
  // zhin::ZHVM zhvm;
  // zhvm.run(bytecode);

// }