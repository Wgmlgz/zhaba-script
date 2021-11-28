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
    nop,      // nothing
    label,    // labes
    add_i32,  // pops and '+' 2 TOS 32 and pushes res
    add_i64,  // pops and '+' 2 TOS 64 and pushes res
    sub_i32,  // pops and '-' 2 TOS 32 and pushes res
    sub_i64,  // pops and '-' 2 TOS 64 and pushes res
    mul_i32,  // pops and '*' 2 TOS 32 and pushes res
    mul_i64,  // pops and '*' 2 TOS 64 and pushes res
    dup,
    swp,
    eq_64,       // pops and '==' 2 TOS 64 and pushes res
    jmp,         // jumps to label
    call,        // jumps to label and updates call stack
    ret,         // pops call stack
    jmp_if64,    // jumpls to label if 64
    push_i32,    // pushes const 32 to TOS
    push_i64,    // pushes const 64 to TOS
    deref,       // copies n bytes from ptr to TOS
    assign,      // copies n bytes from TOS to ptr
    push_bytes,  // allocates n bytes at TOS
    pop_bytes,   // deallocates n bytes at TOS
    print_i32    // prints TOS 32 (debug only)
  };

  class ByteCode {
    std::vector<byte> bytes;
    std::unordered_map<int, size_t> labels;
   public:
    std::map<std::string, int> func_labels;
    int label(int t) {
      if (!labels.contains(t)) throw std::runtime_error("undefined label");
      return labels.at(t);
    }
    void loadLabels() {
      labels.clear();
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
          case instr::add_i32: break;
          case instr::add_i64: break;
          case instr::sub_i32: break;
          case instr::sub_i64: break;
          case instr::mul_i32: break;
          case instr::mul_i64: break;
          case instr::dup: break;
          case instr::swp: break;
          case instr::print_i32: break;
          case instr::jmp: cur += 4; break;
          case instr::call: cur += 4; break;
          case instr::ret: break;
          case instr::eq_64: break;
          case instr::jmp_if64: cur += 4; break;
          case instr::push_i32: cur += 4; break;
          case instr::deref: cur += 4; break;
          case instr::assign: cur += 4; break;
          case instr::push_i64: cur += 8; break;
          case instr::push_bytes: cur += 4; break;
          case instr::pop_bytes: cur += 4; break;
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
        std::stringstream ss;
        ss << std::setfill('0') << std::setw(4) << std::hex << cur;
        res += ss.str();
        auto op = *loadInstr(cur);
          ++cur;
        switch (op) {
#define INSTR(name)         \
  case instr::name:         \
    res += "  " #name "\n"; \
    break;
#define INSTR_I32(name)                   \
  case instr::name:                       \
    res += "  " #name " ";                \
    res += std::to_string(*loadI32(cur)); \
    res += "\n";                          \
    cur += 4;                             \
    break;
#define INSTR_I64(name)                   \
  case instr::name:                       \
    res += "  " #name " ";                \
    res += std::to_string(*loadI64(cur)); \
    res += "\n";                          \
    cur += 8;                             \
    break;
          INSTR(nop)
          INSTR_I32(label)
          INSTR_I32(jmp)
          INSTR_I32(call)
          INSTR_I32(jmp_if64)
          INSTR(ret)
          INSTR(add_i32)
          INSTR(add_i64)
          INSTR(sub_i32)
          INSTR(sub_i64)
          INSTR(mul_i32)
          INSTR(mul_i64)
          INSTR(eq_64)
          INSTR(dup)
          INSTR(swp)
          INSTR(print_i32)
          INSTR_I32(push_i32)
          INSTR_I32(deref)
          INSTR_I32(assign)
          INSTR_I64(push_i64)
          INSTR_I32(push_bytes)
          INSTR_I32(pop_bytes)
          default:
            throw std::runtime_error("unimplemented dis");
            break;
        }
      }
      return res;
    }
  };

  /** 
   * Memory addreses
   * 0-100000 : stack frame
  */
  class ZHVM {
    class Stack {
      std::vector<byte> stack;
      size_t top = 0;
     public:
      byte* getTopPtr() { return stack.data() + top; }
      auto getTop() { return top; }
      void setTop(size_t val) { top = val; }
      byte* getBytes(int offset, int size) {
        if (stack.empty()) throw RuntimeError("empty stack");
        if (-offset < size) throw RuntimeError("read too much stack top");
        return
         stack.data() + top + offset;
      }
      byte* getBytesOrigin(int offset, int size) {
        if (stack.empty()) throw RuntimeError("empty stack");
        if (offset + size > stack.size()) throw RuntimeError("read too much stack origin");
        return stack.data() + offset;
      }
      void pushBytes(size_t size) {
        stack.reserve(top + size);
        auto target = top + stack.data();
        stack.resize(std::max(stack.size(), top + size));
        top += size;
      }
      void popBytes(size_t size) {
        if ((int)top - (int)size < 0) throw RuntimeError("pop below stack");
        top -= size;
      }
      template <typename T>
      void push(const T& object) {
        stack.reserve(top + sizeof(T));
        auto target = top + stack.data();
        stack.resize(std::max(stack.size(), top + sizeof(T)));

        const byte* begin =
            reinterpret_cast<const byte*>(&object);
        const byte* end = begin + sizeof(T);
        std::copy(begin, end, target);
        top += sizeof(T);
      }
      std::string trace() {
        std::string res;
        res += "stack: ";
        for (int i = 0; i < top; ++i) {
          res += " ";
          res += hexbyte(stack[i]);
        }
        return res;
      }
      std::string trace64() {
        std::string res;
        res += "stack: ";
        for (int i = 0; i + 8 <= top; i += 8) {
          res += " ";
          res += std::to_string(*(int64_t*)&stack[i]);
        }
        return res;
      }
    };
    Stack stack;
   public:
    void run(ByteCode& bytecode) {
      bytecode.loadLabels();
      size_t cur = 0;
      std::string res;
      std::vector<size_t> call_stack;
      std::vector<size_t> call_stack_frame;
      std::cout << stack.trace64() << std::endl;
      while (cur < bytecode.size()) {
        std::stringstream ss;
        ss << std::setfill('0') << std::setw(4) << std::hex << cur;
        res += ss.str() + " ";
        auto op = *bytecode.loadInstr(cur);
        ++cur;
        switch (op) {
          case instr::nop: break;
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
            cur = call_stack.back();
            call_stack.pop_back();
            call_stack_frame.pop_back();
          } break;
          case instr::jmp_if64: {
            auto target = *bytecode.loadI32(cur);
            cur += 4;
            auto val = *reinterpret_cast<int64_t*>(stack.getBytes(-8, 8));
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
          case instr::deref: {
            auto size = *bytecode.loadI32(cur);
            cur += 4;
            auto ptr = *reinterpret_cast<int64_t*>(stack.getBytes(-8, 8)); // get ptr
            stack.popBytes(8);

            // TODO: proper memory read
            auto mem = stack.getBytesOrigin(ptr + call_stack_frame.back(), size); // get data
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
            auto ptr = *reinterpret_cast<int64_t*>(stack.getBytes(- 8 -  size, 8));

            // TODO: proper memory write
            auto target =
                stack.getBytesOrigin(ptr + call_stack_frame.back(), size);
            const byte* begin = mem;
            const byte* end = begin + size;
            std::copy(begin, end, target);
            stack.popBytes(8 + size);
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
        std::cout << stack.trace64() << std::endl;
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
