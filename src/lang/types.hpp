#pragma once

#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <compare>

namespace types {

enum class TYPE : int32_t {
  voidT,
  charT, strT,
  boolT,
  i8T, i16T, i32T, i64T,
  u8T, u16T, u32T, u64T,
  f4T, f8T, f10T
};

class Type {
 public:
  /** Ctor Dtor */
  explicit Type(const TYPE &type = TYPE::voidT, uint8_t ptr = 0, bool lval = false,
                bool ref = false);
  virtual ~Type();

  /** Getters */
  [[nodiscard]] TYPE getTypeId() const;
  [[nodiscard]] bool getLval() const;
  [[nodiscard]] bool getRef() const;
  [[nodiscard]] uint8_t getPtr() const;
  [[nodiscard]] size_t getSize() const;
  [[nodiscard]] size_t getSizeNonRef() const;
  [[nodiscard]] size_t getSizeNonPtr() const;

  /** Setters */
  void setLval(bool f);
  void setRef(bool f);
  void setType(TYPE type_);
  void setPtr(uint8_t val);
  [[nodiscard]] uint32_t getSelfMask() const;
  [[nodiscard]] std::vector<uint32_t> getMask() const;

  /** Util */
  [[nodiscard]] Type rvalClone() const;
  [[nodiscard]] std::string toString() const;

 private:
  TYPE typeid_ = TYPE::voidT;
  bool lval_ = false;
  bool ref_ = false;
  uint8_t ptr_ = 0;
  std::vector<Type> tmpl_;
};

std::strong_ordering operator<=>(const types::Type &lhs, const types::Type &rhs);

struct StructInfo {
  std::unordered_map<std::string, Type> members;
  std::vector<std::string> members_list;
};

struct TypesData {
  std::unordered_map<std::string, TYPE> prim_types{
      {"void", TYPE::voidT},

      {"char", TYPE::charT},
      {"str", TYPE::strT},

      {"bool", TYPE::boolT},

      {"i8", TYPE::i8T},
      {"i16", TYPE::i16T},
      {"i32", TYPE::i32T},
      {"i64", TYPE::i64T},

      {"u8", TYPE::u8T},
      {"u16", TYPE::u16T},
      {"u32", TYPE::u32T},
      {"u64", TYPE::u64T},

      {"f4", TYPE::f4T},
      {"f8", TYPE::f8T},
      {"f10", TYPE::f10T},

      {"int", TYPE::i64T},
  };

  std::unordered_map<TYPE, std::string> type_names{
      {TYPE::voidT, "void"},

      {TYPE::charT, "char"},
      {TYPE::strT, "str"},

      {TYPE::boolT, "bool"},

      {TYPE::i8T, "i8"},
      {TYPE::i16T, "i16"},
      {TYPE::i32T, "i32"},
      {TYPE::i64T, "i64"},

      {TYPE::u8T, "u8"},
      {TYPE::u16T, "u16"},
      {TYPE::u32T, "u32"},
      {TYPE::u64T, "u64"},

      {TYPE::f4T, "f4"},
      {TYPE::f8T, "f8"},
      {TYPE::f10T, "f10"},
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

  std::unordered_map<TYPE, size_t> sizes{
      {TYPE::voidT, 0},

      {TYPE::charT, 1},
      {TYPE::strT, 8},

      {TYPE::boolT, 1},

      {TYPE::i8T, 1},
      {TYPE::i16T, 2},
      {TYPE::i32T, 4},
      {TYPE::i64T, 8},

      {TYPE::u8T, 1},
      {TYPE::u16T, 2},
      {TYPE::u32T, 4},
      {TYPE::u64T, 8},

      {TYPE::f4T, 4},
      {TYPE::f8T, 8},
      {TYPE::f10T, 10},
  };

  std::unordered_map<std::string, TYPE> struct_ids;
  std::unordered_map<TYPE, std::string> struct_names;
  std::unordered_map<TYPE, StructInfo> structs;

  const int first_struct_id = 50;
  int last_struct_id = 50;
};
extern TypesData types_data;

std::string genericToStr(const std::vector<Type> &generic);
void pushStruct(const std::string &name, const StructInfo &info);
TYPE getStructId(const std::string &str);

typedef std::pair<std::string, std::vector<Type>> funcHead;
};  // namespace types
