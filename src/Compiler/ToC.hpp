/*
______                              _           _
|  _  \                            | |         | |
| | | |___ _ __  _ __ ___  ___ __ _| |_ ___  __| |
| | | / _ \ '_ \| '__/ _ \/ __/ _` | __/ _ \/ _` |
| |/ /  __/ |_) | | |  __/ (_| (_| | ||  __/ (_| |
|___/ \___| .__/|_|  \___|\___\__,_|\__\___|\__,_|
          | |
          |_|
          
*/
// #pragma once 
// #include <iomanip>
// #include <sstream>
// #include "../Lang/Lang.hpp"

// std::string expToC(zhexp::Exp* exp);
// std::string blockToC(STBlock* exp, size_t depth = 0);
// std::string nodeToC(STNode* node, size_t depth = 0);

// std::string idToC(const std::string& str) {
//   std::string ans;
//   for (auto ch : str) {
//     if (std::isalpha(ch)) ans += ch;
//     else if (std::isdigit(ch)) ans += ch;
//     else if (ch == '_')  ans += ch;
//     else if (ch == '.')  ans += "dot";
//     else if (ch == '+')  ans += "plus";
//     else if (ch == '-')  ans += "minus";
//     else if (ch == '*')  ans += "asterisk";
//     else if (ch == '\\') ans += "backslash";
//     else if (ch == '/')  ans += "slash";
//     else if (ch == '%')  ans += "percent";
//     else if (ch == '<')  ans += "less";
//     else if (ch == '>')  ans += "greater";
//     else if (ch == '=')  ans += "equal";
//     else if (ch == '^')  ans += "caret";
//     else if (ch == '&')  ans += "ampersand";
//     else if (ch == ':')  ans += "colon";
//     else if (ch == '|')  ans += "pipe";
//     else if (ch == '!')  ans += "exclamation";
//     else if (ch == '#')  ans += "hash";
//     else if (ch == '$')  ans += "dollar";
//     else if (ch == '@')  ans += "at";
//     else if (ch == '?')  ans += "question";
//     else if (ch == '~')  ans += "tilda";
//     else if (ch == ' ')  ans += TOKEN::space;

//     // else ans += ch;
//     else throw std::runtime_error(std::string("cannot use '") + ch + "'");
//   }
//   return ans;
// }

// std::string typeToC(const types::Type& type, bool plain = false) {
//   std::string res;
//   if (static_cast<int>(type.getTypeId()) < 50)
//     res += types::cpp_type_names[type.getTypeId()];
//   else
//     res += idToC("__ZH_TYPE_" + types::struct_names[type.getTypeId()]);

//   // if (tmpl_.size()) {
//   //   res += "_TMPL_";
//   //   for (const auto& i : tmpl_) {
//   //     res += i.toCString(true);
//   //   }
//   // }
//   res += std::string(type.getPtr(), plain ? 'P' : '*');
//   if (type.getRef()) res += "*";
//   return res;
// }

// template <typename T>
// std::string int2hex(T i) {
//   std::stringstream stream;
//   stream << std::setfill('0') << std::setw(sizeof(T) * 2) << std::hex
//          << i;
//   return stream.str();
// }
// std::string funcToC(const Function& head) {
//   std::string res;
//   res += idToC(head.name);
//   res += "_";
//   for (const auto& i : head.args) {
//     res += idToC(i.type.toString());
//   }
//   return res;
// }

// std::string bopToC(const Function& head) { return "__ZH_BOP_" + funcToC(head); }
// std::string lopToC(const Function& head) { return "__ZH_LOP_" + funcToC(head); }
// std::string ropToC(const Function& head) { return "__ZH_ROP_" + funcToC(head); }

// std::string bopToC(const Function* head) {
//   if (!head) throw ParserError("null head bop");
//   return bopToC(*head);
// }
// std::string lopToC(const Function* head) {
//   if (!head) throw ParserError("null head lop");
//   return lopToC(*head);
// }
// std::string ropToC(const Function* head) {
//   if (!head) throw ParserError("null head rop");
//   return ropToC(*head);
// }

