#pragma once
#include <string>
#include "../Parser/Parser.hpp"
#include "ToCpp.hpp"
#include <fstream>

auto zhstd = R"(
3  int -  _   int a:       #return -a;
3  int +  _   int a:       #return +a;
3  int !  _   int a:       #return !a;
5  int /  ___ int a int b: #return a / b;
5  int %  ___ int a int b: #return a % b;
5  int *  ___ int a int b: #return a * b;
5  int %% ___ int a int b: #return !(a % b);
6  int +  ___ int a int b: #return a + b;
6  int -  ___ int a int b: #return a - b;
9  int <  ___ int a int b: #return a < b;
9  int >  ___ int a int b: #return a > b;
9  int <= ___ int a int b: #return a <= b;
9  int >= ___ int a int b: #return a >= b;
10 int == ___ int a int b: #return a == b;
10 int != ___ int a int b: #return a != b;
14 int && ___ int a int b: #return a && b;
15 int || ___ int a int b: #return a || b;

out int x: #'printf("%d\n",x);'
out str s: #'printf("%s\n",s.c_str());'
outs int i: #'printf("%d ", i);'

ptr_set int ptr int val: #'*((int64_t*)(ptr))=val;'
int _ptr_get int ptr: #return *(int64_t*)(ptr);
int malloc int size: #return (int64_t)(malloc(size));
free int p: #free((void*)p);
)";
Lexer lexer(tables::lexer_tokens);

std::string compileFile(std::string file_name) {
  auto fin = std::ifstream(file_name);
  std::stringstream strStream;
  strStream << fin.rdbuf();
  std::string programm = zhstd + strStream.str();
  fin >> programm;
  fin.close();


  if (parser_settings::bools["show_original"]) {
    std::cout << "original:\n";
    std::cout << programm;
  }

  auto parse_res = lexer.parse(programm, false);
  auto ast = ast::parse(parse_res.begin(), parse_res.end());
  auto ast_generic = ast::toGenericTree(ast);

  if (parser_settings::bools["show_ast"]) {
    std::cout << "ast:\n";
    printCompact(ast_generic);
  }

  auto stree = parseAST(ast);
  auto st_generic = stree->toGenericTree();

  if (parser_settings::bools["show_st"]) {
    std::cout << "st:\n";
    printCompact(st_generic);
  }

  std::string cpp_code = toCpp(stree);

  if (parser_settings::bools["show_cpp"]) {
    std::cout << "cpp:" << std::endl << cpp_code << std::endl;
  }

  return cpp_code;
}