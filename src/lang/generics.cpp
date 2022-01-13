#include "generics.hpp"
#include "zhdata.hpp"

namespace types {
std::string Generic::toString() {
  auto res = name;
  res += "<";
  bool f = false;
  for (const auto &i : names) {
    if (f) res += " ";
    else f = true;
    res += i;
  }
  res += ">";
  return res;
}

void pushGenericType(
    const std::string &name,
    const std::vector<std::string> &names,
    ast::ASTBlock *block
) {
  if (zhdata.generics.contains(name))
    throw std::runtime_error(
        "Generic type '" + name + "' is already defined. (" + zhdata.generics[name].toString() + ")");
  zhdata.generics.insert({name, {name, names, block}});
}
}
