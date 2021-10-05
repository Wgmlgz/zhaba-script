#include <bits/stdc++.h>

int __zhlop_minus(int a) {
  return -a;
}

int __zhbop_slash(int a, int b) {
  return a / b;
}

int __zhbop_percent(int a, int b) {
  return a % b;
}

int __zhbop_asterisk(int a, int b) {
  return a * b;
}

int __zhbop_percentpercent(int a, int b) {
  return !(a % b);
}

int __zhbop_plus(int a, int b) {
  return a + b;
}

int __zhbop_minus(int a, int b) {
  return a - b;
}

int __zhbop_less(int a, int b) {
  return a < b;
}

int __zhbop_greater(int a, int b) {
  return a > b;
}

int __zhbop_lessequal(int a, int b) {
  return a <= b;
}

int __zhbop_greaterequal(int a, int b) {
  return a >= b;
}

int __zhbop_equalequal(int a, int b) {
  return a == b;
}

int __zhbop_exclamationequal(int a, int b) {
  return a != b;
}

int __zhbop_ampersandampersand(int a, int b) {
  return a && b;
}

int __zhbop_pipepipe(int a, int b) {
  return a || b;
}

void __zhlop_out(int x) {
   printf("%d\n",x);;
}

void __zhlop_out(std::string s) {
   printf("%s\n",s.c_str());;
}

void __zhlop_fizz_buzz(int mx) {
  int i;
  (i) = (1);
  while (__zhbop_lessequal(i, mx)) {
    if (__zhbop_ampersandampersand(__zhbop_percentpercent(i, 3), __zhbop_percentpercent(i, 5))) {
      __zhlop_out("FizzBuzz");
    } else if (__zhbop_percentpercent(i, 3)) {
      __zhlop_out("Fizz");
    } else if (__zhbop_percentpercent(i, 5)) {
      __zhlop_out("Buzz");
    } else {
      __zhlop_out(i);
    }
    (i) = (__zhbop_plus(i, 1));
  };
}

int main() {
  __zhlop_fizz_buzz(50);
}

