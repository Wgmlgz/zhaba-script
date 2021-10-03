#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "..\OperatorTables.hpp"
#include <queue>

#define voidT   -1
#define undefT  0
#define ctrfT   1
#define idT     2
#define tupleT  3
#define autoT   100
#define intT    101
#define blT     102
#define strT    103

std::unordered_map<int, std::string> type_names{
  {undefT, "undef"},
  {ctrfT , "ctrf"},
  {idT   , "id"},
  {tupleT, "tuple"},
  {intT  , "int"},
  {blT   , "bl"},
  {strT  , "str"},
};

std::unordered_map<std::string, int> prim_types{
  { "int"  , intT  },
  { "bl"   , blT   },
  { "str"  , strT  },
};

struct Type {
  bool is_const;
  bool is_ref;
  int type;

  std::string toString() {
    std::string res;
    if (is_const) res += "const ";
    res += type_names[type];

    return res;
  }
  std::string toCppString() {
    std::string res;
    res += type_names[type];
  
    return res;
  }

  Type(const int& new_type = 0, const bool& new_is_const = false)
    : type(new_type), is_const(new_is_const) {}

  virtual ~Type() {}

  static Type parse(const std::string& str) {
    if (prim_types.count(str)) {
      return Type(prim_types[str]);
    } else throw std::runtime_error("type parsing failed");
  }
};
