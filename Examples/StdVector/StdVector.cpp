#include <bits/stdc++.h>

int64_t __zhlop_minus(int64_t a) {
  return -a;
}

int64_t __zhbop_slash(int64_t a, int64_t b) {
  return a / b;
}

int64_t __zhbop_percent(int64_t a, int64_t b) {
  return a % b;
}

int64_t __zhbop_asterisk(int64_t a, int64_t b) {
  return a * b;
}

int64_t __zhbop_percentpercent(int64_t a, int64_t b) {
  return !(a % b);
}

int64_t __zhbop_plus(int64_t a, int64_t b) {
  return a + b;
}

int64_t __zhbop_minus(int64_t a, int64_t b) {
  return a - b;
}

int64_t __zhbop_less(int64_t a, int64_t b) {
  return a < b;
}

int64_t __zhbop_greater(int64_t a, int64_t b) {
  return a > b;
}

int64_t __zhbop_lessequal(int64_t a, int64_t b) {
  return a <= b;
}

int64_t __zhbop_greaterequal(int64_t a, int64_t b) {
  return a >= b;
}

int64_t __zhbop_equalequal(int64_t a, int64_t b) {
  return a == b;
}

int64_t __zhbop_exclamationequal(int64_t a, int64_t b) {
  return a != b;
}

int64_t __zhbop_ampersandampersand(int64_t a, int64_t b) {
  return a && b;
}

int64_t __zhbop_pipepipe(int64_t a, int64_t b) {
  return a || b;
}

void __zhlop_out(int64_t x) {
   printf("%d\n",x);;
}

void __zhlop_out(std::string s) {
   printf("%s\n",s.c_str());;
}

int64_t __zhlop_vec(int64_t sz, int64_t val) {
   return (int64_t)(new std::vector<int64_t>(sz, val));
}

void __zhbop_push(int64_t ptr, int64_t item) {
   ((std::vector<int64_t>*)(ptr))->push_back(item);
}

int64_t __zhbop_at(int64_t ptr, int64_t pos) {
   return ((std::vector<int64_t>*)(ptr))->at(pos);
}

int main(int argc, char *argv[]) {
  int64_t v;
  (v) = (__zhlop_vec(0, 0));
  __zhbop_push(v, 54);
  __zhbop_push(v, 666);
  __zhbop_push(v, 1);
  __zhbop_push(v, 2);
  __zhbop_push(v, 6);
  __zhlop_out(__zhbop_at(v, 1));
}

