#pragma once
#include <string>
#include "Types.hpp"
#include "../TreeLib/TreeLib.hpp"

namespace zhexp {
struct Exp {
  int pos;
  types::Type type = types::Type(types::TYPE::voidT);
  Exp(int new_pos = 666) : pos(new_pos) {}
  virtual ~Exp() {}
  virtual std::string toString() {
    return "<empty>";
  }
};

struct Tuple : public Exp {
  int64_t priority;
  std::vector<Exp*> content;
  Tuple() {}
  Tuple(int64_t new_priority, std::vector<Exp*> new_content) :
    priority(new_priority), content(new_content) {}
  virtual std::string toString() override {
    std::string res="<tuple{";
    for (auto& i : content) {
      res += i->toString() + " ";
    }
    res += ">";
    return res;
  }
};

struct Variable : public Exp {
  std::string name;
  virtual std::string toString() override {
    std::string res="<variable'" + name + "'>";
    return res;
  }
};

struct Literal : public Exp {};

struct TypeLiteral : public Literal {
  types::Type literal_type; 
  TypeLiteral(int new_pos, types::Type new_type) {
    pos = new_pos;
    literal_type = new_type;
    type = types::TYPE::voidT;
  }
  virtual std::string toString() override {
    std::string res="<typeL'" + literal_type.toString() + "'>";
    return res;
  }
};

struct IntLiteral : public Literal {
  int64_t val;
  IntLiteral(int new_pos, int64_t new_val) {
    pos = new_pos;
    val = new_val;
  }
  virtual std::string toString() override {
    std::string res="<int'" + std::to_string(val) + "'>";
    return res;
  }
};

struct StrLiteral : public Literal {
  std::string val;
  StrLiteral(int new_pos, std::string new_val) {
    pos = new_pos;
    val = new_val;
  }
  virtual std::string toString() override {
    std::string res="<str'" + val + "'>";
    return res;
  }
};

struct IdLiteral : public Literal {
  std::string val;
  IdLiteral(int new_pos, std::string new_val) {
    pos = new_pos;
    val = new_val;
  }
  virtual std::string toString() override {
    std::string res="<id'" + val + "'>";
    return res;
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
  int64_t priority = -666;
  size_t spl = 0, spr = 0;
  Operator() {}
  Operator(int new_pos, std::string new_val, int64_t new_priority,
    size_t new_spl, size_t new_spr) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    spl = new_spl;
    spr = new_spr;
  }
  virtual std::string toString() override {
    std::string res="<operator'" + val + "'>";
    return res;
  }
};

struct BinOperator : public Operator {
  Exp* lhs;
  Exp* rhs;
  BinOperator(int new_pos, std::string new_val, int64_t new_priority,
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
  UnaryOperator(int new_pos, std::string new_val, int64_t new_priority,
    Exp* new_child) {
    pos = new_pos;
    val = new_val;
    priority = new_priority;
    child = new_child;
  }
};

struct PrefixOperator : public UnaryOperator {
  PrefixOperator(int new_pos, std::string new_val, int64_t new_priority,
    Exp* new_child)
    : UnaryOperator(new_pos, new_val, new_priority, new_child) {}
};

struct PostfixOperator : public UnaryOperator {
  PostfixOperator(int new_pos, std::string new_val, int64_t new_priority,
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