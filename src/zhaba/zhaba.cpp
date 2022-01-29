#include <cstdlib>

#include <filesystem>
#include <iostream>
#include <string>

#include "Compiler.hpp"
#include "CmdOptios.hpp"

void printUsage() {
  std::cout << usage << "\nFlags:\n";
  for (auto&[str, val] : zhdata.flags) {
    std::cout << "  --" + str + "\n";
  }
}

int main(int argc, char **argv) {
  CmdParser cmd(argc, argv);

  zhdata.bin_path.remove_filename();
  for (auto&[str, val] : zhdata.flags) {
    if (cmd.cmdOptionExists("--" + str)) val = true;
  }

  if (cmd.cmdOptionExists("-h")) {
    printUsage();
  } else if (cmd.cmdOptionEqual(0, "compile") and cmd.size() == 3) {
  } else if (cmd.size() >= 1) {
    std::filesystem::path file_path = cmd.getCmdOption(0);
    try {
      auto tmp = std::getenv("zhstd");
      if (!tmp)
        throw std::runtime_error("Cannot find zhstd environment variable :(");
      zhdata.std_path = tmp;

      compileFile(file_path);
    } catch (ParserError &error) {
      std::cout << error.what();
    } catch (zhin::RuntimeError &error) {
      std::cout << error.what();
    } catch (std::exception &err) {
      std::cout << err.what() << std::endl;
    }
    // catch (...) {
    //   std::cout << "Uncaught error :(" << std::endl;
    // }
  } else {
    std::cout << "Wrong usage :(\n";
    printUsage();
  }
}