// // std::string typesToCpp(std::vector<Type>& types) {
// //   std::string str;
// //   for (auto &i : types) {
// //     str += std::to_string(static_cast<int>(i.getTypeId()));
// //   }
// // }
// std::string expToC(zhexp::Exp* exp);
// std::string argsToC(zhexp::Exp* exp, Function* fn);
// std::string expToC(zhexp::Exp* exp) {
//   // it filally works!!!
//   std::string res;
//   // if (!dynamic_cast<Literal*>(exp)) res += "(";
//   if (auto op = dynamic_cast<zhexp::CCode*>(exp)) {
//     /* if string literal provided remove ''*/
//     if (op->code.front() == '\'' and op->code.back() == '\'') {
//       op->code.front() = ' ';
//       op->code.pop_back();
//     }
//     res += op->code;
//   }
//   // if (auto op = dynamic_cast<zhexp::IntLiteral*>(exp)) {
//   //   res += std::to_string(op->val);
//   // }
//   if (auto op = dynamic_cast<zhexp::StrLiteral*>(exp)) {
//     res += "\"" + op->val + "\"";
//   }
//   if (auto op = dynamic_cast<zhexp::Variable*>(exp)) {
//     res += "(";
//     if (op->getType().getRef()) res += "*";
//     res += op->getName();
//     res += ")";
//   } else if (auto op = dynamic_cast<zhexp::IdLiteral*>(exp)) {
//     res += op->val;
//   }
//   if (auto tuple = dynamic_cast<zhexp::Tuple*>(exp)) {
//     bool start = 1;
//     for (auto i : tuple->content) {
//       if (!start) res += ", ";
//       res += expToC(i);
//       start = false;
//     }
//   }
//   if (auto op = dynamic_cast<zhexp::BinOperator*>(exp)) {
//     if (op->val == "as") {
//       res += "(";
//       res += "(" + typeToC(static_cast<zhexp::TypeLiteral*>(op->rhs)->literal_type) + ")";
//       res += "(" + expToC(op->lhs) + ")";
//       res += ")";
//     } else if (op->val == "=") {
//       res += "(" + expToC(op->lhs) + ") = (" + expToC(op->rhs) + ")";
//     } else if (op->val == ".") {
//       res += "(" + expToC(op->lhs) + ")";
//       res += op->lhs->type.getPtr() ? "->" : ".";
//       res += static_cast<zhexp::IdLiteral*>(op->rhs)->val;
//     } else {
//       res += bopToC(op->func) + "(";
//       auto lhs_tuple = castToTuple(op->lhs);
//       auto rhs_tuple = castToTuple(op->rhs);
//       *lhs_tuple += *rhs_tuple;
//       res += argsToC(lhs_tuple, op->func);
//       res += ")";
//     }
//   }
//   if (auto op = dynamic_cast<zhexp::PrefixOperator*>(exp)) {
//     if (op->val == "&" or op->val == "*") {
//       res += "(" +op->val + "(" + expToC(op->child) + "))";
//     } else {
//       res += lopToC(op->func) + "(" + argsToC(op->child, op->func) + ")";
//     }
//   }
//   if (auto op = dynamic_cast<zhexp::PostfixOperator*>(exp)) {
//     res += ropToC(op->func) + "(" + argsToC(op->child, op->func) + ")";
//   }
//   // if (!dynamic_cast<Literal*>(exp)) res += ")";

//   return res;
// }

// std::string argsToC(zhexp::Exp* exp, Function* fn) {
//   auto tuple = zhexp::castToTuple(exp);
//   std::string res;

//   for (int i = 0; i < tuple->content.size(); ++i) {
//     if (i!=0) res +=",";
//     res += "(";
//     if (fn->args[i].type.getRef()) {
//       if (!tuple->content[i]->type.getLval())
//         throw ParserError(tuple->content[i]->begin, tuple->content[i]->end,
//           "Expression must be lval to be able pass by reference");
//       res += "&";
//     }
//     res += expToC(tuple->content[i]);
//     res += ")";
//   }
//   return res;
// }

// size_t tab_size = 2;
// std::string blockToC(STBlock* block, size_t depth) {
//   std::string res;
//   res += "{\n";

