#pragma once
#include <map>
#include <stdexcept>
#include <string>
#include <unordered_map>

#include "types.hpp"

struct Function;

class ScopeInfo {
  const ScopeInfo* parent = nullptr;
  std::unordered_map<std::string, types::Type> vars;
  std::map<std::string, types::Type> typedefs;

 public:
  // std::unordered_set<std::string> flow_ops;
  // std::unordered_set<std::string> operators;
  // std::unordered_set<std::string> functions;
  std::unordered_map<std::string, int64_t> bin_operators_;
  std::unordered_map<std::string, int64_t> prefix_operators_;
  std::unordered_map<std::string, int64_t> postfix_operators_;

  std::map<types::funcHead, Function*> B_OD_;
  std::map<types::funcHead, Function*> PR_OD_;
  std::map<types::funcHead, Function*> PO_OD_;
  std::map<types::funcHead, Function*> FN_OD_;

  ScopeInfo(const ScopeInfo* new_parent);
  ScopeInfo(const ScopeInfo&) = delete;

#define MAKE_SCOPE_ACCESS(property, properties, display, container,     \
                          return_type, access_type)                     \
  bool contains##property(const access_type& name) const {              \
    if (container.contains(name)) return true;                          \
    if (parent) return parent->contains##property(name);                \
    return false;                                                       \
  }                                                                     \
  return_type& get##property(const access_type& name) {                 \
    if (!contains##property(name))                                      \
      throw std::runtime_error(#display " '" + name + "'" +             \
                               "is not defined in this scope");         \
    if (container.contains(name)) return container.at(name);            \
    return const_cast<return_type&>(parent->get##property(name));       \
  }                                                                     \
  const return_type& get##property(const access_type& name) const {     \
    if (!contains##property(name))                                      \
      throw std::runtime_error(#display " '" + name + "'" +             \
                               "is not defined in this scope");         \
    if (container.contains(name)) return container.at(name);            \
    return parent->get##property(name);                                 \
  }                                                                     \
  void set##property(const access_type& name, const return_type& val) { \
    if (container.contains(name))                                       \
      throw std::runtime_error(#display " '" + name + "'" +             \
                               "is already defined in this scope");     \
    container.insert({name, val});                                      \
  }                                                                     \
  const auto get##properties() { return &container; }

#define MAKE_SCOPE_ACCESS_NOMSG(property, properties, display, container,     \
                                return_type, access_type)                     \
  bool contains##property(const access_type& name) const {                    \
    if (container.contains(name)) return true;                                \
    if (parent) return parent->contains##property(name);                      \
    return false;                                                             \
  }                                                                           \
  const return_type& get##property(const access_type& name) const {           \
    if (!contains##property(name))                                            \
      throw std::runtime_error(#display " is not defined in this scope");     \
    if (container.contains(name))                                             \
      return const_cast<const return_type&>(container.at(name));              \
    return parent->get##property(name);                                       \
  }                                                                           \
  return_type& get##property(const access_type& name) {                       \
    return const_cast<return_type&>(                                          \
        static_cast<const ScopeInfo&>(*this).get##property(name));            \
  }                                                                           \
  void set##property(const access_type& name, return_type& val) {             \
    if (container.contains(name))                                             \
      throw std::runtime_error(#display " is already defined in this scope"); \
    container.emplace(name, val);                                             \
  }                                                                           \
  const auto get##properties() { return &container; }

  MAKE_SCOPE_ACCESS(Var, Vars, variable, vars, types::Type, std::string);
  MAKE_SCOPE_ACCESS(Typedef, Typedefs, typedef, typedefs, types::Type,
                    std::string);
  MAKE_SCOPE_ACCESS_NOMSG(BinOp, BinOps, binary_operator, B_OD_, Function*,
                          types::funcHead);
  MAKE_SCOPE_ACCESS_NOMSG(PrOp, PrOps, prefix_operator, PR_OD_, Function*,
                          types::funcHead);
  MAKE_SCOPE_ACCESS_NOMSG(PoOp, PoOps, postfix_operator, PO_OD_, Function*,
                          types::funcHead);
  MAKE_SCOPE_ACCESS_NOMSG(Fn, Fns, function, FN_OD_, Function*,
                          types::funcHead);

  MAKE_SCOPE_ACCESS_NOMSG(BinOpP, BinOpsP, binary_operator_priority,
                          bin_operators_, int64_t, std::string);
  MAKE_SCOPE_ACCESS_NOMSG(PrOpP, PrOpsP, prefix_operator_priority,
                          prefix_operators_, int64_t, std::string);
  MAKE_SCOPE_ACCESS_NOMSG(PoOpP, PoOpsP, postfix_operator_priority,
                          postfix_operators_, int64_t, std::string);
};