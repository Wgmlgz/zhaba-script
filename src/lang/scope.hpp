#pragma once
#include <iostream>
#include <map>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map>

#include "types.hpp"

struct Function;

namespace types {
struct Generic;
}

int64_t genId();

template <template <typename...> class C, typename K, typename V>
class DynamicContainer {
 public:
  C<K, V>& get() {
    if (!ptr) ptr = new C<K, V>();
    return const_cast<C<K, V>&>(*ptr);
  }
  const C<K, V>& get() const {
    return const_cast<const C<K, V>&>(
        const_cast<DynamicContainer*>(this)->get());
  }

  bool contains(const K& key) const {
    if (ptr && ptr->contains(key)) return true;
    for (const auto parent : parents)
      if (parent && parent->contains(key)) return true;
    return false;
  }

  const V& at(const K& key) const {
    if (ptr && ptr->contains(key)) return ptr->at(key);
    for (const auto parent : parents)
      if (parent->contains(key)) return parent->at(key);
    throw std::runtime_error("DynamicContainer error");
  }

  V& at(const K& key) {
    return const_cast<V&>(
        const_cast<const DynamicContainer<C, K, V>*>(this)->at(key));
  }

  void emplace(auto&&... args) { get().emplace(args...); }

  void operator=(const auto& other) { ptr = new C<K, V>(other); }

  void addParent(const DynamicContainer* new_parent) {
    parents.push_back(new_parent);
  }

  DynamicContainer(const std::vector<const DynamicContainer*>& new_parents = {}) : parents(new_parents) {}
 private:
  const mutable C<K, V>* ptr = nullptr;
  std::vector<const DynamicContainer*> parents = {};
};

class ScopeInfo {
  std::vector<const ScopeInfo*> parents;

 public:
  struct VarInfo {
    std::string name;
    types::Type type;
    int64_t id;
  };

 private:
  DynamicContainer<std::unordered_map, std::string, VarInfo*> vars_name;
  DynamicContainer<std::unordered_map, int64_t, VarInfo*> vars_id;

 public:
  DynamicContainer<std::unordered_map, std::string, types::Generic*> generics;
  DynamicContainer<std::unordered_map, std::string, types::TYPE> struct_ids;
  DynamicContainer<std::map, std::string, types::Type> typedefs;
  std::unordered_set<std::string> operators;
  DynamicContainer<std::unordered_map, std::string, int64_t> bin_operators_;
  DynamicContainer<std::unordered_map, std::string, int64_t> prefix_operators_;
  DynamicContainer<std::unordered_map, std::string, int64_t> postfix_operators_;

  DynamicContainer<std::map, types::funcHead, Function*> B_OD_;
  DynamicContainer<std::map, types::funcHead, Function*> PR_OD_;
  DynamicContainer<std::map, types::funcHead, Function*> PO_OD_;
  DynamicContainer<std::map, types::funcHead, Function*> FN_OD_;

  DynamicContainer<std::map, std::string, Function*> B_OD_NAME_;
  DynamicContainer<std::map, std::string, Function*> PR_OD_NAME_;
  DynamicContainer<std::map, std::string, Function*> PO_OD_NAME_;
  DynamicContainer<std::map, std::string, Function*> FN_OD_NAME_;

  ScopeInfo(const ScopeInfo* new_parent);
  ScopeInfo(const ScopeInfo&) = delete;
  void addParent(const ScopeInfo* new_parent);

#define MAKE_SCOPE_ACCESS(property, properties, display, container,     \
                          return_type, access_type)                     \
  bool contains##property(const access_type& name) const {              \
    if (container.contains(name)) return true;                          \
    for (const auto parent : parents) {                                 \
      bool f = parent->contains##property(name);                        \
      if (f) return true;                                               \
    }                                                                   \
    return false;                                                       \
  }                                                                     \
  const return_type& get##property(const access_type& name) const {     \
    if (container.contains(name)) return container.at(name);            \
    for (const auto parent : parents)                                   \
      if (parent->contains##property(name))                             \
        return parent->get##property(name);                             \
    throw std::runtime_error(#display " '" + name + "'" +               \
                             "is not defined in this scope");           \
  }                                                                     \
  return_type& get##property(const access_type& name) {                 \
    return const_cast<return_type&>(                                    \
        static_cast<const ScopeInfo&>(*this).get##property(name));      \
  }                                                                     \
  void set##property(const access_type& name, const return_type& val) { \
    if (container.contains(name))                                       \
      throw std::runtime_error(#display " '" + name + "'" +             \
                               "is already defined in this scope");     \
    container.emplace(name, val);                                       \
  }                                                                     \
  const auto get##properties() { return &container; }

