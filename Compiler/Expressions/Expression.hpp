#pragma once
#include "..\Lang\Types.hpp"

struct Exp {
  int pos;
  Type type;
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
  Exp* operand;
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

Tuple* castToTuple(Exp* exp) {
  if (exp) {
    if (auto tuple = dynamic_cast<Tuple*>(exp)) return tuple;
    Operator* op = dynamic_cast<Operator*>(exp);
    return new Tuple(op->priority, { op });
  }
  return nullptr;
}

struct VarDecl : public Exp {
  std::string name;
};
