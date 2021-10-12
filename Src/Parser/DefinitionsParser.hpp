#pragma once
#include <string>
#include <vector>
#include "Lexer.hpp"
#include "../Lang/Lang.hpp"
#include "TypeParser.hpp"
#include "ParserError.hpp"

Function* parseFunctionHeader(std::vector<Token>::iterator begin, std::vector<Token>::iterator end) {
  if (begin >= end) throw ParserError(begin->pos, "Expected operator declaration");
  auto func = new Function;
  /* implicit void type */
  func->type = types::Type(types::TYPE::voidT);
  func->op_type = OpType::lhs;
  auto cur = begin;

  /* parse priority */
  if (cur->token == "int") {
    func->priority = std::stoi(cur->val);
    ++cur;
    if (cur != end and cur->token == "space") ++cur;
  }

  /* parse return type */
  if (cur == end or cur->token != "id") {
    throw ParserError(cur->pos, "Expected type or operator name");
  } else {
    try {
      func->type = types::parse(cur);
      ++cur;
      if (cur != end and cur->token == "space") ++cur;
    } catch (...) {
      /* implicit void type */ 
    }
  }

  /* parse name */
  if (cur == end or cur->token != "id") {
    throw ParserError(cur->pos, "Expected operator name");
  } else {
    func->name = cur->val;
    ++cur;
    if (cur != end and cur->token == "space") ++cur;
  }

  /**
   * int sum _ int a int b:
   *         ^op()
   */
  if (cur != end and cur->val == "_") {
    ++cur;
    if (cur != end and cur->token == "space") ++cur;
  } else
  /**
   * int sum __ int a int b:
   *         ^^ ()op
   */
  if (cur != end and cur->val == "__") {
    ++cur;
    func->op_type = OpType::rhs;
    if (cur != end and cur->token == "space") ++cur;
  } else
  /**
   * int sum ___ int a int b:
   *         ^^^ ()op()
   */
  if (cur != end and cur->val == "___") {
    ++cur;
    func->op_type = OpType::bin;
    if (cur != end and cur->token == "space") ++cur;
  }

  /* parse args */
  int start_pos = cur->pos;
  std::unordered_set<std::string> used_vars;
  while (cur != end) {
    func->args.emplace_back();
    try {
      func->args.back().type = types::parse(cur);
      ++cur;
      if (cur != end and cur->token == "space") ++cur;
    } catch (...) {
      throw ParserError(cur->pos, "Expected argument type");
    }

    if (cur == end or cur->token != "id") {
      throw ParserError(cur->pos, "Expected argument name");
    } else {
      if (used_vars.count(cur->val)) {
        throw ParserError(cur->pos, cur->val.size(), "Duplicate argument name");
      }
      func->args.back().name = cur->val;
      used_vars.insert(cur->val);
      ++cur;
      if (cur != end and cur->token == "space") ++cur;
    }
  }
  if (func->op_type == OpType::bin and func->args.size() != 2) {
    throw ParserError(start_pos, cur->pos - start_pos,
    "Expected 2 arguments in binary operator");
  }

  if (func->priority < 0) {
    if (func->op_type == OpType::rhs) func->priority = 2;
    if (func->op_type == OpType::rhs) func->priority = 3;
    if (func->op_type == OpType::bin)
      throw ParserError(begin->pos, end->pos + end->val.size() - begin->pos,
      "Binary operator priority is not defined");
  }
  
  return func;
}