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

void pushGenericType(const std::string &name,
                     const std::vector<std::string> &names,
                     ast::ASTBlock *block, Scope *scope) {
  if (scope->generics.contains(name))
    throw std::runtime_error("Generic type '" + name +
                             "' is already defined. (" +
                             scope->generics.at(name)->toString() + ")");
  scope->generics.emplace(
      name,
      new Generic{.name = name, .names = names, .block = block, .scope = scope});
}

void to_json(json &j, const types::Generic *generic) {
  j["__ptr__"] = reinterpret_cast<std::uintptr_t>(generic);
  j["name"] = generic->name;
  j["names"] = generic->names;
  j["block__ptr__"] = reinterpret_cast<std::uintptr_t>(generic->block);
  auto new_vec = std::vector<std::uintptr_t>();

  std::transform(generic->impl_blocks.begin(), generic->impl_blocks.end(),
                 std::back_inserter(new_vec), [](const auto &ptr) {
                   return reinterpret_cast<std::uintptr_t>(ptr);
                 });
  j["impl_blocks__ptrs__"] = new_vec;

  j["scope__ptr__"] = reinterpret_cast<std::uintptr_t>(generic->scope);
}
}  // namespace types

