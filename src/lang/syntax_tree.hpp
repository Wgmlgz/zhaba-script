#pragma once
#include <list>
#include <filesystem>

#include "../tree_lib/Tree.hpp"
#include "ast.hpp"
#include "expression.hpp"
#include "scope.hpp"
#include "lang_tables.hpp"
#include "module.hpp"

struct STNode {
  virtual ~STNode();
};

struct STBlock : public STNode {
  std::vector<STNode *> nodes;
  Scope scope_info;

  TreeNode<std::string> *toGenericTree();
  STBlock(Scope *parent_scope);
};

struct STExp : public STNode {
  zhexp::Exp *exp;
};

struct STIf : STNode {
  zhexp::Exp *condition = nullptr;
  STBlock *body = nullptr;
  std::vector<std::pair<zhexp::Exp *, STBlock *>> elseif_body;
  STBlock *else_body = nullptr;
};

struct STWhile : STNode {
  zhexp::Exp *condition = nullptr;
  STBlock *body = nullptr;
};

struct STRet : STNode {
  zhexp::Exp *exp = nullptr;
};

struct Function {
  struct Arg {
    std::string name;
    types::Type type;
  };

  std::string name;
  std::vector<Arg> args;
  types::Type type;

  OpType op_type;

  bool is_C = false;

  STBlock *body = nullptr;
  int64_t priority = -1;

  bool is_fn = false;
  Scope* args_scope = nullptr;

  Token *begin = nullptr, *end = nullptr;

  [[nodiscard]] std::string headToStr() const;
  [[nodiscard]] std::string toUniqueStr() const;
  [[nodiscard]] types::FnHead getHead() const;
  [[nodiscard]] types::Type getFnType() const;

  [[nodiscard]] types::FnHead getHeadNonRefNonLval() const;
};
