#pragma once 
#include "ExpressionParser.hpp"
#include "SyntaxTree.hpp"

std::string expToCpp(Exp* exp);
std::string blockToCpp(STBlock* exp, size_t depth = 0);
std::string toCpp(STNode* node, size_t depth = 0);

std::string expToCpp(Exp* exp) {
  // just default operator insertion
  // you need to pray 2 times to the GOD and this will work
  // p.s. will be refactored
  std::string res;
  if (auto op = dynamic_cast<IntLiteral*>(exp)) {
    res += std::to_string(op->val);
  }
  if (auto op = dynamic_cast<StrLiteral*>(exp)) {
    res += "\"" + op->val + "\"";
  }
  if (auto op = dynamic_cast<IdLiteral*>(exp)) {
    res += op->val;
  }

  if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
    res += "(";
    res += expToCpp(op->lhs);
    res += ") ";
    res += op->val;
    res += " (";
    res += expToCpp(op->rhs);
    res += ")";
  }
  if (auto op = dynamic_cast<PrefixOperator*>(exp)) {
    res += op->val;
    res += "(";
    res += expToCpp(op->child);
    res += ")";
  }

  if (auto op = dynamic_cast<PrefixOperator*>(exp)) {
    res += "(";
    res += expToCpp(op->child);
    res += ")";
    res += op->val;
  }
  return res;
}

size_t tab_size = 2;
std::string blockToCpp(STBlock* block, size_t depth = 0) {
  std::string res;
  res += "{\n";

  for (auto& i : block->vars) {
    res += std::string(' ', depth * tab_size);
    res += i.first.toCppString();
    res += " ";
    res += i.second;
    res += ";\n";
  }

  for (auto& i : block->nodes) {
    res += toCpp(i, depth + 1);
    res += ";\n";
  }
  res += "}\n";
  return res;
}
std::string toCpp(STNode* node, size_t depth) {
  std::string res;
  res += std::string(' ', depth * tab_size);

  if (auto nd = dynamic_cast<STIf*>(node)) {
    res += "if (";
    res += expToCpp(nd->contition);
    res += ") ";
    res += blockToCpp(nd->body, depth);
    if (nd->else_body) {
      res += " else ";
      res += blockToCpp(nd->else_body, depth);
    }
  } else if (auto exp = dynamic_cast<STExp*>(node)) {
    res += expToCpp(exp->exp);
  }
};