#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h> 
#include <filesystem>

#include "../Parser/Parser.hpp"
#include "../Compiler/Compiler.hpp"
#include "../TreeLib/TreeLib.hpp"

#include "CmdOptios.hpp"

void printUsage() {
  std::cout << usage << "\nFlags:\n";
  for (auto& [str, val] : zhdata.bools) {
    std::cout << "  --" + str + "\n";
  }
}

int main(int argc, char **argv) {
  CmdParser cmd(argc, argv);

  for (auto& [str, val] : zhdata.bools) {
    if (cmd.cmdOptionExists("--" + str))
      val = true;
  }

  if (cmd.cmdOptionExists("-h")) {
    printUsage();
  } else if (cmd.cmdOptionEqual(0, "compile") and cmd.size() == 3) {

  } else if (cmd.size() >= 1
  or 1
  ) {
    std::filesystem::path file_path =
      // cmd.getCmdOption(0);
      R"(C:\Code\Zhaba-script-lang\Src\Zhaba\test.zh)";

    try {
      auto start_time = clock();
      auto compiled = compileFile(file_path);
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
