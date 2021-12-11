#pragma once
#include "Bytecode.hpp"


namespace zhin{
struct FuncData {
  std::map<std::string, std::vector<size_t>> offsets;
  size_t offset = 0;
  size_t args_size = 0;
};

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

void blockToB(zhin::ByteCode& bytecode, STBlock* block, FuncData& funcdata);
void expToB(zhin::ByteCode& bytecode, zhexp::Exp* exp, FuncData& funcdata);
void nodeToB(zhin::ByteCode& bytecode, STNode* node, FuncData& funcdata);
void argsToB(zhin::ByteCode& bytecode, STNode* node, FuncData& funcdata);

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
  if (auto lt = dynamic_cast<zhexp::IntLiteral*>(exp)) {
    bytecode.pushVal(zhin::instr::push_i64);
    bytecode.pushVal((int64_t)(lt->val));
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
      expToB(bytecode, op->lhs, funcdata);
    } else if (op->val == "=") {
      expToB(bytecode, op->lhs, funcdata);
      /** pop deref + int */
      bytecode.popBytes(5);
      expToB(bytecode, op->rhs, funcdata);
      bytecode.pushVal(zhin::instr::assign);
      bytecode.pushVal((int32_t)(op->lhs->type.getSize()));
    } else if (op->val == ".") {
      expToB(bytecode, op->lhs, funcdata);
      // res += static_cast<zhexp::IdLiteral*>(op->rhs)->val;
      
      if (!op->lhs->type.getPtr()) {
        /** pop deref + int */
        bytecode.popBytes(5);
      }
      bytecode.pushVal(zhin::instr::push_i64);
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
        if (0) {}
#define BOPBYTECODE(name, type_, instr_)                      \
  else if (op->val == #name &&                                \
           op->lhs->type.getTypeId() == types::TYPE::type_ && \
           op->lhs->type.getTypeId() == types::TYPE::type_) { \
    bytecode.pushVal(zhin::instr::instr_);                    \
  }
        BOPBYTECODE(+, i64T, add_i64)
        BOPBYTECODE(+, i32T, add_i32)
        BOPBYTECODE(-, i64T, sub_i64)
        BOPBYTECODE(-, i32T, sub_i32)
        BOPBYTECODE(*, i64T, mul_i64)
        BOPBYTECODE(*, i32T, mul_i32)
        BOPBYTECODE(==, i64T, eq_64)
        BOPBYTECODE(==, i32T, eq_32)
        BOPBYTECODE(!=, i64T, uneq_64)
        BOPBYTECODE(!=, i32T, uneq_32)
        BOPBYTECODE(/, i32T, div_i32)
        BOPBYTECODE(/, i64T, div_i64)
        BOPBYTECODE(%, i32T, mod_i32)
        BOPBYTECODE(%, i64T, mod_i64)
        BOPBYTECODE(<, i32T, less_i32)
        BOPBYTECODE(<, i64T, less_i64)
        BOPBYTECODE(>, i32T, more_i32)
        BOPBYTECODE(>, i64T, more_i64)
        BOPBYTECODE(<=, i32T, lesseq_i32)
        BOPBYTECODE(<=, i64T, lesseq_i64)
        BOPBYTECODE(>=, i32T, moreeq_i32)
        BOPBYTECODE(>=, i64T, moreeq_i64)
        else {
          throw ParserError("unimplemented C op");
        }
      } else {
        auto lhs_tuple = castToTuple(op->lhs);
        auto rhs_tuple = castToTuple(op->rhs);
        *lhs_tuple += *rhs_tuple;
        argsToC(lhs_tuple, op->func);
        argsToB(bytecode, lhs_tuple, op->func, funcdata);
        bytecode.pushVal(zhin::instr::call);
        // if ()
        bytecode.pushVal(
            (int32_t)(bytecode.func_labels[op->func->toUniqueStr()]));
      }
    }
  } else if (auto op = dynamic_cast<zhexp::PrefixOperator*>(exp)) {
    /** C operators */
    if (op->func && op->func->is_C) {
      expToB(bytecode, op->child, funcdata);
      if (0) {
      }
#define LOPBYTECODE(name, type_, impl_)                         \
  else if (op->val == #name &&                                  \
           op->child->type.getTypeId() == types::TYPE::type_) { \
    impl_;                                                      \
  }
      LOPBYTECODE(put, i32T, bytecode.pushVal(zhin::instr::put_i32))
      LOPBYTECODE(put, i64T, bytecode.pushVal(zhin::instr::put_i64))
      LOPBYTECODE(put, strT, bytecode.pushVal(zhin::instr::put_str))
      LOPBYTECODE(out, i32T, bytecode.pushVal(zhin::instr::out_i32))
      LOPBYTECODE(out, i64T, bytecode.pushVal(zhin::instr::out_i64))
      LOPBYTECODE(out, strT, bytecode.pushVal(zhin::instr::out_str))
      LOPBYTECODE(malloc, i64T, bytecode.pushVal(zhin::instr::malloc))
      LOPBYTECODE(free, i64T, bytecode.pushVal(zhin::instr::malloc))
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
      bytecode.pushVal((int32_t)(op->child->type.getSize()));
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
    expToB(bytecode, stif->contition, funcdata);
    bytecode.pushVal(zhin::instr::jmp_if64);
    bytecode.pushVal((int32_t)(if_l));

    /** exp_elif */
    std::vector<int> elif_l(stif->elseif_body.size());
    for (int i = 0; i < stif->elseif_body.size(); ++i) {
      elif_l[i] = getLabel();
      expToB(bytecode, stif->elseif_body[i].first, funcdata);
      bytecode.pushVal(zhin::instr::jmp_if64);
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
    expToB(bytecode, stwhile->contition, funcdata);
    bytecode.pushVal(zhin::instr::jmp_if64);
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
  for (const auto& [struct_id, struct_name] : types::struct_names) {
    int offset = 0;
    auto& struct_map = bytecode.structs_members_offsets[struct_id];    
    const auto& struct_info = types::structs[struct_id];
    for (const auto& member_name : struct_info.members_list) {
      struct_map[member_name] = offset;
      offset += struct_info.members.at(member_name).getSize();
    }
  }

  /** Pregenerate function labels */
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
