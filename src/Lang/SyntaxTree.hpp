#pragma once
#include "AST.hpp"
#include "Expression.hpp"
#include "../TreeLib/Tree.hpp"
#include "Scope.hpp"

struct STNode {
  virtual ~STNode() {}
};

struct STBlock : public STNode {
  std::vector<STNode*> nodes;
  ScopeInfo scope_info;

  TreeNode<std::string>* toGenericTree();
};

struct STExp : public STNode {
  zhexp::Exp* exp;
};

struct STIf : STNode {
  zhexp::Exp* contition = nullptr;
  STBlock* body = nullptr;
  std::vector<std::pair<zhexp::Exp*, STBlock*>> elseif_body;
  STBlock* else_body = nullptr;
};

struct STWhile : STNode {
  zhexp::Exp* contition = nullptr;
  STBlock* body = nullptr;
};

struct STRet : STNode {
  zhexp::Exp* exp = nullptr;
};

struct STLoop : STNode {
  zhexp::Exp* exp;
  STBlock* body;
};

TreeNode<std::string>* STBlock::toGenericTree() {
  auto node = new TreeNode<std::string>;
  node->data = "<block>";
  auto vars = new TreeNode<std::string>("<vars>");
  for (auto i : scope_info.vars) {
    vars->branches.push_back(new TreeNode<std::string>(i.first,
      { new TreeNode<std::string>(i.second.toString()) }));
  }
  node->branches.push_back(vars);
  for (auto i : nodes) {
    if (auto if_statement = dynamic_cast<STIf*>(i)) {
      auto tmp = new TreeNode<std::string>("<if>");
      tmp->branches.push_back(
        new TreeNode<std::string>("<contition>", {
          zhexp::toGenericTree(if_statement->contition)
          })
      );
      tmp->branches.push_back(
        new TreeNode<std::string>("<body>", {
          if_statement->body->toGenericTree()
          })
      );
      for (auto& i : if_statement->elseif_body) {
        tmp->branches.push_back(new TreeNode<std::string>("<elif>", {
          new TreeNode<std::string>("<contition>", {
          zhexp::toGenericTree(i.first)
          }),
          new TreeNode<std::string>("<body>", {
            i.second->toGenericTree()
          })
          }
        ));
      }
      if (if_statement->else_body) {
        tmp->branches.push_back(new TreeNode<std::string>("<else>",
          { if_statement->else_body->toGenericTree() }));
      }
      node->branches.push_back(tmp);
    } else if (auto while_statement = dynamic_cast<STWhile*>(i)) {
      auto tmp = new TreeNode<std::string>("<while>");
      tmp->branches.push_back(
        new TreeNode<std::string>("<contition>", {
          zhexp::toGenericTree(while_statement->contition)
          })
      );
      tmp->branches.push_back(
        new TreeNode<std::string>("<body>", {
          while_statement->body->toGenericTree()
          })
      );
      node->branches.push_back(tmp);
    } else if (auto exp = dynamic_cast<STRet*>(i)) {
      node->branches.push_back(new TreeNode<std::string>("<ret>", {
        exp->exp ? zhexp::toGenericTree(exp->exp) : new TreeNode<std::string>("void")
      }));
    }
    if (auto exp = dynamic_cast<STExp*>(i)) {
      node->branches.push_back(zhexp::toGenericTree(exp->exp));
    }
  }
  return node;
};

enum class OpType {lhs, rhs, bin};

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
  
  STBlock* body = nullptr;
  int64_t priority = -1;

  bool is_fn = false;
  
  std::string headToStr() const {
    std::string str;
    str += type.toString() + " ";
    str += name + " =";
    for (auto& arg : args) {
      str += " ";
      str += arg.type.toString() + " ";
      str += arg.name;
    } 
    return str;
  }
  std::string toUniqueStr() const {
    std::string str = (op_type == OpType::lhs)
                        ? "lop "
                        : (op_type == OpType::rhs ? "rop " : "op ");
    str += type.toString() + " ";
    str += name;
    for (auto& arg : args) {
      str += " ";
      str += arg.type.toString() + " ";
      str += arg.name;
    }
    return str;
  }
  types::funcHead getHead() const {
    types::funcHead res;
    res.first = name;
    for (const auto& [name, type] : args) {
      res.second.push_back(type);
      res.second.back().setLval(false);
    }
    return res;
  };
  
  types::funcHead getHeadNonRefNonLval() const {
    types::funcHead res = getHead();
    for (auto& type : res.second)
      type.setLval(false), type.setRef(false);
    return res;
  };
};

struct STTree {
  std::vector<Function*> functions;

  TreeNode<std::string>* toGenericTree() {
    auto main_node = new TreeNode<std::string>;
    main_node->data = "<STree>";
    
    auto functions_node = new TreeNode<std::string>;
    main_node->branches.push_back(functions_node);
    functions_node->data = "<Functions>";
    for (auto& func : functions) {
      auto func_node = new TreeNode<std::string>;
      func_node->data = func->headToStr();
      func_node->branches.push_back(func->body->toGenericTree());
      functions_node->branches.push_back(func_node);
    }
    return main_node;
  };
};
