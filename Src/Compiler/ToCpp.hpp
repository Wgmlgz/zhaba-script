#pragma once 
#include "../Lang/Lang.hpp"

std::string expToCpp(zhexp::Exp* exp);
std::string blockToCpp(STBlock* exp, size_t depth = 0);
std::string nodeToCpp(STNode* node, size_t depth = 0);

std::string idToCpp(const std::string& str) {
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
    else if (ch == '~')  ans += "tilda";
    else throw std::runtime_error(std::string("cannot use '") + ch + "'");
  }
  return ans;
}

std::string bopToCpp(const std::string& str) { return "__zhbop_" + idToCpp(str); }
std::string lopToCpp(const std::string& str) { return "__zhlop_" + idToCpp(str); }
std::string ropToCpp(const std::string& str) { return "__zhrop_" + idToCpp(str); }
// std::string typesToCpp(std::vector<Type>& types) {
//   std::string str;
//   for (auto &i : types) {
//     str += std::to_string(static_cast<int>(i.getTypeId()));
//   }
// }

std::string expToCpp(zhexp::Exp* exp);

std::string expToCpp(zhexp::Exp* exp) {
  // it filally works!!!
  std::string res;
  // if (!dynamic_cast<Literal*>(exp)) res += "(";
  if (auto op = dynamic_cast<zhexp::CppCode*>(exp)) {
    /* if string literal provided remove ''*/
    if (op->code.front() == '\'' and op->code.back() == '\'') {
      op->code.front() = ' ';
      op->code.pop_back();
    }
    res += op->code;
  }
  if (auto op = dynamic_cast<zhexp::IntLiteral*>(exp)) {
    res += std::to_string(op->val);
  }
  if (auto op = dynamic_cast<zhexp::StrLiteral*>(exp)) {
    res += "\"" + op->val + "\"";
  }
  if (auto op = dynamic_cast<zhexp::Variable*>(exp)) {
    res += op->name;
  } else if (auto op = dynamic_cast<zhexp::IdLiteral*>(exp)) {
    res += op->val;
  }
  if (auto tuple = dynamic_cast<zhexp::Tuple*>(exp)) {
    bool start = 1;
    for (auto i : tuple->content) {
      if (!start) res += ", ";
      res += expToCpp(i);
      start = false;
    }
  }
  if (auto op = dynamic_cast<zhexp::BinOperator*>(exp)) {
    if (op->val == "as") {
      res += "(";
      res += "(" + static_cast<zhexp::TypeLiteral*>(op->rhs)->literal_type.toCppString() + ")";
      res += "(" + expToCpp(op->lhs) + ")";
      res += ")";
    } else if (op->val == "=") {
      res += "(" + expToCpp(op->lhs) + ") = (" + expToCpp(op->rhs) + ")";
    } else if (op->val == ".") {
      res += "(" + expToCpp(op->lhs) + ")";
      res += op->lhs->type.getPtr() ? "->" : ".";
      res += static_cast<zhexp::IdLiteral*>(op->rhs)->val;
    } else {
      res += bopToCpp(op->val) + "(" + expToCpp(op->lhs) + ", " + expToCpp(op->rhs) + ")";
    }
  }
  if (auto op = dynamic_cast<zhexp::PrefixOperator*>(exp)) {
    if (op->val == "&" or op->val == "*") {
      res += "(" +op->val + "(" + expToCpp(op->child) + "))";
    } else {
      res += lopToCpp(op->val) + "(" + expToCpp(op->child) + ")";
    }
  }
  if (auto op = dynamic_cast<zhexp::PostfixOperator*>(exp)) {
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
    res += "if (" + expToCpp(nd->contition) + ") ";
    res += blockToCpp(nd->body, depth);
    for (auto& i : nd->elseif_body) {
      res += " else if (" + expToCpp(i.first) + ") ";
      res += blockToCpp(i.second, depth);
    }
    if (nd->else_body) {
      res += " else ";
      res += blockToCpp(nd->else_body, depth);
    }
  } else if (auto nd = dynamic_cast<STWhile*>(node)) {
    res += "while (" + expToCpp(nd->contition) + ") ";
    res += blockToCpp(nd->body, depth);
  } else if (auto nd = dynamic_cast<STRet*>(node)) {
    res += "return (" + expToCpp(nd->exp) + ")"; 
  } else if (auto exp = dynamic_cast<STExp*>(node)) {
    res += expToCpp(exp->exp);
  }
  return res;
};

std::string funcHeadToCpp(Function* func) {
  std::string str;
  if (func->name == "main") {
    str += "int main(int argc, char *argv[]) ";
  } else {
    str += func->type.toCppString() + " ";
    str +=  (
      func->op_type == OpType::bin ? bopToCpp(func->name) : (
      func->op_type == OpType::lhs ? lopToCpp(func->name) : ropToCpp(func->name)
    )) + "(";
    bool start = true;
    for (auto& [name, type] : func->args) {
      if (!start) str += ", ";
      str += type.toCppString() + " ";
      str += name;
      start = false;
    }
    str += ")";
  }
  return str;
}

std::string funcToCpp(Function* func) {
  return funcHeadToCpp(func) + " " + blockToCpp(func->body) + "\n";
}

std::string structHeadToCpp(int id) {
  return "struct __zhstruct_" + idToCpp(types::struct_names[id]);
}

std::string structToCpp(int id) {
  std::string res = structHeadToCpp(id);
  res += " {\n";
  for (const auto& [name, type] : types::structs[id].members) {
    res += "  " + type.toCppString() + " " + idToCpp(name) + ";\n";
  }
  res += "};\n";
  return res;
}

std::string toCpp(STTree* block) {
  std::string res = "#include <stdlib.h>\n#include<string>\n\n";

  for (int i = types::first_struct_id; i < types::last_struct_id; ++i) {
    res += structHeadToCpp(i);
    res += ";\n";
  }

  res += "\n";

  for (int i = types::first_struct_id; i < types::last_struct_id; ++i) {
    res += structToCpp(i);
    res += "\n";
  }

  for (auto i : block->functions) {
    res += funcHeadToCpp(i);
    res += ";\n";
  }

  res += "\n";

  for (auto i : block->functions) {
    res += funcToCpp(i);
    res += "\n";
  }
  return res;
}