#pragma once
#include <string>
#include <map>
#include <unordered_set>
#include <vector>

#include "SyntaxTree.hpp"

namespace types {
  std::map<std::pair<std::string, size_t>, STBlock*> templated_types;
}
