#include "type_parser.hpp"

namespace types {

types::StructInfo parseStruct(ast::ASTBlock *block, const ScopeInfo &scope) {
  if (!block) throw std::runtime_error("null block passed to parseStruct :(");
  types::StructInfo struct_info;

  for (auto node : block->nodes) {
    if (auto line = dynamic_cast<ast::ASTLine *>(node)) {
      /** Members line parsing */
      if (line->end - line->begin < 2) {
        throw ParserError(*line->begin, *line->end,
                          "Expected member type with names like 'int a b c'");
      }

      types::Type cur_type;
      auto cur = line->begin;
      try {
        cur_type = types::parse(cur, scope);
      } catch (const types::TypeParsingError &err) {
        throw ParserError(*line->begin, "Expected valid type");
      }
      cur_type.setLval(true);

      for (auto i = cur; i != line->end; ++i) {
        if (i->token == TOKEN::space) continue;

        /** TODO: proper member name validation */
        if (i->token != TOKEN::id) {
          throw ParserError(*i, "Expected member name as identifier");
        }
        auto member_name = i->val;
        if (struct_info.members.count(member_name)) {
          throw ParserError(*i, "Member '" + member_name + "'already exist");
        }
        struct_info.members[member_name] = cur_type;
        struct_info.members_list.push_back(member_name);
      }
    } else {
      throw ParserError("Unexprected block");
    }
  }
  return struct_info;
}

Type parse(std::string &str, const ScopeInfo &scope) {
  Type type;
  int ptr_c = 0;
  if (str.back() == 'R') {
    type.setRef(true);
    str.pop_back();
  }
  while (str.back() == 'P') {
    ++ptr_c;
    str.pop_back();
  }
  if (scope.typedefs.contains(str)) {
    auto tmp = scope.typedefs.at(str);
    type.setType(tmp.getTypeId());
    type.setPtr(tmp.getPtr() + type.getPtr());
  } else if (zhdata.prim_types.count(str)) {
    type.setType(zhdata.prim_types[str]);
  } else if (getStructId(str) != types::TYPE(-1)) {
    type.setType(getStructId(str));
  } else {
    throw TypeParsingError();
  }
  type.setPtr(ptr_c);
  return type;
}

Type parse(tokeniter &token, const ScopeInfo &scope) {
  std::string str = token->val;

  Type res;
  bool is_generic = false;
  if (zhdata.generics.contains(str)) {
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
    if (id == static_cast<TYPE>(-1)) {
      /** Type substitution*/
      if (generic_types.size() != zhdata.generics[str].names.size())
        throw ParserError(
            *token, "Number of generic types doesn't match: found " +
                std::to_string(generic_types.size()) + ", but " +
                std::to_string(zhdata.generics[str].names.size()) + " expected");

      //TODO proper scope
      ScopeInfo scope;
      for (int i = 0; i < generic_types.size(); ++i) {
        scope.typedefs[zhdata.generics[str].names[i]] = generic_types[i];
      }
      // for (auto i : generic)
      /** Try generate generic implementation */
      pushStruct(name, parseStruct(zhdata.generics[str].block, scope));
      for (auto &block : zhdata.generics[str].impl_blocks) {
        block->reset();
        auto funcs = parseImpl(block, Type(static_cast<TYPE>(getStructId(name))), scope);
        for (auto i : funcs)
          zhdata.sttree->functions.push_back(i);
      }
      id = getStructId(name);
    }
    res.setType(static_cast<TYPE>(id));
    // res.setTmpl(generic_types);
  } else if (is_generic) {
    throw ParserError(*token, "Generic type parsing failed, expected '<'");
  }
  if (zhdata.flags["show_type"]) {
    std::cout << res.toString() << std::endl;
  }
  return res;
}
std::vector<Type> parseTemplate(tokeniter &token, const ScopeInfo &scope) {
  std::vector<Type> templ;

  if (token->val != "<")
    throw ParserError(*token, "Expected '<' for template parsing");
  ++token;
  while (true) {
    if (token->token == TOKEN::space) {
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
    } catch (const types::TypeParsingError &err) {
      throw ParserError(*token, "Type parsing failed");
    }
  }

  return templ;
}
};