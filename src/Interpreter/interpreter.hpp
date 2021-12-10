#include <stdlib.h>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <random>
// Order important
/*0*/ #include "../Parser/Parser.hpp"
/*1*/ #include "../Compiler/Compiler.hpp"
/*2*/ #include "../TreeLib/TreeLib.hpp"

namespace zhin {
  typedef uint8_t byte;
  typedef std::vector<byte> bytevec;

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
    nop,         // nothing
    label,       // labes
    label_data,  // data labes
    add_i32,     // pops and '+' 2 TOS 32 and pushes res
    add_i64,     // pops and '+' 2 TOS 64 and pushes res
    sub_i32,     // pops and '-' 2 TOS 32 and pushes res
    sub_i64,     // pops and '-' 2 TOS 64 and pushes res
    mul_i32,     // pops and '*' 2 TOS 32 and pushes res
    mul_i64,     // pops and '*' 2 TOS 64 and pushes res
    div_i32,     // pops and '/' 2 TOS 32 and pushes res
    div_i64,     // pops and '/' 2 TOS 64 and pushes res
    mod_i32,     // pops and '%' 2 TOS 32 and pushes res
    mod_i64,     // pops and '%' 2 TOS 64 and pushes res
    less_i32,    // pops and '<' 2 TOS 32 and pushes res
    less_i64,    // pops and '<' 2 TOS 64 and pushes res
    more_i32,    // pops and '>' 2 TOS 32 and pushes res
    more_i64,    // pops and '>' 2 TOS 64 and pushes res
    lesseq_i32,  // pops and '<=' 2 TOS 32 and pushes res
    lesseq_i64,  // pops and '<=' 2 TOS 64 and pushes res
    moreeq_i32,  // pops and '>=' 2 TOS 32 and pushes res
    moreeq_i64,  // pops and '>=' 2 TOS 64 and pushes res
    dup,
    swp,
    eq_64,     // pops and '==' 2 TOS 64 and pushes res
    eq_32,     // pops and '==' 2 TOS 32 and pushes res
    uneq_64,   // pops and '!=' 2 TOS 64 and pushes res
    uneq_32,   // pops and '!=' 2 TOS 32 and pushes res
    jmp,       // jumps to label (label:i32)
    call,      // jumps to label and updates call stack
    ret,       // pops call stack and clears args (args_size:i32, ret_size:i32)
    jmp_if64,  // jumpls to label if 64
    push_i32,  // pushes const 32 to TOS
    push_i64,  // pushes const 64 to TOS
    push_literal_ptr,  // pushes ptr by literal id
    push_stack_ptr,    // equal to push_i64; push_frame; add_i64;
    deref,             // copies n bytes from ptr to TOS
    assign,            // copies n bytes from TOS to ptr
    push_bytes,        // allocates n bytes at TOS
    push_frame,        // pushes current frame pointer
    pop_bytes,         // deallocates n bytes at TOS
    print_i32,         // prints TOS 32 (debug only)
    print_i64,         // prints TOS 64 (debug only)
    print_str,         // prints TOS char* (debug only)

