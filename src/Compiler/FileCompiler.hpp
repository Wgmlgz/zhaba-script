#pragma once
#include <string>
#include "../Parser/Parser.hpp"
#include "ToC.hpp"
#include <fstream>

std::string compileFile(std::filesystem::path file_path) {
  std::vector<Token> tokens;
  int offset = 0;
  preprocess(file_path, tokens);

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

  if (zhdata.bools["show_st"]) {
    std::cout << "st:\n";
    auto st_generic = stree->toGenericTree();
    printCompact(st_generic);
  }
  if (zhdata.bools["show_st_cool"]) {
    std::cout << "st:\n";
    auto st_generic = stree->toGenericTree();
    printASCII(st_generic);
  }

  std::string c_code = toC(stree);

  if (zhdata.bools["show_cpp"]) {
    std::cout << "cpp:" << std::endl << c_code << std::endl;
  }

  return c_code;
}