#pragma once 
#include "Expressions\ExpressionParser.hpp"
#include "TreeParser\SyntaxTree.hpp"

std::string expToCpp(Exp* exp);
std::string blockToCpp(STBlock* exp, size_t depth = 0);
std::string nodeToCpp(STNode* node, size_t depth = 0);

std::string expToCpp(Exp* exp) {
  // just default operator insertion
  // you need to pray 2 times to the GOD and this will work
  // p.s. will be refactored
  std::string res;
  if (!dynamic_cast<Literal*>(exp)) res += "(";
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
    res += expToCpp(op->lhs);
    res += " " + op->val + " ";
    res += expToCpp(op->rhs);
  }
  if (auto op = dynamic_cast<PrefixOperator*>(exp)) {
    res += op->val;
    res += expToCpp(op->child);
  }

  if (auto op = dynamic_cast<PostfixOperator*>(exp)) {
    res += expToCpp(op->child);
    res += op->val;
  }
  if (!dynamic_cast<Literal*>(exp)) res += ")";

  return res;
}

size_t tab_size = 2;
std::string blockToCpp(STBlock* block, size_t depth) {
  std::string res;
  res += "{\n";

  for (auto& i : block->scope_info.vars) {
    res += std::string((depth+1) * tab_size , ' ');
    res += i.second.toCppString();
    res += " ";
    res += i.first;
    res += ";\n";
  }

  for (auto& i : block->nodes) {
    res += nodeToCpp(i, depth + 1);
    if (!dynamic_cast<STIf*>(i)) res += ";";
    res += "\n";
  }
  res += std::string(depth * tab_size, ' ');
  res += "}";
  return res;
}
std::string nodeToCpp(STNode* node, size_t depth) {
  std::string res;
  res += std::string(depth * tab_size, ' ');

  if (auto nd = dynamic_cast<STIf*>(node)) {
    res += "if ";
    if (dynamic_cast<Literal*>(nd->contition)) res += "(";
    res += expToCpp(nd->contition);
    if (dynamic_cast<Literal*>(nd->contition)) res += ")";

    res += " ";
    res += blockToCpp(nd->body, depth);
    for (auto& i : nd->elseif_body) {
      res += " else if ";
      if (dynamic_cast<Literal*>(i.first)) res += "(";
      res += expToCpp(i.first);
      if (dynamic_cast<Literal*>(i.first)) res += ")";

      res += " ";
      res += blockToCpp(i.second, depth);
    }
    if (nd->else_body) {
      res += " else ";
      res += blockToCpp(nd->else_body, depth);
    }
  } else if (auto exp = dynamic_cast<STExp*>(node)) {
    res += expToCpp(exp->exp);
  }
  return res;
};

std::string toCpp(STBlock* block) {
  std::string res = R"(#include <bits/stdc++.h>
  
int main() )";
  res += blockToCpp(block);
  return res;
}