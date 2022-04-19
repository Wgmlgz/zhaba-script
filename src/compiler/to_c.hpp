#include <iomanip>
#include <sstream>
#include <span>

#include "../lang/lang.hpp"
#include "../lang/parser_error.hpp"

std::string id2C(const std::string& str);
std::string exp2C(zhexp::Exp* exp);
std::string block2C(STBlock* exp, Function* fn, size_t depth = 0);
std::string node2C(STNode* node, Function* fn, size_t depth = 0);
std::string args2C(zhexp::Exp* exp, const std::vector<types::Type>& types);
std::string toC(STTree* block);
std::string struct2C(types::TYPE id);
std::string structHead2C(types::TYPE id);
std::string funcName2C(Function* func);
std::string func2C(Function* fn);
std::string funcHead2C(Function* fn);
