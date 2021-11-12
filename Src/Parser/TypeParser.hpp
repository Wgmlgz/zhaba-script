#pragma once
#include "Lexer.hpp"
#include "../Lang/Types.hpp"

namespace types {
Type parse(std::string& str) {
  Type type;
  int ptr_c = 0;
  while (str.back() == 'P') {
    ++ptr_c;
    str.pop_back();
  }

  if (prim_types.count(str)) {
    type.setType(prim_types[str]);
  } else if (getStructId(str) != -1) {
    type.setType(static_cast<TYPE>(getStructId(str)));
  } else {
    throw std::runtime_error("Type parsing failed");
  }
  type.setPtr(ptr_c);
  return type;
}
Type parse(tokeniter& token) {
  std::string str = token->val;
  auto res = parse(str);
  ++token;
  return res;
}
};