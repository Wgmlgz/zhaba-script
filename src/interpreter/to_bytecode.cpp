#include "to_bytecode.hpp"

namespace zhin{

int getLabel() {
  static int id = 100;
  return id++;
}

int pushLiteral(zhin::ByteCode& bytecode, const byte* begin, const byte* end) {
  static int literal_id = 10;
  auto v = std::vector(begin, end);
  bytecode.literals_data.emplace(literal_id, v);
  return literal_id++;
}

void argsToB(zhin::ByteCode& bytecode, zhexp::Exp* exp, Function* fn,
             FuncData& funcdata) {
  auto tuple = zhexp::castToTuple(exp);
  for (int i = 0; i < tuple->content.size(); ++i) {
    expToB(bytecode, tuple->content[i], funcdata);
    if (fn->args[i].type.getRef()) {
      if (!tuple->content[i]->type.getLval())
        throw ParserError(
            tuple->content[i]->begin, tuple->content[i]->end,
            "Expression must be lval to be able pass by reference");
      /** pop deref + int */
      bytecode.popBytes(5);
    }
  }
}

void expToB(zhin::ByteCode& bytecode, zhexp::Exp* exp, FuncData& funcdata) {
  if (auto lt = dynamic_cast<zhexp::I8Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_8);
    bytecode.pushVal((int8_t)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::I16Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_16);
    bytecode.pushVal((int16_t)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::I32Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_32);
    bytecode.pushVal((int32_t)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::I64Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_64);
    bytecode.pushVal((int64_t)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::U8Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_8);
    bytecode.pushVal((uint8_t)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::U16Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_16);
    bytecode.pushVal((uint16_t)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::U32Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_32);
    bytecode.pushVal((uint32_t)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::U64Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_64);
    bytecode.pushVal((uint64_t)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::BoolLiteral*>(exp)) {
    bytecode.pushVal(zhin::instr::push_8);
    bytecode.pushVal((bool)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::CharLiteral*>(exp)) {
    bytecode.pushVal(zhin::instr::push_8);
    bytecode.pushVal((char)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::StrLiteral*>(exp)) {
    auto lid =
        pushLiteral(bytecode, reinterpret_cast<const byte*>(lt->val.c_str()),
                    reinterpret_cast<const byte*>(lt->val.c_str() +
                        strlen(lt->val.c_str()) + 1));
    bytecode.pushVal(zhin::instr::push_literal_ptr);
    bytecode.pushVal((int32_t)(lid));
  } else if (auto op = dynamic_cast<zhexp::BinOperator*>(exp)) {
    if (op->val == "as") {
      /** I believe in weak typing supremacy 💪 */
      auto type_a = op->lhs->type;
      auto type_b = static_cast<zhexp::TypeLiteral*>(op->rhs)->literal_type;
      auto size_a = type_a.getSize();
      auto size_b = type_b.getSize();
      if (size_a != size_b)
        throw ParserError(
            op->begin, op->end,
            "Attempt to cast types with different sizes: " + type_a.toString() +
                "(" + std::to_string(size_a) + ") and " + type_a.toString() +
                "(" + std::to_string(size_b) + ")");
      expToB(bytecode, op->lhs, funcdata);
    } else if (op->val == "=") {
      expToB(bytecode, op->lhs, funcdata);
      /** pop deref + int */
      bytecode.popBytes(5);
      expToB(bytecode, op->rhs, funcdata);
      bytecode.pushVal(zhin::instr::assign);
      bytecode.pushVal((int32_t)(op->lhs->type.getSizeNonRef()));
    } else if (op->val == ".") {
      expToB(bytecode, op->lhs, funcdata);

      if (!op->lhs->type.getPtr()) {
        /** pop deref + int */
        bytecode.popBytes(5);
      }
      bytecode.pushVal(zhin::instr::push_64);
      bytecode.pushVal(
          (int64_t)(bytecode.structs_members_offsets
          [op->lhs->type.getTypeId()]
          [static_cast<zhexp::IdLiteral*>(op->rhs)->val])
      );
      bytecode.pushVal(zhin::instr::add_i64);
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(op->type.getSize()));
    } else {
      /** C operators */
      if (op->func && op->func->is_C) {
        expToB(bytecode, op->lhs, funcdata);
        expToB(bytecode, op->rhs, funcdata);
        if (false) {}
#define BOP_BYTECODE(name, type_, instr_)                      \
  else if (op->val == #name &&                                \
           op->lhs->type.getTypeId() == types::TYPE::type_ && \
           op->lhs->type.getTypeId() == types::TYPE::type_) { \
    bytecode.pushVal(zhin::instr::instr_);                    \
  }
        BOP_BYTECODE(+, i8T, add_i8)
        BOP_BYTECODE(-, i8T, sub_i8)
        BOP_BYTECODE(*, i8T, mul_i8)
        BOP_BYTECODE(==, i8T, eq_8)
        BOP_BYTECODE(!=, i8T, uneq_8)
        BOP_BYTECODE(/, i8T, div_i8)
        BOP_BYTECODE(%, i8T, mod_i8)
        BOP_BYTECODE(<, i8T, less_i8)
        BOP_BYTECODE(>, i8T, more_i8)
        BOP_BYTECODE(<=, i8T, lesseq_i8)
        BOP_BYTECODE(>=, i8T, moreeq_i8)

        BOP_BYTECODE(+, i16T, add_i16)
        BOP_BYTECODE(-, i16T, sub_i16)
        BOP_BYTECODE(*, i16T, mul_i16)
        BOP_BYTECODE(==, i16T, eq_16)
        BOP_BYTECODE(!=, i16T, uneq_16)
        BOP_BYTECODE(/, i16T, div_i16)
        BOP_BYTECODE(%, i16T, mod_i16)
        BOP_BYTECODE(<, i16T, less_i16)
        BOP_BYTECODE(>, i16T, more_i16)
        BOP_BYTECODE(<=, i16T, lesseq_i16)
        BOP_BYTECODE(>=, i16T, moreeq_i16)

        BOP_BYTECODE(+, i32T, add_i32)
        BOP_BYTECODE(-, i32T, sub_i32)
        BOP_BYTECODE(*, i32T, mul_i32)
        BOP_BYTECODE(==, i32T, eq_32)
        BOP_BYTECODE(!=, i32T, uneq_32)
        BOP_BYTECODE(/, i32T, div_i32)
        BOP_BYTECODE(%, i32T, mod_i32)
        BOP_BYTECODE(<, i32T, less_i32)
        BOP_BYTECODE(>, i32T, more_i32)
        BOP_BYTECODE(<=, i32T, lesseq_i32)
        BOP_BYTECODE(>=, i32T, moreeq_i32)

        BOP_BYTECODE(+, i64T, add_i64)
        BOP_BYTECODE(-, i64T, sub_i64)
        BOP_BYTECODE(*, i64T, mul_i64)
        BOP_BYTECODE(==, i64T, eq_64)
        BOP_BYTECODE(!=, i64T, uneq_64)
        BOP_BYTECODE(/, i64T, div_i64)
        BOP_BYTECODE(%, i64T, mod_i64)
        BOP_BYTECODE(<, i64T, less_i64)
        BOP_BYTECODE(>, i64T, more_i64)
        BOP_BYTECODE(<=, i64T, lesseq_i64)
        BOP_BYTECODE(>=, i64T, moreeq_i64)

        BOP_BYTECODE(+, u8T, add_u8)
        BOP_BYTECODE(-, u8T, sub_u8)
        BOP_BYTECODE(*, u8T, mul_u8)
        BOP_BYTECODE(==, u8T, eq_8)
        BOP_BYTECODE(!=, u8T, uneq_8)
        BOP_BYTECODE(/, u8T, div_u8)
        BOP_BYTECODE(%, u8T, mod_u8)
        BOP_BYTECODE(<, u8T, less_u8)
        BOP_BYTECODE(>, u8T, more_u8)
        BOP_BYTECODE(<=, u8T, lesseq_u8)
        BOP_BYTECODE(>=, u8T, moreeq_u8)

        BOP_BYTECODE(==, charT, eq_8)
        BOP_BYTECODE(!=, charT, uneq_8)
        BOP_BYTECODE(<, charT, less_u8)
        BOP_BYTECODE(>, charT, more_u8)
        BOP_BYTECODE(<=, charT, lesseq_u8)
        BOP_BYTECODE(>=, charT, moreeq_u8)

        BOP_BYTECODE(+, u16T, add_u16)
        BOP_BYTECODE(-, u16T, sub_u16)
        BOP_BYTECODE(*, u16T, mul_u16)
        BOP_BYTECODE(==, u16T, eq_16)
        BOP_BYTECODE(!=, u16T, uneq_16)
        BOP_BYTECODE(/, u16T, div_u16)
        BOP_BYTECODE(%, u16T, mod_u16)
        BOP_BYTECODE(<, u16T, less_u16)
        BOP_BYTECODE(>, u16T, more_u16)
        BOP_BYTECODE(<=, u16T, lesseq_u16)
        BOP_BYTECODE(>=, u16T, moreeq_u16)

        BOP_BYTECODE(+, u32T, add_u32)
        BOP_BYTECODE(-, u32T, sub_u32)
        BOP_BYTECODE(*, u32T, mul_u32)
        BOP_BYTECODE(==, u32T, eq_32)
        BOP_BYTECODE(!=, u32T, uneq_32)
        BOP_BYTECODE(/, u32T, div_u32)
        BOP_BYTECODE(%, u32T, mod_u32)
        BOP_BYTECODE(<, u32T, less_u32)
        BOP_BYTECODE(>, u32T, more_u32)
        BOP_BYTECODE(<=, u32T, lesseq_u32)
        BOP_BYTECODE(>=, u32T, moreeq_u32)

        BOP_BYTECODE(+, u64T, add_u64)
        BOP_BYTECODE(-, u64T, sub_u64)
        BOP_BYTECODE(*, u64T, mul_u64)
        BOP_BYTECODE(==, u64T, eq_64)
        BOP_BYTECODE(!=, u64T, uneq_64)
        BOP_BYTECODE(/, u64T, div_u64)
        BOP_BYTECODE(%, u64T, mod_u64)
        BOP_BYTECODE(<, u64T, less_u64)
        BOP_BYTECODE(>, u64T, more_u64)
        BOP_BYTECODE(<=, u64T, lesseq_u64)
        BOP_BYTECODE(>=, u64T, moreeq_u64)

        BOP_BYTECODE(&&, boolT, and_bool)
        BOP_BYTECODE(||, boolT, or_bool)
        else {
          throw ParserError(op->begin, op->end, "unimplemented C op " + op->val + " " +
              op->lhs->type.toString() + " " +
              op->rhs->type.toString());
        }
      } else {
        auto lhs_tuple = castToTuple(op->lhs);
        auto rhs_tuple = castToTuple(op->rhs);
        *lhs_tuple += *rhs_tuple;
        argsToB(bytecode, lhs_tuple, op->func, funcdata);
        bytecode.pushVal(zhin::instr::call);
        bytecode.pushVal(
            (int32_t)(bytecode.func_labels[op->func->toUniqueStr()]));
      }
    }
  } else if (auto op = dynamic_cast<zhexp::PrefixOperator*>(exp)) {
    /** C operators */

    auto a = (&"aboba");
    if (op->func && op->func->is_C) {
      expToB(bytecode, op->child, funcdata);
      if (0) {
      }
#define MAKE_LOP_BYTECODE(name, type_, impl_)                         \
  else if (op->val == #name &&                                  \
           op->child->type.getTypeId() == types::TYPE::type_) { \
    impl_;                                                      \
  }
#define MAKE_VOID_LOP_BYTECODE(name, impl_)                               \
  else if (op->val == #name && dynamic_cast<zhexp::Tuple*>(op->child) &&  \
           dynamic_cast<zhexp::Tuple*>(op->child)->content.empty()) { \
    impl_;                                                                \
  }
      MAKE_VOID_LOP_BYTECODE(in_i8,  bytecode.pushVal(zhin::instr::in_i8))
      MAKE_VOID_LOP_BYTECODE(in_i16, bytecode.pushVal(zhin::instr::in_i16))
      MAKE_VOID_LOP_BYTECODE(in_i32, bytecode.pushVal(zhin::instr::in_i32))
      MAKE_VOID_LOP_BYTECODE(in_i64, bytecode.pushVal(zhin::instr::in_i64))

      MAKE_VOID_LOP_BYTECODE(in_u8,  bytecode.pushVal(zhin::instr::in_u8))
      MAKE_VOID_LOP_BYTECODE(in_u16, bytecode.pushVal(zhin::instr::in_u16))
      MAKE_VOID_LOP_BYTECODE(in_u32, bytecode.pushVal(zhin::instr::in_u32))
      MAKE_VOID_LOP_BYTECODE(in_u64, bytecode.pushVal(zhin::instr::in_u64))

      MAKE_VOID_LOP_BYTECODE(in_char, bytecode.pushVal(zhin::instr::in_char))
      MAKE_VOID_LOP_BYTECODE(in_str,  bytecode.pushVal(zhin::instr::in_str))

      MAKE_VOID_LOP_BYTECODE(in_bool, bytecode.pushVal(zhin::instr::in_bool))

      MAKE_VOID_LOP_BYTECODE(in_f4,  bytecode.pushVal(zhin::instr::in_f4))
      MAKE_VOID_LOP_BYTECODE(in_f8,  bytecode.pushVal(zhin::instr::in_f8))
      MAKE_VOID_LOP_BYTECODE(in_f10, bytecode.pushVal(zhin::instr::in_f10))

      MAKE_LOP_BYTECODE(!, boolT, bytecode.pushVal(zhin::instr::not_bool))
      MAKE_LOP_BYTECODE(!, charT,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(1))))
      MAKE_LOP_BYTECODE(!, i8T,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(1))))
      MAKE_LOP_BYTECODE(!, i16T,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(2))))
      MAKE_LOP_BYTECODE(!, i32T,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(4))))
      MAKE_LOP_BYTECODE(!, i64T,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(8))))
      MAKE_LOP_BYTECODE(!, u8T,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(1))))
      MAKE_LOP_BYTECODE(!, u16T,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(2))))
      MAKE_LOP_BYTECODE(!, u32T,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(4))))
      MAKE_LOP_BYTECODE(!, u64T,
                        (bytecode.pushVal(zhin::instr::not_bytes),
                            bytecode.pushVal(static_cast<int32_t>(8))))

      MAKE_LOP_BYTECODE(put, i8T, bytecode.pushVal(zhin::instr::put_i8))
      MAKE_LOP_BYTECODE(out, i8T, bytecode.pushVal(zhin::instr::out_i8))

      MAKE_LOP_BYTECODE(put, i16T, bytecode.pushVal(zhin::instr::put_i16))
      MAKE_LOP_BYTECODE(out, i16T, bytecode.pushVal(zhin::instr::out_i16))

      MAKE_LOP_BYTECODE(put, i32T, bytecode.pushVal(zhin::instr::put_i32))
      MAKE_LOP_BYTECODE(out, i32T, bytecode.pushVal(zhin::instr::out_i32))

      MAKE_LOP_BYTECODE(put, i64T, bytecode.pushVal(zhin::instr::put_i64))
      MAKE_LOP_BYTECODE(out, i64T, bytecode.pushVal(zhin::instr::out_i64))

      MAKE_LOP_BYTECODE(put, u8T, bytecode.pushVal(zhin::instr::put_u8))
      MAKE_LOP_BYTECODE(out, u8T, bytecode.pushVal(zhin::instr::out_u8))

      MAKE_LOP_BYTECODE(put, u16T, bytecode.pushVal(zhin::instr::put_u16))
      MAKE_LOP_BYTECODE(out, u16T, bytecode.pushVal(zhin::instr::out_u16))

      MAKE_LOP_BYTECODE(put, u32T, bytecode.pushVal(zhin::instr::put_u32))
      MAKE_LOP_BYTECODE(out, u32T, bytecode.pushVal(zhin::instr::out_u32))

      MAKE_LOP_BYTECODE(put, u64T, bytecode.pushVal(zhin::instr::put_u64))
      MAKE_LOP_BYTECODE(out, u64T, bytecode.pushVal(zhin::instr::out_u64))

      MAKE_LOP_BYTECODE(put, strT, bytecode.pushVal(zhin::instr::put_str))
      MAKE_LOP_BYTECODE(out, strT, bytecode.pushVal(zhin::instr::out_str))

      MAKE_LOP_BYTECODE(put, charT, bytecode.pushVal(zhin::instr::put_char))
      MAKE_LOP_BYTECODE(out, charT, bytecode.pushVal(zhin::instr::out_char))

      MAKE_LOP_BYTECODE(put, boolT, bytecode.pushVal(zhin::instr::put_u8))
      MAKE_LOP_BYTECODE(out, boolT, bytecode.pushVal(zhin::instr::out_u8))

      MAKE_LOP_BYTECODE(malloc, i64T, bytecode.pushVal(zhin::instr::malloc))
      MAKE_LOP_BYTECODE(free, i64T, bytecode.pushVal(zhin::instr::malloc))
      else {
        throw ParserError("unimplemented C op");
      }
    } else if (op->val == "&") {
      expToB(bytecode, op->child, funcdata);
      /** pop deref + int */
      bytecode.popBytes(5);
    } else if (op->val == "*") {
      expToB(bytecode, op->child, funcdata);
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(op->type.getSize()));
    } else {
      argsToB(bytecode, op->child, op->func, funcdata);
      bytecode.pushVal(zhin::instr::call);
      bytecode.pushVal((int32_t)(bytecode.func_labels[op->func->toUniqueStr()]));
    }
  } else if (auto var = dynamic_cast<zhexp::Variable*>(exp)) {
    bytecode.pushVal(zhin::instr::push_stack_ptr);
    bytecode.pushVal((int64_t)(funcdata.offsets[var->getName()].back()));

    if (var->getType().getRef()) {
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(8));
    }
    bytecode.pushVal(zhin::instr::deref);
    bytecode.pushVal((int32_t)(var->type.getSizeNonRef()));
  } else if (auto op = dynamic_cast<zhexp::PostfixOperator*>(exp)) {
    argsToB(bytecode, op->child, op->func, funcdata);
    bytecode.pushVal(zhin::instr::call);
    bytecode.pushVal((int32_t)(bytecode.func_labels[op->func->toUniqueStr()]));
  } else if (auto tuple = dynamic_cast<zhexp::Tuple*>(exp)) {
    for (auto& i : tuple->content) expToB(bytecode, i, funcdata);
  } else {
    throw ParserError("unimplemented expToB ");
  }
}

