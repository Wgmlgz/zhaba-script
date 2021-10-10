#pragma once
#include "Lexer.hpp"
#include "../Lang/Types.hpp"

namespace types {
Type parse(tokeniter& token) {
  Type type;
  // if (token->val == "=") {
  //   type.is_const = true;
  //   ++token;
  // }
  if (prim_types.count(token->val)) {
    type.setType(prim_types[(token++)->val]);
    return type;
  } else throw std::runtime_error("type parsing failed");
}
};