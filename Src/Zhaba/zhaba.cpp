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
    std::string file_name =
      cmd.getCmdOption(0);
      // R"(test.zh)";

    try {
      auto start_time = clock();
      auto compiled = compileFile(file_name);
      std::cout << "[INFO] compiling complete in " + std::to_string((clock() - start_time) * 1.0 / CLOCKS_PER_SEC) << std::endl;

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
      std::cout << "Uncaught error :(" << std::endl;
    }
  } else {
    std::cout << "Wrong usage :(\n";
    printUsage();
  }
}
