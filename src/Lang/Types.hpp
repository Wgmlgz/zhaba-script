#pragma once
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace types {

enum class TYPE : int32_t { voidT, charT, i64T, i32T, u32T, u64T, strT };

std::unordered_map<std::string, TYPE> prim_types{
  {"void", TYPE::voidT},
  {"i32", TYPE::i32T},
  {"int", TYPE::i64T},
  {"i64", TYPE::i64T},
  {"u32", TYPE::u32T},
  {"u64", TYPE::u64T},
  {"char", TYPE::charT},
  {"str", TYPE::strT},
};

std::unordered_map<TYPE, std::string> type_names{
  {TYPE::voidT, "void"},
  {TYPE::charT, "char"},
  {TYPE::i64T, "int"},
  {TYPE::i32T, "i32"},
  {TYPE::i64T, "i64"},
  {TYPE::i32T, "i32"},
  {TYPE::strT, "str"},
};

std::unordered_map<TYPE, std::string> cpp_type_names{
  {TYPE::voidT, "void"},
  {TYPE::charT, "char"},
  {TYPE::i64T, "i64"},
  {TYPE::i32T, "i32"},
  {TYPE::u64T, "u64"},
  {TYPE::u32T, "u32"},
  {TYPE::strT, "char*"},
};

std::unordered_map<std::string, int> struct_ids;
std::unordered_map<int, std::string> struct_names;

class Type {
 public:
  /* Ctor Dtor */
  Type(const TYPE& type = TYPE::voidT, uint8_t ptr = 0, bool lval = false) :
    typeid_(type), ptr_(ptr), lval_(lval) {}
  virtual ~Type() {}

  /* Getters */
  auto getTypeId() const { return typeid_; }
  auto getLval() const { return lval_; }
  auto getPtr() const { return ptr_; }

  /* Setters */
  void setLval(bool f) { lval_ = f; }
  void setType(TYPE type_) { typeid_ = type_; }
  void setPtr(uint8_t val) { ptr_ = val; }
  void setTmpl(std::vector<Type> val) { tmpl_ = val; }

  /* Bitmask layout: lval<1> ptr<8> typeid<other> */
  uint32_t getSelfMask() const {
    return (static_cast<int>(typeid_) << 9) | (ptr_ << 1) | lval_;
  }
  std::vector<uint32_t> getMask() const {
    return {getSelfMask()};
  }

  const friend auto operator<=>(const Type& lhs, const Type& rhs) {
    /** Bitmask comparison mask: lval<1> ptr<8> typeid<other> */
    return lhs.getMask() <=> rhs.getMask();
  }

  Type rvalClone() { return Type(typeid_, ptr_); }

  std::string toString() const {
    std::string res;
    if (static_cast<int>(typeid_) < 50)
      res += type_names[typeid_];
    else 
      res += struct_names[static_cast<int>(typeid_)];

    res += std::string(ptr_, 'P');

    if (tmpl_.size()) {
      res += "<";
      bool f = false;
      for (const auto& i : tmpl_) {
        if (f) res += " ";
        else f = true;
        res += i.toString(); 
      }
      res += ">";
    }
    if (lval_) res += "&";
    return res;
  }

  std::string toCString(bool plain = false) const {
    std::string res;
    if (static_cast<int>(typeid_) < 50)
      res += cpp_type_names[typeid_];
    else
      res += "__ZH_TYPE_" + struct_names[static_cast<int>(typeid_)];

    if (tmpl_.size()) {
      res += "_TMPL_";
      for(const auto& i : tmpl_) {
        res += i.toCString(true);
      }
    }
    res += std::string(ptr_, plain ? 'P' : '*');
    return res;
  }

 private:
  TYPE typeid_ = TYPE::voidT;
  bool lval_ = false;
  uint8_t ptr_ = 0;
  std::vector<Type> tmpl_;
};

typedef std::pair<std::string, std::vector<types::Type>> funcHead;

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