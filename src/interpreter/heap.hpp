#pragma once
#include "./bytecode.hpp"
#include "./runtime_error.hpp"
namespace zhin {

class Heap {
  /** Probably slow as fck */
  std::mt19937_64 gen = std::mt19937_64(std::random_device()());
  std::map<int64_t, bytevec> mem;
  std::map<int64_t, byte *> owned_ptrs;

 public:
  void free(int64_t ptr);
  int64_t malloc(int64_t size);
  byte *access(int64_t ptr, int size);
};
}