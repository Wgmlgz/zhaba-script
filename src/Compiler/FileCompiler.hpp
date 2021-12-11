#pragma once
#include <string>
#include "../Parser/Parser.hpp"
#include "ToC.hpp"
#include <fstream>
#include "../Interpreter/ToBytecode.hpp"

void compileFile(std::filesystem::path file_path) {
  auto start_time = clock();

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

  if (zhdata.bools["B"]) {
    std::cout << "[INFO] compiling complete in " +
                std::to_string((clock() - start_time) * 1.0 / CLOCKS_PER_SEC)
              << std::endl;
    zhin::ByteCode bytecode;
    zhin::toB(bytecode, stree);
    auto run_time = clock();
    zhin::ZHVM zhvm(bytecode);
    std::cout << "[INFO] run complete in " +
              std::to_string((clock() - run_time) * 1.0 / CLOCKS_PER_SEC)
            << std::endl;
  } else {
    std::string c_code = toC(stree);
    if (zhdata.bools["show_cpp"]) {
      std::cout << "C:" << std::endl << c_code << std::endl;
    }
    std::cout << "[INFO] compiling complete in " +
                     std::to_string((clock() - start_time) * 1.0 /
                                    CLOCKS_PER_SEC)
              << std::endl;

    auto tmp_file = std::ofstream("zhaba_tmp.c");
    tmp_file << c_code;
    tmp_file.close();
    system("gcc zhaba_tmp.c -o zhaba_tmp -O3");
    system(".\\zhaba_tmp.exe");
  }
}
