#pragma once
#include "interpreter.hpp"


namespace zhin{
struct FuncData {
  std::map<std::string, std::vector<size_t>> offsets;
  size_t offset = 0;
};


int getLabel() {
  static int id = 100;
  return id++;
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
      throw ParserError("unimplemented . ");
    } else {
      expToB(bytecode, op->lhs, funcdata);
      expToB(bytecode, op->rhs, funcdata);
      /** C operators */
      if (op->func && op->func->is_C) {
        /** i64 add */
        if (0) {
        } else if (op->val == "+" &&
                   op->lhs->type.getTypeId() == types::TYPE::i64T &&
                   op->lhs->type.getTypeId() == types::TYPE::i64T) {
          bytecode.pushVal(zhin::instr::add_i64);
        } else if (op->val == "+" &&
                   op->lhs->type.getTypeId() == types::TYPE::i32T &&
                   op->lhs->type.getTypeId() == types::TYPE::i32T) {
          bytecode.pushVal(zhin::instr::add_i32);
        } else {
          throw ParserError("unimplemented C op");
        }
      } else {
        throw ParserError("unimplemented not C op");
      }
    }
  } else if (auto var = dynamic_cast<zhexp::Variable*>(exp)) {
    bytecode.pushVal(zhin::instr::push_i64);
    bytecode.pushVal((int64_t)(funcdata.offsets[var->getName()].back()));
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
  } else {
    throw ParserError("unimplemented nodeToB");
  }

  // bytecode.pushVal(zhin::instr::nop);
  // if (auto nd = dynamic_cast<STIf*>(node)) {
  //   res += "if (" + expToC(nd->contition) + ") ";
  //   res += blockToC(nd->body, depth);
  //   for (auto& i : nd->elseif_body) {
  //     res += " else if (" + expToC(i.first) + ") ";
  //     res += blockToC(i.second, depth);
  //   }
  //   if (nd->else_body) {
  //     res += " else ";
  //     res += blockToC(nd->else_body, depth);
  //   }
  // } else if (auto nd = dynamic_cast<STWhile*>(node)) {
  //   res += "while (" + expToC(nd->contition) + ") ";
  //   res += blockToC(nd->body, depth);
  // } else if (auto nd = dynamic_cast<STRet*>(node)) {
  //   res += "return (" + expToC(nd->exp) + ")";
  // } else if (auto exp = dynamic_cast<STExp*>(node)) {
  //   expToB(bytecode, exp->exp, funcdata);
  // } else if (auto block = dynamic_cast<STBlock*>(node)) {
  //   res += blockToC(block);
  // }
  // return res;
};

void blockToB(zhin::ByteCode& bytecode, STBlock* block, FuncData& funcdata) {
  /** push local vars info */
  size_t local_vars_size = 0;
  for (auto& [name, type] : block->scope_info.vars) {
    funcdata.offsets[name].push_back(funcdata.offset);
    funcdata.offset += type.getSize();
    local_vars_size += type.getSize();
  }
  bytecode.pushVal(zhin::instr::push_bytes);
  bytecode.pushVal((int32_t)(local_vars_size));

  for (auto& i : block->nodes) {
    nodeToB(bytecode, i, funcdata);
  }

  
  /** pop local vars info */
  for (auto& [name, type] : block->scope_info.vars) {
    funcdata.offsets[name].pop_back();
    funcdata.offset -= type.getSize();
  }
  bytecode.pushVal(zhin::instr::pop_bytes);
  bytecode.pushVal((int32_t)(local_vars_size));
}

void funcToB(zhin::ByteCode& bytecode, Function* func) {
  FuncData funcdata;
  for (auto& [name, type] : func->args) {
    funcdata.offsets[name].push_back(funcdata.offset);
    funcdata.offset += type.getSize();
  }
  bytecode.pushVal(zhin::instr::label);
  bytecode.pushVal((int32_t)(getLabel()));
  blockToB(bytecode, func->body, funcdata);
}

void toB(zhin::ByteCode& bytecode, STTree* block) {
  for (auto& i : block->functions) {
    funcToB(bytecode, i);
  }
}
}