void nodeToB(zhin::ByteCode& bytecode, STNode* node, FuncData& funcdata) {
  if (auto exp = dynamic_cast<STExp*>(node)) {
    expToB(bytecode, exp->exp, funcdata);
    /** pop unused return value */
    bytecode.push_pop_bytes(exp->exp->type.getSize());
  } else if (auto ret = dynamic_cast<STRet*>(node)) {
    expToB(bytecode, ret->exp, funcdata);
    /** Write return value to args pos */
    bytecode.pushVal(zhin::instr::ret);
    bytecode.pushVal((int32_t)(funcdata.args_size));
    bytecode.pushVal((int32_t)(ret->exp->type.getSize()));
  } else if (auto stif = dynamic_cast<STIf*>(node)) {
    /**
     * exp_if
     *  jmp <if>
     *
     * exp_elif0
     *  jmp <elif0>
     *
     * exp_elif1
     *  jmp <elif0>
     *
     * <else>
     *  jmp end
     *
     * label: if
     * <if>
     *  jmp end
     *
     * label: elif 0
     * <elif 0>
     *  jmp end
     *
     * label: elif 1
     * <elif 1>
     *  jmp end
     *
     * label: end
     */

    /** exp_if */
    auto end_l = getLabel();
    auto if_l = getLabel();
    expToB(bytecode, stif->condition, funcdata);
    bytecode.pushVal(zhin::instr::jmp_if_bool);
    bytecode.pushVal((int32_t)(if_l));

    /** exp_elif */
    std::vector<int> elif_l(stif->elseif_body.size());
    for (int i = 0; i < stif->elseif_body.size(); ++i) {
      elif_l[i] = getLabel();
      expToB(bytecode, stif->elseif_body[i].first, funcdata);
      bytecode.pushVal(zhin::instr::jmp_if_bool);
      bytecode.pushVal((int32_t)(elif_l[i]));
    }

    /** <else> */
    if (stif->else_body)
      blockToB(bytecode, stif->else_body, funcdata);
    bytecode.pushVal(zhin::instr::jmp);
    bytecode.pushVal((int32_t)(end_l));

    /** <if> */
    bytecode.pushVal(zhin::instr::label);
    bytecode.pushVal((int32_t)(if_l));
    blockToB(bytecode, stif->body, funcdata);
    bytecode.pushVal(zhin::instr::jmp);
    bytecode.pushVal((int32_t)(end_l));

    for (int i = 0; i < stif->elseif_body.size(); ++i) {
      bytecode.pushVal(zhin::instr::label);
      bytecode.pushVal((int32_t)(elif_l[i]));
      blockToB(bytecode, stif->elseif_body[i].second, funcdata);
      bytecode.pushVal(zhin::instr::jmp);
      bytecode.pushVal((int32_t)(end_l));
    }
    bytecode.pushVal(zhin::instr::label);
    bytecode.pushVal((int32_t)(end_l));
  } else if (auto stwhile = dynamic_cast<STWhile*>(node)) {
    /**
     *  label: begin
     * exp
     * jmp_if loop
     * jmp end
     *  label: loop
     * body
     * jmp begin
     *   label: end
     */
    const auto begin_l = getLabel();
    const auto end_l = getLabel();
    const auto loop_l = getLabel();

    bytecode.pushVal(zhin::instr::label);
    bytecode.pushVal((int32_t)(begin_l));
    expToB(bytecode, stwhile->condition, funcdata);
    bytecode.pushVal(zhin::instr::jmp_if_bool);
    bytecode.pushVal((int32_t)(loop_l));
    bytecode.pushVal(zhin::instr::jmp);
    bytecode.pushVal((int32_t)(end_l));
    bytecode.pushVal(zhin::instr::label);
    bytecode.pushVal((int32_t)(loop_l));
    blockToB(bytecode, stwhile->body, funcdata);
    bytecode.pushVal(zhin::instr::jmp);
    bytecode.pushVal((int32_t)(begin_l));
    bytecode.pushVal(zhin::instr::label);
    bytecode.pushVal((int32_t)(end_l));
  } else if (auto block = dynamic_cast<STBlock*>(node)) {
    blockToB(bytecode, block, funcdata);
  } else {
    throw ParserError("unimplemented nodeToB");
  }
}

