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

std::unordered_map<std::string, int> struct_ids;
std::unordered_map<int, std::string> struct_names;

struct Type {
 public:
  TYPE getTypeId() const { return type; }
  bool isLval() const { return lval; }
  void setLval(bool f) { lval = f; }
  void setType(TYPE type_) { type = type_; }

  friend bool operator<(const Type& lhs, const Type& rhs);
  friend bool operator==(const Type& lhs, const Type& rhs);
  friend bool operator!=(const Type& lhs, const Type& rhs);

  std::string toString() const {
    std::string res;
    if (static_cast<int>(type) < 50)
      res += type_names[type];
    else 
      res += struct_names[static_cast<int>(type)];

    if (lval) res += "&";

    return res;
  }
  std::string toCppString() const {
    std::string res;
    if (static_cast<int>(type) < 50)
      res += cpp_type_names[type];
    else 
      res += "__zhstruct_" + struct_names[static_cast<int>(type)];

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
  int a = (static_cast<int>(lhs.getTypeId()) << 2) | lhs.lval;
  int b = (static_cast<int>(rhs.getTypeId()) << 2) | rhs.lval;
  return a < b;
}

bool operator==(const Type& lhs, const Type& rhs) {
  int a = (static_cast<int>(lhs.getTypeId()) << 2) | lhs.lval;
  int b = (static_cast<int>(rhs.getTypeId()) << 2) | rhs.lval;
  return a == b;
}
bool operator!=(const Type& lhs, const Type& rhs) { return !(lhs == rhs); }

struct StructInfo {
  std::unordered_map<std::string, Type> members;
};

std::unordered_map<int, StructInfo> structs;

const int first_struct_id = 50;
int last_struct_id = 50;

void pushStruct(std::string name, const StructInfo& info) {
  struct_ids[name] = last_struct_id;
  struct_names[last_struct_id] = name;
  structs[last_struct_id] = info;
  ++last_struct_id;
}

int getStructId(const std::string& str) {
  if (struct_ids.count(str)) {
    return struct_ids[str];
  }
  return -1;
}

};  // namespace types