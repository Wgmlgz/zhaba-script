#pragma once
#include <string>
#include <vector>
#include "../Lexer.hpp"
#include "../Lang/Types.hpp"
#include "SyntaxTree.hpp"
#include "ParserError.hpp"

struct Function {

  struct Arg {
    std::string name;
    Type type;
  };

  std::string name;
  Type type;
  double priority;

  std::vector<Arg> args;

  STBlock* body;

  std::string headToStr() {
    std::string str;
    str += type.toString() + " ";
    str += name + " =";
    for (auto& arg : args) {
      str += " ";
      str += arg.type.toString() + " ";
      str += arg.name;
    } 
    return str;
  }
};

Function* parseFunctionHeader(std::vector<Token>::iterator begin, std::vector<Token>::iterator end) {
  if (begin >= end) throw ParserError(begin->pos, "Expected operator declaration");
  auto func = new Function;
  func->type = Type(intT);
  auto cur = begin;

  // parse priority
  if (cur->token == "int") {
    func->priority = std::stoi(cur->val);
    ++cur;
    if (cur != end and cur->token == "space") ++cur;
  }

  // parse return type
  if (cur == end or cur->token != "id") {
    throw ParserError(cur->pos, "Expected type or operator name");
  } else {
    try {
      func->type = Type::parse(cur->val);
      ++cur;
      if (cur != end and cur->token == "space") ++cur;
    } catch (...) {
      throw ParserError(cur->pos, "Expected return type");
    }
  }

  // parse name
  if (cur == end or cur->token != "id") {
    throw ParserError(cur->pos, "Expected operator name");
  } else {
    func->name = cur->val;
    ++cur;
    if (cur != end and cur->token == "space") ++cur;
  }

  // int sum = int a int b:
  //        ^^^ if have this just ignore
  if (cur != end and cur->val == "=") {
    ++cur;
    if (cur != end and cur->token == "space") ++cur;
  }

  // parse args
  std::unordered_set<std::string> used_vars;
  while (cur != end) {
    func->args.emplace_back();
    try {
      func->args.back().type = Type::parse(cur->val);
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

  return func;
}