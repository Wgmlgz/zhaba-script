#pragma once
#include <unordered_map>
#include <utility>
#include <vector>
#include <string>

#include "token.hpp"
#include "zhdata.hpp"

struct ParserError : std::exception {
  int pos = 0;
  int len = 0;
  std::string filename = "unknown file";
  std::string message;
  int line = -1;

  ParserError(size_t new_pos, size_t new_len, std::string new_message);
  ParserError(size_t new_pos, std::string new_message);
  ParserError(const Token &token, const std::string &new_message);
  ParserError(const Token &begin, const Token &end, const std::string &new_message);
  explicit ParserError(const std::string &new_message);
  virtual const char *what();
  void print();
};
