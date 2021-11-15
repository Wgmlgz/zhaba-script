#pragma once
#include "Lexer.hpp"
#include "../Lang/Types.hpp"

namespace types {

Type parse(std::string& str);
Type parse(tokeniter& token, const std::map<std::string, Type>& scope_types = {});
std::vector<Type> parseTemplate(tokeniter& token);
types::StructInfo parseStruct(ast::ASTBlock* block, const std::map<std::string, Type>& scope_types = {});

types::StructInfo parseStruct(ast::ASTBlock* block, const std::map<std::string, Type>& scope_types) {
  if (!block) throw std::runtime_error("null block passed to parseStruct :(");
  types::StructInfo struct_info;

  for (auto node : block->nodes) {
    if (auto line = dynamic_cast<ast::ASTLine*>(node)) {
      /** Members line parsing */
      if (line->end - line->begin < 2) {
        throw ParserError(*line->begin, *line->end,
                          "Expected memeber type with names like 'int a b c'");
      }

      types::Type cur_type;
      auto cur = line->begin;
      try {
        cur_type = types::parse(cur, scope_types);
      } catch (std::runtime_error err) {
        throw ParserError(*line->begin, "Expected valid type");
      }
      cur_type.setLval(true);

      for (auto i = cur; i != line->end; ++i) {
        if (i->token == "space") {
          continue;
        }

        /** TODO: proper member name validation */
        if (i->token != "id") {
          throw ParserError(*i, "Expected member name as identifier");
        }
        if (struct_info.members.count(i->val)) {
          throw ParserError(*i, "Member '" + i->val + "'already exist");
        }
        struct_info.members[i->val] = cur_type;
      }
    } else {
      throw ParserError("Unexprected block");
    }
  }
  return struct_info;
}

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

Type parse(tokeniter& token, const std::map<std::string, Type>& scope_types) {
  std::string str = token->val;

  if (scope_types.contains(str)) {
    ++token;
    return scope_types.at(str);
  }

  Type res;
  bool is_generic = false;
  if (generics.contains(str)) {
    is_generic = true;
  } else {
    res = parse(str);
  }
  ++token;
  if (token->val == "<") {
    auto generic_types = parseTemplate(token);
    auto name = str + genericToStr(generic_types);
    auto id = getStructId(name);

    /** Generate new implementation */
    if (id == -1) {
      /** Type substitution*/
      if (generic_types.size() != generics[str].names.size()) 
        throw ParserError(
          *token, "Number of generic types doesn't match: found " + 
          std::to_string(generic_types.size()) + ", but " +
          std::to_string(generics[str].names.size()) + " expected");

      std::map<std::string, Type> scope_types;
      for (int i = 0; i < generic_types.size(); ++i) {
        scope_types[generics[str].names[i]] = generic_types[i];
      }
      // for (auto i : generic)
      /** Try generate generic implementation */
      pushStruct(name, parseStruct(generics[str].block, scope_types));
      id = getStructId(name);
    }
    res.setType(static_cast<TYPE>(id));
    // res.setTmpl(generic_types);
  } else if(is_generic) {
    throw ParserError(*token, "Generic type parsing failed, expected '<'");
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