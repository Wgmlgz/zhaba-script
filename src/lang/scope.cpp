#include "./scope.hpp"

ScopeInfo::ScopeInfo(ScopeInfo* new_parent) : parent(new_parent) {}