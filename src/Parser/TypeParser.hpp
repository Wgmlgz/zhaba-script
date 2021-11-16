#pragma once
#include "Lexer.hpp"
#include "../Lang/Types.hpp"

/** Defined in SynataxTreeParser.hpp */
std::vector<Function*> parseImpl(ast::ASTBlock* block, const types::Type& type, ScopeInfo& main_scope);

namespace types {

Type parse(std::string& str, const ScopeInfo& scope);
Type parse(tokeniter& token, const ScopeInfo& scope);
std::vector<Type> parseTemplate(tokeniter& token, const ScopeInfo& scope);
types::StructInfo parseStruct(ast::ASTBlock* block, const ScopeInfo& scope);
types::StructInfo parseStruct(ast::ASTBlock* block, const ScopeInfo& scope) {
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
        cur_type = types::parse(cur, scope);
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

Type parse(std::string& str, const ScopeInfo& scope) {
  Type type;
  int ptr_c = 0;
  while (str.back() == 'P') {
    ++ptr_c;
    str.pop_back();
  }
  if (scope.typedefs.contains(str)) {
    auto tmp = scope.typedefs.at(str);
    type.setType(tmp.getTypeId());
    type.setPtr(tmp.getPtr() + type.getPtr());
  } else if (prim_types.count(str)) {
    type.setType(prim_types[str]);
  } else if (getStructId(str) != -1) {
    type.setType(static_cast<TYPE>(getStructId(str)));
  } else {
    throw std::runtime_error("Type parsing failed");
  }
  type.setPtr(ptr_c);
  return type;
}

Type parse(tokeniter& token, const ScopeInfo& scope) {
  std::string str = token->val;

  Type res;
  bool is_generic = false;
  if (generics.contains(str)) {
    is_generic = true;
  } else {
    res = parse(str, scope);
  }
  ++token;
  if (token->val == "<") {
    auto generic_types = parseTemplate(token, scope);
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

      //TODO proper scope
      ScopeInfo scope;
      for (int i = 0; i < generic_types.size(); ++i) {
        scope.typedefs[generics[str].names[i]] = generic_types[i];
      }
      // for (auto i : generic)
      /** Try generate generic implementation */
      pushStruct(name, parseStruct(generics[str].block, scope));
      for (auto& block : generics[str].impl_blocks) {
        block->reset();
        auto funcs = parseImpl(block, Type(static_cast<TYPE>(getStructId(name))), scope);
        for (auto i : funcs)
          zhdata.sttree->functions.push_back(i);
      }
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
std::vector<Type> parseTemplate(tokeniter& token, const ScopeInfo& scope) {
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
      auto tp = parse(token, scope);
      templ.push_back(tp);
    } catch (std::runtime_error err) {
      throw ParserError(*token, "Type parsing failed");
    }
  }

  return templ;
}
};