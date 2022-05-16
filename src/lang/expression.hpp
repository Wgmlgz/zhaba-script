#pragma once
#include "../parser/lexer.hpp"
#include "types.hpp"
#include "../tree_lib/TreeLib.hpp"

struct Function;

namespace zhexp {
struct Exp {
  const Token &begin, &end;
  types::Type type;
  Exp(const Token &new_begin, const Token &new_end);
  virtual ~Exp();
  virtual std::string toString();
};

struct Tuple : public Exp {
  std::vector<Exp *> content;
  Tuple(const Token &new_begin, const Token &new_end);
  Tuple(const Token &new_begin, const Token &new_end,
        std::vector<Exp *> new_content);
  std::string toString() override;
};

class Variable : public Exp {
  std::string name;
  types::Type var_type;
  int64_t id;
 public:
  Variable(const Token &new_begin, const Token &new_end, std::string new_name,
           const types::Type &new_type, const int64_t &new_id);
  std::string toString() override;
  std::string getName();
  types::Type getType();
  std::int64_t getId();
};

struct Literal : public Exp {
  Literal(const Token &new_begin, const Token &new_end);
};

struct TypeLiteral : public Literal {
  types::Type literal_type;
  TypeLiteral(const Token &new_begin, const Token &new_end,
              const types::Type &new_type);
  std::string toString() override;
};


#define MAKE_LITERAL_DECL(name, type, parent, print_type)             \
  struct name : public parent {                                       \
    type val;                                                         \
    name(const Token& new_begin, const Token& new_end, type new_val); \
    std::string toString() override;                                  \
  };

MAKE_LITERAL_DECL(I8Literal, int8_t, Literal, "i8");
MAKE_LITERAL_DECL(I16Literal, int16_t, Literal, "i16");
MAKE_LITERAL_DECL(I32Literal, int32_t, Literal, "i32");
MAKE_LITERAL_DECL(I64Literal, int64_t, Literal, "i64");

MAKE_LITERAL_DECL(U8Literal, uint8_t, Literal, "u8");
MAKE_LITERAL_DECL(U16Literal, uint16_t, Literal, "u16");
MAKE_LITERAL_DECL(U32Literal, uint32_t, Literal, "u32");
MAKE_LITERAL_DECL(U64Literal, uint64_t, Literal, "u64");

MAKE_LITERAL_DECL(F32Literal, float, Literal, "f32");
MAKE_LITERAL_DECL(F64Literal, double, Literal, "f64");

MAKE_LITERAL_DECL(BoolLiteral, bool, Literal, "bool");
MAKE_LITERAL_DECL(CharLiteral, char, Literal, "char");
MAKE_LITERAL_DECL(FnLiteral, Function *, Literal, "F");

struct StrLiteral : public Literal {
  std::string val;
  StrLiteral(const Token &new_begin, const Token &new_end, std::string new_val);
  std::string toString() override;
};

struct IdLiteral : public Literal {
  std::string val;
  IdLiteral(const Token &new_begin, const Token &new_end, std::string new_val);
  std::string toString() override;
};

struct FlowOperator : public Exp {
  std::string val;
  Exp *operand = nullptr;
  FlowOperator(const Token &new_begin, const Token &new_end,
               std::string new_val, Exp *new_operand);
};

struct Operator : public Exp {
  std::string val;
  Function *func = nullptr;
  Operator(const Token &new_begin, const Token &new_end);
  Operator(const Token &new_begin, const Token &new_end, std::string new_val);
  std::string toString() override;
};

struct BinOperator : public Operator {
  Exp *lhs;
  Exp *rhs;
  BinOperator(const Token &new_begin, const Token &new_end, std::string new_val,
              Exp *new_lhs, Exp *new_rhs);
};

struct UnaryOperator : public Operator {
  Exp *child;
  UnaryOperator(const Token &new_begin, const Token &new_end,
                std::string new_val, Exp *new_child);
};

struct PrefixOperator : public UnaryOperator {
  PrefixOperator(const Token &new_begin, const Token &new_end,
                 std::string new_val, Exp *new_child);
};

struct PostfixOperator : public UnaryOperator {
  PostfixOperator(const Token &new_begin, const Token &new_end,
                  std::string new_val, Exp *new_child);
};

void castTreeToTupleDfs(Exp *exp, Tuple *&tuple);

Tuple *castTreeToTuple(Exp *exp);

Tuple *castToTuple(Exp *exp);

void operator+=(Tuple &a, const Tuple &b);

TreeNode<std::string> *toGenericTree(Exp *exp);
void printGenericTree(Exp *exp);
void printExpTree(Exp *exp, const std::string& prefix = "");

}