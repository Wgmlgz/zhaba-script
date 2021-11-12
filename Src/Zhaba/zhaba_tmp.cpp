#include <stdlib.h>
#include<string>

struct __zhstruct_Vec;

struct __zhstruct_Vec {
  int64_t y;
  int64_t x;
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
void __zhbop_dotequal(int64_t ptr, int64_t val);
int64_t __zhlop_ptr_get(int64_t ptr);
int64_t __zhlop_malloc(int64_t size);
void __zhlop_free(int64_t p);
__zhstruct_Vec __zhlop_newVec();
int64_t __zhbop_dotgetX(__zhstruct_Vec* self);
int64_t __zhbop_dotgetY(__zhstruct_Vec* self);
void __zhbop_dotsetX(__zhstruct_Vec* self, int64_t x);
void __zhbop_dotsetY(__zhstruct_Vec* self, int64_t y);
std::string __zhbop_dotto_str(int64_t* self);
int64_t __zhlop_vecGet(__zhstruct_Vec* v);
void __zhlop_vecSet(__zhstruct_Vec* v, int64_t val);
void __zhbop_memCall(__zhstruct_Vec v, int64_t a, int64_t b);
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

void __zhbop_dotequal(int64_t ptr, int64_t val) {
   *((int64_t*)(ptr))=val;;
}

int64_t __zhlop_ptr_get(int64_t ptr) {
  return *(int64_t*)(ptr);
}

int64_t __zhlop_malloc(int64_t size) {
  return (int64_t)(malloc(size));
}

void __zhlop_free(int64_t p) {
  free((void*)p);
}

__zhstruct_Vec __zhlop_newVec() {
  __zhstruct_Vec v;
  ((v).x) = (0);
  return (v);
}

int64_t __zhbop_dotgetX(__zhstruct_Vec* self) {
  return ((self)->x);
}

int64_t __zhbop_dotgetY(__zhstruct_Vec* self) {
  return ((self)->y);
}

void __zhbop_dotsetX(__zhstruct_Vec* self, int64_t x) {
  ((self)->x) = (x);
}

void __zhbop_dotsetY(__zhstruct_Vec* self, int64_t y) {
  ((self)->y) = (y);
}

std::string __zhbop_dotto_str(int64_t* self) {
  std::string s;
   s = std::to_string(*self);
  return (s);
}

int64_t __zhlop_vecGet(__zhstruct_Vec* v) {
  return ((v)->x);
}

void __zhlop_vecSet(__zhstruct_Vec* v, int64_t val) {
  ((v)->x) = (val);
}

void __zhbop_memCall(__zhstruct_Vec v, int64_t a, int64_t b) {
  __zhlop_out("wow member call!!!");
}

int main(int argc, char *argv[])  {
  int64_t dva;
  (dva) = (2);
  __zhlop_out(__zhbop_dotto_str((&(dva))));
}

