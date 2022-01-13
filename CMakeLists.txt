cmake_minimum_required(VERSION 3.21)
project(Zhaba_script_lang)

set(CMAKE_CXX_STANDARD 20)

include_directories(src/Compiler)
include_directories(src/Interpreter)
include_directories(src/Lang)
include_directories(src/Libs)
include_directories(src/Parser)
include_directories(src/TreeLib)
include_directories(src/Zhaba)

add_executable(Zhaba_script_lang
        src/Compiler/Compiler.hpp
        src/Compiler/CompilerTables.hpp
        src/Compiler/FileCompiler.hpp
        src/Compiler/ToC.hpp
        src/Interpreter/Bytecode.hpp
        src/Interpreter/Heap.hpp
        src/Interpreter/Instructions.hpp
        src/Interpreter/Stack.hpp
        src/Interpreter/ToBytecode.hpp
        src/Interpreter/ZHVM.hpp
        src/Lang/ast.hpp
        src/Lang/expression.hpp
        src/Lang/generics.hpp
        src/Lang/lang.hpp
        src/Lang/lang_tables.hpp
        src/Lang/scope.hpp
        src/Lang/syntax_tree.hpp
        src/Lang/token.cpp
        src/Lang/token.hpp
        src/Lang/types.hpp
        src/Lang/zhdata.hpp
        src/Libs/termcolor.hpp
        src/Parser/ast_parser.hpp
        src/Parser/definitions_parser.hpp
        src/Parser/expression_parser.hpp
        src/Parser/Lexer.hpp
        src/Parser/Parser.hpp
        src/Parser/parser_error.hpp
        src/Parser/Preproces.hpp
        src/Parser/Preprocessor.hpp
        src/Parser/syntax_tree_parser.hpp
        src/Parser/type_parser.hpp
        src/TreeLib/Tree.hpp
        src/TreeLib/TreePrinterASCII.hpp
        src/TreeLib/TreeLib.hpp
        src/Zhaba/CmdOptios.hpp
        src/Lang/expression.cpp
        src/Lang/types.cpp
        src/Zhaba/zhaba.cpp src/Lang/ast.cpp src/Lang/generics.cpp src/Lang/syntax_tree.cpp src/Parser/parser_error.cpp src/Lang/zhdata.cpp src/Lang/lang_tables.cpp src/Parser/runtime_error.cpp src/Parser/runtime_error.hpp src/Parser/type_parser.cpp src/Parser/syntax_tree_parser.cpp src/Parser/DefenitionsParser.cpp src/Parser/expression_parser.cpp src/Parser/ast_parser.cpp)
