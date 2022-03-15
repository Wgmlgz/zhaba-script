#pragma once
#include <cinttypes>
#include <cstdlib>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <stack>
#include <string>
#include <map>
#include <array>

#include "./instructions.hpp"
#include "types.hpp"
#include "runtime_error.hpp"

namespace zhin {
class ByteCode {
 public:
  bytevec bytes;

  std::mt19937_64 gen = std::mt19937_64(time(0));
  std::array<int, 100000> labels;
  std::map<int, std::string> labels_comments;
  std::array<int, 100000> literals_labels;
  /**           string,  ptr */
  std::map<int64_t, byte *> owned_ptrs;
  std::map<int32_t, std::vector<byte>> literals_data;
  void push_pop_bytes(int val);
  void push_push_bytes(int val);
  void pushLabel(int32_t label, const std::string& comment);
  std::map<std::string, int> func_labels;
  std::map<types::TYPE, std::map<std::string, int>> structs_members_offsets;
  int label(int t);
  void loadLabels();
  size_t size() const;
  byte *loadBytes(size_t index, size_t size);
  instr *loadInstr(size_t index);
  int8_t *loadI8(size_t index);
  int16_t *loadI16(size_t index);
  int32_t *loadI32(size_t index);
  int64_t *loadI64(size_t index);
  uint8_t *loadU8(size_t index);
  uint16_t *loadU16(size_t index);
  uint32_t *loadU32(size_t index);
  uint64_t *loadU64(size_t index);
  void popBytes(size_t size);
  byte *loadLiteral(int64_t ptr, int size);

  template<typename T>
  void pushVal(const T &object) {
    bytes.reserve(bytes.size() + sizeof(T));
    auto target = bytes.data() + bytes.size();
    bytes.resize(bytes.size() + sizeof(T));

    const byte *begin = reinterpret_cast<const byte *>(std::addressof(object));
    const byte *end = begin + sizeof(T);
    std::copy(begin, end, target);
  }

  template<typename T>
  void pushVal(T begin, T end) {
    auto size = std::distance(begin, end);
    bytes.reserve(bytes.size() + size);
    auto target = bytes.end();
    bytes.resize(bytes.size() + size);

    std::copy(begin, end, target);
  }


  std::pair<std::string, std::map<size_t, std::string>> dis();
};
}  // namespace zhin
