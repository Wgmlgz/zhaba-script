#include "./module.hpp"

ZHModule::ZHModule(Scope *parent_scope, const std::filesystem::path &new_path)
    : scope(parent_scope), path(new_path) {}

void ZHModule::saveCache() {
  json j = *this;
  auto j_path = path;
  j_path.replace_extension(".cache.json");

  std::ofstream f(j_path);

  f << j.dump(2) << std::endl;
  f.close();
}

void to_json(json& j, const ZHModule& module) {
  j = {
      {"path", module.path.string()},
      {"dependences", module.dependences},
      {"scope", module.scope},
  };
}

ZHModule* makeCoreModule() {
  auto core_module = new ZHModule(nullptr, std::filesystem::current_path());

  /* init with default values*/
  core_module->scope.bin_operators = tables::bin_operators;
  core_module->scope.prefix_operators = tables::prefix_operators;
  core_module->scope.postfix_operators = tables::postfix_operators;

  core_module->scope.B_OP = tables::B_OD;
  core_module->scope.PR_OP = tables::PR_OD;

  return core_module;
}

// void from_json(const json& j, ZHModule& p) {

// }