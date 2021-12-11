#pragma once
#include "./Bytecode.hpp"
namespace zhin {

class Heap {
  /** Probaly slow as fck */
  std::mt19937_64 gen = std::mt19937_64(time(0));
  std::map<int64_t, bytevec> mem;
  std::map<int64_t, byte*> owned_ptrs;

 public:
  void free(int64_t ptr) {
    if ((ptr & 0xff15000000000000) != 0xff15000000000000)
      throw RuntimeError("ptr is not heap member");
    if (!mem.contains(ptr)) throw RuntimeError("cannot free non existing ptr");
  }
  int64_t malloc(int64_t size) {
    if (size > 100000 or size < 0)
      throw RuntimeError("cannot malloc " + std::to_string(size) + " bytes");
    int64_t ptr;
    do {
      ptr = gen();
      ptr &= 0x0000ffffffffffff;
      ptr |= 0xff15000000000000;
    } while (mem.contains(ptr));
    mem.emplace(ptr, bytevec(size));
    auto mem_cur = mem.at(ptr).data();
    for (auto i = ptr; i < ptr + size; ++i, ++mem_cur)
      owned_ptrs.emplace(i, mem_cur);
    return ptr;
  }
  byte* access(int64_t ptr, int size) {
    if ((ptr & 0xffff000000000000) != 0xff15000000000000)
      throw RuntimeError("ptr is not heap member");
    if (!owned_ptrs.contains(ptr))
      throw RuntimeError("invalid heap ptr access");
    if (!owned_ptrs.contains(ptr + size - 1))
      throw RuntimeError("read too much heap ptr");
    return owned_ptrs.at(ptr);
  }
};
}