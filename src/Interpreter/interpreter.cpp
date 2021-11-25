#include <stdlib.h>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <stack>

// // Order important
// /*0*/ #include "../Parser/Parser.hpp"
// /*1*/ #include "../Compiler/Compiler.hpp"
// #include "../TreeLib/TreeLib.hpp"

namespace zhin {
  using byte = uint8_t;

  struct RuntimeError {
    std::string msg;
    RuntimeError(const std::string& new_msg) : msg(new_msg) {}
    std::string what() { return msg; }
  };

  namespace Data {
  struct Data {
    virtual std::string toString() = 0;
    virtual std::string toStringVal() = 0;
  };
  struct I32 : public Data {
    int32_t val;
    I32(int32_t new_val) : val(new_val) {}
    virtual std::string toString() override {
      return "i32 " + std::to_string(val);
    }
    virtual std::string toStringVal() override { return std::to_string(val); }
  };
  struct I64 : public Data {
    int64_t val;
    I64(int64_t new_val) : val(new_val) {}
    virtual std::string toString() override {
      return "i64 " + std::to_string(val);
    }
    virtual std::string toStringVal() override { return std::to_string(val); }
  };
  }  // namespace Data

  enum class instr : byte { pop, add_i32, dup, swp, push_i32, print };

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
      std::array<byte, sizeof(T)> bytes;

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
          case instr::add_i32:
            res += "  add_i32\n";
            break;
          case instr::pop:
            res += "  pop\n";
            break;
          case instr::dup:
            res += "  dup\n";
            break;
          case instr::swp:
            res += "  swp\n";
            break;
          case instr::print:
            res += "  print\n";
            break;
          case instr::push_i32:
            res += "  push_i32 ";
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
      std::vector<Data::Data*> stack;

     public:
      Data::Data* pop() {
        if (stack.empty()) throw RuntimeError("empty stack");
        auto t = stack.back();
        stack.pop_back();
        return t;
      }
      void push(Data::Data* val) { stack.push_back(val); }
      std::string trace() {
        std::string res;
        res += "stack {\n";
        for (const auto& i : stack) {
          res += "  ";
          res += i->toString();
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
          case instr::add_i32: {
            auto a = static_cast<Data::I32*>(stack.pop());
            auto b = static_cast<Data::I32*>(stack.pop());
            auto res = a->val + b->val;
            stack.push(new Data::I32(res));
            delete a;
            delete b;
          } break;
          case instr::push_i32: {
            auto val = *bytecode.loadI32(cur);
            cur += 4;
            stack.push(new Data::I32(val));
          } break;
          case instr::print: {
            auto t = stack.pop();
            std::cout << "out:" << t->toStringVal() << std::endl;
          } break;
          default: {
            throw std::runtime_error("unimplemented op");
          }  break;
        }
        std::cout << stack.trace() << std::endl;
      }
    }
  };
}  // namespace zhin

int main() {
  std::cout << "da" << std::endl;
  zhin::ByteCode bytecode;
  bytecode.pushVal(zhin::instr::push_i32);
  bytecode.pushVal((int32_t)(2));
  bytecode.pushVal(zhin::instr::push_i32);
  bytecode.pushVal((int32_t)(4));
  bytecode.pushVal(zhin::instr::add_i32);
  bytecode.pushVal(zhin::instr::print);
  std::cout << bytecode.dis() << std::endl;
  zhin::ZHVM zhvm;
  zhvm.run(bytecode);
}
