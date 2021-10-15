#include <stdlib.h>
#include<string>

struct __zhstruct_arr;

struct __zhstruct_arr {
  int64_t size;
  int64_t head;
};

int64_t __zhlop_minus(int64_t a);
int64_t __zhlop_plus(int64_t a);
int64_t __zhlop_exclamation(int64_t a);
int64_t __zhbop_slash(int64_t a, int64_t b);
int64_t __zhbop_percent(int64_t a, int64_t b);
int64_t __zhbop_asterisk(int64_t a, int64_t b);
int64_t __zhbop_percentpercent(int64_t a, int64_t b);
int64_t __zhbop_plus(int64_t a, int64_t b);
int64_t __zhbop_minus(int64_t a, int64_t b);
int64_t __zhbop_less(int64_t a, int64_t b);
int64_t __zhbop_greater(int64_t a, int64_t b);
int64_t __zhbop_lessequal(int64_t a, int64_t b);
int64_t __zhbop_greaterequal(int64_t a, int64_t b);
int64_t __zhbop_equalequal(int64_t a, int64_t b);
int64_t __zhbop_exclamationequal(int64_t a, int64_t b);
int64_t __zhbop_ampersandampersand(int64_t a, int64_t b);
int64_t __zhbop_pipepipe(int64_t a, int64_t b);
void __zhlop_out(int64_t x);
void __zhlop_out(std::string s);
void __zhlop_outs(int64_t i);
void __zhlop_ptr_set(int64_t ptr, int64_t val);
int64_t __zhlop__ptr_get(int64_t ptr);
int64_t __zhlop_malloc(int64_t size);
void __zhlop_free(int64_t p);
void __zhlop_arr_set(__zhstruct_arr ar, int64_t pos, int64_t val);
int64_t __zhlop_arr_get(__zhstruct_arr ar, int64_t pos);
__zhstruct_arr __zhlop_new_arr(int64_t size, int64_t val);
void __zhlop_out(__zhstruct_arr ar);
void __zhlop_iota(__zhstruct_arr ar, int64_t start);
int main(int argc, char *argv[]) ;

int64_t __zhlop_minus(int64_t a) {
  return -a;
}

int64_t __zhlop_plus(int64_t a) {
  return +a;
}

int64_t __zhlop_exclamation(int64_t a) {
  return !a;
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

void __zhlop_outs(int64_t i) {
   printf("%d ", i);;
}

void __zhlop_ptr_set(int64_t ptr, int64_t val) {
   *((int64_t*)(ptr))=val;;
}

int64_t __zhlop__ptr_get(int64_t ptr) {
  return *(int64_t*)(ptr);
}

int64_t __zhlop_malloc(int64_t size) {
  return (int64_t)(malloc(size));
}

void __zhlop_free(int64_t p) {
  free((void*)p);
}

void __zhlop_arr_set(__zhstruct_arr ar, int64_t pos, int64_t val) {
  int64_t ptr;
  (ptr) = (__zhbop_plus((ar).head, __zhbop_asterisk(pos, 8)));
  __zhlop_ptr_set(ptr, val);
}

int64_t __zhlop_arr_get(__zhstruct_arr ar, int64_t pos) {
  return (__zhlop__ptr_get(__zhbop_plus((ar).head, __zhbop_asterisk(pos, 8))));
}

__zhstruct_arr __zhlop_new_arr(int64_t size, int64_t val) {
  int64_t i;
  __zhstruct_arr ar;
  ((ar).size) = (size);
  ((ar).head) = (__zhlop_malloc(__zhbop_asterisk(size, 8)));
  (i) = (0);
  while (__zhbop_less(i, size)) {
    __zhlop_arr_set(ar, i, val);
    (i) = (__zhbop_plus(i, 1));
  };
  return (ar);
}

void __zhlop_out(__zhstruct_arr ar) {
  int64_t i;
  (i) = (0);
  while (__zhbop_less(i, (ar).size)) {
    __zhlop_outs(__zhlop_arr_get(ar, i));
    (i) = (__zhbop_plus(i, 1));
  };
  __zhlop_out("");
}

void __zhlop_iota(__zhstruct_arr ar, int64_t start) {
  int64_t i;
  (i) = (0);
  while (__zhbop_less(i, (ar).size)) {
    __zhlop_arr_set(ar, i, __zhbop_plus(start, i));
    (i) = (__zhbop_plus(i, 1));
  };
}

int main(int argc, char *argv[])  {
  __zhstruct_arr array;
  (array) = (__zhlop_new_arr(10, 0));
  __zhlop_iota(array, 1);
  __zhlop_out(array);
}

