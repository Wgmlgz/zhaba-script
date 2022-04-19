#pragma once

#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <compare>

struct Function;

namespace types {

enum class TYPE : int32_t {
  voidT,
  charT,
  strT,
  boolT,
  i8T,
  i16T,
  i32T,
  i64T,
  u8T,
  u16T,
  u32T,
  u64T,
  f32T,
  f64T,
  FT
};

class Type {
 public:
  /** Ctor Dtor */
  explicit Type(const TYPE &type = TYPE::voidT, uint8_t ptr = 0,
                bool lval = false, bool ref = false,
                const std::vector<Type> &types = {});

  /** Getters */
  [[nodiscard]] TYPE getTypeId() const;
  [[nodiscard]] bool getLval() const;
  [[nodiscard]] bool getRef() const;
  [[nodiscard]] uint8_t getPtr() const;
  [[nodiscard]] bool isFn() const;
  [[nodiscard]] const std::vector<Type>& getTypes() const;
  [[nodiscard]] size_t getSize() const;
  [[nodiscard]] size_t getSizeNonRef() const;
  [[nodiscard]] size_t getSizeNonPtr() const;

  /** Setters */
  void setLval(bool f);
  void setRef(bool f);
  void setType(TYPE type_);
  void setPtr(uint8_t val);
  void setTypes(const std::vector<Type> &types);
  [[nodiscard]] std::vector<uint32_t> getMask() const;
  [[nodiscard]] uint32_t getSelfMask_() const;

  /** Util */
  [[nodiscard]] Type rvalClone() const;
  [[nodiscard]] Type nonRefClone() const;
  [[nodiscard]] std::string toString() const;

 private:
  TYPE typeid_ = TYPE::voidT;
  bool lval_ = false;
  bool ref_ = false;
  uint8_t ptr_ = 0;

  std::vector<Type> types_;
};

std::strong_ordering operator<=>(const types::Type &lhs, const types::Type &rhs);

struct StructInfo {
  std::unordered_map<std::string, Type> members;
  std::vector<std::string> members_list;
};


std::string genericToStr(const std::vector<Type> &generic);
void pushStruct(const std::string &name, const StructInfo &info);
TYPE getStructId(const std::string &str);

typedef std::pair<std::string, std::vector<Type>> funcHead;
};  // namespace types