void blockToB(zhin::ByteCode& bytecode, STBlock* block, FuncData& funcdata) {
  /** Push local vars info */
  size_t local_vars_size = 0;
  for (const auto& [name, type] : block->scope_info.vars) {
    funcdata.offsets[name].push_back(funcdata.offset);
    funcdata.offset += type.getSize();
    local_vars_size += type.getSize();
  }
  bytecode.push_push_bytes(local_vars_size);

  for (auto& i : block->nodes)
    nodeToB(bytecode, i, funcdata);

  /** Pop local vars info */
  for (const auto& [name, type] : block->scope_info.vars) {
    funcdata.offsets[name].pop_back();
    funcdata.offset -= type.getSize();
  }
  bytecode.push_pop_bytes(local_vars_size);
}

#define MAIN_LABEL 1
#define END_LABEL 0

void funcToB(zhin::ByteCode& bytecode, Function* func) {
  FuncData funcdata;
  for (const auto& [name, type] : func->args) {
    funcdata.offset -= type.getSize();
    funcdata.args_size += type.getSize();
  }
  for (const auto& [name, type] : func->args) {
    funcdata.offsets[name].push_back(funcdata.offset);
    funcdata.offset += type.getSize();
  }

  bytecode.pushVal(zhin::instr::label);
  bytecode.pushVal((int32_t)(bytecode.func_labels[func->toUniqueStr()]));
  blockToB(bytecode, func->body, funcdata);

  /** Implicit return for safety when flow reached end of the function */
  bytecode.push_push_bytes(func->type.getSize());
  bytecode.pushVal(zhin::instr::ret);
  bytecode.pushVal((int32_t)(funcdata.args_size));
  bytecode.pushVal((int32_t)(func->type.getSize()));
}

