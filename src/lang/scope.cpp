#include "./scope.hpp"

ScopeInfo::ScopeInfo(const ScopeInfo* new_parent) {
  if (this == new_parent) throw std::runtime_error("Parent is this");
  if (!new_parent) return;
  parents.push_back(new_parent);
  typedefs.addParent(&new_parent->typedefs);
  struct_ids.addParent(&new_parent->struct_ids);
  generics.addParent(&new_parent->generics);
}
void ScopeInfo::addParent(const ScopeInfo* new_parent) {
  if (!new_parent) return;
  parents.push_back(new_parent);
  typedefs.addParent(&new_parent->typedefs);
  struct_ids.addParent(&new_parent->struct_ids);
  generics.addParent(&new_parent->generics);
}

int64_t genId() {
  static int64_t id = 100;
  return ++id;
}

void to_json(json& j, const ScopeInfo& p) {
  j = {{"vars_name", p.vars_name}, {"typedefs", p.typedefs}};
}
