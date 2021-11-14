#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;

struct __PROT_ZH_TYPE_Canvas;
typedef struct __PROT_ZH_TYPE_Canvas __ZH_TYPE_Canvas;

struct __PROT_ZH_TYPE_Canvas {
  i64 h;
  i64 w;
  char* head;
};
i64 __ZH_LOP_minus_int(i64 a);
i64 __ZH_LOP_exclamation_int(i64 a);
i64 __ZH_BOP_slash_intint(i64 a, i64 b);
i64 __ZH_BOP_percent_intint(i64 a, i64 b);
i64 __ZH_BOP_percent_int(u64 a, i64 b);
i64 __ZH_BOP_asterisk_intint(i64 a, i64 b);
i64 __ZH_BOP_plus_intint(i64 a, i64 b);
i64 __ZH_BOP_minus_intint(i64 a, i64 b);
i64 __ZH_BOP_less_intint(i64 a, i64 b);
i64 __ZH_BOP_greater_intint(i64 a, i64 b);
i64 __ZH_BOP_lessequal_intint(i64 a, i64 b);
i64 __ZH_BOP_greaterequal_intint(i64 a, i64 b);
i64 __ZH_BOP_equalequal_intint(i64 a, i64 b);
i64 __ZH_BOP_equalequal_charchar(char a, char b);
i64 __ZH_BOP_ampersandampersand_intint(i64 a, i64 b);
i64 __ZH_BOP_pipepipe_intint(i64 a, i64 b);
i64 __ZH_LOP_plus_int(i64 a);
i64 __ZH_BOP_percentpercent_intint(i64 a, i64 b);
i64 __ZH_BOP_exclamationequal_intint(i64 a, i64 b);
i64 __ZH_BOP_exclamationequal_charchar(char a, char b);
i64 __ZH_BOP_plusequal_intPint(i64* a, i64 b);
i64 __ZH_BOP_minusequal_intPint(i64* a, i64 b);
i64 __ZH_BOP_slashequal_intPint(i64* a, i64 b);
i64 __ZH_BOP_percentequal_intPint(i64* a, i64 b);
i64 __ZH_BOP_asteriskequal_intPint(i64* a, i64 b);
void __ZH_LOP_put_str(char* s);
void __ZH_LOP_put_int(i64 n);
void __ZH_LOP_put_char(char ch);
void __ZH_LOP_out_int(i64 x);
void __ZH_LOP_out_(u64 x);
void __ZH_LOP_out_str(char* s);
void __ZH_LOP_out_char(char ch);
void __ZH_LOP_outs_int(i64 i);
i64 __ZH_LOP_realloc_intint(i64 ptr, i64 new_size);
i64 __ZH_LOP_malloc_int(i64 size);
void __ZH_LOP_free_int(i64 ptr);
i64* __ZH_BOP_plus_intPint(i64* a, i64 b);
i64* __ZH_BOP_plus_intintP(i64 b, i64* a);
i64* __ZH_BOP_minus_intPint(i64* a, i64 b);
i64* __ZH_BOP_minus_intintP(i64 b, i64* a);
i64 __ZH_BOP_less_intPintP(i64* a, i64* b);
i64 __ZH_BOP_equalequal_intPintP(i64* a, i64* b);
i64 __ZH_BOP_exclamationequal_intPintP(i64* a, i64* b);
void __ZH_LOP_sleep_int(i64 n);
u64 __ZH_LOP_rng_();
void __ZH_LOP_swap_intPintP(i64* a, i64* b);
i64* __ZH_LOP_partition_intPintP(i64* low, i64* high);
void __ZH_LOP_qsort_intPintP(i64* lhs, i64* rhs);
__ZH_TYPE_Canvas __ZH_LOP_newCanvas_intint(i64 w, i64 h);
char* __ZH_BOP_dotcalldotat_CanvasPintint(__ZH_TYPE_Canvas* slf, i64 x, i64 y);
char __ZH_BOP_dotcalldotget_CanvasPintint(__ZH_TYPE_Canvas* slf, i64 x, i64 y);
void __ZH_BOP_dotcalldotfill_CanvasPchar(__ZH_TYPE_Canvas* slf, char ch);
void __ZH_LOP_out_CanvasP(__ZH_TYPE_Canvas* c);
char __ZH_LOP_aschar_str(char* s);
int main(int argc, char *argv[]) ;

