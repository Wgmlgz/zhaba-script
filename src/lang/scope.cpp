#include "./scope.hpp"

ScopeInfo::ScopeInfo(const ScopeInfo* new_parent) {
  if (this == new_parent) throw std::runtime_error("Parent is this");
  if (!new_parent) return;
  parents.push_back(new_parent);
  typedefs.addParent(&new_parent->typedefs);
  types.addParent(&new_parent->types);
  generics.addParent(&new_parent->generics);
  operators.addParent(&new_parent->operators);
}
void ScopeInfo::addParent(const ScopeInfo* new_parent) {
  if (!new_parent) return;
  parents.push_back(new_parent);
  typedefs.addParent(&new_parent->typedefs);
  types.addParent(&new_parent->types);
  generics.addParent(&new_parent->generics);
  operators.addParent(&new_parent->operators);
}

int64_t genId() {
  static int64_t id = 100;
  return ++id;
}

void to_json(json& j, const ScopeInfo& p) {
  if (!p.vars.empty()) j["vars"] = p.vars;

  if (!p.types.empty()) j["types"] = p.types;
  if (!p.typedefs.empty()) j["typedefs"] = p.typedefs;
  if (!p.generics.empty()) j["generics"] = p.generics;

  if (!p.operators.empty()) j["operators"] = p.operators;
  // if (!p.operators.empty()) j["bin_operators"] = p.bin_operators_;
  // if (!p.operators.empty()) j["prefix_operators"] = p.prefix_operators_;
  // if (!p.operators.empty()) j["postfix_operators"] = p.postfix_operators_;

  // if (!p.operators.empty()) j["B_OD_"] = p.B_OD_;
}
