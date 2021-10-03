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
    else if (ch == '.')  ans += "_char_dot";
    else if (ch == '+')  ans += "_char_plus";
    else if (ch == '-')  ans += "_char_minus";
    else if (ch == '*')  ans += "_char_asterisk";
    else if (ch == '\\') ans += "_char_backslash";
    else if (ch == '/')  ans += "_char_backslash";
    else if (ch == '%')  ans += "_char_percent";
    else if (ch == '<')  ans += "_char_less";
    else if (ch == '>')  ans += "_char_greater";
    else if (ch == '=')  ans += "_char_equal";
    else if (ch == '^')  ans += "_char_caret";
    else if (ch == '&')  ans += "_char_ampersand";
    else if (ch == ':')  ans += "_char_colon";
    else if (ch == '|')  ans += "_char_pipe";
    else if (ch == '!')  ans += "_char_exclamation";
    else if (ch == '#')  ans += "_char_hash";
    else if (ch == '$')  ans += "_char_dollar";
    else if (ch == '@')  ans += "_char_at";
    else if (ch == '?')  ans += "_char_question";
    else throw std::runtime_error(std::string("cannot use '") + ch + "'");
  }
  return ans;
}

std::string binopToCpp(const std::string& str) { return "__zhaba_bin_op_" + opToCpp(str); }
std::string propToCpp(const std::string& str) { return "__zhaba_prefix_op_" + opToCpp(str); }
std::string poopToCpp(const std::string& str) { return "__zhaba_postfix_op_" + opToCpp(str); }

std::string expToCpp(Exp* exp) {
  // it filally works!!!

  std::string res;
  // if (!dynamic_cast<Literal*>(exp)) res += "(";
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
    res += binopToCpp(op->val) + "(" + expToCpp(op->lhs) + ", " + expToCpp(op->rhs) + ")";
  }
  if (auto op = dynamic_cast<UnaryOperator*>(exp)) {
    res += propToCpp(op->val) + "(" + expToCpp(op->child) + ")";
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
  } else if (auto exp = dynamic_cast<STExp*>(node)) {
    res += expToCpp(exp->exp);
  }
  return res;
};

std::string funcToCpp(Function* func) {
  std::string str;
  str += func->type.toCppString() + " ";
  str += poopToCpp(func->name) + "(";
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
  std::string res = "#include <bits/stdc++.h>\n\n";

  for (auto i : block->functions) {
    res += funcToCpp(i);
    res += "\n";
  }
  return res;
}