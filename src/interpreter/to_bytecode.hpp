#pragma once
#include "bytecode.hpp"
#include "lang.hpp"
#include "parser_error.hpp"

namespace zhin {
struct FuncData {
  std::map<std::string, std::vector<size_t>> offsets;
  size_t offset = 0;
  size_t args_size = 0;
};

int getLabel();

int pushLiteral(zhin::ByteCode &bytecode, const byte *begin, const byte *end);
void blockToB(zhin::ByteCode &bytecode, STBlock *block, FuncData &funcdata);
void expToB(zhin::ByteCode &bytecode, zhexp::Exp *exp, FuncData &funcdata);
void nodeToB(zhin::ByteCode &bytecode, STNode *node, FuncData &funcdata);
void argsToB(zhin::ByteCode &bytecode, STNode *node, FuncData &funcdata);
void toB(zhin::ByteCode &bytecode, STTree *block);

}
