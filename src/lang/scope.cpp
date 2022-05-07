#include "./scope.hpp"

Scope::Scope(const Scope* new_parent)
    : vars(this),
      vars_id(this),
      typedefs(this),
      types(this),
      generics(this),
      prefix_operators(this),
      postfix_operators(this),
      bin_operators(this),
      B_OD_(this),
      PR_OD_(this),
      PO_OD_(this),
      FN_OD_(this),
      last_fn(this),
      dynamic_containers_ptrs({&vars, &vars_id, &types, &typedefs, &generics,
                               &bin_operators, &prefix_operators,
                               &postfix_operators, &B_OD_, &PR_OD_, &PO_OD_,
                               &FN_OD_, &last_fn}) {
  if (this == new_parent) throw std::runtime_error("Parent is this");
  if (!new_parent) return;
  parents.push_back(new_parent);
}
void Scope::addParent(const Scope* new_parent) {
  if (!new_parent) return;
  parents.push_back(new_parent);
}

int64_t genId() {
  static int64_t id = 100;
  return ++id;
}

void to_json(json& j, const Scope& p) {
  if (!p.vars.empty()) j["vars"] = p.vars;

  if (!p.types.empty()) j["types"] = p.types;
  if (!p.typedefs.empty()) j["typedefs"] = p.typedefs;
  if (!p.generics.empty()) j["generics"] = p.generics;

  if (!p.bin_operators.empty()) j["bin_operators"] = p.bin_operators;
  if (!p.prefix_operators.empty()) j["prefix_operators"] = p.prefix_operators;
  if (!p.postfix_operators.empty())
    j["postfix_operators"] = p.postfix_operators;

  if (!p.B_OD_.empty()) j["B_OD_"] = p.B_OD_;
  if (!p.PR_OD_.empty()) j["PR_OD"] = p.PR_OD_;
  if (!p.PO_OD_.empty()) j["PO_OD"] = p.PO_OD_;
}
