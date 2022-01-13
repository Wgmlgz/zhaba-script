#pragma once
#include "./Instructions.hpp"

namespace zhin {
class Stack {
  bytevec stack;
  size_t top = 0;

 public:
  byte* getTopPtr() { return stack.data() + top; }
  byte* begin() { return stack.data(); }
  auto getTop() { return top; }
  void setTop(size_t val) { top = val; }
  byte* getBytes(int offset, int size) {
    if (stack.empty()) throw RuntimeError("empty stack");
    if (-offset < size) throw RuntimeError("read too much stack top");
    return stack.data() + top + offset;
  }
  byte* getBytesOrigin(int offset, int size) {
    if (stack.empty()) throw RuntimeError("empty stack");
    if (offset + size > stack.size())
      throw RuntimeError("read too much stack origin");
    return stack.data() + offset;
  }
  void pushBytes(size_t size) {
    stack.reserve(top + size);
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

    const byte* begin = reinterpret_cast<const byte*>(&object);
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
  Stack() { stack.reserve(66666); }
};
}