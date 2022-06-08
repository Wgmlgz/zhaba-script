#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\valist.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\keyboard.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\math.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\screen.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\stdio.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\time.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\stdlib.c"

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef char* str;

typedef float f32;
typedef double f64;

i64 alloc(i64 size) {
  void* ptr = calloc(size, 1);
  return (i64)ptr;
}

char *in_str() {
  size_t size = 10;
  char *str;
  int ch;
  size_t len = 0;
  str = (char*)realloc(NULL, sizeof(*str)*size);
  if(!str)return str;
  while(EOF!=(ch=fgetc(stdin)) && ch != '\n'){
    str[len++]=ch;
    if (len==size) {
      str = (char*)realloc(str, sizeof(*str)*(size+=16));
      if(!str) return str;
    }
  }
  str[len++]='\0';
  return (char*)realloc(str, sizeof(*str)*len);
}
void panic(char* str) {
  printf("%s", str);
  exit(EXIT_FAILURE);
}
i8 in_i8() {
  i8 tmp;
  scanf("%i", &tmp);
  return tmp;
}
i16 in_i16() {
  i16 tmp;
  scanf("%i", &tmp);
  return tmp;
}
i32 in_i32() {
  i32 tmp;
  scanf("%i", &tmp);
  return tmp;
}
i64 in_i64() {
  i64 tmp;
  scanf("%i", &tmp);
  return tmp;
}
u8 in_u8() {
  u8 tmp;
  scanf("%i", &tmp);
  return tmp;
}
u16 in_u16() {
  u16 tmp;
  scanf("%i", &tmp);
  return tmp;
}
u32 in_u32() {
  u32 tmp;
  scanf("%i", &tmp);
  return tmp;
}
u64 in_u64() {
  u64 tmp;
  scanf("%i", &tmp);
  return tmp;
}
char in_char() {
  char tmp;
  scanf("%i", &tmp);
  return tmp;
}
bool in_bool() {
  bool tmp;
  scanf("%i", &tmp);
  return tmp;
}
float in_f32() {
  float tmp;
  scanf("%f", &tmp);
  return tmp;
}
double in_f64() {
  double tmp;
  scanf("%lf", &tmp);
  return tmp;
}

int main(int argc, char *argv[]) ;

int main(int argc, char *argv[]) {
  char v103; /*ch*/
  FILE* v102; /*f*/
  str v101; /*name*/
  ((v101)=((str)"file.zh"));
  ((v102)=fopen((v101), ((str)"r")));
  if (((((i64)(v102)))==(((i64)((FILE*)((i64)0)))))) {
    (printf("%s\n", ((str)"File read error")));
    exit(GET_EXIT_FAILURE ());
  }
  ((v103)=fgetc((v102)));
  while ((((v103))!=(((char)(-(((i64)1))))))) {
    printf(((str)"%c"), FAKE_VA_LIST((v103)));
    ((v103)=fgetc((v102)));
  }
}

