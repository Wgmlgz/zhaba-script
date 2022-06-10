#include <stdlib.h>

// @zh-type ["bool _", "EXIT_CODE"]

// @zh-fn ["fn EXIT_CODE EXIT_SUCCESS", "GET_EXIT_SUCCESS"]
#define GET_EXIT_SUCCESS() EXIT_SUCCESS
// @zh-fn ["fn EXIT_CODE EXIT_FAILURE ", "GET_EXIT_FAILURE "]
#define GET_EXIT_FAILURE() EXIT_FAILURE
// @zh-fn ["fn exit EXIT_CODE code", "exit"]

// @zh-fn ["fn panic str s", "panic_macro"]

#define panic_macro(s) panic_c(s, __FILE__, __LINE__)

void panic_c(const char* s, const char* file, int line) {
  fprintf(stderr, "Program panic at %s:%d:\n%s\n", file, line, s);
  exit(EXIT_FAILURE);
}