#pragma once
#include "..\Expressions\ExpressionParser.hpp"
#include "..\Lang\Scope.hpp"
#include "..\..\TreeLib/Tree.hpp"
#include "AbstractSyntaxTree.hpp"
#include "..\Lang\Scope.hpp"
#include "..\Lang\Types.hpp"

struct STNode {
  virtual ~STNode() {}
};

struct STBlock {
  std::vector<STNode*> nodes;
  ScopeInfo scope_info;

  TreeNode<std::string>* toGenericTree();
};

struct STExp : public STNode {
  Exp* exp;
};

struct STIf : STNode {
  Exp* contition = nullptr;
  STBlock* body = nullptr;
  std::vector<std::pair<Exp*, STBlock*>> elseif_body;
  STBlock* else_body = nullptr;
};

struct STRet : STNode {
  Exp* exp = nullptr;
};

struct STLoop : ASTNode {
  Exp* exp;
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
      if (auto ifs = dynamic_cast<STIf*>(i)) {
        auto tmp = new TreeNode<std::string>("<if>");
        tmp->branches.push_back(
          new TreeNode<std::string>("<contition>", {
            ExpParser::toGenericTree(ifs->contition)
            })
        );
        tmp->branches.push_back(
          new TreeNode<std::string>("<body>", {
            ifs->body->toGenericTree()
            })
        );
        // tmp->branches.push_back(toGenericTree(ifs->body));
        for (auto& i : ifs->elseif_body) {
          tmp->branches.push_back(new TreeNode<std::string>("<elif>", {
            new TreeNode<std::string>("<contition>", {
            ExpParser::toGenericTree(i.first)
            }),
            new TreeNode<std::string>("<body>", {
              i.second->toGenericTree()
            })
            }
          ));
        }
        if (ifs->else_body) {
          tmp->branches.push_back(new TreeNode<std::string>("<else>",
            { ifs->else_body->toGenericTree() }));
        }
        node->branches.push_back(tmp);
      }
      if (auto exp = dynamic_cast<STRet*>(i)) {
        node->branches.push_back(new TreeNode<std::string>("<ret>", {
          exp->exp ? ExpParser::toGenericTree(exp->exp) : new TreeNode<std::string>("void")
        }));
      }
      if (auto exp = dynamic_cast<STExp*>(i)) {
        node->branches.push_back(ExpParser::toGenericTree(exp->exp));
      }
    }
    return node;
  };