void toB(zhin::ByteCode& bytecode, STTree* block) {
  /** Structs members offsets calculation */
  for (const auto& [struct_id, struct_name] : zhdata.struct_names) {
    int offset = 0;
    auto& struct_map = bytecode.structs_members_offsets[struct_id];
    const auto& struct_info = zhdata.structs[struct_id];
    for (const auto& member_name : struct_info.members_list) {
      struct_map[member_name] = offset;
      offset += struct_info.members.at(member_name).getSize();
    }
  }

  /** Pre generate function labels */
  for (auto& func : block->functions) {
    bytecode.func_labels[func->toUniqueStr()] =
        (func->name == "main") ? MAIN_LABEL : getLabel();
  }
  /** Jmp to unique main fn */
  bytecode.pushVal(zhin::instr::call);
  bytecode.pushVal((int32_t)(MAIN_LABEL));
  /** Jmp to unique end label */
  bytecode.pushVal(zhin::instr::jmp);
  bytecode.pushVal((int32_t)(END_LABEL));

  for (auto& i : block->functions) {
    funcToB(bytecode, i);
  }

  for (auto& [id, data] : bytecode.literals_data) {
    bytecode.pushVal(zhin::instr::label_data);
    bytecode.pushVal(static_cast<int32_t>(id));
    bytecode.pushVal(static_cast<int32_t>(data.size()));
    bytecode.pushVal(data.begin(), data.end());
  }

  /** Unique end label */
  bytecode.pushVal(zhin::instr::label);
  bytecode.pushVal((int32_t)(END_LABEL));
}
}