    malloc,  // allocates n bytes (i64)
    free,    // frees pointer (i64)
  };

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
          
          case instr::dup: break;
          case instr::swp: break;
          case instr::print_i32: break;
          case instr::print_i64: break;
          case instr::print_str: break;
          case instr::jmp: cur += 4; break;
          case instr::call: cur += 4; break;
          case instr::ret: cur += 4 + 4; break;
          case instr::eq_64: break;
          case instr::eq_32: break;
          case instr::uneq_64: break;
          case instr::uneq_32: break;
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
      // if (!owned_ptrs.contains(ptr))
      //   throw RuntimeError("invalid heap ptr access");
      // if (!owned_ptrs.contains(ptr + size - 1))
      //   throw RuntimeError("read too much heap ptr");
      // return owned_ptrs.at(ptr);
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
          INSTR(dup)
          INSTR(swp)
          INSTR(print_i32)
          INSTR(print_i64)
          INSTR(print_str)
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

  /**
   * Memory addreses
   * 0x________________ :stack
   * 0xFF15____________ :heap
   * 0xFF54____________ :heap
   */
  class ZHVM {
    class Stack {
      bytevec stack;
      size_t top = 0;
     public:
      byte* getTopPtr() { return stack.data() + top; }
      byte* begin() { return stack.data(); }
      auto getTop() { return top; }
      void setTop(size_t val) { top = val; }
      byte* getBytes(int offset, int size) {
        // if (stack.empty()) throw RuntimeError("empty stack");
        // if (-offset < size) throw RuntimeError("read too much stack top");
        return
         stack.data() + top + offset;
      }
      byte* getBytesOrigin(int offset, int size) {
        // if (stack.empty()) throw RuntimeError("empty stack");
        // if (offset + size > stack.size()) throw RuntimeError("read too much stack origin");
        return stack.data() + offset;
      }
      void pushBytes(size_t size) {
        stack.reserve(top + size);
        stack.resize(std::max(stack.size(), top + size));
        top += size;
      }
      void popBytes(size_t size) {
        // if ((int)top - (int)size < 0) throw RuntimeError("pop below stack");
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
      Stack() {
        stack.reserve(66666);
      }
    };
    class Heap {
      /** Probaly slow as fuck */
      std::mt19937_64 gen = std::mt19937_64(time(0));
      std::map<int64_t, bytevec> mem;
      std::map<int64_t, byte*> owned_ptrs;
     public:
      void free(int64_t ptr) {
        if ((ptr & 0xff15000000000000) != 0xff15000000000000)
          throw RuntimeError("ptr is not heap member");
        if (!mem.contains(ptr))
          throw RuntimeError("cannot free non existing ptr");
      }
      int64_t malloc(int64_t size) {
        if (size > 100000 or size < 0)
          throw RuntimeError("cannot malloc " + std::to_string(size) + " bytes");
        int64_t ptr;
        do {
          ptr = gen();
          ptr &= 0x0000111111111111;
          ptr |= 0xff15000000000000;
        } while (mem.contains(ptr));
        mem.emplace(ptr, bytevec(size));
        auto mem_cur = mem.at(ptr).data();
        for (auto i = ptr; i < ptr + size; ++i, ++mem_cur)
          owned_ptrs.emplace(i, mem_cur);
        return ptr;
      }
      byte* access(int64_t ptr, int size) {
        if ((ptr & 0xff15000000000000) != 0xff15000000000000)
          throw RuntimeError("ptr is not heap member");
        if (!owned_ptrs.contains(ptr))
          throw RuntimeError("invalid heap ptr access");
        if (!owned_ptrs.contains(ptr + size - 1))
          throw RuntimeError("read too much heap ptr");
        return owned_ptrs.at(ptr);
      }
    };
    Stack stack;
    Heap heap;
    ByteCode& bytecode;
    byte* getPtr(int64_t ptr, int size) {
      if ((ptr & 0xff15000000000000) == 0xff15000000000000)
        /** Heap */ return heap.access(ptr, size);
      else if ((ptr & 0xff54000000000000) == 0xff54000000000000)
        /** Literals */ return bytecode.loadLiteral(ptr, size);
      else
        /** Stack */ return stack.getBytesOrigin(ptr, size);
    }
   public:
    ZHVM(ByteCode& run_bytecode) : bytecode(run_bytecode) {
      bool do_stack_trace = zhdata.bools["stack_trace"];

      bytecode.loadLabels();
      auto [dis, mp] = bytecode.dis();
      if (zhdata.bools["show_bytecode"] or true) {
        std::cout << "bytecode: " << dis <<std::endl;
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
            // std::cout << args_size << " " << ret_size << " " << stack.getTop()
            //           << " " << call_stack_frame.back() << std::endl;
            byte* target = call_stack_frame.back() - args_size + stack.begin();
            byte* begin = stack.getTopPtr() - ret_size;
            byte* end = stack.getTopPtr();
            std::copy(begin, end, target);

            cur = call_stack.back();
            stack.setTop(call_stack_frame.back() + ret_size - args_size);
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
          case instr::push_stack_ptr: {
            auto val = *bytecode.loadI64(cur);
            val += call_stack_frame.back();
            cur += 8;
            stack.push(val);
          } break;
          case instr::push_literal_ptr : {
            auto literal_id = *bytecode.loadI32(cur);
            cur += 4;
            auto val = 0xff54000000000000 |
                       static_cast<int64_t>(
                           bytecode.literals_labels[literal_id]);
            stack.push(val);
          } break;
          case instr::push_frame : {
            stack.push((int64_t)call_stack_frame.back());
          } break;
          case instr::deref: {
            auto size = *bytecode.loadI32(cur);
            cur += 4;
            auto ptr = *reinterpret_cast<int64_t*>(stack.getBytes(-8, 8)); // get ptr
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
            auto ptr = *reinterpret_cast<int64_t*>(stack.getBytes(- 8 - size, 8));
            auto target = getPtr(ptr, size);
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
            std::cout << std::to_string(t) << std::endl;
          } break;
          case instr::print_i64: {
            auto t = *reinterpret_cast<int64_t*>(stack.getBytes(-8, 8));
            stack.popBytes(8);
            std::cout << std::to_string(t) << std::endl;
          } break;
          case instr::print_str: {
            auto char_ptr = *reinterpret_cast<int64_t*>(stack.getBytes(-8, 8));
            stack.popBytes(8);
            auto mem = getPtr(char_ptr, 1);
            std::cout << reinterpret_cast<char*>(mem) << std::endl;
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
            auto size = *reinterpret_cast<int64_t*>(stack.getBytes(-8, 8));
            stack.popBytes(8);
            auto ptr = heap.malloc(size);
            stack.push(ptr);
          } break;
          case instr::free: {
            auto ptr = *reinterpret_cast<int64_t*>(stack.getBytes(-8, 8));
            stack.popBytes(8);
            heap.free(ptr);
          } break;
          default: {
            throw std::runtime_error("unimplemented op");
          }  break;
        }
        if (do_stack_trace)
          std::cout << stack.trace64() << std::endl << std::endl;
      }
    }
  };
} // namespace zhin
