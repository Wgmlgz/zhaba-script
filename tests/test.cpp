#include <gtest/gtest.h>
#include <stdlib.h>

#include <filesystem>

#include "zhaba/zhaba.hpp"

using namespace std::string_literals;

std::string run(std::string file_name) {
  putenv("zhstd=../std/");
  
  int argc = 2;
  char* tmp[2] = {(char*)"test", (char*)file_name.c_str()};
  char** argv = tmp;

  testing::internal::CaptureStdout();
  zh_main(argc, argv);
  std::string output = testing::internal::GetCapturedStdout();
  return output;
}

std::string runB(std::string file_name) {
  putenv("zhstd=../std/");

  int argc = 3;
  char* tmp[3] = {(char*)"test", (char*)file_name.c_str(), (char*)"--B"};
  char** argv = tmp;

  testing::internal::CaptureStdout();
  zh_main(argc, argv);
  std::string output = testing::internal::GetCapturedStdout();
  return output;
}

TEST(Bytecode, Brainfuck) {
  EXPECT_EQ("Hello World!\n", run("../examples/brainfuck.zh"));
}

TEST(GCC, Brainfuck) {
  EXPECT_EQ("Hello World!\n", runB("../examples/brainfuck.zh"));
}