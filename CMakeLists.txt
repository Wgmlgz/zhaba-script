cmake_minimum_required(VERSION 3.21)
project(zhaba)

set(CMAKE_CXX_STANDARD 20)

include_directories(src/compiler)
include_directories(src/interpreter)
include_directories(src/lang)
include_directories(src/libs)
include_directories(src/parser)
include_directories(src/tree_lib)
include_directories(src/zhaba)
include_directories(tests)


set(lib          
  src/libs/json.hpp
  src/compiler/compiler.hpp
  src/compiler/tables.hpp
  src/compiler/module_compiler.hpp
  src/compiler/to_c.hpp
  src/compiler/to_c.cpp
  src/interpreter/bytecode.hpp
  src/interpreter/heap.hpp
  src/interpreter/instructions.hpp
  src/interpreter/stack.hpp
  src/interpreter/to_bytecode.hpp
  src/interpreter/zhvm.hpp
  src/lang/ast.hpp
  src/lang/expression.hpp
  src/lang/generics.hpp
  src/lang/lang.hpp
  src/lang/lang_tables.hpp
  src/lang/scope.hpp
  src/lang/scope.cpp
  src/lang/syntax_tree.hpp
  src/lang/module.cpp
  src/lang/module.hpp
  src/lang/token.cpp
  src/lang/token.hpp
  src/lang/types.hpp
  src/lang/zhdata.hpp
  src/libs/termcolor.hpp
  src/parser/ast_parser.hpp
  src/parser/definitions_parser.hpp
  src/parser/expression_parser.hpp
  src/parser/lexer.hpp
  src/parser/parser.hpp
  src/lang/parser_error.hpp
  src/parser/preprocess.hpp
  src/parser/syntax_tree_parser.hpp
  src/parser/type_parser.hpp
  src/tree_lib/Tree.hpp
  src/tree_lib/TreePrinterASCII.hpp
  src/tree_lib/TreeLib.hpp
  src/zhaba/CmdOptios.hpp
  src/lang/expression.cpp
  src/lang/types.cpp
  src/lang/ast.cpp
  src/lang/generics.cpp
  src/lang/syntax_tree.cpp
  src/lang/parser_error.cpp
  src/lang/zhdata.cpp
  src/lang/lang_tables.cpp
  src/interpreter/runtime_error.cpp
  src/interpreter/runtime_error.hpp
  src/parser/type_parser.cpp
  src/parser/syntax_tree_parser.cpp
  src/parser/definitions_parser.cpp
  src/parser/expression_parser.cpp
  src/parser/ast_parser.cpp
  src/parser/lexer.cpp
  src/parser/preprocess.cpp
  src/interpreter/to_bytecode.cpp
  src/interpreter/bytecode.cpp
  src/interpreter/heap.cpp
  src/interpreter/stack.cpp)

add_executable(zhaba ${lib} src/zhaba/zhaba.cpp)

install(TARGETS zhaba)

# ------------------- TESTS -------------------

# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
# )
# # For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

# enable_testing()

# add_executable(
#   zhaba_test
#    ${lib} tests/misc.cpp
# )
# target_link_libraries(
#   zhaba_test
#   gtest_main
# )

# include(GoogleTest)
# gtest_discover_tests(zhaba_test)