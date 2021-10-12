#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h> 

#include "../Parser/Parser.hpp"
#include "../Compiler/Compiler.hpp"
#include "../TreeLib/TreeLib.hpp"

#include "CmdOptios.hpp"

void printUsage() {
  std::cout << usage << std::endl;
}

int main(int argc, char **argv) {
  CmdParser cmd(argc, argv);

  if (cmd.cmdOptionExists("-h")) {
    printUsage();
  } else if (cmd.cmdOptionEqual(0, "compile") and cmd.size() == 3) {

  } else if (cmd.size() == 1) {
    std::string file_name = cmd.getCmdOption(0);
    try {
      auto compiled = compileFile(file_name);
      auto tmp_file = std::ofstream("zhaba_tmp.cpp");
      tmp_file << compiled;
      tmp_file.close();

      system("g++ zhaba_tmp.cpp -o zhaba_tmp");
      system(".\\zhaba_tmp.exe");
    }
    catch (ParserError error) {
      std::cout << error.toString();
    }
    catch (...) {
      std::cout << "Random error lol" << std::endl;
    }
  } else {
    std::cout << "Wrong usage :(\n";
    printUsage();
  }
}
