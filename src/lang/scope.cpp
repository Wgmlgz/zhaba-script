#include "./scope.hpp"

ScopeInfo::ScopeInfo(const ScopeInfo* new_parent) : parent(new_parent) {
  if (this == new_parent) {
    throw std::runtime_error("Parent is this");
  }
}

int64_t genId() {
  static int64_t id = 100;
  return ++id;
}
