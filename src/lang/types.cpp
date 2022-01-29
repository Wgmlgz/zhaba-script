#include "types.hpp"

#include "zhdata.hpp"

namespace types {

/** Bitmask layout: ref<1> lval<1> ptr<8> typeid<other> */
uint32_t types::Type::getSelfMask() const {
  return (static_cast<int>(typeid_) << 10) | (ptr_ << 2) | (lval_ << 1) | ref_;
}

std::strong_ordering operator<=>(const types::Type &lhs,
                                 const types::Type &rhs) {
  return lhs.getSelfMask() <=> rhs.getSelfMask();
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

void pushStruct(const std::string &name, const StructInfo &info) {
  const auto id = static_cast<TYPE>(zhdata.last_struct_id);
  zhdata.struct_ids[name] = id;
  zhdata.struct_names[id] = name;
  zhdata.structs[id] = info;
  ++zhdata.last_struct_id;

  size_t size = 0;
  for (const auto &[_, type] : info.members) size += type.getSize();
  zhdata.sizes[static_cast<TYPE>(id)] = size;
}

TYPE getStructId(const std::string &str) {
  if (zhdata.struct_ids.count(str)) {
    return zhdata.struct_ids[str];
  }
  return static_cast<TYPE>(-1);
}

/* Ctor Dtor */
types::Type::Type(const types::TYPE &type, uint8_t ptr, bool lval, bool ref)
    : typeid_(type), ptr_(ptr), lval_(lval), ref_(ref) {}
types::Type::~Type() = default;

/* Getters */
TYPE types::Type::getTypeId() const { return typeid_; }
bool types::Type::getLval() const { return lval_; }
bool types::Type::getRef() const { return ref_; }
uint8_t types::Type::getPtr() const { return ptr_; }
size_t types::Type::getSize() const {
  return (ptr_ || ref_) ? 8 : zhdata.sizes[typeid_];
}
size_t types::Type::getSizeNonRef() const {
  return (ptr_) ? 8 : zhdata.sizes[typeid_];
}
size_t types::Type::getSizeNonPtr() const {
  return (ptr_ > 1 or ref_) ? 8 : zhdata.sizes[typeid_];
}

/** Setters */
void types::Type::setLval(bool f) { lval_ = f; }
void types::Type::setRef(bool f) { ref_ = f; }
void types::Type::setType(types::TYPE type_) { typeid_ = type_; }
void types::Type::setPtr(uint8_t val) { ptr_ = val; }

std::vector<uint32_t> types::Type::getMask() const { return {getSelfMask()}; }

types::Type types::Type::rvalClone() const {
  return Type(typeid_, ptr_, false, ref_);
}

std::string types::Type::toString() const {
  std::string res;
  res += static_cast<int>(typeid_) < 50 ? zhdata.type_names[typeid_]
                                        : zhdata.struct_names[typeid_];

  res += std::string(ptr_, 'P');
  if (ref_) res += "R";

  if (!tmpl_.empty()) {
    res += "<";
    bool f = false;
    for (const auto &i : tmpl_) {
      if (f)
        res += " ";
      else
        f = true;
      res += i.toString();
    }
    res += ">";
  }
  if (lval_) res += "&";
  return res;
}
}  // namespace types
