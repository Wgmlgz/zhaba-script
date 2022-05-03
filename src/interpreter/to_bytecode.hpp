#pragma once
#include "bytecode.hpp"
#include "lang.hpp"
#include "parser_error.hpp"

namespace zhin {
struct FuncData {
  std::map<int64_t, size_t> offsets;
  size_t offset = 0;
  size_t args_size = 0;
};

size_t getSize(zhin::ByteCode &bytecode, const types::Type &slf);
size_t getSizeNonRef(zhin::ByteCode& bytecode, const types::Type &slf);
size_t getSizeNonPtr(zhin::ByteCode &bytecode, const types::Type &slf);

int getLabel();

int pushLiteral(zhin::ByteCode &bytecode, const byte *begin, const byte *end,
                int id = 0);
void blockToB(zhin::ByteCode &bytecode, STBlock *block, FuncData &funcdata,
              Function *func);
void expToB(zhin::ByteCode &bytecode, zhexp::Exp *exp, FuncData &funcdata);
void nodeToB(zhin::ByteCode &bytecode, STNode *node, FuncData &funcdata,
             Function *func);
void argsToB(zhin::ByteCode &bytecode, zhexp::Exp *exp,
             const std::vector<types::Type> &types, FuncData &funcdata);
void toB(zhin::ByteCode &bytecode, ZHModule *block);

}  // namespace zhin
