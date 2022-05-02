#include "zhdata.hpp"

ZHDATA::ZHDATA() {
  core_module = new ZHModule(nullptr);

  /* init with default values*/
  core_module->scope.bin_operators_ = tables::bin_operators;
  core_module->scope.prefix_operators_ = tables::prefix_operators;
  core_module->scope.postfix_operators_ = tables::postfix_operators;

  core_module->scope.B_OD_ = tables::B_OD;
  core_module->scope.PR_OD_ = tables::PR_OD;
  core_module->scope.operators = tables::operators;
}

ZHDATA zhdata;