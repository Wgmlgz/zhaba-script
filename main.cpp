#include "Compiler\Expressions\ExpressionParser.hpp"
#include "Compiler\ToCpp.hpp"
#include "Compiler\TreeParser\AbstractSyntaxTree.hpp"
#include "Compiler\TreeParser\SyntaxTree.hpp"

auto s = R"(

@ 1 | 2 | 3 : 4
)";
/*
loop
iter
id : iter
start : stop : step :
*/
auto fb = R"(
fizzBuzz. 1 100

#fizzBuzz a b
  @ i : a b
    str$s
    ? i%%3 s += 'Fizz'
    ? i%%5: s += 'Buzz'
    ? s: s += i.str
    << s

)";
auto fib = R"(

#int"fib int"n
  ? n <= 1: < n
  <  fib.n-1 + fib.n-2

n=9
<< fib.n

)";

int main() {
  try {
    Lexer parser(tables::lexer_tokens);
    auto parse_res = parser.parse(s, true);
    ASTBlock* a = ASTParser::parse(parse_res.begin(), parse_res.end());
    auto t = ASTParser::toGenericTree(a);
    printCompact(t);
    STBlock* b = parseAST(a);
    auto c = toGenericTree(b);
    printCompact(c);
    printASCII(c);
    std::cout << "cpp:" << std::endl;
    std::cout << toCpp(b) << std::endl;
  } catch (ParserError error) {
      std::cout << s << std::endl;
      std::cout << std::string(error.pos, ' ') << "^" << std::endl;
      std::cout << error.message << std::endl;
  } catch(...) {
    std::cout <<" s" << std::endl;
  }
}
// ? 54%%15 : 'FizzBuzz' | 54%%3 : 'Fizz' | 54%%5 : 'Buzz  \ 'i'
/*
0x9acc40
0x9acdb0
0x9acdb0ok
0x9a8f70
0x9a8fe0
0x9a8fe0ok
0x9a92f0
0x9a92f0ok
0x9a8f70ok
0x9acc40ok
FUCKFUCK
[block]
|-- '? 2==2'
'-- [block]
   |-- '2+2'
   '-- '2 2'

ast tree:
0x9acc40
0x9acdb0
*/
// #include "BlockParser.hpp"
// int main() {
//   ExpParser::settings["DEBUG"] = false;
//   ExpParser::settings["SHOW_COOL_TREE"] = false;
//   ExpParser::settings["SHOW_TREE"] = true;
//   // "2*2  ++"
//   std::cout << "da: " << (2 + 2 == 4 && 2 == 3) + 4 << std::endl;
//   std::string s = "33%%3 && 33%%5";
//   while (1) {
//     std::getline(std::cin, s);
//     int res = ExpParser::calc(s);
//     std::cout << "Ans: " << res << std::endl;
//   }
// }

// int main() {
//   std::cout << 5 / 2 << std::endl;
//   auto prs = ASTParser();
//   prs.parse(s);
// }