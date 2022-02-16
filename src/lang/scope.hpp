#pragma once
#include <map>
#include <stdexcept>
#include <string>
#include <unordered_map>

#include "types.hpp"

class ScopeInfo {
  ScopeInfo* parent = nullptr;
  std::unordered_map<std::string, types::Type> vars;
  std::map<std::string, types::Type> typedefs;

 public:
  ScopeInfo(ScopeInfo* new_parent);
  ScopeInfo(const ScopeInfo&) = delete;

#define MAKE_SCOPE_ACCESS(property, properties, display, container,     \
                          return_type, access_type)                     \
  bool contains##property(const access_type& name) const {              \
    if (container.contains(name)) return true;                          \
    if (parent) return parent->contains##property(name);                \
    return false;                                                       \
  }                                                                     \
                                                                        \
  return_type& get##property(const access_type& name) {                 \
    if (!contains##property(name))                                      \
      throw std::runtime_error(#display " '" + name + "'" +             \
                               "is not defined in this scope");         \
    if (container.contains(name)) return container.at(name);            \
    return parent->get##property(name);                                 \
  }                                                                     \
                                                                        \
  const return_type& get##property(const access_type& name) const {     \
    if (!contains##property(name))                                      \
      throw std::runtime_error(#display " '" + name + "'" +             \
                               "is not defined in this scope");         \
    if (container.contains(name)) return container.at(name);            \
    return parent->get##property(name);                                 \
  }                                                                     \
                                                                        \
  void set##property(const access_type& name, const return_type& val) { \
    if (container.contains(name))                                       \
      throw std::runtime_error(#display " '" + name + "'" +             \
                               "is already defined in this scope");     \
    container.insert({name, val});                                      \
  }                                                                     \
                                                                        \
  const auto get##properties() { return &container; }

  MAKE_SCOPE_ACCESS(Var, Vars, variable, vars, types::Type, std::string)
  MAKE_SCOPE_ACCESS(Typedef, Typedefs, typedef, typedefs, types::Type,
                    std::string)
};