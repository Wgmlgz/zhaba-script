#include "./module.hpp"

ZHModule::ZHModule(const std::filesystem::path &new_path)
    : path(new_path) {}

void ZHModule::saveCache() {
  // json j = *this;
  // auto j_path = path;
  // j_path.replace_extension(".cache.json");

  // std::ofstream f(j_path);

  // f << j.dump(2) << std::endl;
  // f.close();
}

void to_json(json& j, const ZHModule& module) {
  j = {
      {"path", module.path.string()},
      {"dependences", module.dependences},
  };
}

Scope* makeCore() {
  auto core_scope = new Scope(nullptr);

  /* init with default values*/
  core_scope->bin_operators = tables::bin_operators;
  core_scope->prefix_operators = tables::prefix_operators;
  core_scope->postfix_operators = tables::postfix_operators;

  core_scope->B_OP = tables::B_OD;
  core_scope->PR_OP = tables::PR_OD;

  return core_scope;
}

// void from_json(const json& j, ZHModule& p) {

// }