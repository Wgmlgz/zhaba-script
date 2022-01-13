#pragma once

#include <string>
#include <sstream>
#include <iomanip>

#include "./instructions.hpp"
#include "runtime_error.hpp"

namespace zhin {

std::string hexbyte(byte i);
class Stack {
  bytevec stack;
  size_t top = 0;

 public:
  byte *getTopPtr();
  byte *begin();
  [[nodiscard]] size_t getTop() const;
  void setTop(size_t val);
  byte *getBytes(int offset, int size);
  byte *getBytesOrigin(int offset, int size);

  void pushBytes(size_t size);
  void popBytes(size_t size);
  template<typename T>
  void push(const T &object) {
    stack.reserve(top + sizeof(T));
    auto target = top + stack.data();
    stack.resize(std::max(stack.size(), top + sizeof(T)));

    const byte *begin = reinterpret_cast<const byte *>(&object);
    const byte *end = begin + sizeof(T);
    std::copy(begin, end, target);
    top += sizeof(T);
  }
  std::string trace();
  std::string trace64();
  Stack();
};
}