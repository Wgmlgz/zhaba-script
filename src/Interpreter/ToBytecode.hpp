#pragma once
#include "interpreter.hpp"


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

void blockToB(zhin::ByteCode& bytecode, STBlock* block, FuncData& funcdata);
void expToB(zhin::ByteCode& bytecode, zhexp::Exp* exp, FuncData& funcdata);
void nodeToB(zhin::ByteCode& bytecode, STNode* node, FuncData& funcdata);
void argsToB(zhin::ByteCode& bytecode, STNode* node, FuncData& funcdata);

void argsToB(zhin::ByteCode& bytecode, zhexp::Exp* exp, Function* fn,
             FuncData& funcdata) {
  auto tuple = zhexp::castToTuple(exp);
  for (int i = 0; i < tuple->content.size(); ++i) {
    if (fn->args[i].type.getRef()) {
      if (!tuple->content[i]->type.getLval())
        throw ParserError(
            tuple->content[i]->begin, tuple->content[i]->end,
            "Expression must be lval to be able pass by reference");
      /** pop deref + int */
      bytecode.popBytes(5);
    }
    expToB(bytecode, tuple->content[i], funcdata);
  }
}

void expToB(zhin::ByteCode& bytecode, zhexp::Exp* exp, FuncData& funcdata) {
  if (auto lt = dynamic_cast<zhexp::IntLiteral*>(exp)) {
    bytecode.pushVal(zhin::instr::push_i64);
    bytecode.pushVal((int64_t)(lt->val));
  } else if (auto op = dynamic_cast<zhexp::BinOperator*>(exp)) {
    if (op->val == "as") {
      throw ParserError("unimplemented as ");
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
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(op->type.getSize()));
    } else {
      expToB(bytecode, op->lhs, funcdata);
      expToB(bytecode, op->rhs, funcdata);
      /** C operators */
      if (op->func && op->func->is_C) {
        /** i64 add */
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
        else {
          throw ParserError("unimplemented C op");
        }
      } else {
        throw ParserError("unimplemented op");
      }
    }
  } else if (auto op = dynamic_cast<zhexp::PrefixOperator*>(exp)) {
    if (op->val == "&") {
      expToB(bytecode, op->child, funcdata);
      /** pop deref + int */
      bytecode.popBytes(5);
    } else if (op->val == "*") {
      bytecode.pushVal(zhin::instr::deref);
      bytecode.pushVal((int32_t)(op->child->type.getSize()));
    } else {
      argsToB(bytecode, op->child, op->func, funcdata);
      bytecode.pushVal(zhin::instr::call);
      bytecode.pushVal((int32_t)(bytecode.func_labels[op->func->toUniqueStr()]));
    }
  } else if (auto var = dynamic_cast<zhexp::Variable*>(exp)) {
    bytecode.pushVal(zhin::instr::push_i64);
    bytecode.pushVal((int64_t)(funcdata.offsets[var->getName()].back()));
    if (var->getType().getRef()) {
      throw ParserError("unimplemented ref var");
      // bytecode.pushVal(zhin::instr::deref);
      // bytecode.pushVal((int32_t)(var->type.getSize()));
    }
    bytecode.pushVal(zhin::instr::deref);
    bytecode.pushVal((int32_t)(var->type.getSize()));
  } else {
    throw ParserError("unimplemented expToB ");
  }
}

void nodeToB(zhin::ByteCode& bytecode, STNode* node, FuncData& funcdata) {
  if (auto exp = dynamic_cast<STExp*>(node)) {
    expToB(bytecode, exp->exp, funcdata);
    /** pop unused return value */
    bytecode.pushVal(zhin::instr::pop_bytes);
    bytecode.pushVal((int32_t)(exp->exp->type.getSize()));
  } else if (auto ret = dynamic_cast<STRet*>(node)) {
    bytecode.pushVal(zhin::instr::push_i64);
    bytecode.pushVal((int64_t)(-funcdata.args_size));
    expToB(bytecode, ret->exp, funcdata);
    /** Write return value to args pos */
    bytecode.pushVal(zhin::instr::assign);
    bytecode.pushVal((int32_t)(ret->exp->type.getSize()));
    bytecode.pushVal(zhin::instr::pop_bytes);
    bytecode.pushVal((int32_t)(funcdata.args_size - ret->exp->type.getSize()));
    bytecode.pushVal(zhin::instr::ret);
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
     *   label: begin
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
  } else {
    throw ParserError("unimplemented nodeToB");
  }
};

void blockToB(zhin::ByteCode& bytecode, STBlock* block, FuncData& funcdata) {
  /** Push local vars info */
  size_t local_vars_size = 0;
  for (const auto& [name, type] : block->scope_info.vars) {
    funcdata.offsets[name].push_back(funcdata.offset);
    funcdata.offset += type.getSize();
    local_vars_size += type.getSize();
  }
  bytecode.pushVal(zhin::instr::push_bytes);
  bytecode.pushVal((int32_t)(local_vars_size));

  for (auto& i : block->nodes)
    nodeToB(bytecode, i, funcdata);

  /** Pop local vars info */
  for (const auto& [name, type] : block->scope_info.vars) {
    funcdata.offsets[name].pop_back();
    funcdata.offset -= type.getSize();
  }
  bytecode.pushVal(zhin::instr::pop_bytes);
  bytecode.pushVal((int32_t)(local_vars_size));
}

#define MAIN_LABEL 666000000
#define END_LABEL 222000000

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
  /** Unique main label */
  const auto func_l = (func->name == "main") ? MAIN_LABEL : getLabel();
  bytecode.func_labels[func->toUniqueStr()] = func_l;
  bytecode.pushVal(zhin::instr::label);
  bytecode.pushVal((int32_t)(func_l));
  blockToB(bytecode, func->body, funcdata);
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

  /** Jmp to unique main fn */
  bytecode.pushVal(zhin::instr::call);
  bytecode.pushVal((int32_t)(MAIN_LABEL));
  /** Jmp to unique end label */
  bytecode.pushVal(zhin::instr::jmp);
  bytecode.pushVal((int32_t)(END_LABEL));

  for (auto& i : block->functions) {
    funcToB(bytecode, i);
  }
  /** Unique end label */
  bytecode.pushVal(zhin::instr::label);
  bytecode.pushVal((int32_t)(END_LABEL));
}
}
