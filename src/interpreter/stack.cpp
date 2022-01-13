#include "stack.hpp"

namespace zhin {

std::string hexbyte(byte i) {
  std::stringstream stream;
  stream << std::setfill('0') << std::setw(2) << std::hex << (int) (i);
  return stream.str();
}

byte *Stack::getTopPtr() { return stack.data() + top; }
byte *Stack::begin() { return stack.data(); }
size_t Stack::getTop() const { return top; }
void Stack::setTop(size_t val) { top = val; }
byte *Stack::getBytes(int offset, int size) {
  if (stack.empty()) throw RuntimeError("empty stack");
  if (-offset < size) throw RuntimeError("read too much stack top");
  return stack.data() + top + offset;
}
byte *Stack::getBytesOrigin(int offset, int size) {
  if (stack.empty()) throw RuntimeError("empty stack");
  if (offset + size > stack.size())
    throw RuntimeError("read too much stack origin");
  return stack.data() + offset;
}
void Stack::pushBytes(size_t size) {
  stack.reserve(top + size);
  stack.resize(std::max(stack.size(), top + size));
  top += size;
}
void Stack::popBytes(size_t size) {
  if ((int) top - (int) size < 0) throw RuntimeError("pop below stack");
  top -= size;
}

std::string Stack::trace() {
  std::string res;
  res += "stack: ";
  for (int i = 0; i < top; ++i) {
    res += " ";
    res += hexbyte(stack[i]);
  }
  return res;
}
std::string Stack::trace64() {
  std::string res;
  res += "stack: ";
  for (int i = 0; i + 8 <= top; i += 8) {
    res += " ";
    res += std::to_string(*(int64_t *) &stack[i]);
  }
  return res;
}
Stack::Stack() { stack.reserve(66666); }
}