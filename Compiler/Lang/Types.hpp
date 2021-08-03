#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "..\OperatorTables.hpp"
#include <queue>

std::unordered_map<std::string, std::vector<std::string>> cast_table = tables::cast_table;

bool canCast(std::string from, std::string to) {
  std::unordered_set<std::string> can;
  can.insert(from);
  std::queue<std::string> q;
  q.push(from);
  while(!q.empty()) {
    auto t = q.front();
    q.pop();
    if (can.count(t)) continue;
    if (to == t) return true;
    can.insert(t);
    q.push(t);
  }
  return false;
}

struct Type {
  bool is_const;
  bool is_ref;
  std::string type;
  std::vector<Type> template_args;

  std::string toString() {
    std::string res;
    if (is_const) res += "=";
    res += type;
    if (template_args.size()) {
      res += "<";
      for (auto i = template_args.begin(); i != template_args.end(); ++i) {
        if (i != template_args.begin()) res += ",";
        res += i->toString();
      }
      res += ">";
    }
    return res;
  }
  std::string toCppString() {
    std::string res;
    // if (is_const) res += "const ";
    res += type;
    if (template_args.size()) {
      res += "<";
      for (auto i = template_args.begin(); i != template_args.end(); ++i) {
        if (i != template_args.begin()) res += ",";
        res += i->toString();
      }
      res += ">";
    }
    return res;
  }

  Type(const std::string& new_type = "undef", const bool& new_is_const = false)
      : type(new_type), is_const(new_is_const) {}
  Type(const std::string& new_type, const std::vector<Type>& new_template_args,
       const bool& new_is_const = false)
      : type(new_type),
        template_args(new_template_args),
        is_const(new_is_const) {}
  virtual ~Type() {}
};
