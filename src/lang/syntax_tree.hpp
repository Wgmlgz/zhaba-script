#pragma once
#include "ast.hpp"
#include "../tree_lib/Tree.hpp"
#include "scope.hpp"
#include "expression.hpp"

struct STNode {
  virtual ~STNode();
};

struct STBlock : public STNode {
  std::vector<STNode *> nodes;
  ScopeInfo scope_info;

  TreeNode<std::string> *toGenericTree();
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
  enum class OpType { lhs, rhs, bin };
  OpType op_type;
  bool is_C = false;

  STBlock *body = nullptr;
  int64_t priority = -1;

  bool is_fn = false;

  [[nodiscard]] std::string headToStr() const;
  [[nodiscard]] std::string toUniqueStr() const;
  [[nodiscard]] types::funcHead getHead() const;

  [[nodiscard]] types::funcHead getHeadNonRefNonLval() const;
};

struct STTree {
  std::vector<Function *> functions;

  TreeNode<std::string> *toGenericTree();
};
