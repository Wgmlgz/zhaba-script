#pragma once
#include <string>
#include <exception>
#include <cstring>

namespace zhin {

struct RuntimeError : std::exception {
  std::string msg;
  explicit RuntimeError(std::string new_msg);
  virtual const char *what();
};

}