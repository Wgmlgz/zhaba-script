# Zhaba-script project

This chapter is about zhaba-script as a project and tools, which was used to build it.

## Project

Zhaba-script compiler is a C++ project, which uses CMake. Is also depends on [nlohmann/json](https://github.com/nlohmann/json) for json processing and parsing and [CLIUtils/CLI11](https://github.com/CLIUtils/CLI11) for cli arguments parsing.

## Setup

If you want to run/develop zhaba-script on your own machine here is instruction for you:

- Set environment variable `zhstd` to `repo_path/std`
- If you are using VSCode you can install [this](https://marketplace.visualstudio.com/items?itemName=wgmlgz.zhaba-script) extension for syntax highlighting
- To develop
  - This is a CMake project, so you need to check how to set up it in your IDE
    - VSCode: I am using vscode with CMake extension, so to set up project run command `CMake: Configure`, and to add run arguments add `"cmake.debugConfig": { "args": [ your args here ] }` to settings.json
    - CLion: You probably can just open it with none or some minimal configuration
  - use compiled binary to run your `.zh` files with `./zhaba <filename.zh>`
- To use zhaba-script
  - Download the latest binary from [releases](https://github.com/Wgmlgz/zhaba-script/releases) / or use [web IDE](https://wgmlgz.github.io/zhaba/)

## Compiling zhaba-script code

You can run zhaba-script programs in 3 ways:

1. Translate to C and run C program.
2. Run program directly throw bytecode.
3. Use [online complier](https://wgmlgz.github.io/zhaba/) without any installation and setup.

If you choose first 2 ways you can use `zhaba` binary to do that.
By default `zhaba` will translate your program to C (to a temporary file `zhaba_tmp.c`) and run it with `gcc`, you can change compiler with `-c` option, if you don't want to do that you can set `-b` flag and run bytecode directly.

You can show help information with `-h` flag:

```
Zhaba-script compiler
Usage: C:\Users\wgmlgz\code\zhaba-script\build\zhaba.exe [OPTIONS] file

Positionals:
  file TEXT REQUIRED          input file to compile

Options:
  -h,--help                   Print this help message and exit
  -b,--B                      sets build target to bytecode, doesn't depend on external compiler
  --exp_parser_logs           shows logs from expression parser
  --show_ast                  shows ast
  --show_st                   shows syntax tree
  --show_c                    shows resulted C code
  --orig                      shows original source code
  --stack_trace               traces stack, if build target is bytecode
  --show_bytecode             shows resulted bytecode, if build target is bytecode
  --pure                      doesn't print logs
  --no-comp                   doesn't compile result C
  --no-run                    doesn't run output
  -o,--out TEXT [zhaba_tmp.c]
                              out filename (with extension)
  -c,--compiler TEXT [gcc zhaba_tmp.c -o zhaba_tmp -O3 -w]
                              compiler command, used to compile file, if target isn't bytecode
  -r,--run TEXT [.\zhaba_tmp]
                              run command, if target isn't bytecode
  --dep-pr TEXT               dependency prefix, used when generating C source, `#include<prefix><dep/path>`

```
