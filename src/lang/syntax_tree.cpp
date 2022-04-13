#include "syntax_tree.hpp"

STBlock::STBlock(ScopeInfo *parent_scope) : scope_info(parent_scope) {}
STNode::~STNode() = default;

TreeNode<std::string> *STBlock::toGenericTree() {
  auto node = new TreeNode<std::string>;
  node->data = "<block>";
  auto vars = new TreeNode<std::string>("<vars>");
  for (const auto& [name, info] : *scope_info.getVars())
    vars->branches.push_back(
        new TreeNode<std::string>(
            "name: " + name + " id: " + std::to_string(info->id),
            {new TreeNode<std::string>(info->type.toString())}
        )
    );
  node->branches.push_back(vars);
  for (auto i : nodes) {
    if (auto block = dynamic_cast<STBlock *>(i)) {
      auto tmp = new TreeNode<std::string>("<block>");
      tmp->branches.push_back(block->toGenericTree());
      node->branches.push_back(tmp);
    }else if (auto if_statement = dynamic_cast<STIf *>(i)) {
      auto tmp = new TreeNode<std::string>("<if>");
      tmp->branches.push_back(
          new TreeNode<std::string>("<condition>", {
              zhexp::toGenericTree(if_statement->condition)
          })
      );
      tmp->branches.push_back(
          new TreeNode<std::string>("<body>", {
              if_statement->body->toGenericTree()
          })
      );
      for (auto &elif_branch : if_statement->elseif_body)
        tmp->branches.push_back(
            new TreeNode<std::string>(
                "<elif>",
                {
                    new TreeNode<std::string>("<condition>", {
                        zhexp::toGenericTree(elif_branch.first)
                    }),
                    new TreeNode<std::string>("<body>", {
                        elif_branch.second->toGenericTree()
                    })
                }
            ));
      if (if_statement->else_body) {
        tmp->branches.push_back(new TreeNode<std::string>("<else>",
                                                          {if_statement->else_body->toGenericTree()}));
      }
      node->branches.push_back(tmp);
    } else if (auto while_statement = dynamic_cast<STWhile *>(i)) {
      auto tmp = new TreeNode<std::string>("<while>");
      tmp->branches.push_back(
          new TreeNode<std::string>("<condition>", {
              zhexp::toGenericTree(while_statement->condition)
          })
      );
      tmp->branches.push_back(
          new TreeNode<std::string>("<body>", {
              while_statement->body->toGenericTree()
          })
      );
      node->branches.push_back(tmp);
    } else if (auto exp = dynamic_cast<STRet *>(i)) {
      node->branches.push_back(new TreeNode<std::string>("<ret>", {
          exp->exp ? zhexp::toGenericTree(exp->exp) : new TreeNode<std::string>("void")
      }));
    }
    if (auto exp = dynamic_cast<STExp *>(i)) {
      node->branches.push_back(zhexp::toGenericTree(exp->exp));
    }
  }
  return node;
};

std::string Function::headToStr() const {
  std::string str;
  if (begin && end) {
    str += begin->toString();
    str += " ";
  }
  str += type.toString() + " ";
  str += name + " ";
  for (auto &arg : args) {
    str += " ";
    if (arg.type.getTypeId() != types::TYPE::voidT) {
      str += arg.type.toString();
      str += " ";
    }
    str += arg.name;
  }
  return str;
}
std::string Function::toUniqueStr() const {
  std::string str = (op_type == OpType::lhs)
                    ? "lop "
                    : (op_type == OpType::rhs ? "rop " : "op ");
  str += type.toString() + " ";
  str += name;
  for (auto &arg : args) {
    str += " ";
    str += arg.type.toString() + " ";
    str += arg.name;
  }
  return str;
}
types::funcHead Function::getHead() const {
  types::funcHead res;
  res.first = name;
  for (const auto&[name, type] : args) {
    res.second.push_back(type);
    res.second.back().setLval(false);
  }
  return res;
};

types::funcHead Function::getHeadNonRefNonLval() const {
  types::funcHead res = getHead();
  for (auto &type : res.second)
    type.setLval(false), type.setRef(false);
  return res;
};

TreeNode<std::string> *STTree::toGenericTree() {
  auto main_node = new TreeNode<std::string>;
  main_node->data = "<STree>";

  auto functions_node = new TreeNode<std::string>;
  main_node->branches.push_back(functions_node);
  functions_node->data = "<Functions>";
  for (auto &func : functions) {
    auto func_node = new TreeNode<std::string>;
    func_node->data = func->headToStr();
    func_node->branches.push_back(func->body->toGenericTree());
    functions_node->branches.push_back(func_node);
  }
  return main_node;
};

STTree::STTree(ScopeInfo *parent_scope) : scope(parent_scope) {}