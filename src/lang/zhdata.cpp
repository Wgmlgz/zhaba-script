#include "zhdata.hpp"

ZHDATA::ZHDATA() {
  core_module = new ZHModule(nullptr, std::filesystem::current_path());

  /* init with default values*/
  core_module->scope.bin_operators = tables::bin_operators;
  core_module->scope.prefix_operators = tables::prefix_operators;
  core_module->scope.postfix_operators = tables::postfix_operators;

  core_module->scope.B_OD_ = tables::B_OD;
  core_module->scope.PR_OD_ = tables::PR_OD;
}

ZHDATA zhdata;