//   for (auto& i : block->scope_info.vars) {
//     res += std::string((depth+1) * tab_size , ' ');
//     res += typeToC(i.second);
//     res += " ";
//     res += i.first;
//     res += ";\n";
//   }

//   for (auto& i : block->nodes) {
//     res += nodeToC(i, depth + 1);
//     if (!dynamic_cast<STIf*>(i)) res += ";";
//     res += "\n";
//   }

//   res += std::string(depth * tab_size, ' ');
//   res += "}";
//   return res;
// }

// std::string nodeToC(STNode* node, size_t depth) {
//   std::string res;
//   res += std::string(depth * tab_size, ' ');

//   if (auto nd = dynamic_cast<STIf*>(node)) {
//     res += "if (" + expToC(nd->condition) + ") ";
//     res += blockToC(nd->body, depth);
//     for (auto& i : nd->elseif_body) {
//       res += " else if (" + expToC(i.first) + ") ";
//       res += blockToC(i.second, depth);
//     }
//     if (nd->else_body) {
//       res += " else ";
//       res += blockToC(nd->else_body, depth);
//     }
//   } else if (auto nd = dynamic_cast<STWhile*>(node)) {
//     res += "while (" + expToC(nd->condition) + ") ";
//     res += blockToC(nd->body, depth);
//   } else if (auto nd = dynamic_cast<STRet*>(node)) {
//     res += "return (" + expToC(nd->exp) + ")"; 
//   } else if (auto exp = dynamic_cast<STExp*>(node)) {
//     res += expToC(exp->exp);
//   } else if (auto block = dynamic_cast<STBlock*>(node)) {
//     res += blockToC(block);
//   }
//   return res;
// };

// std::string funcHeadToC(Function* func) {
//   std::string str;
//   if (func->name == "main") {
//     str += "int main(int argc, char *argv[]) ";
//   } else {
//     str += typeToC(func->type) + " ";
//     str +=  (
//       func->op_type == OpType::bin ? bopToC(func) : (
//       func->op_type == OpType::lhs ? lopToC(func) : ropToC(func)
//     )) + "(";
//     bool start = true;
//     for (auto& [name, type] : func->args) {
//       if (!start) str += ", ";
//       str += typeToC(type) + " ";
//       str += name;
//       start = false;
//     }
//     str += ")";
//   }
//   return str;
// }

// std::string funcToC(Function* func) {
//   return funcHeadToC(func) + " " + blockToC(func->body) + "\n";
// }

// std::string structHeadToC(types::TYPE id) {
//   return "struct __PROT_ZH_TYPE_" + idToC(types::struct_names[id]);
// }

// std::string structToC(types::TYPE id) {
//   std::string res = structHeadToC(id);
//   res += " {\n";
//   for (const auto& [name, type] : types::structs[id].members) {
//     res += "  " + typeToC(type) + " " + idToC(name) + ";\n";
//   }
//   res += "};\n";
//   return res;
// }

// std::string toC(STTree* block) {
//   std::string res = R"(#include <stdlib.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <time.h>
// typedef int32_t i32;
// typedef int64_t i64;
// typedef uint32_t u32;
// typedef uint64_t u64;

// )";

//   for (int i = types::first_struct_id; i < types::last_struct_id; ++i) {
//     auto id = static_cast<types::TYPE>(i);
//     res += structHeadToC(id);
//     res += ";\n";
//     res += "typedef struct __PROT_ZH_TYPE_" + idToC(types::struct_names[id]) +
//            " __ZH_TYPE_" + idToC(types::struct_names[id]);
//     // res += structHeadToC(i);
//     res += ";\n";
//   }

//   res += "\n";

//   for (int i = types::first_struct_id; i < types::last_struct_id; ++i) {
//     auto id = static_cast<types::TYPE>(i);
//     res += structToC(id);
//   }

//   for (auto i : block->functions) {
//     res += funcHeadToC(i);
//     res += ";\n";
//   }

//   res += "\n";

//   for (auto i : block->functions) {
//     res += funcToC(i);
//   }
//   return res;
// }