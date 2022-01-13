#pragma once
#include <string>
#include <vector>
#include <algorithm>

struct CmdParser {
  CmdParser (int argc, char **argv){
    for (int i=1; i < argc; ++i)
      tokens.push_back(std::string(argv[i]));
  }

  std::string getCmdOption(const std::string &option) {
    auto it = std::find(tokens.begin(), tokens.end(), option);
    if (it != tokens.end() && ++it != tokens.end())
      return *it;
    return "";
  }

  std::string getCmdOption(int id) {
    if (id < tokens.size()) return tokens[id];
    return "";
  }

  bool cmdOptionEqual(int id, const std::string& option) {
    if (id < tokens.size() and tokens[id] == option) return true;
    return false;
  }

  int size() {
    return tokens.size();
  }

  bool cmdOptionExists(const std::string &option) const{
    return std::find(this->tokens.begin(), tokens.end(), option)
            != tokens.end();
  }
  std::vector <std::string> tokens;
};
