#pragma once
#include <string>
#include "../Parser/Parser.hpp"
#include "ToCpp.hpp"
#include <fstream>

std::string compileFile(std::string file_name) {
  std::vector<Token> tokens;
  preprocess(file_name, tokens);

  if (zhdata.bools["show_preprocessed"]) {
    std::cout << "preprocessed:\n";
    for (auto& i : tokens) {
      std::cout << (i.val);
    }
    std::cout << std::endl;
    // std::cout << programm;
  }

  defineFlowTokens(tokens);

  // auto parse_res = zhdata.lexer.parse(programm, false);
  auto ast = ast::parse(tokens.begin(), tokens.end());
  auto ast_generic = ast::toGenericTree(ast);

  if (zhdata.bools["show_ast"]) {
    std::cout << "ast:\n";
    printCompact(ast_generic);
  }

  auto stree = parseAST(ast);
  auto st_generic = stree->toGenericTree();

  if (zhdata.bools["show_st"]) {
    std::cout << "st:\n";
    printCompact(st_generic);
  }
  if (zhdata.bools["show_st_cool"]) {
    std::cout << "st:\n";
    printASCII(st_generic);
  }

  std::string cpp_code = toCpp(stree);

  if (zhdata.bools["show_cpp"]) {
    std::cout << "cpp:" << std::endl << cpp_code << std::endl;
  }

  return cpp_code;
}