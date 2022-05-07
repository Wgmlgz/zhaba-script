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

// void from_json(const json& j, ZHModule& p) {

// }