#define MAKE_SCOPE_ACCESS_NOMSG(property, properties, display, container,     \
                                return_type, access_type)                     \
  bool contains##property(const access_type& name) const {                    \
    if (container.contains(name)) return true;                                \
    for (const auto parent : parents) {                                       \
      bool f = parent->contains##property(name);                              \
      if (f) return true;                                                     \
    }                                                                         \
    return false;                                                             \
  }                                                                           \
  const return_type& get##property(const access_type& name) const {           \
    if (container.contains(name)) return container.at(name);                  \
    for (const auto parent : parents)                                         \
      if (parent->contains##property(name))                                   \
        return parent->get##property(name);                                   \
    throw std::runtime_error(#display " '" + name + "'" +                     \
                             "is not defined in this scope");                 \
  }                                                                           \
  return_type& get##property(const access_type& name) {                       \
    return const_cast<return_type&>(                                          \
        static_cast<const ScopeInfo&>(*this).get##property(name));            \
  }                                                                           \
  void set##property(const access_type& name, return_type& val) {             \
    if (container.contains(name))                                             \
      throw std::runtime_error(#display " is already defined in this scope"); \
    container.emplace(name, val);                                             \
  }

#define MAKE_SCOPE_ACCESS_OP(property, properties, display, container)        \
  bool contains##property(const types::funcHead& name) const {                \
    if (container.contains(name)) return true;                                \
    for (const auto parent : parents) {                                       \
      bool f = parent->contains##property(name);                              \
      if (f) return true;                                                     \
    }                                                                         \
    return false;                                                             \
  }                                                                           \
  bool contains##property(const std::string& name) const {                    \
    if (container##NAME_.contains(name)) return true;                         \
    for (const auto parent : parents) {                                       \
      bool f = parent->contains##property(name);                              \
      if (f) return true;                                                     \
    }                                                                         \
    return false;                                                             \
  }                                                                           \
  const Function*& get##property(const types::funcHead& name) const {         \
    if (container.contains(name))                                             \
      return const_cast<const Function*&>(container.at(name));                \
    for (const auto parent : parents) {                                       \
      bool b = parent->contains##property(name);                              \
      if (b) return parent->get##property(name);                              \
    }                                                                         \
    throw std::runtime_error(#display " is not defined in this scope");       \
  }                                                                           \
  const Function*& get##property(const std::string& name) const {             \
    if (container##NAME_.contains(name))                                      \
      return const_cast<const Function*&>(container##NAME_.at(name));         \
    for (const auto parent : parents) {                                       \
      bool b = parent->contains##property(name);                              \
      if (b) return parent->get##property(name);                              \
    }                                                                         \
    throw std::runtime_error(#display " is not defined in this scope");       \
  }                                                                           \
  Function*& get##property(const types::funcHead& name) {                     \
    return const_cast<Function*&>(                                            \
        static_cast<const ScopeInfo&>(*this).get##property(name));            \
  }                                                                           \
  Function*& get##property(const std::string& name) {                         \
    return const_cast<Function*&>(                                            \
        static_cast<const ScopeInfo&>(*this).get##property(name));            \
  }                                                                           \
  void set##property(const types::funcHead& name, Function*& val) {           \
    if (container.contains(name))                                             \
      throw std::runtime_error(#display " is already defined in this scope"); \
    container.emplace(name, val);                                             \
    container##NAME_.emplace(name.first, val);                                \
  }

#define MAKE_SCOPE_ACCESS_SET(property, properties, display, container,       \
                              access_type)                                    \
  bool contains##property(const access_type& name) const {                    \
    if (container.contains(name)) return true;                                \
    for (const auto parent : parents) {                                       \
      bool f = parent->contains##property(name);                              \
      if (f) return true;                                                     \
    }                                                                         \
    return false;                                                             \
  }                                                                           \
  void set##property(const access_type& name) {                               \
    if (container.contains(name))                                             \
      throw std::runtime_error(#display " is already defined in this scope"); \
    container.emplace(name);                                                  \
  }                                                                           \
  const auto get##properties() { return &container; }

  MAKE_SCOPE_ACCESS_OP(BinOp, BinOps, binary_operator, B_OD_);
  MAKE_SCOPE_ACCESS_OP(PrOp, PrOps, prefix_operator, PR_OD_);
  MAKE_SCOPE_ACCESS_OP(PoOp, PoOps, postfix_operator, PO_OD_);
  MAKE_SCOPE_ACCESS_OP(Fn, Fns, function, FN_OD_);

  MAKE_SCOPE_ACCESS_NOMSG(BinOpP, BinOpsP, binary_operator_priority,
                          bin_operators_, int64_t, std::string);
  MAKE_SCOPE_ACCESS_NOMSG(PrOpP, PrOpsP, prefix_operator_priority,
                          prefix_operators_, int64_t, std::string);
  MAKE_SCOPE_ACCESS_NOMSG(PoOpP, PoOpsP, postfix_operator_priority,
                          postfix_operators_, int64_t, std::string);
  MAKE_SCOPE_ACCESS_SET(Op, Ops, operators, operators, std::string);

  bool containsVar(const std::string& name) const {
    if (vars_name.contains(name)) return true;
    for (const auto parent : parents) {
      bool f = parent->containsVar(name);
      if (f) return true;
    }
    return false;
  }

  const types::Type& getVarType(const std::string& name) const {
    if (vars_name.contains(name)) return vars_name.at(name)->type;
    for (const auto parent : parents)
      return const_cast<types::Type&>(parent->getVarType(name));
    throw std::runtime_error("variable '" + name + "'" +
                             "is not defined in this scope");
  }

  types::Type& getVarType(const std::string& name) {
    return const_cast<types::Type&>(
        static_cast<const ScopeInfo&>(*this).getVarType(name));
  }

  const int64_t& getVarId(const std::string& name) const {
    if (vars_name.contains(name)) return vars_name.at(name)->id;
    for (const auto parent : parents) {
      bool b = parent->containsVar(name);
      if (b) return const_cast<int64_t&>(parent->getVarId(name));
    }
    throw std::runtime_error("variable '" + name + "'" +
                             "is not defined in this scope");
  }

  bool containsVar(const int64_t& id) const {
    if (vars_id.contains(id)) return true;
    for (const auto parent : parents) {
      bool b = parent->containsVar(id);
      if (b) return true;
    }
    return false;
  }

  const std::string& getVarName(int64_t id) const {
    if (vars_id.contains(id)) return vars_id.at(id)->name;
    for (const auto parent : parents) {
      bool b = parent->containsVar(id);
      if (b) return const_cast<std::string&>(parent->getVarName(id));
    }
    throw std::runtime_error("variable '" + std::to_string(id) + "'" +
                             "is not defined in this scope");
  }

  const VarInfo* const& getVarInfo(int64_t id) const {
    if (vars_id.contains(id)) return vars_id.at(id);
    for (const auto parent : parents) {
      bool b = parent->containsVar(id);
      if (b) return parent->getVarInfo(id);
    }
    throw std::runtime_error("variable '" + std::to_string(id) + "'" +
                             "is not defined in this scope");
  }



  const types::Type& getVarType(const int64_t& id) const {
    if (vars_id.contains(id)) return vars_id.at(id)->type;
    for (const auto parent : parents) {
      bool b = parent->containsVar(id);
      if (b) return parent->getVarType(id);
    }
    throw std::runtime_error("variable '" + std::to_string(id) + "'" +
                             "is not defined in this scope");
  }

  types::Type& getVarType(const int64_t& id) {
    return const_cast<types::Type&>(static_cast<const ScopeInfo&>(*this).
                                        getVarType(id));
  }

  void setVar(const std::string& name, const types::Type& val) {
    if (vars_name.contains(name))
      throw std::runtime_error("variable '" + name + "'" +
                               "is already defined in this scope");
    auto info = new VarInfo{name, val, genId()};
    vars_name.emplace(name, info);
    vars_id.emplace(info->id, info);
  }

  const auto getVars() { return vars_name.get(); }

  /** Collects all variables including `last` scope */
  void collectVars(ScopeInfo* last,
                   std::unordered_map<int64_t, VarInfo*>& push_map) const {
    // std::cout << sizeof(ScopeInfo) << std::endl;
    for (const auto i : vars_id.get()) push_map.emplace(i);
    if (this == last) return;
    for (const auto parent : parents) parent->collectVars(last, push_map);
  }
};