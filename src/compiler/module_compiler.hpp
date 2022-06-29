#pragma once
#include <filesystem>
#include <fstream>
#include <string>

#include "../core/core.hpp"
#include "../interpreter/to_bytecode.hpp"
#include "../interpreter/zhvm.hpp"
#include "../libs/termcolor.hpp"
#include "../parser/parser.hpp"
#include "./to_c.hpp"

void runCmd(Str cmd) {
  std::cerr << termcolor::green << "[RUN] " << termcolor::reset << cmd
            << std::endl;
  auto res = system(cmd.c_str());
}
void compileFile(std::filesystem::path file_path) {
  auto start_time = clock();

  auto stree = parseFile(resolvePath(file_path));

  if (zhdata.flags["show_st"]) {
    std::cout << "st:\n";
  }
  if (zhdata.flags["show_st_cool"]) {
    std::cout << "st:\n";
  }

  if (zhdata.flags["B"]) {
    if (!zhdata.flags["pure"])
      std::cerr << "[INFO] compiling complete in "
                << std::to_string((clock() - start_time) * 1.0 / CLOCKS_PER_SEC)
                << std::endl;
    zhin::ByteCode bytecode;
    zhin::toB(bytecode, stree);
    auto run_time = clock();
    zhin::ZHVM zhvm(bytecode);

    while (zhvm.runChunk()) {
    }

    if (!zhdata.flags["pure"])
      std::cerr << "[INFO] run complete in "
                << std::to_string((clock() - run_time) * 1.0 / CLOCKS_PER_SEC)
                << std::endl;
  } else {
    std::string c_code = module2C(stree);
    if (zhdata.flags["show_c"]) {
      std::cout << "C:" << std::endl << c_code << std::endl;
    }

    auto tmp_file = std::ofstream(zhdata.options["out"]);
    tmp_file << c_code;
    tmp_file.close();

    if (!zhdata.flags["pure"])
      std::cerr << "[INFO] compiling complete in "
                << std::to_string((clock() - start_time) * 1.0 / CLOCKS_PER_SEC)
                << std::endl;

    if (!zhdata.flags["no-comp"]) {
      auto c_comptime = clock();
      runCmd(zhdata.options["compiler"]);
      if (!zhdata.flags["pure"])
        std::cerr << "[INFO] C compiling complete in "
                  << std::to_string((clock() - c_comptime) * 1.0 / CLOCKS_PER_SEC)
                  << std::endl;
    }

    if (!zhdata.flags["no-run"]) {
      auto run_time = clock();
      runCmd(zhdata.options["run"]);

      if (!zhdata.flags["pure"])
        std::cerr << "[INFO] run complete in "
                  << std::to_string((clock() - run_time) * 1.0 / CLOCKS_PER_SEC)
                  << std::endl;
    }
  }
}
