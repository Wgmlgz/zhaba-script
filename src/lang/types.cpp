#include "types.hpp"

#include "zhdata.hpp"

namespace types {

std::strong_ordering operator<=>(const types::Type &lhs,
                                 const types::Type &rhs) {
  if (auto cmp = lhs.typeid_ <=> rhs.typeid_; cmp != 0) return cmp;
  if (auto cmp = lhs.ptr_ <=> rhs.ptr_; cmp != 0) return cmp;
  if (auto cmp = lhs.lval_ <=> rhs.lval_; cmp != 0) return cmp;
  if (auto cmp = lhs.ref_ <=> rhs.ref_; cmp != 0) return cmp;
  if (auto cmp = lhs.types_.size() <=> rhs.types_.size(); cmp != 0) return cmp;

  for (auto i = lhs.types_.begin(), j = rhs.types_.begin();
       i != lhs.types_.end(); ++i, ++j)
    if (auto cmp = *i <=> *j; cmp != 0) return cmp;

  return std::strong_ordering::equal;
}

std::string genericToStr(const std::vector<Type> &generic) {
  std::string res;
  if (!generic.empty()) {
    res += "<";
    bool f = false;
    for (const auto &i : generic) {
      if (f)
        res += " ";
      else
        f = true;
      res += i.toString();
    }
    res += ">";
  }
  return res;
}

/* Ctor Dtor */
Type::Type(const TYPE &type, uint8_t ptr, bool lval, bool ref,
                  const std::vector<Type> &types)
    : typeid_(type),
      ptr_(ptr),
      lval_(lval),
      ref_(ref),
      types_(types) {}

/* Getters */
TYPE Type::getTypeId() const { return typeid_; }
bool Type::getLval() const { return lval_; }
bool Type::getRef() const { return ref_; }
bool Type::isFn() const { return typeid_ == FT; }
uint8_t Type::getPtr() const { return ptr_; }
const std::vector<Type> &Type::getTypes() const { return types_; }

/** Setters */
void Type::setLval(bool f) { lval_ = f; }
void Type::setRef(bool f) { ref_ = f; }
void Type::setType(types::TYPE type_) { typeid_ = type_; }
void Type::setPtr(uint8_t val) { ptr_ = val; }
void Type::setTypes(const std::vector<Type> &types) { types_ = types; }

Type Type::rvalClone() const {
  return Type(typeid_, ptr_, false, ref_, types_);
}
Type Type::nonRefClone() const {
  return Type(typeid_, ptr_, lval_, false, types_);
}

std::string Type::toString() const {
  std::string res;
  res += typeid_->name;

  if (!types_.empty()) {
    res += "<";
    bool f = false;
    for (const auto &i : types_) {
      if (f)
        res += " ";
      else
        f = true;
      res += i.toString();
    }
    res += ">";
  }

  res += std::string(ptr_, 'P');
  if (ref_) res += "R";

  // if (lval_) res += "&";
  return res;
}
}  // namespace types


void to_json(json &j, const types::funcHead &func_head) {
  std::map<types::funcHead, int> mp;
  j["name"] = func_head.name;
  j["args_types"] = func_head.types;
}
