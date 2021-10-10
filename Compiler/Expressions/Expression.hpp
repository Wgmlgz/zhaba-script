#pragma once
#include "..\Lang\Types.hpp"
#include "../../TreeLib/TreePrinterASCII.hpp"

namespace zhexp {
struct Exp {
  int pos;
  Type type = Type(TYPE::voidT);
  Exp(int new_pos = 666) : pos(new_pos) {}
  virtual ~Exp() {}
};

struct Tuple : public Exp {
  double priority;
  std::vector<Exp*> content;
  Tuple() {}
  Tuple(double new_priority, std::vector<Exp*> new_content) :
    priority(new_priority), content(new_content) {}
};

struct Variable : public Exp {
  std::string name;
};

struct Literal : public Exp {};

struct IntLiteral : public Literal {
  int64_t val;
  IntLiteral(int new_pos, int64_t new_val) {
    pos = new_pos;
    val = new_val;
  }
};

struct StrLiteral : public Literal {
  std::string val;
  StrLiteral(int new_pos, std::string new_val) {
    pos = new_pos;
    val = new_val;
  }
};

struct IdLiteral : public Literal {
  std::string val;
  IdLiteral(int new_pos, std::string new_val) {
    pos = new_pos;
    val = new_val;
  }
};

struct FlowOperator : public Exp {
  std::string val;
  Exp* operand = nullptr;
  FlowOperator(int new_pos, std::string new_val, Exp* new_operand) {
    pos = new_pos;
    val = new_val;
    operand = new_operand;
  }
};

struct CppCode : public Exp {
  std::string code;
  CppCode(std::string new_code) {
    code = new_code;
  }
};

struct Operator : public Exp {
  std::string val;
  double priority;
  size_t spl = 0, spr = 0;
  Operator() {}
  Operator(int new_pos, std::string new_val, double new_priority,
    size_t new_spl, size_t new_spr) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    spl = new_spl;
    spr = new_spr;
  }
};

struct BinOperator : public Operator {
  Exp* lhs;
  Exp* rhs;
  BinOperator(int new_pos, std::string new_val, double new_priority,
    Exp* new_lhs, Exp* new_rhs) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    lhs = new_lhs;
    rhs = new_rhs;
  }
};

struct UnaryOperator : public Operator {
  Exp* child;
  UnaryOperator(int new_pos, std::string new_val, double new_priority,
    Exp* new_child) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    child = new_child;
  }
};

struct PrefixOperator : public UnaryOperator {
  PrefixOperator(int new_pos, std::string new_val, double new_priority,
    Exp* new_child)
    : UnaryOperator(new_pos, new_val, new_priority, new_child) {}
};

struct PostfixOperator : public UnaryOperator {
  PostfixOperator(int new_pos, std::string new_val, double new_priority,
    Exp* new_child)
    : UnaryOperator(new_pos, new_val, new_priority, new_child) {}
};

void castTreeToTupleDfs(Exp* exp, Tuple*& tuple) {
  if (auto op = dynamic_cast<BinOperator*>(exp)) {
    if (op->val == ",") {
      castTreeToTupleDfs(op->lhs, tuple);
      castTreeToTupleDfs(op->rhs, tuple);
      return;
    }
  }
  tuple->content.push_back(exp);
}

Tuple* castTreeToTuple(Exp* exp) {
  if (exp) {
    auto tuple = new Tuple;
    castTreeToTupleDfs(exp, tuple);
    return tuple;
  }
  return nullptr;
}

Tuple* castToTuple(Exp* exp) {
  if (exp) {
    if (auto tuple = dynamic_cast<Tuple*>(exp)) return tuple;
    return new Tuple(0, { exp });
  }
  return nullptr;
}

TreeNode<std::string>* toGenericTree(Exp* exp) {
    if (!exp) return new TreeNode<std::string>("<nullptr>");
    auto node = new TreeNode<std::string>;
    if (auto op = dynamic_cast<CppCode*>(exp)) {
      node->data = "cpp: '" + op->code + "'";
    }
    if (auto op = dynamic_cast<FlowOperator*>(exp)) {
      node->data = "'" + op->val + "'";
      node->branches.push_back(toGenericTree(op->operand));
    }
    if (auto op = dynamic_cast<IntLiteral*>(exp)) {
      node->data = "'" + std::to_string(op->val) + "' iL";
    }
    if (auto op = dynamic_cast<StrLiteral*>(exp)) {
      node->data = "'" + op->val + "' sL";
    }
    if (auto op = dynamic_cast<IdLiteral*>(exp)) {
      node->data = "'" + op->val + "' idL,";
    }

    if (auto t = dynamic_cast<Tuple*>(exp)) {
      node->data = "tuple";
      for (auto& i : t->content) {
        node->branches.push_back(toGenericTree(i));
      }
    }

    if (BinOperator* op = dynamic_cast<BinOperator*>(exp)) {
      node->data = "'" + op->val + "'b" + std::to_string((int)op->priority);
      node->branches.push_back(toGenericTree(op->lhs));
      node->branches.push_back(toGenericTree(op->rhs));
    }
    if (UnaryOperator* op = dynamic_cast<UnaryOperator*>(exp)) {
      node->data = "'" + op->val +
        (dynamic_cast<PrefixOperator*>(op) ? "'pr" : "'po") +
        std::to_string((int)op->priority);
      node->branches.push_back(toGenericTree(op->child));
    }
    node->data += "," + exp->type.toString();
    return node;
  }
  void printGenericTree(Exp* exp) {
    auto tree = toGenericTree(exp);
    std::cout << "ascii:" << std::endl;
    printASCII(tree);
    deleteTree(tree);
  }
  void printExpTree(Exp* exp, std::string prefix = "") {
    auto tree = toGenericTree(exp);
    std::cout << "ascii:" << std::endl;
    printCompact(tree);
    deleteTree(tree);
  }
}