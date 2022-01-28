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


add_executable(zhaba
        src/compiler/Compiler.hpp
        src/compiler/CompilerTables.hpp
        src/compiler/FileCompiler.hpp
        src/compiler/ToC.hpp
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
        src/lang/syntax_tree.hpp
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
        src/parser/parser_error.hpp
        src/parser/preprocess.hpp
        src/parser/syntax_tree_parser.hpp
        src/parser/type_parser.hpp
        src/tree_lib/Tree.hpp
        src/tree_lib/TreePrinterASCII.hpp
        src/tree_lib/TreeLib.hpp
        src/zhaba/CmdOptios.hpp
        src/lang/expression.cpp
        src/lang/types.cpp
        src/zhaba/zhaba.cpp
        src/lang/ast.cpp
        src/lang/generics.cpp
        src/lang/syntax_tree.cpp
        src/parser/parser_error.cpp
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

install(TARGETS zhaba)
