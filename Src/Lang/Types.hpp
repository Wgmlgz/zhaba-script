#pragma once
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace types {
enum class TYPE : int64_t { voidT, intT, int32T, strT };

std::unordered_map<std::string, TYPE> prim_types{
    {"void", TYPE::voidT}, {"i32", TYPE::int32T}, {"int", TYPE::intT},
    {"i64", TYPE::intT},   {"str", TYPE::strT},
};

std::unordered_map<TYPE, std::string> type_names{
    {TYPE::voidT, "void"},
    {TYPE::intT, "int"},
    {TYPE::int32T, "i32"},
    {TYPE::strT, "str"},
};

std::unordered_map<TYPE, std::string> cpp_type_names{
    {TYPE::voidT, "void"},
    {TYPE::int32T, "int"},
    {TYPE::intT, "int64_t"},
    {TYPE::strT, "std::string"},
};

struct Type {
 public:
  TYPE getType() { return type; }
  bool isLval() { return lval; }
  void setLval(bool f) { lval = f; }
  void setType(TYPE type_) { type = type_; }

  friend bool operator<(const Type& lhs, const Type& rhs);
  friend bool operator==(const Type& lhs, const Type& rhs);
  friend bool operator!=(const Type& lhs, const Type& rhs);

  std::string toString() {
    std::string res;
    res += type_names[type];
    if (lval) res += "&";

    return res;
  }
  std::string toCppString() {
    std::string res;
    res += cpp_type_names[type];

    return res;
  }

  Type(const TYPE& new_type = TYPE::voidT, const bool is_lval = false)
      : type(new_type), lval(is_lval) {}

  virtual ~Type() {}
 private:
  TYPE type = TYPE::voidT;
  bool lval = false;
};

bool operator<(const Type& lhs, const Type& rhs) {
  int a = ((int)lhs.type << 2) /*| (lhs.is_const << 1)*/ | lhs.lval;
  int b = ((int)rhs.type << 2) /*| (rhs.is_const << 1)*/ | rhs.lval;
  return a < b;
}

bool operator==(const Type& lhs, const Type& rhs) {
  int a = ((int)lhs.type << 2) /*| (lhs.is_const << 1)*/ | lhs.lval;
  int b = ((int)rhs.type << 2) /*| (rhs.is_const << 1)*/ | rhs.lval;
  return a == b;
}
bool operator!=(const Type& lhs, const Type& rhs) { return !(lhs == rhs); }

};  // namespace types