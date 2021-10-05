#pragma once 
#include "Expressions\ExpressionParser.hpp"
#include "TreeParser\SyntaxTreeParser.hpp"

std::string expToCpp(Exp* exp);
std::string blockToCpp(STBlock* exp, size_t depth = 0);
std::string nodeToCpp(STNode* node, size_t depth = 0);

std::string opToCpp(const std::string& str) {
  std::string ans;
  for (auto ch : str) {
    if (isalpha(ch)) ans += ch;
    else if (ch == '_')  ans += ch;
    else if (ch == '.')  ans += "dot";
    else if (ch == '+')  ans += "plus";
    else if (ch == '-')  ans += "minus";
    else if (ch == '*')  ans += "asterisk";
    else if (ch == '\\') ans += "backslash";
    else if (ch == '/')  ans += "slash";
    else if (ch == '%')  ans += "percent";
    else if (ch == '<')  ans += "less";
    else if (ch == '>')  ans += "greater";
    else if (ch == '=')  ans += "equal";
    else if (ch == '^')  ans += "caret";
    else if (ch == '&')  ans += "ampersand";
    else if (ch == ':')  ans += "colon";
    else if (ch == '|')  ans += "pipe";
    else if (ch == '!')  ans += "exclamation";
    else if (ch == '#')  ans += "hash";
    else if (ch == '$')  ans += "dollar";
    else if (ch == '@')  ans += "at";
    else if (ch == '?')  ans += "question";
    else throw std::runtime_error(std::string("cannot use '") + ch + "'");
  }
  return ans;
}

std::string bopToCpp(const std::string& str) { return "__zhbop_" + opToCpp(str); }
std::string lopToCpp(const std::string& str) { return "__zhlop_" + opToCpp(str); }
std::string ropToCpp(const std::string& str) { return "__zhrop_" + opToCpp(str); }

std::string expToCpp(Exp* exp) {
  // it filally works!!!
  std::string res;
  // if (!dynamic_cast<Literal*>(exp)) res += "(";
  if (auto op = dynamic_cast<CppCode*>(exp)) {
    /* if string literal provided remove ''*/
    if (op->code.front() == '\'' and op->code.back() == '\'') {
      op->code.front() = ' ';
      op->code.back() == ' ';
    }
    res += op->code;
  }
  if (auto op = dynamic_cast<IntLiteral*>(exp)) {
    res += std::to_string(op->val);
  }
  if (auto op = dynamic_cast<StrLiteral*>(exp)) {
    res += "\"" + op->val + "\"";
  }
  if (auto op = dynamic_cast<IdLiteral*>(exp)) {
    res += op->val;
  }
  if (auto tuple = dynamic_cast<Tuple*>(exp)) {
    bool start = 1;
    for (auto i : tuple->content) {
      if (!start) res += ", ";
      res += expToCpp(i);
      start = false;
    }
  }
  if (auto op = dynamic_cast<BinOperator*>(exp)) {
    if (op->val == "=") {
      res += "(" + expToCpp(op->lhs) + ") = (" + expToCpp(op->rhs) + ")";
    } else {
      res += bopToCpp(op->val) + "(" + expToCpp(op->lhs) + ", " + expToCpp(op->rhs) + ")";
    }
  }
  if (auto op = dynamic_cast<PrefixOperator*>(exp)) {
    res += lopToCpp(op->val) + "(" + expToCpp(op->child) + ")";
  }
  if (auto op = dynamic_cast<PostfixOperator*>(exp)) {
    res += ropToCpp(op->val) + "(" + expToCpp(op->child) + ")";
  }
  // if (!dynamic_cast<Literal*>(exp)) res += ")";

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
  } else if (auto exp = dynamic_cast<STRet*>(node)) {
    res += "return " + expToCpp(exp->exp); 
  } else if (auto exp = dynamic_cast<STExp*>(node)) {
    res += expToCpp(exp->exp);
  }
  return res;
};

std::string funcToCpp(Function* func) {
  std::string str;
  str += func->type.toCppString() + " ";
  str += (func->name == "main" ? "main" : (
    func->op_type == OpType::bin ? bopToCpp(func->name) : (
    func->op_type == OpType::lhs ? lopToCpp(func->name) : ropToCpp(func->name)
  ))) + "(";
  bool start = true;
  for (auto& [name, type] : func->args) {
    if (!start) str += ", ";
    str += type.toCppString() + " ";
    str += name;
    start = false;
  }
  str += ") ";
  str += blockToCpp(func->body);
  str += "\n";
  return str;
}

std::string toCpp(STTree* block) {
  std::string res;

  for (auto i : block->functions) {
    res += funcToCpp(i);
    res += "\n";
  }
  return res;
}