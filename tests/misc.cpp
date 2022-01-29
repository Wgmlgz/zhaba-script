#include <gtest/gtest.h>

#include "Compiler.hpp"

using namespace std::string_literals;

std::string run(std::string test_file) {
  (&zhdata)->~ZHDATA();
  new (&zhdata) ZHDATA();
  std::stringstream ss;
  try {
    auto tmp = std::getenv("zhstd");
    if (!tmp)
      throw std::runtime_error("Cannot find zhstd environment variable :(");
    zhdata.bin_path = std::filesystem::current_path();
    zhdata.std_path = tmp;
    zhdata.flags["pure"] = true;

    zhdata.out = &ss;
    compileFile("../tests/" + test_file);
  } catch (ParserError &error) {
    ss << error.what();
  } catch (zhin::RuntimeError &error) {
    ss << error.what();
  } catch (std::exception &err) {
    ss << err.what() << std::endl;
  }
  return ss.str();
}

TEST(HelloTest, BasicAssertions) {
  EXPECT_EQ("hi world!\n", run("hi.zh"));
  EXPECT_EQ("hi world!\n", run("hi.zh"));
  EXPECT_EQ("hi world!\n", run("hi.zh"));
  EXPECT_EQ("hi world!\n", run("hi.zh"));
  EXPECT_EQ("hi world!\n", run("hi.zh"));
  EXPECT_EQ("hi world!\n", run("hi.zh"));
}