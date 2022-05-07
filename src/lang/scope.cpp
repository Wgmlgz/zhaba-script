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
      B_OP(this),
      PR_OP(this),
      PO_OP(this),
      FN(this),
      last_fn(this),
      dynamic_containers_ptrs({&vars, &vars_id, &types, &typedefs, &generics,
                               &bin_operators, &prefix_operators,
                               &postfix_operators, &B_OP, &PR_OP, &PO_OP,
                               &FN, &last_fn}) {
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

  if (!p.B_OP.empty()) j["B_OP"] = p.B_OP;
  if (!p.PR_OP.empty()) j["PR_OD"] = p.PR_OP;
  if (!p.PO_OP.empty()) j["PO_OD"] = p.PO_OP;
}
