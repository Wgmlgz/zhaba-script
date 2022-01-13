#include "runtime_error.hpp"

namespace zhin {

RuntimeError::RuntimeError(std::string new_msg) : msg(std::move(new_msg)) {}
const char *RuntimeError::what() {
  auto res = "ZHVM runtime error:" + msg;
  char *buf = new char[res.length() + 1];
  strcpy(buf, res.c_str());
  return buf;
}

}