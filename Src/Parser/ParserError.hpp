#pragma once
#include <unordered_map>
#include <vector>
#include <string>

struct ParserError {
  static std::unordered_map<int, int> which_line;
  static std::vector<std::string> lines;
  size_t pos = 0;
  size_t len = 0;
  std::string message;
  size_t line = 666;
  ParserError(size_t new_pos, size_t new_len, std::string new_message) {
    pos = new_pos;
    len = new_len;
    message = new_message;
  }
  ParserError(size_t new_pos, std::string new_message) {
    pos = new_pos;
    message = new_message;
  }
  std::string toString() {
    line = ParserError::which_line[pos];
    std::string source_code = lines[ParserError::which_line[pos] - 1];

    int real_pos = 0;
    for (int i = 0; i < line - 1; ++i) real_pos += lines[i].size() + 1;
    pos -= real_pos;
    std::string res;
    res += "Err at line ";
    res += std::to_string(line) + " ";
    res += "| ";
    size_t offset = res.size();
    res += source_code;
    res += "\n";
    res += std::string(offset - 2, ' ');
    res += "| ";
    res += std::string(pos, ' ');
    if (len) res += std::string(len, '^');
    else res += "^";
    res += "\n";
    res += message;
    res += "\n";
    return res;
  }
};
std::unordered_map<int, int> ParserError::which_line = {};
std::vector<std::string> ParserError::lines = {};