i64 __ZH_LOP_minus_int(i64 a) {
  return -a;
}
i64 __ZH_LOP_exclamation_int(i64 a) {
  return !a;
}
i64 __ZH_BOP_slash_intint(i64 a, i64 b) {
  return a / b;
}
i64 __ZH_BOP_percent_intint(i64 a, i64 b) {
  return a % b;
}
i64 __ZH_BOP_percent_int(u64 a, i64 b) {
  return a % b;
}
i64 __ZH_BOP_asterisk_intint(i64 a, i64 b) {
  return a * b;
}
i64 __ZH_BOP_plus_intint(i64 a, i64 b) {
  return a + b;
}
i64 __ZH_BOP_minus_intint(i64 a, i64 b) {
  return a - b;
}
i64 __ZH_BOP_less_intint(i64 a, i64 b) {
  return a < b;
}
i64 __ZH_BOP_greater_intint(i64 a, i64 b) {
  return a > b;
}
i64 __ZH_BOP_lessequal_intint(i64 a, i64 b) {
  return a <= b;
}
i64 __ZH_BOP_greaterequal_intint(i64 a, i64 b) {
  return a >= b;
}
i64 __ZH_BOP_equalequal_intint(i64 a, i64 b) {
  return a == b;
}
i64 __ZH_BOP_equalequal_charchar(char a, char b) {
  return a == b;
}
i64 __ZH_BOP_ampersandampersand_intint(i64 a, i64 b) {
  return a && b;
}
i64 __ZH_BOP_pipepipe_intint(i64 a, i64 b) {
  return a || b;
}
i64 __ZH_LOP_plus_int(i64 a) {
  return (a);
}
i64 __ZH_BOP_percentpercent_intint(i64 a, i64 b) {
  return (__ZH_LOP_exclamation_int(__ZH_BOP_percent_intint(a, b)));
}
i64 __ZH_BOP_exclamationequal_intint(i64 a, i64 b) {
  return (__ZH_LOP_exclamation_int(__ZH_BOP_equalequal_intint(a, b)));
}
i64 __ZH_BOP_exclamationequal_charchar(char a, char b) {
  return (__ZH_LOP_exclamation_int(__ZH_BOP_equalequal_charchar(a, b)));
}
i64 __ZH_BOP_plusequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_plus_intint((*(a)), b));
}
i64 __ZH_BOP_minusequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_minus_intint((*(a)), b));
}
i64 __ZH_BOP_slashequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_slash_intint((*(a)), b));
}
i64 __ZH_BOP_percentequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_percent_intint((*(a)), b));
}
i64 __ZH_BOP_asteriskequal_intPint(i64* a, i64 b) {
  ((*(a))) = (__ZH_BOP_asterisk_intint((*(a)), b));
}
void __ZH_LOP_put_str(char* s) {
   printf("%s",s);;
}
void __ZH_LOP_put_int(i64 n) {
   printf("%d",n);;
}
void __ZH_LOP_put_char(char ch) {
   printf("%c",ch);;
}
void __ZH_LOP_out_int(i64 x) {
   printf("%d\n",x);;
}
void __ZH_LOP_out_(u64 x) {
   printf("%llu\n",x);;
}
void __ZH_LOP_out_str(char* s) {
   printf("%s\n",s);;
}
void __ZH_LOP_out_char(char ch) {
   putchar(ch);;
}
void __ZH_LOP_outs_int(i64 i) {
   printf("%d ", i);;
}
i64 __ZH_LOP_realloc_intint(i64 ptr, i64 new_size) {
   return (i64)realloc((void*)ptr, new_size);
}
i64 __ZH_LOP_malloc_int(i64 size) {
   return (i64)malloc(size);
}
void __ZH_LOP_free_int(i64 ptr) {
   free((void*)ptr);
}
i64* __ZH_BOP_plus_intPint(i64* a, i64 b) {
  return (((i64*)(__ZH_BOP_plus_intint(((i64)(a)), __ZH_BOP_asterisk_intint(b, 8)))));
}
i64* __ZH_BOP_plus_intintP(i64 b, i64* a) {
  return (((i64*)(__ZH_BOP_plus_intint(((i64)(a)), __ZH_BOP_asterisk_intint(b, 8)))));
}
i64* __ZH_BOP_minus_intPint(i64* a, i64 b) {
  return (((i64*)(__ZH_BOP_minus_intint(((i64)(a)), __ZH_BOP_asterisk_intint(b, 8)))));
}
i64* __ZH_BOP_minus_intintP(i64 b, i64* a) {
  return (((i64*)(__ZH_BOP_minus_intint(((i64)(a)), __ZH_BOP_asterisk_intint(b, 8)))));
}
i64 __ZH_BOP_less_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_less_intint(((i64)(a)), ((i64)(b))));
}
i64 __ZH_BOP_equalequal_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_equalequal_intint(((i64)(a)), ((i64)(b))));
}
i64 __ZH_BOP_exclamationequal_intPintP(i64* a, i64* b) {
  return (__ZH_BOP_exclamationequal_intint(((i64)(a)), ((i64)(b))));
}
void __ZH_LOP_sleep_int(i64 n) {
  unsigned int retTime = clock() + n;
  while (clock() < retTime);
}
u64 __ZH_LOP_rng_() {
  static unsigned long long x = 666;
  x ^= x << 13;
  x ^= x >> 7;
  x ^= x << 17;
  return x;
}
void __ZH_LOP_swap_intPintP(i64* a, i64* b) {
  i64 t;
  (t) = ((*(a)));
  ((*(a))) = ((*(b)));
  ((*(b))) = (t);
}
i64* __ZH_LOP_partition_intPintP(i64* low, i64* high) {
  i64* j;
  i64* i;
  i64* pivot;
  (pivot) = (__ZH_BOP_minus_intPint(high, 1));
  (i) = (low);
  (j) = (low);
  (i) = (low);
  (j) = (low);
  while (__ZH_BOP_exclamationequal_intPintP(j, pivot)) {
    if (__ZH_BOP_less_intint((*(j)), (*(pivot)))) {
      __ZH_LOP_swap_intPintP(i, j);
      (i) = (__ZH_BOP_plus_intPint(i, 1));
    }
    (j) = (__ZH_BOP_plus_intPint(j, 1));
  };
  __ZH_LOP_swap_intPintP(i, pivot);
  return (i);
}
void __ZH_LOP_qsort_intPintP(i64* lhs, i64* rhs) {
  if (__ZH_BOP_greater_intint(__ZH_BOP_minus_intint(((i64)(rhs)), ((i64)(lhs))), 8)) {
    i64* pi;
    (pi) = (__ZH_LOP_partition_intPintP(lhs, rhs));
    __ZH_LOP_qsort_intPintP(lhs, pi);
    __ZH_LOP_qsort_intPintP(__ZH_BOP_plus_intPint(pi, 1), rhs);
  }
}
__ZH_TYPE_Canvas __ZH_LOP_newCanvas_intint(i64 w, i64 h) {
  __ZH_TYPE_Canvas res;
  ((res).w) = (w);
  ((res).h) = (h);
  ((res).head) = (((char*)(__ZH_LOP_malloc_int(__ZH_BOP_asterisk_intint(w, h)))));
  return (res);
}
char* __ZH_BOP_dotcalldotat_CanvasPintint(__ZH_TYPE_Canvas* slf, i64 x, i64 y) {
  return (((char*)(__ZH_BOP_plus_intint(__ZH_BOP_plus_intint(((i64)((slf)->head)), __ZH_BOP_asterisk_intint((slf)->w, y)), x))));
}
char __ZH_BOP_dotcalldotget_CanvasPintint(__ZH_TYPE_Canvas* slf, i64 x, i64 y) {
  return ((*(__ZH_BOP_dotcalldotat_CanvasPintint(slf, x, y))));
}
void __ZH_BOP_dotcalldotfill_CanvasPchar(__ZH_TYPE_Canvas* slf, char ch) {
  i64 j;
  i64 i;
  (i) = (0);
  while (__ZH_BOP_less_intint(i, (slf)->h)) {
    (j) = (0);
    while (__ZH_BOP_less_intint(j, (slf)->w)) {
      ((*(__ZH_BOP_dotcalldotat_CanvasPintint(slf, i, j)))) = (ch);
      (j) = (__ZH_BOP_plus_intint(j, 1));
    };
    (i) = (__ZH_BOP_plus_intint(i, 1));
  };
}
void __ZH_LOP_out_CanvasP(__ZH_TYPE_Canvas* c) {
  i64 j;
  i64 i;
  (i) = (0);
  while (__ZH_BOP_less_intint(i, (c)->h)) {
    (j) = (0);
    while (__ZH_BOP_less_intint(j, (c)->w)) {
      __ZH_LOP_out_char((*(__ZH_BOP_dotcalldotat_CanvasPintint(c, i, j))));
      __ZH_LOP_out_char(((char)(32)));
      (j) = (__ZH_BOP_plus_intint(j, 1));
    };
    __ZH_LOP_out_str("");
    (i) = (__ZH_BOP_plus_intint(i, 1));
  };
}
char __ZH_LOP_aschar_str(char* s) {
  return ((*(((char*)(s)))));
}
int main(int argc, char *argv[])  {
  char live;
  char dead;
  i64 i;
  i64 j;
  i64 r;
  __ZH_TYPE_Canvas c;
  i64 k;
  i64 h;
  i64 w;
  (w) = (20);
  (h) = (20);
  (c) = (__ZH_LOP_newCanvas_intint(w, h));
  (r) = (54);
  (dead) = (__ZH_LOP_aschar_str("."));
  (live) = (__ZH_LOP_aschar_str("#"));
  __ZH_BOP_dotcalldotfill_CanvasPchar((&(c)), __ZH_LOP_aschar_str("."));
  (i) = (0);
  while (__ZH_BOP_less_intint(i, (c).h)) {
    (j) = (0);
    while (__ZH_BOP_less_intint(j, (c).w)) {
      (r) = (((i64)(__ZH_LOP_rng_())));
      if (__ZH_BOP_percent_intint(r, 2)) {
        ((*(__ZH_BOP_dotcalldotat_CanvasPintint((&(c)), i, j)))) = (__ZH_LOP_aschar_str("#"));
      }
      (j) = (__ZH_BOP_plus_intint(j, 1));
    };
    (i) = (__ZH_BOP_plus_intint(i, 1));
  };
  (k) = (0);
  while (__ZH_BOP_less_intint(k, 50)) {
    __ZH_TYPE_Canvas nc;
    (nc) = (__ZH_LOP_newCanvas_intint(w, h));
    __ZH_BOP_dotcalldotfill_CanvasPchar((&(nc)), __ZH_LOP_aschar_str("."));
    (i) = (1);
    while (__ZH_BOP_less_intint(i, __ZH_BOP_minus_intint((c).h, 1))) {
      (j) = (1);
      while (__ZH_BOP_less_intint(j, __ZH_BOP_minus_intint((c).w, 1))) {
        i64 near;
        (near) = (0);
        if (__ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), __ZH_BOP_minus_intint(i, 1), j), live)) {
          __ZH_BOP_plusequal_intPint((&(near)), 1);
        }
        if (__ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), i, __ZH_BOP_minus_intint(j, 1)), live)) {
          __ZH_BOP_plusequal_intPint((&(near)), 1);
        }
        if (__ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), __ZH_BOP_plus_intint(i, 1), j), live)) {
          __ZH_BOP_plusequal_intPint((&(near)), 1);
        }
        if (__ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), i, __ZH_BOP_plus_intint(j, 1)), live)) {
          __ZH_BOP_plusequal_intPint((&(near)), 1);
        }
        if (__ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), __ZH_BOP_minus_intint(i, 1), __ZH_BOP_minus_intint(j, 1)), live)) {
          __ZH_BOP_plusequal_intPint((&(near)), 1);
        }
        if (__ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), __ZH_BOP_minus_intint(i, 1), __ZH_BOP_plus_intint(j, 1)), live)) {
          __ZH_BOP_plusequal_intPint((&(near)), 1);
        }
        if (__ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), __ZH_BOP_plus_intint(i, 1), __ZH_BOP_minus_intint(j, 1)), live)) {
          __ZH_BOP_plusequal_intPint((&(near)), 1);
        }
        if (__ZH_BOP_equalequal_charchar(__ZH_BOP_dotcalldotget_CanvasPintint((&(c)), __ZH_BOP_plus_intint(i, 1), __ZH_BOP_plus_intint(j, 1)), live)) {
          __ZH_BOP_plusequal_intPint((&(near)), 1);
        }
        if (__ZH_BOP_equalequal_charchar((*(__ZH_BOP_dotcalldotat_CanvasPintint((&(c)), i, j))), live)) {
          if (__ZH_BOP_pipepipe_intint(__ZH_BOP_equalequal_intint(near, 2), __ZH_BOP_equalequal_intint(near, 3))) {
            ((*(__ZH_BOP_dotcalldotat_CanvasPintint((&(nc)), i, j)))) = (((char)(live)));
          }
        } else {
          if (__ZH_BOP_equalequal_intint(near, 3)) {
            ((*(__ZH_BOP_dotcalldotat_CanvasPintint((&(nc)), i, j)))) = (((char)(live)));
          }
        }
        (j) = (__ZH_BOP_plus_intint(j, 1));
      };
      (i) = (__ZH_BOP_plus_intint(i, 1));
    };
    (c) = (nc);
    __ZH_LOP_out_CanvasP((&(c)));
    __ZH_LOP_sleep_int(600);
    (k) = (__ZH_BOP_plus_intint(k, 1));
  };
}
