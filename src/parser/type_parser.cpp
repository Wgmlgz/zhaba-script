#include "type_parser.hpp"

namespace types {

void parsePushStruct(const std::string &name, ast::ASTBlock *block,
                     Scope &write_scope, Scope &scope) {
  if (!block) throw std::runtime_error("null block passed to parseStruct :(");
  const auto id = static_cast<types::TYPE>(new types::TypeInfo());
  write_scope.types.emplace(name, id);
  auto& struct_info = *id;
  struct_info.name = name;

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
        struct_info.members_in_order.push_back(member_name);
      }
    } else {
      throw ParserError("Unexprected block");
    }
  }
  zhdata.structs.emplace_back(id);
  struct_info.complete = true;
  struct_info.order = zhdata.structs.size();
}

Type parse(std::string &str, const Scope &scope) {
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
  type.setPtr(ptr_c);
  if (scope.typedefs.contains(str)) {
    auto tmp = scope.typedefs.at(str);
    type.setType(tmp.getTypeId());
    type.setPtr(tmp.getPtr() + type.getPtr());
  } else if (tables::prim_types.count(str)) {
    type.setType(tables::prim_types.at(str));
  } else if (scope.types.contains(str)) {
    type.setType(scope.types.at(str));
  } else {
    throw TypeParsingError();
  }
  return type;
}

Type parse(tokeniter &token, const Scope &parent_scope) {
  auto& begin_token = *token;
  std::string str = token->val;

  Type res;
  bool is_generic = false;
  if (parent_scope.generics.contains(str)) {
    is_generic = true;
  } else {
    res = parse(str, parent_scope);
  }
  ++token;
  if (token->val == "<") {
    auto generic_types = parseTemplate(token, parent_scope);
    auto name = str + genericToStr(generic_types);
    auto id = parent_scope.types.contains(name)
                  ? parent_scope.types.at(name)
                  : nullptr;

    std::string m_str = token->val;
    int ptr_c = 0;
    if (m_str.back() == 'R' || m_str.back() == 'P') ++token;
    if (m_str.back() == 'R') {
      res.setRef(true);
      m_str.pop_back();
    }
    while (m_str.back() == 'P') {
      ++ptr_c;
      m_str.pop_back();
    }
    res.setPtr(ptr_c);

    if (str == "F") {
      res.setType(FT);
      res.setTypes(generic_types);
      return res;
    } else {
      /** Generate new implementation */
      if (!id) {
        /** Type substitution */
        auto generic = parent_scope.generics.at(str);
        if (generic_types.size() != generic->names.size())
          throw ParserError(
              begin_token, *token,
              "Number of generic types doesn't match: found " +
                  std::to_string(generic_types.size()) + ", but " +
                  std::to_string(generic->names.size()) +
                  " expected");

        Scope &scope = *(new Scope(generic->scope));
        for (int i = 0; i < generic_types.size(); ++i) 
          scope.typedefs.emplace(generic->names[i], generic_types[i]);
        
        parsePushStruct(name, generic->block, *generic->scope, scope);
        for (auto &block : generic->impl_blocks) {
          block->reset();
          auto funcs = parseImpl(block, Type(generic->scope->types.at(name)),
                                 scope, *generic->scope);
          for (auto i : funcs) zhdata.functions.push_back(i);
        }
        id = generic->scope->types.at(name);
      }
      res.setType(id);
    }

  } else if (is_generic) {
    throw ParserError(*token, "Generic type parsing failed, expected '<'");
  }
  if (!res.getTypeId()->complete &&
      !(res.getPtr() || res.getRef())) {
    throw ParserError(begin_token, *token,
                      "Incomplete type is not allowed here (you probably need "
                      "to make it ref of ptr)");
  }
  return res;
}

std::vector<Type> parseTemplate(tokeniter &token, const Scope &scope) {
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