#pragma once
#include "Lexer.hpp"
#include "../Lang/Types.hpp"

namespace types {
Type parse(tokeniter& token) {
  Type type;
  if (prim_types.count(token->val)) {
    type.setType(prim_types[token->val]);
    ++token;
    return type;
  } else if (getStructId(token->val) != -1) {
    type.setType(static_cast<TYPE>(getStructId(token->val)));
    ++token;
    return type;
  } else {
    throw std::runtime_error("Type parsing failed");
  }
}
};