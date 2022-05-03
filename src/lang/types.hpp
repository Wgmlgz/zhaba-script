#pragma once

#include <compare>
#include <map>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

struct Function;

namespace types {

struct TypeInfo;
typedef TypeInfo *TYPE;

extern const TYPE voidT;
extern const TYPE charT;
extern const TYPE strT;
extern const TYPE boolT;
extern const TYPE i8T;
extern const TYPE i16T;
extern const TYPE i32T;
extern const TYPE i64T;
extern const TYPE u8T;
extern const TYPE u16T;
extern const TYPE u32T;
extern const TYPE u64T;
extern const TYPE f32T;
extern const TYPE f64T;
extern const TYPE FT;

class Type {
 public:
  /** Ctor Dtor */
  explicit Type(const TYPE &type = voidT, uint8_t ptr = 0,
                bool lval = false, bool ref = false,
                const std::vector<Type> &types = {});

  /** Getters */
  [[nodiscard]] TYPE getTypeId() const;
  [[nodiscard]] bool getLval() const;
  [[nodiscard]] bool getRef() const;
  [[nodiscard]] uint8_t getPtr() const;
  [[nodiscard]] bool isFn() const;
  [[nodiscard]] const std::vector<Type>& getTypes() const;

  /** Setters */
  void setLval(bool f);
  void setRef(bool f);
  void setType(TYPE type_);
  void setPtr(uint8_t val);
  void setTypes(const std::vector<Type> &types);

  /** Util */
  [[nodiscard]] Type rvalClone() const;
  [[nodiscard]] Type nonRefClone() const;
  [[nodiscard]] std::string toString() const;

 private:
  TYPE typeid_ = voidT;
  bool lval_ = false;
  bool ref_ = false;
  uint8_t ptr_ = 0;

  std::vector<Type> types_;

  friend std::strong_ordering operator<=>(const types::Type &lhs,
                                   const types::Type &rhs);
};

struct TypeInfo {
  std::map<std::string, Type> members;
  std::string name = "undefined_type_name";

  bool complete = false;
  bool builtin = false;
  size_t order = 0;
};

std::string genericToStr(const std::vector<Type> &generic);
void pushStruct(const std::string &name, const TypeInfo &info);

typedef std::pair<std::string, std::vector<Type>> funcHead;
};  // namespace types
