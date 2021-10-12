#include <stdlib.h>
#include<string>

struct __zhstruct_vec;

struct __zhstruct_vec {
  int64_t capacity;
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
int64_t __zhlop_ptr_get(int64_t ptr);
int64_t __zhlop_malloc(int64_t size);
void __zhlop_free(int64_t p);
void __zhlop_vec_set(__zhstruct_vec v, int64_t pos, int64_t val);
int64_t __zhlop_vec_get(__zhstruct_vec v, int64_t pos);
__zhstruct_vec __zhlop_new_vec(int64_t size, int64_t val);
__zhstruct_vec __zhlop_vec_double(__zhstruct_vec v);
__zhstruct_vec __zhlop_push(__zhstruct_vec v, int64_t val);
__zhstruct_vec __zhlop_pop(__zhstruct_vec v);
void __zhlop_out(__zhstruct_vec v);
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

int64_t __zhlop_ptr_get(int64_t ptr) {
  return *(int64_t*)(ptr);
}

int64_t __zhlop_malloc(int64_t size) {
  return (int64_t)(malloc(size));
}

void __zhlop_free(int64_t p) {
  free((void*)p);
}

void __zhlop_vec_set(__zhstruct_vec v, int64_t pos, int64_t val) {
  int64_t ptr;
  (ptr) = (__zhbop_plus((v).head, __zhbop_asterisk(pos, 8)));
  __zhlop_ptr_set(ptr, val);
}

int64_t __zhlop_vec_get(__zhstruct_vec v, int64_t pos) {
  return (__zhlop_ptr_get(__zhbop_plus((v).head, __zhbop_asterisk(pos, 8))));
}

__zhstruct_vec __zhlop_new_vec(int64_t size, int64_t val) {
  int64_t i;
  __zhstruct_vec v;
  ((v).size) = (size);
  ((v).capacity) = (size);
  if (size) {
    ((v).head) = (__zhlop_malloc(__zhbop_asterisk(size, 8)));
  } else {
    ((v).head) = (0);
  }
  (i) = (0);
  while (__zhbop_less(i, size)) {
    __zhlop_vec_set(v, i, val);
    (i) = (__zhbop_plus(i, 1));
  };
  return (v);
}

__zhstruct_vec __zhlop_vec_double(__zhstruct_vec v) {
  int64_t i;
  __zhstruct_vec tmp;
  int64_t new_capacity;
  (new_capacity) = (__zhbop_asterisk((v).capacity, 2));
  if (__zhbop_equalequal(new_capacity, 0)) {
    (new_capacity) = (1);
  }
  (tmp) = (__zhlop_new_vec(new_capacity, 0));
  (i) = (0);
  while (__zhbop_less(i, (v).size)) {
    int64_t t;
    (t) = (__zhlop_vec_get(v, i));
    __zhlop_vec_set(tmp, i, t);
    (i) = (__zhbop_plus(i, 1));
  };
  return (tmp);
}

__zhstruct_vec __zhlop_push(__zhstruct_vec v, int64_t val) {
  int64_t pos;
  (pos) = ((v).size);
  if (__zhbop_equalequal((v).size, (v).capacity)) {
    (v) = (__zhlop_vec_double(v));
  }
  __zhlop_vec_set(v, pos, val);
  ((v).size) = (__zhbop_plus(pos, 1));
  return (v);
}

__zhstruct_vec __zhlop_pop(__zhstruct_vec v) {
  if (__zhbop_greater((v).size, 0)) {
    ((v).size) = (__zhbop_minus((v).size, 1));
  }
  return (v);
}

void __zhlop_out(__zhstruct_vec v) {
  int64_t i;
  (i) = (0);
  while (__zhbop_less(i, (v).size)) {
    __zhlop_outs(__zhlop_vec_get(v, i));
    (i) = (__zhbop_plus(i, 1));
  };
  __zhlop_out("");
}

int main(int argc, char *argv[])  {
  __zhstruct_vec v;
  (v) = (__zhlop_new_vec(0, 0));
  (v) = (__zhlop_push(v, 1));
  (v) = (__zhlop_push(v, 2));
  (v) = (__zhlop_push(v, 3));
  (v) = (__zhlop_push(v, 4));
  (v) = (__zhlop_push(v, 5));
  (v) = (__zhlop_pop(v));
  __zhlop_out(v);
  __zhlop_vec_set(v, 0, 5);
  __zhlop_vec_set(v, 1, 4);
  __zhlop_out(v);
  __zhlop_out("wow vector");
}

