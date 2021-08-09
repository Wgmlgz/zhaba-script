#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "..\OperatorTables.hpp"
#include <queue>

#define undefT  0
#define ctrfT   1
#define idT     2
#define tupleT  3
#define autoT   100
#define intT    101
#define blT     102
#define strT    103

std::unordered_map<int, std::vector<int>> cast_table{
  //  {"",{""}},
   {autoT, {intT, strT, blT}},
   {intT, {blT}},
   {strT, {blT}},
};
// bool canCast(std::string from, std::string to) {
//   std::unordered_set<std::string> can;
//   can.insert(from);
//   std::queue<std::string> q;
//   q.push(from);
//   while (!q.empty()) {
//     auto t = q.front();
//     q.pop();
//     if (can.count(t)) continue;
//     if (to == t) return true;
//     can.insert(t);
//     q.push(t);
//   }
//   return false;
// }



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
  // std::vector<Type> template_args;

  std::string toString() {
    std::string res;
    if (is_const) res += "const ";
    res += type_names[type];
    // if (template_args.size()) {
    //   res += "<";
    //   for (auto i = template_args.begin(); i != template_args.end(); ++i) {
    //     if (i != template_args.begin()) res += ",";
    //     res += i->toString();
    //   }
    //   res += ">";
    // }
    return res;
  }
  std::string toCppString() {
    std::string res;
    // if (is_const) res += "const ";
    res += type_names[type];
    // if (template_args.size()) {
    //   res += "<";
    //   for (auto i = template_args.begin(); i != template_args.end(); ++i) {
    //     if (i != template_args.begin()) res += ",";
    //     res += i->toString();
    //   }
    //   res += ">";
    // }
    return res;
  }

  Type(const int& new_type = 0, const bool& new_is_const = false)
    : type(new_type), is_const(new_is_const) {}
  // Type(const int& new_type, const std::vector<Type>& new_template_args,
  //   const bool& new_is_const = false)
  //   : type(new_type),
  //   template_args(new_template_args),
  //   is_const(new_is_const) {}
  virtual ~Type() {}
};
