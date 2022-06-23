#include "to_bytecode.hpp"

namespace zhin {

int getLabel() {
  static int id = 100;
  return id++;
}

size_t getSize(zhin::ByteCode& bytecode, const types::Type& slf) {
  return (slf.getPtr() || slf.getRef()) ? 8 : bytecode.sizes.at(slf.getTypeId());
}
size_t getSizeNonRef(zhin::ByteCode& bytecode, const types::Type& slf) {
  return (slf.getPtr()) ? 8 : bytecode.sizes.at(slf.getTypeId());
}
size_t getSizeNonPtr(zhin::ByteCode& bytecode, const types::Type& slf) {
  return (slf.getPtr() > 1 or slf.getRef()) ? 8
                                            : bytecode.sizes.at(slf.getTypeId());
}

int pushLiteral(zhin::ByteCode& bytecode, const byte* begin, const byte* end,
                int id) {
  static int literal_id = 100;
  auto v = std::vector(begin, end);
  bytecode.literals_data.emplace(id ? id : literal_id, v);
  return id ? id : literal_id++;
}

void argsToB(zhin::ByteCode& bytecode, zhexp::Exp* exp,
             const std::vector<types::Type>& types, FuncData& funcdata) {
  auto tuple = zhexp::castToTuple(exp);
  for (int i = 0; i < tuple->content.size(); ++i) {
    expToB(bytecode, tuple->content[i], funcdata);
    if (types[i].getRef()) {
      if (!tuple->content[i]->type.getLval() &&
          !tuple->content[i]->type.getRef())
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
  } else if (auto lt = dynamic_cast<zhexp::F32Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_32);
    bytecode.pushVal((float)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::F64Literal*>(exp)) {
    bytecode.pushVal(zhin::instr::push_64);
    bytecode.pushVal((double)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::BoolLiteral*>(exp)) {
    bytecode.pushVal(zhin::instr::push_8);
    bytecode.pushVal((bool)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::CharLiteral*>(exp)) {
    bytecode.pushVal(zhin::instr::push_8);
    bytecode.pushVal((char)(lt->val));
  } else if (auto lt = dynamic_cast<zhexp::FnLiteral*>(exp)) {
    bytecode.pushVal(zhin::instr::push_32);
    bytecode.pushVal((int32_t)(bytecode.func_labels[lt->val]));
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
      auto size_a = getSize(bytecode, type_a);
      auto size_b = getSize(bytecode, type_b);
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
      bytecode.pushVal((int32_t)(getSizeNonRef(bytecode, op->lhs->type)));
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
                        [static_cast<zhexp::IdLiteral*>(op->rhs)->val]));
      bytecode.pushVal(zhin::instr::i64_add);
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(getSize(bytecode, op->type)));
      if (op->type.getRef()) {
        bytecode.pushVal(zhin::instr::deref);
        bytecode.pushVal((int32_t)(getSizeNonRef(bytecode, op->type)));
      }
    } else if (op->val == ".call.call" && op->lhs->type.isFn()) {
      auto rhs_tuple = castToTuple(op->rhs);
      auto types = op->lhs->type.getTypes();
      types.erase(types.begin());
      argsToB(bytecode, rhs_tuple, types, funcdata);
      expToB(bytecode, op->lhs, funcdata);
      bytecode.pushVal(zhin::instr::call);
    } else {
      /** C operators */
      if (op->func && op->func->defined == DEFINED::core) {
        // auto lhs_tuple = castToTuple(op->lhs);
        // auto rhs_tuple = castToTuple(op->rhs);
        // *lhs_tuple += *rhs_tuple;
        // argsToB(bytecode, lhs_tuple, op->func, funcdata);
        expToB(bytecode, op->lhs, funcdata);
        expToB(bytecode, op->rhs, funcdata);
        if (false) {
        }
#define BOP_BYTECODE(name, type_, instr_)                     \
  else if (op->val == #name &&                                \
           op->lhs->type.getTypeId() == types::type_ && \
           op->lhs->type.getTypeId() == types::type_) { \
    bytecode.pushVal(zhin::instr::instr_);                    \
  }

#define MAKE_INT_BOP(type, zhtype)         \
  BOP_BYTECODE(+,  type, zhtype##_add)     \
  BOP_BYTECODE(-,  type, zhtype##_sub)     \
  BOP_BYTECODE(*,  type, zhtype##_mul)     \
  BOP_BYTECODE(/,  type, zhtype##_div)     \
  BOP_BYTECODE(%,  type, zhtype##_mod)     \
  BOP_BYTECODE(^,  type, zhtype##_bit_xor) \
  BOP_BYTECODE(|||,  type, zhtype##_bit_or)  \
  BOP_BYTECODE(&,  type, zhtype##_bit_and) \
  BOP_BYTECODE(==, type, zhtype##_eq)      \
  BOP_BYTECODE(!=, type, zhtype##_uneq)    \
  BOP_BYTECODE(<,  type, zhtype##_less)    \
  BOP_BYTECODE(>,  type, zhtype##_more)    \
  BOP_BYTECODE(<=, type, zhtype##_lesseq)  \
  BOP_BYTECODE(>=, type, zhtype##_moreeq)

        MAKE_INT_BOP(i8T, i8)
        MAKE_INT_BOP(i16T, i16)
        MAKE_INT_BOP(i32T, i32)
        MAKE_INT_BOP(i64T, i64)
        MAKE_INT_BOP(u8T, u8)
        MAKE_INT_BOP(u16T, u16)
        MAKE_INT_BOP(u32T, u32)
        MAKE_INT_BOP(u64T, u64)
        MAKE_INT_BOP(charT, char)

#define MAKE_FLOAT_BOP(type, zhtype)      \
  BOP_BYTECODE(+,  type, zhtype##_add)    \
  BOP_BYTECODE(-,  type, zhtype##_sub)    \
  BOP_BYTECODE(*,  type, zhtype##_mul)    \
  BOP_BYTECODE(==, type, zhtype##_eq)     \
  BOP_BYTECODE(!=, type, zhtype##_uneq)   \
  BOP_BYTECODE(/,  type, zhtype##_div)    \
  BOP_BYTECODE(<,  type, zhtype##_less)   \
  BOP_BYTECODE(>,  type, zhtype##_more)   \
  BOP_BYTECODE(<=, type, zhtype##_lesseq) \
  BOP_BYTECODE(>=, type, zhtype##_moreeq)

        MAKE_FLOAT_BOP(f32T, f32)
        MAKE_FLOAT_BOP(f64T, f64)

        BOP_BYTECODE(&&, boolT, and_bool)
        BOP_BYTECODE(||, boolT, or_bool)
        else {
          throw ParserError(op->begin, op->end,
                            "unimplemented B op " + op->val + " " +
                                op->lhs->type.toString() + " " +
                                op->rhs->type.toString());
        }
      } else {
        auto lhs_tuple = castToTuple(op->lhs);
        auto rhs_tuple = castToTuple(op->rhs);
        *lhs_tuple += *rhs_tuple;
        argsToB(bytecode, lhs_tuple, op->func->getHead().types, funcdata);
        // expToB(bytecode, op->lhs, funcdata);
        // expToB(bytecode, op->rhs, funcdata);
        bytecode.pushVal(zhin::instr::push_32);
        bytecode.pushVal((int32_t)(bytecode.func_labels[op->func]));
        bytecode.pushVal(zhin::instr::call);
        if (op->type.getRef()) {
          bytecode.pushVal(zhin::instr::deref);
          bytecode.pushVal((int32_t)(getSizeNonRef(bytecode, op->type)));
        }
      }
    }
  } else if (auto op = dynamic_cast<zhexp::PrefixOperator*>(exp)) {
    /** C operators */

    if (op->func && op->func->defined == DEFINED::core) {
      expToB(bytecode, op->child, funcdata);
      if (0) {
      }
#define MAKE_LOP_BYTECODE(name, type_, impl_)                   \
  else if (op->val == #name &&                                  \
           op->child->type.getTypeId() == types::type_) { \
    impl_;                                                      \
  }
#define MAKE_VOID_LOP_BYTECODE(name, impl_)                              \
  else if (op->val == #name && dynamic_cast<zhexp::Tuple*>(op->child) && \
           dynamic_cast<zhexp::Tuple*>(op->child)->content.empty()) {    \
    impl_;                                                               \
  }
      MAKE_VOID_LOP_BYTECODE(in_i8, bytecode.pushVal(zhin::instr::i8_in))
      MAKE_VOID_LOP_BYTECODE(in_i16, bytecode.pushVal(zhin::instr::i16_in))
      MAKE_VOID_LOP_BYTECODE(in_i32, bytecode.pushVal(zhin::instr::i32_in))
      MAKE_VOID_LOP_BYTECODE(in_i64, bytecode.pushVal(zhin::instr::i64_in))

      MAKE_VOID_LOP_BYTECODE(in_u8, bytecode.pushVal(zhin::instr::u8_in))
      MAKE_VOID_LOP_BYTECODE(in_u16, bytecode.pushVal(zhin::instr::u16_in))
      MAKE_VOID_LOP_BYTECODE(in_u32, bytecode.pushVal(zhin::instr::u32_in))
      MAKE_VOID_LOP_BYTECODE(in_u64, bytecode.pushVal(zhin::instr::u64_in))

      MAKE_VOID_LOP_BYTECODE(in_char, bytecode.pushVal(zhin::instr::char_in))

      MAKE_VOID_LOP_BYTECODE(in_f32, bytecode.pushVal(zhin::instr::f32_in))
      MAKE_VOID_LOP_BYTECODE(in_f64, bytecode.pushVal(zhin::instr::f64_in))

      MAKE_VOID_LOP_BYTECODE(in_str, bytecode.pushVal(zhin::instr::in_str))

      MAKE_VOID_LOP_BYTECODE(in_bool, bytecode.pushVal(zhin::instr::in_bool))

      MAKE_LOP_BYTECODE(!, boolT, bytecode.pushVal(zhin::instr::not_bool))

      MAKE_LOP_BYTECODE(put, i8T, bytecode.pushVal(zhin::instr::i8_put))
      MAKE_LOP_BYTECODE(out, i8T, bytecode.pushVal(zhin::instr::i8_out))

      MAKE_LOP_BYTECODE(put, i16T, bytecode.pushVal(zhin::instr::i16_put))
      MAKE_LOP_BYTECODE(out, i16T, bytecode.pushVal(zhin::instr::i16_out))

      MAKE_LOP_BYTECODE(put, i32T, bytecode.pushVal(zhin::instr::i32_put))
      MAKE_LOP_BYTECODE(out, i32T, bytecode.pushVal(zhin::instr::i32_out))

      MAKE_LOP_BYTECODE(put, i64T, bytecode.pushVal(zhin::instr::i64_put))
      MAKE_LOP_BYTECODE(out, i64T, bytecode.pushVal(zhin::instr::i64_out))

      MAKE_LOP_BYTECODE(put, u8T, bytecode.pushVal(zhin::instr::u8_put))
      MAKE_LOP_BYTECODE(out, u8T, bytecode.pushVal(zhin::instr::u8_out))

      MAKE_LOP_BYTECODE(put, u16T, bytecode.pushVal(zhin::instr::u16_put))
      MAKE_LOP_BYTECODE(out, u16T, bytecode.pushVal(zhin::instr::u16_out))

      MAKE_LOP_BYTECODE(put, u32T, bytecode.pushVal(zhin::instr::u32_put))
      MAKE_LOP_BYTECODE(out, u32T, bytecode.pushVal(zhin::instr::u32_out))

      MAKE_LOP_BYTECODE(put, u64T, bytecode.pushVal(zhin::instr::u64_put))
      MAKE_LOP_BYTECODE(out, u64T, bytecode.pushVal(zhin::instr::u64_out))

      MAKE_LOP_BYTECODE(put, f32T, bytecode.pushVal(zhin::instr::f32_put))
      MAKE_LOP_BYTECODE(out, f32T, bytecode.pushVal(zhin::instr::f32_out))

      MAKE_LOP_BYTECODE(put, f64T, bytecode.pushVal(zhin::instr::f64_put))
      MAKE_LOP_BYTECODE(out, f64T, bytecode.pushVal(zhin::instr::f64_out))

      MAKE_LOP_BYTECODE(put, strT, bytecode.pushVal(zhin::instr::put_str))
      MAKE_LOP_BYTECODE(out, strT, bytecode.pushVal(zhin::instr::out_str))

      MAKE_LOP_BYTECODE(put, charT, bytecode.pushVal(zhin::instr::char_put))
      MAKE_LOP_BYTECODE(out, charT, bytecode.pushVal(zhin::instr::char_out))

      MAKE_LOP_BYTECODE(put, boolT, bytecode.pushVal(zhin::instr::u8_put))
      MAKE_LOP_BYTECODE(out, boolT, bytecode.pushVal(zhin::instr::u8_out))

#define MAKE_INT_LOPS(type)                                            \
  MAKE_LOP_BYTECODE(!, type##T, bytecode.pushVal(zhin::instr::type##_not))     \
  MAKE_LOP_BYTECODE(~, type##T, bytecode.pushVal(zhin::instr::type##_bit_not)) \
  MAKE_LOP_BYTECODE(-, type##T, bytecode.pushVal(zhin::instr::type##_neg))

      MAKE_INT_LOPS(i8)
      MAKE_INT_LOPS(i16)
      MAKE_INT_LOPS(i32)
      MAKE_INT_LOPS(i64)

      MAKE_INT_LOPS(u8)
      MAKE_INT_LOPS(u16)
      MAKE_INT_LOPS(u32)
      MAKE_INT_LOPS(u64)

      MAKE_INT_LOPS(char)

#define MAKE_FLOAT_LOPS(type)                                                    \
  MAKE_LOP_BYTECODE(!, type##T, bytecode.pushVal(zhin::instr::type##_not))     \
  MAKE_LOP_BYTECODE(-, type##T, bytecode.pushVal(zhin::instr::type##_neg))

      MAKE_FLOAT_LOPS(f32)
      MAKE_FLOAT_LOPS(f64)

      MAKE_LOP_BYTECODE(malloc, i64T, bytecode.pushVal(zhin::instr::malloc))
      MAKE_LOP_BYTECODE(free, i64T, bytecode.pushVal(zhin::instr::free))
      else {
        throw ParserError(op->begin, op->end, "unimplemented B op");
      }
    } else if (op->val == "sizeof") {
      size_t size = 0;
      if (auto type = dynamic_cast<zhexp::TypeLiteral *>(op->child)) {
        size = getSize(bytecode, type->literal_type);
      } else {
        size = getSize(bytecode, op->child->type);
      }
      bytecode.pushVal(zhin::instr::push_64);
      bytecode.pushVal((int64_t)(size));
    } else if (op->val == "&") {
      expToB(bytecode, op->child, funcdata);
      /** pop deref + int */
      bytecode.popBytes(5);
    } else if (op->val == "*" && op->func == nullptr) {
      expToB(bytecode, op->child, funcdata);
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(getSize(bytecode, op->type)));
      // if (op->type.getRef()) {
      //   bytecode.pushVal(zhin::instr::deref);
      //   bytecode.pushVal((int32_t)(op->type.etSizeNonRef(bytecode, )));
      // }
    } else {
      argsToB(bytecode, op->child, op->func->getHead().types, funcdata);
      bytecode.pushVal(zhin::instr::push_32);
      bytecode.pushVal((int32_t)(bytecode.func_labels[op->func]));
      bytecode.pushVal(zhin::instr::call);
      if (op->type.getRef()) {
        bytecode.pushVal(zhin::instr::deref);
        bytecode.pushVal((int32_t)(getSizeNonRef(bytecode, op->type)));
      }
    }
  } else if (auto var = dynamic_cast<zhexp::Variable*>(exp)) {
    bytecode.pushVal(zhin::instr::push_stack_ptr);
    bytecode.pushVal((int64_t)(funcdata.offsets[var->getId()]));
    if (var->getType().getRef()) {
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(getSize(bytecode, var->type)));
    }
    bytecode.pushVal(zhin::instr::deref);
    bytecode.pushVal((int32_t)(getSizeNonRef(bytecode, var->type)));
  } else if (auto op = dynamic_cast<zhexp::PostfixOperator*>(exp)) {
    argsToB(bytecode, op->child, op->func->getHead().types, funcdata);
    bytecode.pushVal(zhin::instr::push_32);
    bytecode.pushVal((int32_t)(bytecode.func_labels[op->func]));
    bytecode.pushVal(zhin::instr::call);
    if (op->type.getRef()) {
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(getSizeNonRef(bytecode, op->type)));
    }
  } else if (auto tuple = dynamic_cast<zhexp::Tuple*>(exp)) {
    for (int i = 0; i < tuple->content.size(); ++i) {
      expToB(bytecode, tuple->content[i], funcdata);
      if (i + 1 != tuple->content.size())
        bytecode.push_pop_bytes(getSize(bytecode, tuple->content[i]->type));
    }
  } else {
    throw ParserError("unimplemented expToB ");
  }
}

void nodeToB(zhin::ByteCode& bytecode, STNode* node, FuncData& funcdata, Function* func) {
  if (auto exp = dynamic_cast<STExp*>(node)) {
    expToB(bytecode, exp->exp, funcdata);
    /** pop unused return value */
    bytecode.push_pop_bytes(getSize(bytecode, exp->exp->type));
  } else if (auto ret = dynamic_cast<STRet*>(node)) {
    expToB(bytecode, ret->exp, funcdata);

    /** We need this because prev expToB already do deref and caller will also do deref afterwards, so this compencates */
    if (func->type.getRef()) {
      /** pop deref + int */
      bytecode.popBytes(5);
    }
    /** Write return value to args pos */
    bytecode.pushVal(zhin::instr::ret);
    bytecode.pushVal((int32_t)(funcdata.args_size));
    bytecode.pushVal((int32_t)(getSize(bytecode, func->type)));
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
    if (stif->else_body) blockToB(bytecode, stif->else_body, funcdata, func);
    bytecode.pushVal(zhin::instr::jmp);
    bytecode.pushVal((int32_t)(end_l));

    /** <if> */
    bytecode.pushLabel(if_l, "if");
    blockToB(bytecode, stif->body, funcdata, func);
    bytecode.pushVal(zhin::instr::jmp);
    bytecode.pushVal((int32_t)(end_l));

    for (int i = 0; i < stif->elseif_body.size(); ++i) {
      bytecode.pushLabel(elif_l[i], "elif");
      blockToB(bytecode, stif->elseif_body[i].second, funcdata, func);
      bytecode.pushVal(zhin::instr::jmp);
      bytecode.pushVal((int32_t)(end_l));
    }
    bytecode.pushLabel(end_l, "end_if");
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
    blockToB(bytecode, stwhile->body, funcdata, func);
    bytecode.pushVal(zhin::instr::jmp);
    bytecode.pushVal((int32_t)(begin_l));
    bytecode.pushVal(zhin::instr::label);
    bytecode.pushVal((int32_t)(end_l));
  } else if (auto block = dynamic_cast<STBlock*>(node)) {
    blockToB(bytecode, block, funcdata, func);
  } else {
    throw ParserError("unimplemented nodeToB");
  }
}

void blockToB(zhin::ByteCode& bytecode, STBlock* block, FuncData& funcdata, Function* func) {
  /** Push local vars info */
  size_t local_vars_size = 0;
  for (const auto& [name, info] : block->scope_info.vars.get()) {
    funcdata.offsets.emplace(info->id, funcdata.offset);
    funcdata.offset += getSize(bytecode, info->type);
    local_vars_size += getSize(bytecode, info->type);
  }
  bytecode.push_push_bytes(local_vars_size);

  for (auto& i : block->nodes) nodeToB(bytecode, i, funcdata, func);

  /** Pop local vars info */
  for (const auto& [name, info] : block->scope_info.vars.get()) {
    funcdata.offset -= getSize(bytecode, info->type);
  }
  bytecode.push_pop_bytes(local_vars_size);
}

#define RUNTIME_ERROR_LABEL 2
#define MAIN_LABEL 1
#define END_LABEL 0

void funcToB(zhin::ByteCode& bytecode, Function* func) {
  FuncData funcdata;
  for (const auto& [name, type] : func->args) {
    funcdata.offset -= getSize(bytecode, type);
    funcdata.args_size += getSize(bytecode, type);
  }
  for (const auto& [name, type] : func->args) {
    auto id = func->body->scope_info.vars.at(name)->id;
    // std::cout << func->body << std::endl;
    // std::cout << func->args_scope.vars(name)->id << std::endl;

    funcdata.offsets.emplace(id, funcdata.offset);
    funcdata.offset += getSize(bytecode, type);
  }

  bytecode.pushLabel(bytecode.func_labels[func],
                     func->toUniqueStr());
  blockToB(bytecode, func->body, funcdata, func);

  if (func->type.getTypeId() == types::voidT) {
    /** Implicit return for safety when flow reached end of the function */
    bytecode.push_push_bytes(getSize(bytecode, func->type));
    bytecode.pushVal(zhin::instr::ret);
    bytecode.pushVal((int32_t)(funcdata.args_size));
    bytecode.pushVal((int32_t)(getSize(bytecode, func->type)));
  } else {
    /** Emergency exit */
    static std::string msg = "reached function end without returning anything";
    pushLiteral(bytecode, (byte*)msg.c_str(), (byte*)(msg.c_str() + msg.size() + 1), 2);
    bytecode.pushVal(zhin::instr::push_literal_ptr);
    bytecode.pushVal((int32_t)(2));
    bytecode.pushVal(zhin::instr::jmp);
    bytecode.pushVal((int32_t)(RUNTIME_ERROR_LABEL));
  }
}

void externFuncToB(zhin::ByteCode& bytecode, Function* func) {
  throw ParserError(-1, "Only zhaba-script functions allowed");
}

void toB(zhin::ByteCode& bytecode, ZHModule* block) {
  /** Structs members offsets calculation */
  std::vector<std::pair<size_t, types::TYPE>> order;

  for (const auto& info : zhdata.structs) {
    if (info->defined == DEFINED::core) continue;
    order.emplace_back(info->order, info);
  }

  std::sort(order.begin(), order.end(),
            [](auto& lhs, auto& rhs) { return lhs.first < rhs.first; });

  for (auto [_, struct_info] : order) {
    if (struct_info->defined == DEFINED::core) continue;
    int offset = 0;
    auto& struct_map = bytecode.structs_members_offsets[struct_info];
    for (const auto& member_name : struct_info->members_in_order) {
      const auto& member_type = struct_info->members.at(member_name);
      struct_map[member_name] = offset;
      offset += getSize(bytecode, member_type);
    }

    bytecode.sizes[struct_info] = offset;
  }

  /** Pre generate function labels */
  for (auto& func : zhdata.functions)
    bytecode.func_labels[func] =
        (func->name == "main") ? MAIN_LABEL : getLabel();

  /** Jmp to unique main fn */
  bytecode.pushVal(zhin::instr::push_32);
  bytecode.pushVal((int32_t)(MAIN_LABEL));
  bytecode.pushVal(zhin::instr::call);
  /** Jmp to unique end label */
  bytecode.pushVal(zhin::instr::jmp);
  bytecode.pushVal((int32_t)(END_LABEL));

  for (auto& i : zhdata.functions) {
    if (i->defined == DEFINED::zh) {
      funcToB(bytecode, i);
    } else if (i->defined == DEFINED::extern_c) {
      externFuncToB(bytecode , i);
    }
  }

  for (auto& [id, data] : bytecode.literals_data) {
    bytecode.pushVal(zhin::instr::label_data);
    bytecode.pushVal(static_cast<int32_t>(id));
    bytecode.pushVal(static_cast<int32_t>(data.size()));
    bytecode.pushVal(data.begin(), data.end());
  }

  /** Unique runtime label */
  bytecode.pushVal(zhin::instr::label);
  bytecode.pushVal((int32_t)(RUNTIME_ERROR_LABEL));
  bytecode.pushVal(zhin::instr::out_str);

  /** Unique end label */
  bytecode.pushVal(zhin::instr::label);
  bytecode.pushVal((int32_t)(END_LABEL));
}
}  // namespace zhin
