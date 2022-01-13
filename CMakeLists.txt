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
        src/Lang/AST.hpp
        src/Lang/Expression.hpp
        src/Lang/Generics.hpp
        src/Lang/Lang.hpp
        src/Lang/LangTables.hpp
        src/Lang/Scope.hpp
        src/Lang/SyntaxTree.hpp
        src/Lang/token.cpp
        src/Lang/token.hpp
        src/Lang/Types.hpp
        src/Lang/ZHDATA.hpp
        src/Libs/termcolor.hpp
        src/Parser/ASTParser.hpp
        src/Parser/DefinitionsParser.hpp
        src/Parser/ExpressionParser.hpp
        src/Parser/Lexer.hpp
        src/Parser/Parser.hpp
        src/Parser/ParserError.hpp
        src/Parser/Preproces.hpp
        src/Parser/Preprocessor.hpp
        src/Parser/SyntaxTreeParser.hpp
        src/Parser/TypeParser.hpp
        src/TreeLib/Tree.hpp
        src/TreeLib/TreeLib.hpp
        src/TreeLib/TreePrinterASCII.hpp
        src/Zhaba/CmdOptios.hpp
        src/Zhaba/zhaba.cpp)
