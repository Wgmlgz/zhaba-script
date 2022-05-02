#include "./scope.hpp"

ScopeInfo::ScopeInfo(const ScopeInfo* new_parent) {
  if (this == new_parent) throw std::runtime_error("Parent is this");
  if (new_parent) parents.push_back(new_parent);
}
void ScopeInfo::addParent(const ScopeInfo* new_parent) {
  if (new_parent) parents.push_back(new_parent);
}

int64_t genId() {
  static int64_t id = 100;
  return ++id;
}
