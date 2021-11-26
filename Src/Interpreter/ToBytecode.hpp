#pragma once
#include "interpreter.hpp"


namespace zhin{

int getLabel() {
  static int id = 100;
  return id++;
}

void nodeToB(zhin::ByteCode& bytecode, STNode* node) {
  if (auto nd = dynamic_cast<STIf*>(node)) {
    // res += "if (" + expToC(nd->contition) + ") ";
    // res += blockToC(nd->body, depth);
    for (auto& i : nd->elseif_body) {
      // res += " else if (" + expToC(i.first) + ") ";
      // res += blockToC(i.second, depth);
    }
    if (nd->else_body) {
      // res += " else ";
      // res += blockToC(nd->else_body, depth);
    }
  } else if (auto nd = dynamic_cast<STWhile*>(node)) {
    // res += "while (" + expToC(nd->contition) + ") ";
    // res += blockToC(nd->body, depth);
  } else if (auto nd = dynamic_cast<STRet*>(node)) {
    // res += "return (" + expToC(nd->exp) + ")";
  } else if (auto exp = dynamic_cast<STExp*>(node)) {
    // res += expToC(exp->exp);
  } else if (auto block = dynamic_cast<STBlock*>(node)) {
    // res += blockToC(block);
  }
  // return res;
};

void blockToB(zhin::ByteCode& bytecode, STBlock* block) {
  for (auto& i : block->scope_info.vars) {

  }

  for (auto& i : block->nodes) {
    // nodeToB(bytecode, i);
  }
  bytecode.pushVal(zhin::instr::pop);
}

void funcToB(zhin::ByteCode& bytecode, Function* func) {
  bytecode.pushVal(zhin::instr::label);
  bytecode.pushVal((int32_t)(getLabel()));
  blockToB(bytecode, func->body);
}

void toB(zhin::ByteCode& bytecode, STTree* block) {
  for (auto& i : block->functions) {
    funcToB(bytecode, i);
  }
}
}
