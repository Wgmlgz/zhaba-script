#include <stdlib.h>

// @zh-fn ["fn panic str s", "panic_macro"]

#define panic_macro(s) panic_c(s, __FILE__, __LINE__)

void panic_c(const char* s, const char* file, int line) {
  fprintf(stderr, "Program panic at %s:%d:\n%s\n", file, line, s);
  exit(EXIT_FAILURE);
}