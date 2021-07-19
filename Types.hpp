#pragma once
#include <string>
#include <vector>

struct Type {
  bool is_const;
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
