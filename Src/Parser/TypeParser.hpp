#pragma once
#include "Lexer.hpp"
#include "../Lang/Types.hpp"

namespace types {

Type parse(std::string& str);
Type parse(tokeniter& token);
std::vector<Type> parseTemplate(tokeniter& token);

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
  if (token->val == "<") {
    res.setTmpl(parseTemplate(token));
  }
  if (zhdata.bools["show_type"]) {
    std::cout << res.toString() << std::endl;
  }
  return res;
}
std::vector<Type> parseTemplate(tokeniter& token) {
  std::vector<Type> templ;

  if (token->val != "<")
    throw ParserError(*token, "Expected '<' for template parsing");
  ++token;
  while (1) {
    if (token->token == "space") {
      ++token;
      continue;
    }
    if (token->val == ">") {
      ++token;
      break;
    }

    try {
      auto tp = parse(token);
      templ.push_back(tp);
    } catch (std::runtime_error err) {
      throw ParserError(*token, "Type parsing failed");
    }
  }

  return templ;
}
};