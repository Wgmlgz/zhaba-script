#pragma once
#include <string>
#include "Types.hpp"
#include "../TreeLib/TreeLib.hpp"
#include "../Parser/Parser.hpp"

struct Function;

namespace zhexp {
struct Exp {
  const Token& begin, & end; 
  types::Type type = types::Type(types::TYPE::voidT);
  Exp(const Token& new_begin, const Token& new_end) :
    begin(new_begin), end(new_end) {}
  virtual ~Exp() {}
  virtual std::string toString() {
    return "<empty>";
  }
};

struct Tuple : public Exp {
  int64_t priority;
  std::vector<Exp*> content;
  Tuple(const Token& new_begin, const Token& new_end)
    : Exp(new_begin, new_end) {}
  Tuple(const Token& new_begin, const Token& new_end, int64_t new_priority,
        std::vector<Exp*> new_content)
      : Exp(new_begin, new_end), priority(new_priority), content(new_content) {}
  virtual std::string toString() override {
    std::string res="<tuple{";
    for (auto& i : content) {
      res += i->toString() + " ";
    }
    res += ">";
    return res;
  }
};

class Variable : public Exp {
  std::string name;
  types::Type var_type;
 public:
  Variable(const Token& new_begin, const Token& new_end,
           const std::string& new_name, const types::Type& new_type)
      : Exp(new_begin, new_end), name(new_name), var_type(new_type) {}
  virtual std::string toString() override {
    std::string res="<variable'" + name + "'>";
    return res;
  }
  auto getName() { return name; }
  auto getType() { return var_type; }
};

struct Literal : public Exp {
  Literal(const Token& new_begin, const Token& new_end)
      : Exp(new_begin, new_end) {}
};

struct TypeLiteral : public Literal {
  types::Type literal_type;
  TypeLiteral(const Token& new_begin, const Token& new_end,
              types::Type new_type)
      : Literal(new_begin, new_end) {
    literal_type = new_type;
    type = types::TYPE::voidT;
  }
  virtual std::string toString() override {
    std::string res = "<typeL'" + literal_type.toString() + "'>";
    return res;
  }
};

// struct IntLiteral : public Literal {
//   IntLiteral(const Token& new_begin, const Token& new_end)
//     : Literal(new_begin, new_end) {}
//   virtual std::string toString() override {
//     return "<int>";
//   }
// };
#define MAKE_LITERAL(name, type, parent, print_type)                 \
  struct name : public parent {                                      \
    type val;                                                        \
    name(const Token& new_begin, const Token& new_end, type new_val) \
        : parent(new_begin, new_end), val(new_val) {}                \
    virtual std::string toString() override {                        \
      return "<" print_type + std::to_string(val) + ">";             \
    }                                                                \
  };

MAKE_LITERAL(I8Literal, int8_t, Literal, "i8");
MAKE_LITERAL(I16Literal, int16_t, Literal, "i16");
MAKE_LITERAL(I32Literal, int32_t, Literal, "i32");
MAKE_LITERAL(I64Literal, int64_t, Literal, "i64");

MAKE_LITERAL(U8Literal, uint8_t, Literal, "u8");
MAKE_LITERAL(U16Literal, uint16_t, Literal, "u16");
MAKE_LITERAL(U32Literal, uint32_t, Literal, "u32");
MAKE_LITERAL(U64Literal, uint64_t, Literal, "u64");

struct StrLiteral : public Literal {
  std::string val;
  StrLiteral(const Token& new_begin, const Token& new_end, std::string new_val)
    : Literal(new_begin, new_end) {
    val = new_val;
  }
  virtual std::string toString() override {
    std::string res="<str'" + val + "'>";
    return res;
  }
};

struct IdLiteral : public Literal {
  std::string val;
  IdLiteral(const Token& new_begin, const Token& new_end, std::string new_val)
      : Literal(new_begin, new_end) {
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
  FlowOperator(const Token& new_begin, const Token& new_end,
               std::string new_val, Exp* new_operand)
      : Exp(new_begin, new_end) {
    val = new_val;
    operand = new_operand;
  }
};

struct CCode : public Exp {
  std::string code;
  CCode(const Token& new_begin, const Token& new_end, std::string new_code)
      : Exp(new_begin, new_end) {
    code = new_code;
  }
};

struct Operator : public Exp {
  std::string val;
  Function* func = nullptr;
  int64_t priority = -666;
  size_t spl = 0, spr = 0;
  Operator(const Token& new_begin, const Token& new_end)
      : Exp(new_begin, new_end) {}
  Operator(const Token& new_begin, const Token& new_end, std::string new_val,
           int64_t new_priority, size_t new_spl, size_t new_spr)
      : Exp(new_begin, new_end) {
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
  BinOperator(const Token& new_begin, const Token& new_end, std::string new_val,
              int64_t new_priority, Exp* new_lhs, Exp* new_rhs)
      : Operator(new_begin, new_end) {
    val = new_val;
    priority = new_priority;
    lhs = new_lhs;
    rhs = new_rhs;
  }
};

struct UnaryOperator : public Operator {
  Exp* child;
  UnaryOperator(const Token& new_begin, const Token& new_end,
                std::string new_val, int64_t new_priority, Exp* new_child)
      : Operator(new_begin, new_end) {
    val = new_val;
    priority = new_priority;
    child = new_child;
  }
};

struct PrefixOperator : public UnaryOperator {
  PrefixOperator(const Token& new_begin, const Token& new_end,
                 std::string new_val, int64_t new_priority, Exp* new_child)
      : UnaryOperator(new_begin, new_end, new_val, new_priority, new_child) {}
};

struct PostfixOperator : public UnaryOperator {
  PostfixOperator(const Token& new_begin, const Token& new_end,
                  std::string new_val, int64_t new_priority, Exp* new_child)
      : UnaryOperator(new_begin, new_end, new_val, new_priority, new_child) {}
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
    auto tuple = new Tuple(exp->begin, exp->end);
    castTreeToTupleDfs(exp, tuple);
    return tuple;
  }
  return nullptr;
}

Tuple* castToTuple(Exp* exp) {
  if (exp) {
    if (auto tuple = dynamic_cast<Tuple*>(exp)) return tuple;
    return new Tuple(exp->begin, exp->end, 0, { exp });
  }
  return nullptr;
}

void operator+=(Tuple& a, const Tuple& b) {
  for (const auto& i : b.content)
    a.content.push_back(i);
}

TreeNode<std::string>* toGenericTree(Exp* exp) {
  if (!exp) return new TreeNode<std::string>("<nullptr>");
  auto node = new TreeNode<std::string>;
  if (auto op = dynamic_cast<CCode*>(exp)) {
    node->data = "cpp: '" + op->code + "'";
  }
  if (auto op = dynamic_cast<FlowOperator*>(exp)) {
    node->data = "'" + op->val + "'";
    node->branches.push_back(toGenericTree(op->operand));
  }
  if (auto op = dynamic_cast<I8Literal*>(exp))
    node->data = "'" + std::to_string(op->val) + "' i8L";
  if (auto op = dynamic_cast<I16Literal*>(exp))
    node->data = "'" + std::to_string(op->val) + "' i16L";
  if (auto op = dynamic_cast<I32Literal*>(exp))
    node->data = "'" + std::to_string(op->val) + "' i32L";
  if (auto op = dynamic_cast<I64Literal*>(exp))
    node->data = "'" + std::to_string(op->val) + "' i64L";
  if (auto op = dynamic_cast<U8Literal*>(exp))
    node->data = "'" + std::to_string(op->val) + "' u8L";
  if (auto op = dynamic_cast<U16Literal*>(exp))
    node->data = "'" + std::to_string(op->val) + "' u16L";
  if (auto op = dynamic_cast<U32Literal*>(exp))
    node->data = "'" + std::to_string(op->val) + "' u32L";
  if (auto op = dynamic_cast<U64Literal*>(exp))
    node->data = "'" + std::to_string(op->val) + "' u64L";

  if (auto op = dynamic_cast<StrLiteral*>(exp))
    node->data = "'" + op->val + "' sL";

  if (auto op = dynamic_cast<IdLiteral*>(exp))
    node->data = "'" + op->val + "' idL,";

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