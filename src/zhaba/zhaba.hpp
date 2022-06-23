#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <string>

#include "../compiler/compiler.hpp"

int zh_main(int argc, char **argv) {
  CLI::App app{"Zhaba-script compiler"};

  Path file_path;

  app.add_option("file", file_path, "input file to compile")->required();

  app.add_flag(
      "--B,-b", zhdata.flags["B"],
      "sets build target to bytecode, doesn't depend on external compiler");
  app.add_flag("--exp_parser_logs", zhdata.flags["exp_parser_logs"],
               "shows logs from expression parser");
  app.add_flag("--show_ast", zhdata.flags["show_ast"], "shows ast");
  app.add_flag("--show_st", zhdata.flags["show_st"], "shows syntax tree");
  app.add_flag("--show_c", zhdata.flags["show_c"], "shows resulted C code");
  app.add_flag("--orig", zhdata.flags["show_original"],
               "shows original source code");
  app.add_flag("--stack_trace", zhdata.flags["stack_trace"],
               "traces stack, if build target is bytecode");
  app.add_flag("--show_bytecode", zhdata.flags["show_bytecode"],
               "shows resulted bytecode, if build target is bytecode");
  app.add_flag("--pure", zhdata.flags["pure"], "doesn't print logs");

  app.add_option("--compiler, -c", zhdata.options["compiler"],
                 "compiler, used to compile file, if target isn't bytecode")
      ->default_val("gcc");

  CLI11_PARSE(app, argc, argv);

  zhdata.bin_path.remove_filename();

  try {
    auto tmp = std::getenv("zhstd");
    if (!tmp)
      throw std::runtime_error("Cannot find zhstd environment variable :(");
    zhdata.std_path = tmp;

    compileFile(file_path);
  } catch (ParserError &error) {
    error.print();
  } catch (zhin::RuntimeError &error) {
    std::cerr << error.what();
  } catch (std::exception &err) {
    std::cerr << err.what() << std::endl;
  }

  return 0;
}
