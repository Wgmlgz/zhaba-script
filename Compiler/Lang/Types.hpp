#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "..\OperatorTables.hpp"
#include "../Lexer.hpp"
#include <queue>

enum class TYPE {voidT, blT, intT, strT};
// #define voidT   -1
// #define undefT  0
// #define ctrfT   1
// #define idT     2
// #define tupleT  3
// #define autoT   100
// #define intT    101
// #define blT     102
// #define strT    103

std::unordered_map<TYPE, std::string> type_names{
  {TYPE::voidT  , "int"},
  {TYPE::intT  , "int"},
  {TYPE::blT   , "bl"},
  {TYPE::strT  , "str"},
};




struct Type {
 private:
  TYPE type = TYPE::voidT;
 public:
  bool is_const = false;
  bool lval = false;

  TYPE getType() { return type; }
  void setType(TYPE type_) { type = type_; }

  friend bool operator<(const Type& lhs, const Type& rhs);
  friend bool operator==(const Type& lhs, const Type& rhs);
  friend bool operator!=(const Type& lhs, const Type& rhs);

  std::string toString() {
    std::string res;
    if (is_const) res += "=";
    res += type_names[type];

    return res;
  }
  std::string toCppString() {
    std::string res;
    if (is_const) res += "const ";
    res += type_names[type];
  
    return res;
  }

  Type(const TYPE& new_type = TYPE::voidT, const bool& new_is_const = false)
    : type(new_type), is_const(new_is_const) {}

  virtual ~Type() {}

  // static Type parse(const std::string& str);
  static Type parse(tokeniter& token);
};

bool operator<(const Type& lhs, const Type& rhs) {
  int a = ((int)lhs.type << 2) | (lhs.is_const << 1) | lhs.lval;
  int b = ((int)rhs.type << 2) | (rhs.is_const << 1) | rhs.lval;
  return a < b;
}

bool operator==(const Type& lhs, const Type& rhs) {
  int a = ((int)lhs.type << 2) | (lhs.is_const << 1) | lhs.lval;
  int b = ((int)rhs.type << 2) | (rhs.is_const << 1) | rhs.lval;
  return a == b;
}
bool operator!=(const Type& lhs, const Type& rhs) {
  return !(lhs == rhs);
}

std::unordered_map<std::string, TYPE> prim_types{
  { "void", TYPE::voidT},
  { "int" , TYPE::intT },
  { "bl"  , TYPE::blT  },
  { "str" , TYPE::strT },
};

// Type Type::parse(const std::string& str) {
//   if (prim_types.count(str)) {
//     return Type(prim_types[str]);
//   } else throw std::runtime_error("type parsing failed");
// }

Type Type::parse(tokeniter& token) {
  Type type;
  if (token->val == "=") {
    type.is_const = true;
    ++token;
  }
  if (prim_types.count(token->val)) {
    type.setType(prim_types[(token++)->val]);
    return type;
  } else throw std::runtime_error("type parsing failed");
}