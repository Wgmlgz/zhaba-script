#include "./definitions_parser.hpp"

void validateFunction(const Scope& scope, const Function &func, tokeniter begin, tokeniter end) {
  try {
    auto str = func.name;
    types::parse(str, scope);
    throw ParserError(*begin, *end,
                      "'" + str + "' is a type name, use ctor instead");
  } catch (const types::TypeParsingError& err) {
  }

  if (func.op_type == OpType::bin) {
    if (scope.B_OP.contains(func.getHeadNonRefNonLval()))
      throw ParserError(*begin, *end,
                        func.toUniqueStr() + "is already defined");
  } else if (func.op_type == OpType::lhs) {
    if (scope.PR_OP.contains(func.getHeadNonRefNonLval()))
      throw ParserError(*begin, *end,
                        func.toUniqueStr() + "is already defined");
    if (func.name == "&") {
      throw ParserError(*begin, *end,
                        "You cannot overload prefix '&' operator");
    } 
    // else if (func.name == "*") {
    //   throw ParserError(*begin, *end,
    //                     "You cannot overload prefix '*' operator");
    // }
  } else if (func.op_type == OpType::rhs) {
    if (scope.PO_OP.contains(func.getHeadNonRefNonLval()))
      throw ParserError(*begin, *end,
                        func.toUniqueStr() + "is already defined");
  }
}

Function *parseOpHeader(tokeniter begin, tokeniter end, const Scope &scope) {
  if (begin >= end) throw ParserError(*begin, "Expected operator declaration");
  auto func = new Function;
  func->begin = &*begin;
  func->end = &*begin;
  auto cur = begin;
  bool is_fn = false;

  /* Implicit void type */
  func->type = types::Type(types::voidT);
  func->op_type = OpType::lhs;

  if (cur->val == "op") {
    func->op_type = OpType::bin;
    ++cur;
    if (cur != end and cur->token == TOKEN::space) ++cur;
  } else if (cur->val == "lop") {
    ++cur;
    if (cur != end and cur->token == TOKEN::space) ++cur;
  } else if (cur->val == "rop") {
    func->op_type = OpType::rhs;
    ++cur;
    if (cur != end and cur->token == TOKEN::space) ++cur;
  } else if (cur->val == "fn") {
    func->is_fn = true;
    ++cur;
    if (cur != end and cur->token == TOKEN::space) ++cur;
  }

  /* Parse priority */
  if (!func->is_fn and cur->token == TOKEN::int_literal) {
    func->priority = std::stoi(cur->val);
    ++cur;
    if (cur != end and cur->token == TOKEN::space) ++cur;
  }

  /* Parse return type */
  if (cur == end or cur->token != TOKEN::id) {
    throw ParserError(*cur, "Expected type or operator name");
  } else {
    try {
      func->type = types::parse(cur, scope);
      ++cur;
      if (cur != end and cur->token == TOKEN::space) ++cur;
    } catch (const types::TypeParsingError& err) {
      /* Implicit void type */
    }
  }

  /* parse name */
  if (cur == end or cur->token != TOKEN::id) {
    throw ParserError(*cur, "Expected operator name");
  } else {
    func->name = cur->val;
    ++cur;
    if (cur != end and cur->token == TOKEN::space) ++cur;
  }

  /* parse args */
  auto start_token = cur;
  std::unordered_set<std::string> used_vars;
  while (cur != end) {
    func->args.emplace_back();
    try {
      func->args.back().type = types::parse(cur, scope);
      ++cur;
      if (cur != end and cur->token == TOKEN::space) ++cur;
    } catch (const types::TypeParsingError& err) {
      throw ParserError(*cur, "Expected argument type");
    }

    if (cur == end or cur->token != TOKEN::id) {
      throw ParserError(*cur, "Expected argument name");
    } else {
      if (used_vars.count(cur->val)) {
        throw ParserError(*cur, "Duplicate argument name");
      }
      func->args.back().name = cur->val;
      used_vars.insert(cur->val);
      ++cur;
      if (cur != end and cur->token == TOKEN::space) ++cur;
    }
  }
  if (func->op_type == OpType::bin and func->args.size() < 2) {
    throw ParserError(*start_token, *cur,
                      "Expected at least 2 arguments in binary operator");
  }

  if (func->op_type == OpType::rhs) func->priority = 2;
  if (func->op_type == OpType::lhs) func->priority = 3;

  if (func->priority < 0) {
    if (func->op_type == OpType::bin)
      throw ParserError(*begin, *end,
                        "Binary operator priority is not defined");
  }

  validateFunction(scope, * func, begin, cur);
  return func;
}
