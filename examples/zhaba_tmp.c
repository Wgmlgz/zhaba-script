#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>

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

char *inputString(){
    size_t size = 10;
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(*str)*size);
    if(!str)return str;
    while(EOF!=(ch=fgetc(stdin)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(*str)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(*str)*len);
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
char* in_str() {
  char* tmp;
  scanf("%s", &tmp);
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
struct __PROT_ZH_TYPE_IntOpMaker_lessi8_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lessi8_greater __ZH_TYPE_IntOpMaker_lessi8_greater;
struct __PROT_ZH_TYPE_IntOpMaker_lessi16_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lessi16_greater __ZH_TYPE_IntOpMaker_lessi16_greater;
struct __PROT_ZH_TYPE_IntOpMaker_lessi32_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lessi32_greater __ZH_TYPE_IntOpMaker_lessi32_greater;
struct __PROT_ZH_TYPE_IntOpMaker_lessi64_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lessi64_greater __ZH_TYPE_IntOpMaker_lessi64_greater;
struct __PROT_ZH_TYPE_IntOpMaker_lessu8_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lessu8_greater __ZH_TYPE_IntOpMaker_lessu8_greater;
struct __PROT_ZH_TYPE_IntOpMaker_lessu16_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lessu16_greater __ZH_TYPE_IntOpMaker_lessu16_greater;
struct __PROT_ZH_TYPE_IntOpMaker_lessu32_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lessu32_greater __ZH_TYPE_IntOpMaker_lessu32_greater;
struct __PROT_ZH_TYPE_IntOpMaker_lessu64_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lessu64_greater __ZH_TYPE_IntOpMaker_lessu64_greater;
struct __PROT_ZH_TYPE_IntOpMaker_lesschar_greater;
typedef struct __PROT_ZH_TYPE_IntOpMaker_lesschar_greater __ZH_TYPE_IntOpMaker_lesschar_greater;
struct __PROT_ZH_TYPE_Out;
typedef struct __PROT_ZH_TYPE_Out __ZH_TYPE_Out;
struct __PROT_ZH_TYPE_Range_lessi8_greater;
typedef struct __PROT_ZH_TYPE_Range_lessi8_greater __ZH_TYPE_Range_lessi8_greater;
struct __PROT_ZH_TYPE_Range_lessi16_greater;
typedef struct __PROT_ZH_TYPE_Range_lessi16_greater __ZH_TYPE_Range_lessi16_greater;
struct __PROT_ZH_TYPE_Range_lessi32_greater;
typedef struct __PROT_ZH_TYPE_Range_lessi32_greater __ZH_TYPE_Range_lessi32_greater;
struct __PROT_ZH_TYPE_Range_lessi64_greater;
typedef struct __PROT_ZH_TYPE_Range_lessi64_greater __ZH_TYPE_Range_lessi64_greater;
struct __PROT_ZH_TYPE_Range_lesschar_greater;
typedef struct __PROT_ZH_TYPE_Range_lesschar_greater __ZH_TYPE_Range_lesschar_greater;
struct __PROT_ZH_TYPE_Vec_lessi64_greater;
typedef struct __PROT_ZH_TYPE_Vec_lessi64_greater __ZH_TYPE_Vec_lessi64_greater;
struct __PROT_ZH_TYPE_VecIter_lessi64_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lessi64_greater __ZH_TYPE_VecIter_lessi64_greater;
struct __PROT_ZH_TYPE_VecIterRange_lessi64_greater;
typedef struct __PROT_ZH_TYPE_VecIterRange_lessi64_greater __ZH_TYPE_VecIterRange_lessi64_greater;
struct __PROT_ZH_TYPE_Vec_lesschar_greater;
typedef struct __PROT_ZH_TYPE_Vec_lesschar_greater __ZH_TYPE_Vec_lesschar_greater;
struct __PROT_ZH_TYPE_VecIter_lesschar_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lesschar_greater __ZH_TYPE_VecIter_lesschar_greater;
struct __PROT_ZH_TYPE_VecIterRange_lesschar_greater;
typedef struct __PROT_ZH_TYPE_VecIterRange_lesschar_greater __ZH_TYPE_VecIterRange_lesschar_greater;
struct __PROT_ZH_TYPE_Str;
typedef struct __PROT_ZH_TYPE_Str __ZH_TYPE_Str;
struct __PROT_ZH_TYPE_V2;
typedef struct __PROT_ZH_TYPE_V2 __ZH_TYPE_V2;
struct __PROT_ZH_TYPE_Rng;
typedef struct __PROT_ZH_TYPE_Rng __ZH_TYPE_Rng;
struct __PROT_ZH_TYPE_AVLNode_lessi64_greater;
typedef struct __PROT_ZH_TYPE_AVLNode_lessi64_greater __ZH_TYPE_AVLNode_lessi64_greater;
struct __PROT_ZH_TYPE_AVLTree_lessi64_greater;
typedef struct __PROT_ZH_TYPE_AVLTree_lessi64_greater __ZH_TYPE_AVLTree_lessi64_greater;
struct __PROT_ZH_TYPE_AVLIter_lessi64_greater;
typedef struct __PROT_ZH_TYPE_AVLIter_lessi64_greater __ZH_TYPE_AVLIter_lessi64_greater;
struct __PROT_ZH_TYPE_AVLIterRange_lessi64_greater;
typedef struct __PROT_ZH_TYPE_AVLIterRange_lessi64_greater __ZH_TYPE_AVLIterRange_lessi64_greater;

struct __PROT_ZH_TYPE_IntOpMaker_lessi8_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_IntOpMaker_lessi16_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_IntOpMaker_lessi32_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_IntOpMaker_lessi64_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_IntOpMaker_lessu8_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_IntOpMaker_lessu16_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_IntOpMaker_lessu32_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_IntOpMaker_lessu64_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_IntOpMaker_lesschar_greater {
  bool unused;
};
struct __PROT_ZH_TYPE_Out {
  bool complex;
};
struct __PROT_ZH_TYPE_Range_lessi8_greater {
  i8 end;
  i8 begin;
};
struct __PROT_ZH_TYPE_Range_lessi16_greater {
  i16 end;
  i16 begin;
};
struct __PROT_ZH_TYPE_Range_lessi32_greater {
  i32 end;
  i32 begin;
};
struct __PROT_ZH_TYPE_Range_lessi64_greater {
  i64 end;
  i64 begin;
};
struct __PROT_ZH_TYPE_Range_lesschar_greater {
  char end;
  char begin;
};
struct __PROT_ZH_TYPE_Vec_lessi64_greater {
  i64* head;
  i64 cap;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lessi64_greater {
  i64* ptr;
};
struct __PROT_ZH_TYPE_VecIterRange_lessi64_greater {
  __ZH_TYPE_VecIter_lessi64_greater end;
  __ZH_TYPE_VecIter_lessi64_greater begin;
};
struct __PROT_ZH_TYPE_Vec_lesschar_greater {
  char* head;
  i64 cap;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lesschar_greater {
  char* ptr;
};
struct __PROT_ZH_TYPE_VecIterRange_lesschar_greater {
  __ZH_TYPE_VecIter_lesschar_greater end;
  __ZH_TYPE_VecIter_lesschar_greater begin;
};
struct __PROT_ZH_TYPE_Str {
  i64 size;
  __ZH_TYPE_Vec_lesschar_greater data;
};
struct __PROT_ZH_TYPE_V2 {
  f64 y;
  f64 x;
};
struct __PROT_ZH_TYPE_Rng {
  i64 seed;
};
struct __PROT_ZH_TYPE_AVLNode_lessi64_greater {
  __ZH_TYPE_AVLNode_lessi64_greater* par;
  __ZH_TYPE_AVLNode_lessi64_greater* rhs;
  i64 val;
  __ZH_TYPE_AVLNode_lessi64_greater* lhs;
  i64 h;
};
struct __PROT_ZH_TYPE_AVLTree_lessi64_greater {
  __ZH_TYPE_AVLNode_lessi64_greater* root;
};
struct __PROT_ZH_TYPE_AVLIter_lessi64_greater {
  __ZH_TYPE_AVLNode_lessi64_greater* next;
};
struct __PROT_ZH_TYPE_AVLIterRange_lessi64_greater {
  __ZH_TYPE_AVLIter_lessi64_greater end;
  __ZH_TYPE_AVLIter_lessi64_greater begin;
};
i8 __ZH_LOP_i8_();
i16 __ZH_LOP_i16_();
i32 __ZH_LOP_i32_();
i64 __ZH_LOP_i64_();
u8 __ZH_LOP_u8_();
u16 __ZH_LOP_u16_();
u32 __ZH_LOP_u32_();
u64 __ZH_LOP_u64_();
char __ZH_LOP_char_();
i64 __ZH_LOP_max_i64i64(i64 v101, i64 v102);
i64 __ZH_LOP_min_i64i64(i64 v103, i64 v104);
void __ZH_LOP_intOpMaker_();
void __ZH_BOP__plus_equal_i8Ri8(i8* v105, i8 v106);
void __ZH_BOP__minus_equal_i8Ri8(i8* v107, i8 v108);
void __ZH_BOP__slash_equal_i8Ri8(i8* v109, i8 v110);
void __ZH_BOP__percent_equal_i8Ri8(i8* v111, i8 v112);
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v113, i8 v114);
void __ZH_BOP__caret_equal_i8Ri8(i8* v115, i8 v116);
void __ZH_BOP__ampersand_equal_i8Ri8(i8* v117, i8 v118);
void __ZH_BOP__pipe_equal_i8Ri8(i8* v119, i8 v120);
bool __ZH_BOP__percent_percent_i8i8(i8 v121, i8 v122);
bool __ZH_BOP__exclamation_percent_i8i8(i8 v123, i8 v124);
i8* __ZH_LOP__plus_plus_i8R(i8* v125);
i8* __ZH_LOP__minus_minus_i8R(i8* v126);
i8 __ZH_ROP__plus_plus_i8R(i8* v127);
i8 __ZH_ROP__minus_minus_i8R(i8* v129);
void __ZH_BOP__plus_equal_i16Ri16(i16* v132, i16 v133);
void __ZH_BOP__minus_equal_i16Ri16(i16* v134, i16 v135);
void __ZH_BOP__slash_equal_i16Ri16(i16* v136, i16 v137);
void __ZH_BOP__percent_equal_i16Ri16(i16* v138, i16 v139);
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v140, i16 v141);
void __ZH_BOP__caret_equal_i16Ri16(i16* v142, i16 v143);
void __ZH_BOP__ampersand_equal_i16Ri16(i16* v144, i16 v145);
void __ZH_BOP__pipe_equal_i16Ri16(i16* v146, i16 v147);
bool __ZH_BOP__percent_percent_i16i16(i16 v148, i16 v149);
bool __ZH_BOP__exclamation_percent_i16i16(i16 v150, i16 v151);
i16* __ZH_LOP__plus_plus_i16R(i16* v152);
i16* __ZH_LOP__minus_minus_i16R(i16* v153);
i16 __ZH_ROP__plus_plus_i16R(i16* v154);
i16 __ZH_ROP__minus_minus_i16R(i16* v156);
void __ZH_BOP__plus_equal_i32Ri32(i32* v159, i32 v160);
void __ZH_BOP__minus_equal_i32Ri32(i32* v161, i32 v162);
void __ZH_BOP__slash_equal_i32Ri32(i32* v163, i32 v164);
void __ZH_BOP__percent_equal_i32Ri32(i32* v165, i32 v166);
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v167, i32 v168);
void __ZH_BOP__caret_equal_i32Ri32(i32* v169, i32 v170);
void __ZH_BOP__ampersand_equal_i32Ri32(i32* v171, i32 v172);
void __ZH_BOP__pipe_equal_i32Ri32(i32* v173, i32 v174);
bool __ZH_BOP__percent_percent_i32i32(i32 v175, i32 v176);
bool __ZH_BOP__exclamation_percent_i32i32(i32 v177, i32 v178);
i32* __ZH_LOP__plus_plus_i32R(i32* v179);
i32* __ZH_LOP__minus_minus_i32R(i32* v180);
i32 __ZH_ROP__plus_plus_i32R(i32* v181);
i32 __ZH_ROP__minus_minus_i32R(i32* v183);
void __ZH_BOP__plus_equal_i64Ri64(i64* v186, i64 v187);
void __ZH_BOP__minus_equal_i64Ri64(i64* v188, i64 v189);
void __ZH_BOP__slash_equal_i64Ri64(i64* v190, i64 v191);
void __ZH_BOP__percent_equal_i64Ri64(i64* v192, i64 v193);
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v194, i64 v195);
void __ZH_BOP__caret_equal_i64Ri64(i64* v196, i64 v197);
void __ZH_BOP__ampersand_equal_i64Ri64(i64* v198, i64 v199);
void __ZH_BOP__pipe_equal_i64Ri64(i64* v200, i64 v201);
bool __ZH_BOP__percent_percent_i64i64(i64 v202, i64 v203);
bool __ZH_BOP__exclamation_percent_i64i64(i64 v204, i64 v205);
i64* __ZH_LOP__plus_plus_i64R(i64* v206);
i64* __ZH_LOP__minus_minus_i64R(i64* v207);
i64 __ZH_ROP__plus_plus_i64R(i64* v208);
i64 __ZH_ROP__minus_minus_i64R(i64* v210);
void __ZH_BOP__plus_equal_u8Ru8(u8* v213, u8 v214);
void __ZH_BOP__minus_equal_u8Ru8(u8* v215, u8 v216);
void __ZH_BOP__slash_equal_u8Ru8(u8* v217, u8 v218);
void __ZH_BOP__percent_equal_u8Ru8(u8* v219, u8 v220);
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v221, u8 v222);
void __ZH_BOP__caret_equal_u8Ru8(u8* v223, u8 v224);
void __ZH_BOP__ampersand_equal_u8Ru8(u8* v225, u8 v226);
void __ZH_BOP__pipe_equal_u8Ru8(u8* v227, u8 v228);
bool __ZH_BOP__percent_percent_u8u8(u8 v229, u8 v230);
bool __ZH_BOP__exclamation_percent_u8u8(u8 v231, u8 v232);
u8* __ZH_LOP__plus_plus_u8R(u8* v233);
u8* __ZH_LOP__minus_minus_u8R(u8* v234);
u8 __ZH_ROP__plus_plus_u8R(u8* v235);
u8 __ZH_ROP__minus_minus_u8R(u8* v237);
void __ZH_BOP__plus_equal_u16Ru16(u16* v240, u16 v241);
void __ZH_BOP__minus_equal_u16Ru16(u16* v242, u16 v243);
void __ZH_BOP__slash_equal_u16Ru16(u16* v244, u16 v245);
void __ZH_BOP__percent_equal_u16Ru16(u16* v246, u16 v247);
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v248, u16 v249);
void __ZH_BOP__caret_equal_u16Ru16(u16* v250, u16 v251);
void __ZH_BOP__ampersand_equal_u16Ru16(u16* v252, u16 v253);
void __ZH_BOP__pipe_equal_u16Ru16(u16* v254, u16 v255);
bool __ZH_BOP__percent_percent_u16u16(u16 v256, u16 v257);
bool __ZH_BOP__exclamation_percent_u16u16(u16 v258, u16 v259);
u16* __ZH_LOP__plus_plus_u16R(u16* v260);
u16* __ZH_LOP__minus_minus_u16R(u16* v261);
u16 __ZH_ROP__plus_plus_u16R(u16* v262);
u16 __ZH_ROP__minus_minus_u16R(u16* v264);
void __ZH_BOP__plus_equal_u32Ru32(u32* v267, u32 v268);
void __ZH_BOP__minus_equal_u32Ru32(u32* v269, u32 v270);
void __ZH_BOP__slash_equal_u32Ru32(u32* v271, u32 v272);
void __ZH_BOP__percent_equal_u32Ru32(u32* v273, u32 v274);
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v275, u32 v276);
void __ZH_BOP__caret_equal_u32Ru32(u32* v277, u32 v278);
void __ZH_BOP__ampersand_equal_u32Ru32(u32* v279, u32 v280);
void __ZH_BOP__pipe_equal_u32Ru32(u32* v281, u32 v282);
bool __ZH_BOP__percent_percent_u32u32(u32 v283, u32 v284);
bool __ZH_BOP__exclamation_percent_u32u32(u32 v285, u32 v286);
u32* __ZH_LOP__plus_plus_u32R(u32* v287);
u32* __ZH_LOP__minus_minus_u32R(u32* v288);
u32 __ZH_ROP__plus_plus_u32R(u32* v289);
u32 __ZH_ROP__minus_minus_u32R(u32* v291);
void __ZH_BOP__plus_equal_u64Ru64(u64* v294, u64 v295);
void __ZH_BOP__minus_equal_u64Ru64(u64* v296, u64 v297);
void __ZH_BOP__slash_equal_u64Ru64(u64* v298, u64 v299);
void __ZH_BOP__percent_equal_u64Ru64(u64* v300, u64 v301);
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v302, u64 v303);
void __ZH_BOP__caret_equal_u64Ru64(u64* v304, u64 v305);
void __ZH_BOP__ampersand_equal_u64Ru64(u64* v306, u64 v307);
void __ZH_BOP__pipe_equal_u64Ru64(u64* v308, u64 v309);
bool __ZH_BOP__percent_percent_u64u64(u64 v310, u64 v311);
bool __ZH_BOP__exclamation_percent_u64u64(u64 v312, u64 v313);
u64* __ZH_LOP__plus_plus_u64R(u64* v314);
u64* __ZH_LOP__minus_minus_u64R(u64* v315);
u64 __ZH_ROP__plus_plus_u64R(u64* v316);
u64 __ZH_ROP__minus_minus_u64R(u64* v318);
void __ZH_BOP__plus_equal_charRchar(char* v321, char v322);
void __ZH_BOP__minus_equal_charRchar(char* v323, char v324);
void __ZH_BOP__slash_equal_charRchar(char* v325, char v326);
void __ZH_BOP__percent_equal_charRchar(char* v327, char v328);
void __ZH_BOP__asterisk_equal_charRchar(char* v329, char v330);
void __ZH_BOP__caret_equal_charRchar(char* v331, char v332);
void __ZH_BOP__ampersand_equal_charRchar(char* v333, char v334);
void __ZH_BOP__pipe_equal_charRchar(char* v335, char v336);
bool __ZH_BOP__percent_percent_charchar(char v337, char v338);
bool __ZH_BOP__exclamation_percent_charchar(char v339, char v340);
char* __ZH_LOP__plus_plus_charR(char* v341);
char* __ZH_LOP__minus_minus_charR(char* v342);
char __ZH_ROP__plus_plus_charR(char* v343);
char __ZH_ROP__minus_minus_charR(char* v345);
void __ZH_BOP__plus_equal_f32Rf32(f32* v348, f32 v349);
void __ZH_BOP__minus_equal_f32Rf32(f32* v350, f32 v351);
void __ZH_BOP__slash_equal_f32Rf32(f32* v352, f32 v353);
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v354, f32 v355);
void __ZH_BOP__plus_equal_f64Rf64(f64* v356, f64 v357);
void __ZH_BOP__minus_equal_f64Rf64(f64* v358, f64 v359);
void __ZH_BOP__slash_equal_f64Rf64(f64* v360, f64 v361);
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v362, f64 v363);
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v364, i64 v365);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v368, __ZH_TYPE_Out v369);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v370);
__ZH_TYPE_Out __ZH_ROP__less_str(str v371);
__ZH_TYPE_Out __ZH_LOP__less_str(str v372);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v373, str v374);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v375);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v376, str* v377);
__ZH_TYPE_Out __ZH_ROP__less_char(char v378);
__ZH_TYPE_Out __ZH_LOP__less_char(char v379);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v380, char v381);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v382);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v383, char* v384);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v385);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v386);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v387, i8 v388);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v389);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v390, i8* v391);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v392);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v393);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v394, i16 v395);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v396);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v397, i16* v398);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v399);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v400);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v401, i32 v402);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v403);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v404, i32* v405);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v406);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v407);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v408, i64 v409);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v410);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v411, i64* v412);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v413);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v414);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v415, u8 v416);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v417);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v418, u8* v419);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v420);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v421);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v422, u16 v423);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v424);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v425, u16* v426);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v427);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v428);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v429, u32 v430);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v431);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v432, u32* v433);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v434);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v435);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v436, u64 v437);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v438);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v439, u64* v440);
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v441);
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v442);
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v443, f32 v444);
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v445);
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v446, f32* v447);
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v448);
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v449);
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v450, f64 v451);
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v452);
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v453, f64* v454);
void __ZH_LOP_rangeMaker_();
i8 __ZH_BOP__dotcall_dotbegin_Range_lessi8_greaterP(__ZH_TYPE_Range_lessi8_greater* v455);
i8 __ZH_BOP__dotcall_dotend_Range_lessi8_greaterP(__ZH_TYPE_Range_lessi8_greater* v456);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP_Range_lessi8_greater_i8i8(i8 v457, i8 v458);
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_i8i8(i8 v460, i8 v461);
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_minus_i8i8(i8 v462, i8 v463);
__ZH_TYPE_Range_lessi8_greater __ZH_ROP__dot_dot_i8(i8 v464);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_i8(i8 v465);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_minus_i8(i8 v468);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__minus_Range_lessi8_greater(__ZH_TYPE_Range_lessi8_greater v471);
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_equal_i8i8(i8 v472, i8 v473);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_equal_i8(i8 v476);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_equal_minus_i8(i8 v481);
bool __ZH_BOP__equal_equal_i8Range_lessi8_greater(i8 v486, __ZH_TYPE_Range_lessi8_greater v487);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP_iter_Range_lessi8_greater(__ZH_TYPE_Range_lessi8_greater v488);
i16 __ZH_BOP__dotcall_dotbegin_Range_lessi16_greaterP(__ZH_TYPE_Range_lessi16_greater* v490);
i16 __ZH_BOP__dotcall_dotend_Range_lessi16_greaterP(__ZH_TYPE_Range_lessi16_greater* v491);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP_Range_lessi16_greater_i16i16(i16 v492, i16 v493);
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_i16i16(i16 v495, i16 v496);
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_minus_i16i16(i16 v497, i16 v498);
__ZH_TYPE_Range_lessi16_greater __ZH_ROP__dot_dot_i16(i16 v499);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_i16(i16 v500);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_minus_i16(i16 v503);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__minus_Range_lessi16_greater(__ZH_TYPE_Range_lessi16_greater v506);
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_equal_i16i16(i16 v507, i16 v508);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_equal_i16(i16 v511);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_equal_minus_i16(i16 v516);
bool __ZH_BOP__equal_equal_i16Range_lessi16_greater(i16 v521, __ZH_TYPE_Range_lessi16_greater v522);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP_iter_Range_lessi16_greater(__ZH_TYPE_Range_lessi16_greater v523);
i32 __ZH_BOP__dotcall_dotbegin_Range_lessi32_greaterP(__ZH_TYPE_Range_lessi32_greater* v525);
i32 __ZH_BOP__dotcall_dotend_Range_lessi32_greaterP(__ZH_TYPE_Range_lessi32_greater* v526);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP_Range_lessi32_greater_i32i32(i32 v527, i32 v528);
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_i32i32(i32 v530, i32 v531);
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_minus_i32i32(i32 v532, i32 v533);
__ZH_TYPE_Range_lessi32_greater __ZH_ROP__dot_dot_i32(i32 v534);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_i32(i32 v535);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_minus_i32(i32 v538);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__minus_Range_lessi32_greater(__ZH_TYPE_Range_lessi32_greater v541);
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_equal_i32i32(i32 v542, i32 v543);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_equal_i32(i32 v546);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_equal_minus_i32(i32 v551);
bool __ZH_BOP__equal_equal_i32Range_lessi32_greater(i32 v556, __ZH_TYPE_Range_lessi32_greater v557);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP_iter_Range_lessi32_greater(__ZH_TYPE_Range_lessi32_greater v558);
i64 __ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP(__ZH_TYPE_Range_lessi64_greater* v560);
i64 __ZH_BOP__dotcall_dotend_Range_lessi64_greaterP(__ZH_TYPE_Range_lessi64_greater* v561);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP_Range_lessi64_greater_i64i64(i64 v562, i64 v563);
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_i64i64(i64 v565, i64 v566);
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_minus_i64i64(i64 v567, i64 v568);
__ZH_TYPE_Range_lessi64_greater __ZH_ROP__dot_dot_i64(i64 v569);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_i64(i64 v570);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_minus_i64(i64 v573);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__minus_Range_lessi64_greater(__ZH_TYPE_Range_lessi64_greater v576);
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_equal_i64i64(i64 v577, i64 v578);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_equal_i64(i64 v581);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_equal_minus_i64(i64 v586);
bool __ZH_BOP__equal_equal_i64Range_lessi64_greater(i64 v591, __ZH_TYPE_Range_lessi64_greater v592);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP_iter_Range_lessi64_greater(__ZH_TYPE_Range_lessi64_greater v593);
char __ZH_BOP__dotcall_dotbegin_Range_lesschar_greaterP(__ZH_TYPE_Range_lesschar_greater* v595);
char __ZH_BOP__dotcall_dotend_Range_lesschar_greaterP(__ZH_TYPE_Range_lesschar_greater* v596);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP_Range_lesschar_greater_charchar(char v597, char v598);
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_charchar(char v600, char v601);
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_minus_charchar(char v602, char v603);
__ZH_TYPE_Range_lesschar_greater __ZH_ROP__dot_dot_char(char v604);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_char(char v605);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_minus_char(char v608);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__minus_Range_lesschar_greater(__ZH_TYPE_Range_lesschar_greater v611);
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_equal_charchar(char v612, char v613);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_equal_char(char v616);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_equal_minus_char(char v621);
bool __ZH_BOP__equal_equal_charRange_lesschar_greater(char v626, __ZH_TYPE_Range_lesschar_greater v627);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP_iter_Range_lesschar_greater(__ZH_TYPE_Range_lesschar_greater v628);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v651);
void __ZH_LOP__plus_plus_VecIter_lessi64_greaterR(__ZH_TYPE_VecIter_lessi64_greater* v653);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__plus_VecIter_lessi64_greateri64(__ZH_TYPE_VecIter_lessi64_greater v654, i64 v655);
bool __ZH_BOP__exclamation_equal_VecIter_lessi64_greaterVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v656, __ZH_TYPE_VecIter_lessi64_greater v657);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v658);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_VecIterRange_lessi64_greaterP(__ZH_TYPE_VecIterRange_lessi64_greater* v661);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_VecIterRange_lessi64_greaterP(__ZH_TYPE_VecIterRange_lessi64_greater* v662);
__ZH_TYPE_VecIterRange_lessi64_greater __ZH_LOP_VecIterRange_lessi64_greater_VecIter_lessi64_greaterVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v663, __ZH_TYPE_VecIter_lessi64_greater v664);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v630, i64 v631);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v632, i64 v633);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v634);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v638);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v642);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v648, i64 v649);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v650);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v659);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v660);
__ZH_TYPE_VecIterRange_lessi64_greater __ZH_LOP_iter_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v666);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v668);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v669);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v670);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v671);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v676, i64 v677);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v682);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v687, i64 v688);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v689, __ZH_TYPE_Vec_lessi64_greater* v690);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v694, i64 v695);
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v697, i64 v698);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v699);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v700);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v701);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v702);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v703, __ZH_TYPE_Vec_lessi64_greater* v704);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v705, i64 v706);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64(__ZH_TYPE_Vec_lessi64_greater* v707, i64 v708, i64 v709);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPRange_lessi64_greater(__ZH_TYPE_Vec_lessi64_greater* v714, __ZH_TYPE_Range_lessi64_greater v715);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v718);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v719, __ZH_TYPE_Vec_lessi64_greater* v720);
void __ZH_LOP_swap_i64Pi64P(i64* v724, i64* v725);
i64* __ZH_LOP_partition_i64Pi64P(i64* v727, i64* v728);
void __ZH_LOP_qsort_i64Pi64P(i64* v732, i64* v733);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v737);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v742);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v743, i64(*v744)(i64*));
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v749, bool(*v750)(i64*));
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v755, i64 v756);
char __ZH_BOP__dotcall_dotsub_strPi64(str* v761, i64 v762);
str __ZH_LOP_str_();
bool __ZH_BOP__equal_equal_charstr(char v764, str v765);
char __ZH_LOP_chr_str(str v766);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v788);
void __ZH_LOP__plus_plus_VecIter_lesschar_greaterR(__ZH_TYPE_VecIter_lesschar_greater* v790);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__plus_VecIter_lesschar_greateri64(__ZH_TYPE_VecIter_lesschar_greater v791, i64 v792);
bool __ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v793, __ZH_TYPE_VecIter_lesschar_greater v794);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v795);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP(__ZH_TYPE_VecIterRange_lesschar_greater* v798);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP(__ZH_TYPE_VecIterRange_lesschar_greater* v799);
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_VecIterRange_lesschar_greater_VecIter_lesschar_greaterVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v800, __ZH_TYPE_VecIter_lesschar_greater v801);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v767, i64 v768);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v769, i64 v770);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v771);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v775);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v779);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar(__ZH_TYPE_Vec_lesschar_greater* v785, char v786);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v787);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v796);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v797);
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v803);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v805);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v806);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v807);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v808);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v813, char v814);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v819);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v824, char v825);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v826, __ZH_TYPE_Vec_lesschar_greater* v827);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v831, char v832);
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v834, char v835);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v836);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v837);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v838);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v839);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v840, __ZH_TYPE_Vec_lesschar_greater* v841);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v842, i64 v843);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64(__ZH_TYPE_Vec_lesschar_greater* v844, i64 v845, i64 v846);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPRange_lessi64_greater(__ZH_TYPE_Vec_lesschar_greater* v851, __ZH_TYPE_Range_lessi64_greater v852);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v855);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v856, __ZH_TYPE_Vec_lesschar_greater* v857);
void __ZH_LOP_swap_charPcharP(char* v861, char* v862);
char* __ZH_LOP_partition_charPcharP(char* v864, char* v865);
void __ZH_LOP_qsort_charPcharP(char* v869, char* v870);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v874);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v879);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotmap_Vec_lesschar_greaterPF_lesschar_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v880, char(*v881)(char*));
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotfilter_Vec_lesschar_greaterPF_lessbool_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v886, bool(*v887)(char*));
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP(__ZH_TYPE_Str* v893);
str __ZH_BOP__dotcall_dotcstr_StrP(__ZH_TYPE_Str* v894);
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_StrR(__ZH_TYPE_Str* v896);
char* __ZH_BOP__dotcall_dotat_StrPi64(__ZH_TYPE_Str* v897, i64 v898);
char* __ZH_BOP__dotcall_dotsub_StrPi64(__ZH_TYPE_Str* v899, i64 v900);
char* __ZH_BOP__dotcall_dotatP_StrPi64(__ZH_TYPE_Str* v901, i64 v902);
void __ZH_BOP__dotcall_dotpush_back_StrPchar(__ZH_TYPE_Str* v903, char v904);
void __ZH_BOP__dotcall_dotpop_back_StrP(__ZH_TYPE_Str* v905);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v906);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v908);
i64 __ZH_LOP_len_str(str v910);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v912);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v913);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v914, char v915);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v916, __ZH_TYPE_Str* v917);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v922, str v923);
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v928, __ZH_TYPE_Str* v929);
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v931, str v932);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v937);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v938);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v939, __ZH_TYPE_Str* v940);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v941, __ZH_TYPE_Str* v942);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v946, i64 v947);
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v953);
void __ZH_LOP_up_StrR(__ZH_TYPE_Str* v954);
void __ZH_LOP_low_StrR(__ZH_TYPE_Str* v958);
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_str(str v962);
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v965);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v970, f64 v971);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v973, __ZH_TYPE_V2 v974);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v975, __ZH_TYPE_V2 v976);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v978);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v979);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v980);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v981);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v982);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v983, __ZH_TYPE_V2 v984);
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v985);
__ZH_TYPE_Rng __ZH_LOP_Rng_();
i64 __ZH_BOP__dotcall_dotcall_RngP(__ZH_TYPE_Rng* v987);
int main(int argc, char *argv[]) ;
__ZH_TYPE_AVLNode_lessi64_greater __ZH_LOP_AVLNode_lessi64_greater_i64R(i64* v988);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP_new_AVLNode_lessi64_greater(__ZH_TYPE_AVLNode_lessi64_greater v990);
bool __ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v992);
bool __ZH_LOP__exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v993);
i64 __ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v994);
i64 __ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v995);
void __ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v996);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v997);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v999);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1001);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R(__ZH_TYPE_AVLNode_lessi64_greater* v1002, i64* v1003);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R(__ZH_TYPE_AVLNode_lessi64_greater* v1006, i64* v1007);
void __ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR(__ZH_TYPE_AVLNode_lessi64_greater* v1009, __ZH_TYPE_Str* v1010);
__ZH_TYPE_AVLIter_lessi64_greater __ZH_LOP_AVLIter_lessi64_greater_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1014);
i64* __ZH_LOP__asterisk_AVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1016);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP__plus_plus_AVLIter_lessi64_greaterR(__ZH_TYPE_AVLIter_lessi64_greater* v1017);
bool __ZH_BOP__exclamation_equal_AVLIter_lessi64_greaterAVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1019, __ZH_TYPE_AVLIter_lessi64_greater v1020);
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_AVLIterRange_lessi64_greaterP(__ZH_TYPE_AVLIterRange_lessi64_greater* v1024);
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotend_AVLIterRange_lessi64_greaterP(__ZH_TYPE_AVLIterRange_lessi64_greater* v1025);
__ZH_TYPE_AVLIterRange_lessi64_greater __ZH_LOP_AVLIterRange_lessi64_greater_AVLIter_lessi64_greaterAVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1026, __ZH_TYPE_AVLIter_lessi64_greater v1027);
__ZH_TYPE_AVLTree_lessi64_greater __ZH_LOP_AVLTree_lessi64_greater_();
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1021);
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotend_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1023);
__ZH_TYPE_AVLIterRange_lessi64_greater __ZH_LOP_iter_AVLTree_lessi64_greaterR(__ZH_TYPE_AVLTree_lessi64_greater* v1029);
void __ZH_BOP__dotcall_dotinsert_AVLTree_lessi64_greaterPi64(__ZH_TYPE_AVLTree_lessi64_greater* v1031, i64 v1032);
i64* __ZH_BOP__dotcall_dotsub_AVLTree_lessi64_greaterPi64(__ZH_TYPE_AVLTree_lessi64_greater* v1033, i64 v1034);
void __ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(__ZH_TYPE_AVLTree_lessi64_greater* v1035, i64 v1036);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1037);
void __ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1042);

i8 __ZH_LOP_i8_() {{
  return ((i8)0);
};printf("%s", "reached function end without returning anything lop i8 i8\n"); exit(EXIT_FAILURE);}
i16 __ZH_LOP_i16_() {{
  return ((i16)0);
};printf("%s", "reached function end without returning anything lop i16 i16\n"); exit(EXIT_FAILURE);}
i32 __ZH_LOP_i32_() {{
  return ((i32)0);
};printf("%s", "reached function end without returning anything lop i32 i32\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_i64_() {{
  return ((i64)0);
};printf("%s", "reached function end without returning anything lop i64 i64\n"); exit(EXIT_FAILURE);}
u8 __ZH_LOP_u8_() {{
  return ((u8)0);
};printf("%s", "reached function end without returning anything lop u8 u8\n"); exit(EXIT_FAILURE);}
u16 __ZH_LOP_u16_() {{
  return ((u16)0);
};printf("%s", "reached function end without returning anything lop u16 u16\n"); exit(EXIT_FAILURE);}
u32 __ZH_LOP_u32_() {{
  return ((u32)0);
};printf("%s", "reached function end without returning anything lop u32 u32\n"); exit(EXIT_FAILURE);}
u64 __ZH_LOP_u64_() {{
  return ((u64)0);
};printf("%s", "reached function end without returning anything lop u64 u64\n"); exit(EXIT_FAILURE);}
char __ZH_LOP_char_() {{
  return ((char)((i8)0));
};printf("%s", "reached function end without returning anything lop char char\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_max_i64i64(i64 v101, i64 v102) {{
  if ((((v101))>((v102)))) {
    return (v101);
  } else {
    return (v102);
  }
};printf("%s", "reached function end without returning anything lop i64 max i64 a i64 b\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_min_i64i64(i64 v103, i64 v104) {{
  if ((((v103))<((v104)))) {
    return (v103);
  } else {
    return (v104);
  }
};printf("%s", "reached function end without returning anything lop i64 min i64 a i64 b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_intOpMaker_(){
  __ZH_TYPE_IntOpMaker_lessu64_greater v320;
  __ZH_TYPE_IntOpMaker_lessu32_greater v293;
  __ZH_TYPE_IntOpMaker_lessu16_greater v266;
  __ZH_TYPE_IntOpMaker_lessu8_greater v239;
  __ZH_TYPE_IntOpMaker_lesschar_greater v347;
  __ZH_TYPE_IntOpMaker_lessi32_greater v185;
  __ZH_TYPE_IntOpMaker_lessi16_greater v158;
  __ZH_TYPE_IntOpMaker_lessi64_greater v212;
  __ZH_TYPE_IntOpMaker_lessi8_greater v131;
}
void __ZH_BOP__plus_equal_i8Ri8(i8* v105, i8 v106){
  ((*v105)=(((*v105))+((v106))));
}
void __ZH_BOP__minus_equal_i8Ri8(i8* v107, i8 v108){
  ((*v107)=(((*v107))-((v108))));
}
void __ZH_BOP__slash_equal_i8Ri8(i8* v109, i8 v110){
  ((*v109)=(((*v109))/((v110))));
}
void __ZH_BOP__percent_equal_i8Ri8(i8* v111, i8 v112){
  ((*v111)=(((*v111))%((v112))));
}
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v113, i8 v114){
  ((*v113)=(((*v113))*((v114))));
}
void __ZH_BOP__caret_equal_i8Ri8(i8* v115, i8 v116){
  ((*v115)=(((*v115))^((v116))));
}
void __ZH_BOP__ampersand_equal_i8Ri8(i8* v117, i8 v118){
  ((*v117)=(((*v117))&((v118))));
}
void __ZH_BOP__pipe_equal_i8Ri8(i8* v119, i8 v120){
  ((*v119)=(((*v119))|((v120))));
}
bool __ZH_BOP__percent_percent_i8i8(i8 v121, i8 v122) {{
  return (!((((v121))%((v122)))));
};printf("%s", "reached function end without returning anything op bool %% i8 a i8 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i8i8(i8 v123, i8 v124) {{
  return (!((__ZH_BOP__percent_percent_i8i8((v123), (v124)))));
};printf("%s", "reached function end without returning anything op bool !% i8 a i8 b\n"); exit(EXIT_FAILURE);}
i8* __ZH_LOP__plus_plus_i8R(i8* v125) {{
  (__ZH_BOP__plus_equal_i8Ri8(&(*v125), (((__ZH_LOP_i8_()))-((~((__ZH_LOP_i8_())))))));
  return &(*v125);
};printf("%s", "reached function end without returning anything lop i8R ++ i8R x\n"); exit(EXIT_FAILURE);}
i8* __ZH_LOP__minus_minus_i8R(i8* v126) {{
  (__ZH_BOP__minus_equal_i8Ri8(&(*v126), (((__ZH_LOP_i8_()))-((~((__ZH_LOP_i8_())))))));
  return &(*v126);
};printf("%s", "reached function end without returning anything lop i8R -- i8R x\n"); exit(EXIT_FAILURE);}
i8 __ZH_ROP__plus_plus_i8R(i8* v127) {{
  i8 v128;
  ((v128)=(*v127));
  (__ZH_BOP__plus_equal_i8Ri8(&(*v127), (((__ZH_LOP_i8_()))-((~((__ZH_LOP_i8_())))))));
  return (v128);
};printf("%s", "reached function end without returning anything rop i8 ++ i8R x\n"); exit(EXIT_FAILURE);}
i8 __ZH_ROP__minus_minus_i8R(i8* v129) {{
  i8 v130;
  ((v130)=(*v129));
  (__ZH_BOP__minus_equal_i8Ri8(&(*v129), (((__ZH_LOP_i8_()))-((~((__ZH_LOP_i8_())))))));
  return (v130);
};printf("%s", "reached function end without returning anything rop i8 -- i8R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i16Ri16(i16* v132, i16 v133){
  ((*v132)=(((*v132))+((v133))));
}
void __ZH_BOP__minus_equal_i16Ri16(i16* v134, i16 v135){
  ((*v134)=(((*v134))-((v135))));
}
void __ZH_BOP__slash_equal_i16Ri16(i16* v136, i16 v137){
  ((*v136)=(((*v136))/((v137))));
}
void __ZH_BOP__percent_equal_i16Ri16(i16* v138, i16 v139){
  ((*v138)=(((*v138))%((v139))));
}
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v140, i16 v141){
  ((*v140)=(((*v140))*((v141))));
}
void __ZH_BOP__caret_equal_i16Ri16(i16* v142, i16 v143){
  ((*v142)=(((*v142))^((v143))));
}
void __ZH_BOP__ampersand_equal_i16Ri16(i16* v144, i16 v145){
  ((*v144)=(((*v144))&((v145))));
}
void __ZH_BOP__pipe_equal_i16Ri16(i16* v146, i16 v147){
  ((*v146)=(((*v146))|((v147))));
}
bool __ZH_BOP__percent_percent_i16i16(i16 v148, i16 v149) {{
  return (!((((v148))%((v149)))));
};printf("%s", "reached function end without returning anything op bool %% i16 a i16 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i16i16(i16 v150, i16 v151) {{
  return (!((__ZH_BOP__percent_percent_i16i16((v150), (v151)))));
};printf("%s", "reached function end without returning anything op bool !% i16 a i16 b\n"); exit(EXIT_FAILURE);}
i16* __ZH_LOP__plus_plus_i16R(i16* v152) {{
  (__ZH_BOP__plus_equal_i16Ri16(&(*v152), (((__ZH_LOP_i16_()))-((~((__ZH_LOP_i16_())))))));
  return &(*v152);
};printf("%s", "reached function end without returning anything lop i16R ++ i16R x\n"); exit(EXIT_FAILURE);}
i16* __ZH_LOP__minus_minus_i16R(i16* v153) {{
  (__ZH_BOP__minus_equal_i16Ri16(&(*v153), (((__ZH_LOP_i16_()))-((~((__ZH_LOP_i16_())))))));
  return &(*v153);
};printf("%s", "reached function end without returning anything lop i16R -- i16R x\n"); exit(EXIT_FAILURE);}
i16 __ZH_ROP__plus_plus_i16R(i16* v154) {{
  i16 v155;
  ((v155)=(*v154));
  (__ZH_BOP__plus_equal_i16Ri16(&(*v154), (((__ZH_LOP_i16_()))-((~((__ZH_LOP_i16_())))))));
  return (v155);
};printf("%s", "reached function end without returning anything rop i16 ++ i16R x\n"); exit(EXIT_FAILURE);}
i16 __ZH_ROP__minus_minus_i16R(i16* v156) {{
  i16 v157;
  ((v157)=(*v156));
  (__ZH_BOP__minus_equal_i16Ri16(&(*v156), (((__ZH_LOP_i16_()))-((~((__ZH_LOP_i16_())))))));
  return (v157);
};printf("%s", "reached function end without returning anything rop i16 -- i16R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i32Ri32(i32* v159, i32 v160){
  ((*v159)=(((*v159))+((v160))));
}
void __ZH_BOP__minus_equal_i32Ri32(i32* v161, i32 v162){
  ((*v161)=(((*v161))-((v162))));
}
void __ZH_BOP__slash_equal_i32Ri32(i32* v163, i32 v164){
  ((*v163)=(((*v163))/((v164))));
}
void __ZH_BOP__percent_equal_i32Ri32(i32* v165, i32 v166){
  ((*v165)=(((*v165))%((v166))));
}
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v167, i32 v168){
  ((*v167)=(((*v167))*((v168))));
}
void __ZH_BOP__caret_equal_i32Ri32(i32* v169, i32 v170){
  ((*v169)=(((*v169))^((v170))));
}
void __ZH_BOP__ampersand_equal_i32Ri32(i32* v171, i32 v172){
  ((*v171)=(((*v171))&((v172))));
}
void __ZH_BOP__pipe_equal_i32Ri32(i32* v173, i32 v174){
  ((*v173)=(((*v173))|((v174))));
}
bool __ZH_BOP__percent_percent_i32i32(i32 v175, i32 v176) {{
  return (!((((v175))%((v176)))));
};printf("%s", "reached function end without returning anything op bool %% i32 a i32 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i32i32(i32 v177, i32 v178) {{
  return (!((__ZH_BOP__percent_percent_i32i32((v177), (v178)))));
};printf("%s", "reached function end without returning anything op bool !% i32 a i32 b\n"); exit(EXIT_FAILURE);}
i32* __ZH_LOP__plus_plus_i32R(i32* v179) {{
  (__ZH_BOP__plus_equal_i32Ri32(&(*v179), (((__ZH_LOP_i32_()))-((~((__ZH_LOP_i32_())))))));
  return &(*v179);
};printf("%s", "reached function end without returning anything lop i32R ++ i32R x\n"); exit(EXIT_FAILURE);}
i32* __ZH_LOP__minus_minus_i32R(i32* v180) {{
  (__ZH_BOP__minus_equal_i32Ri32(&(*v180), (((__ZH_LOP_i32_()))-((~((__ZH_LOP_i32_())))))));
  return &(*v180);
};printf("%s", "reached function end without returning anything lop i32R -- i32R x\n"); exit(EXIT_FAILURE);}
i32 __ZH_ROP__plus_plus_i32R(i32* v181) {{
  i32 v182;
  ((v182)=(*v181));
  (__ZH_BOP__plus_equal_i32Ri32(&(*v181), (((__ZH_LOP_i32_()))-((~((__ZH_LOP_i32_())))))));
  return (v182);
};printf("%s", "reached function end without returning anything rop i32 ++ i32R x\n"); exit(EXIT_FAILURE);}
i32 __ZH_ROP__minus_minus_i32R(i32* v183) {{
  i32 v184;
  ((v184)=(*v183));
  (__ZH_BOP__minus_equal_i32Ri32(&(*v183), (((__ZH_LOP_i32_()))-((~((__ZH_LOP_i32_())))))));
  return (v184);
};printf("%s", "reached function end without returning anything rop i32 -- i32R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i64Ri64(i64* v186, i64 v187){
  ((*v186)=(((*v186))+((v187))));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v188, i64 v189){
  ((*v188)=(((*v188))-((v189))));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v190, i64 v191){
  ((*v190)=(((*v190))/((v191))));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v192, i64 v193){
  ((*v192)=(((*v192))%((v193))));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v194, i64 v195){
  ((*v194)=(((*v194))*((v195))));
}
void __ZH_BOP__caret_equal_i64Ri64(i64* v196, i64 v197){
  ((*v196)=(((*v196))^((v197))));
}
void __ZH_BOP__ampersand_equal_i64Ri64(i64* v198, i64 v199){
  ((*v198)=(((*v198))&((v199))));
}
void __ZH_BOP__pipe_equal_i64Ri64(i64* v200, i64 v201){
  ((*v200)=(((*v200))|((v201))));
}
bool __ZH_BOP__percent_percent_i64i64(i64 v202, i64 v203) {{
  return (!((((v202))%((v203)))));
};printf("%s", "reached function end without returning anything op bool %% i64 a i64 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i64i64(i64 v204, i64 v205) {{
  return (!((__ZH_BOP__percent_percent_i64i64((v204), (v205)))));
};printf("%s", "reached function end without returning anything op bool !% i64 a i64 b\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__plus_plus_i64R(i64* v206) {{
  (__ZH_BOP__plus_equal_i64Ri64(&(*v206), (((__ZH_LOP_i64_()))-((~((__ZH_LOP_i64_())))))));
  return &(*v206);
};printf("%s", "reached function end without returning anything lop i64R ++ i64R x\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__minus_minus_i64R(i64* v207) {{
  (__ZH_BOP__minus_equal_i64Ri64(&(*v207), (((__ZH_LOP_i64_()))-((~((__ZH_LOP_i64_())))))));
  return &(*v207);
};printf("%s", "reached function end without returning anything lop i64R -- i64R x\n"); exit(EXIT_FAILURE);}
i64 __ZH_ROP__plus_plus_i64R(i64* v208) {{
  i64 v209;
  ((v209)=(*v208));
  (__ZH_BOP__plus_equal_i64Ri64(&(*v208), (((__ZH_LOP_i64_()))-((~((__ZH_LOP_i64_())))))));
  return (v209);
};printf("%s", "reached function end without returning anything rop i64 ++ i64R x\n"); exit(EXIT_FAILURE);}
i64 __ZH_ROP__minus_minus_i64R(i64* v210) {{
  i64 v211;
  ((v211)=(*v210));
  (__ZH_BOP__minus_equal_i64Ri64(&(*v210), (((__ZH_LOP_i64_()))-((~((__ZH_LOP_i64_())))))));
  return (v211);
};printf("%s", "reached function end without returning anything rop i64 -- i64R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u8Ru8(u8* v213, u8 v214){
  ((*v213)=(((*v213))+((v214))));
}
void __ZH_BOP__minus_equal_u8Ru8(u8* v215, u8 v216){
  ((*v215)=(((*v215))-((v216))));
}
void __ZH_BOP__slash_equal_u8Ru8(u8* v217, u8 v218){
  ((*v217)=(((*v217))/((v218))));
}
void __ZH_BOP__percent_equal_u8Ru8(u8* v219, u8 v220){
  ((*v219)=(((*v219))%((v220))));
}
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v221, u8 v222){
  ((*v221)=(((*v221))*((v222))));
}
void __ZH_BOP__caret_equal_u8Ru8(u8* v223, u8 v224){
  ((*v223)=(((*v223))^((v224))));
}
void __ZH_BOP__ampersand_equal_u8Ru8(u8* v225, u8 v226){
  ((*v225)=(((*v225))&((v226))));
}
void __ZH_BOP__pipe_equal_u8Ru8(u8* v227, u8 v228){
  ((*v227)=(((*v227))|((v228))));
}
bool __ZH_BOP__percent_percent_u8u8(u8 v229, u8 v230) {{
  return (!((((v229))%((v230)))));
};printf("%s", "reached function end without returning anything op bool %% u8 a u8 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u8u8(u8 v231, u8 v232) {{
  return (!((__ZH_BOP__percent_percent_u8u8((v231), (v232)))));
};printf("%s", "reached function end without returning anything op bool !% u8 a u8 b\n"); exit(EXIT_FAILURE);}
u8* __ZH_LOP__plus_plus_u8R(u8* v233) {{
  (__ZH_BOP__plus_equal_u8Ru8(&(*v233), (((__ZH_LOP_u8_()))-((~((__ZH_LOP_u8_())))))));
  return &(*v233);
};printf("%s", "reached function end without returning anything lop u8R ++ u8R x\n"); exit(EXIT_FAILURE);}
u8* __ZH_LOP__minus_minus_u8R(u8* v234) {{
  (__ZH_BOP__minus_equal_u8Ru8(&(*v234), (((__ZH_LOP_u8_()))-((~((__ZH_LOP_u8_())))))));
  return &(*v234);
};printf("%s", "reached function end without returning anything lop u8R -- u8R x\n"); exit(EXIT_FAILURE);}
u8 __ZH_ROP__plus_plus_u8R(u8* v235) {{
  u8 v236;
  ((v236)=(*v235));
  (__ZH_BOP__plus_equal_u8Ru8(&(*v235), (((__ZH_LOP_u8_()))-((~((__ZH_LOP_u8_())))))));
  return (v236);
};printf("%s", "reached function end without returning anything rop u8 ++ u8R x\n"); exit(EXIT_FAILURE);}
u8 __ZH_ROP__minus_minus_u8R(u8* v237) {{
  u8 v238;
  ((v238)=(*v237));
  (__ZH_BOP__minus_equal_u8Ru8(&(*v237), (((__ZH_LOP_u8_()))-((~((__ZH_LOP_u8_())))))));
  return (v238);
};printf("%s", "reached function end without returning anything rop u8 -- u8R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u16Ru16(u16* v240, u16 v241){
  ((*v240)=(((*v240))+((v241))));
}
void __ZH_BOP__minus_equal_u16Ru16(u16* v242, u16 v243){
  ((*v242)=(((*v242))-((v243))));
}
void __ZH_BOP__slash_equal_u16Ru16(u16* v244, u16 v245){
  ((*v244)=(((*v244))/((v245))));
}
void __ZH_BOP__percent_equal_u16Ru16(u16* v246, u16 v247){
  ((*v246)=(((*v246))%((v247))));
}
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v248, u16 v249){
  ((*v248)=(((*v248))*((v249))));
}
void __ZH_BOP__caret_equal_u16Ru16(u16* v250, u16 v251){
  ((*v250)=(((*v250))^((v251))));
}
void __ZH_BOP__ampersand_equal_u16Ru16(u16* v252, u16 v253){
  ((*v252)=(((*v252))&((v253))));
}
void __ZH_BOP__pipe_equal_u16Ru16(u16* v254, u16 v255){
  ((*v254)=(((*v254))|((v255))));
}
bool __ZH_BOP__percent_percent_u16u16(u16 v256, u16 v257) {{
  return (!((((v256))%((v257)))));
};printf("%s", "reached function end without returning anything op bool %% u16 a u16 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u16u16(u16 v258, u16 v259) {{
  return (!((__ZH_BOP__percent_percent_u16u16((v258), (v259)))));
};printf("%s", "reached function end without returning anything op bool !% u16 a u16 b\n"); exit(EXIT_FAILURE);}
u16* __ZH_LOP__plus_plus_u16R(u16* v260) {{
  (__ZH_BOP__plus_equal_u16Ru16(&(*v260), (((__ZH_LOP_u16_()))-((~((__ZH_LOP_u16_())))))));
  return &(*v260);
};printf("%s", "reached function end without returning anything lop u16R ++ u16R x\n"); exit(EXIT_FAILURE);}
u16* __ZH_LOP__minus_minus_u16R(u16* v261) {{
  (__ZH_BOP__minus_equal_u16Ru16(&(*v261), (((__ZH_LOP_u16_()))-((~((__ZH_LOP_u16_())))))));
  return &(*v261);
};printf("%s", "reached function end without returning anything lop u16R -- u16R x\n"); exit(EXIT_FAILURE);}
u16 __ZH_ROP__plus_plus_u16R(u16* v262) {{
  u16 v263;
  ((v263)=(*v262));
  (__ZH_BOP__plus_equal_u16Ru16(&(*v262), (((__ZH_LOP_u16_()))-((~((__ZH_LOP_u16_())))))));
  return (v263);
};printf("%s", "reached function end without returning anything rop u16 ++ u16R x\n"); exit(EXIT_FAILURE);}
u16 __ZH_ROP__minus_minus_u16R(u16* v264) {{
  u16 v265;
  ((v265)=(*v264));
  (__ZH_BOP__minus_equal_u16Ru16(&(*v264), (((__ZH_LOP_u16_()))-((~((__ZH_LOP_u16_())))))));
  return (v265);
};printf("%s", "reached function end without returning anything rop u16 -- u16R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u32Ru32(u32* v267, u32 v268){
  ((*v267)=(((*v267))+((v268))));
}
void __ZH_BOP__minus_equal_u32Ru32(u32* v269, u32 v270){
  ((*v269)=(((*v269))-((v270))));
}
void __ZH_BOP__slash_equal_u32Ru32(u32* v271, u32 v272){
  ((*v271)=(((*v271))/((v272))));
}
void __ZH_BOP__percent_equal_u32Ru32(u32* v273, u32 v274){
  ((*v273)=(((*v273))%((v274))));
}
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v275, u32 v276){
  ((*v275)=(((*v275))*((v276))));
}
void __ZH_BOP__caret_equal_u32Ru32(u32* v277, u32 v278){
  ((*v277)=(((*v277))^((v278))));
}
void __ZH_BOP__ampersand_equal_u32Ru32(u32* v279, u32 v280){
  ((*v279)=(((*v279))&((v280))));
}
void __ZH_BOP__pipe_equal_u32Ru32(u32* v281, u32 v282){
  ((*v281)=(((*v281))|((v282))));
}
bool __ZH_BOP__percent_percent_u32u32(u32 v283, u32 v284) {{
  return (!((((v283))%((v284)))));
};printf("%s", "reached function end without returning anything op bool %% u32 a u32 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u32u32(u32 v285, u32 v286) {{
  return (!((__ZH_BOP__percent_percent_u32u32((v285), (v286)))));
};printf("%s", "reached function end without returning anything op bool !% u32 a u32 b\n"); exit(EXIT_FAILURE);}
u32* __ZH_LOP__plus_plus_u32R(u32* v287) {{
  (__ZH_BOP__plus_equal_u32Ru32(&(*v287), (((__ZH_LOP_u32_()))-((~((__ZH_LOP_u32_())))))));
  return &(*v287);
};printf("%s", "reached function end without returning anything lop u32R ++ u32R x\n"); exit(EXIT_FAILURE);}
u32* __ZH_LOP__minus_minus_u32R(u32* v288) {{
  (__ZH_BOP__minus_equal_u32Ru32(&(*v288), (((__ZH_LOP_u32_()))-((~((__ZH_LOP_u32_())))))));
  return &(*v288);
};printf("%s", "reached function end without returning anything lop u32R -- u32R x\n"); exit(EXIT_FAILURE);}
u32 __ZH_ROP__plus_plus_u32R(u32* v289) {{
  u32 v290;
  ((v290)=(*v289));
  (__ZH_BOP__plus_equal_u32Ru32(&(*v289), (((__ZH_LOP_u32_()))-((~((__ZH_LOP_u32_())))))));
  return (v290);
};printf("%s", "reached function end without returning anything rop u32 ++ u32R x\n"); exit(EXIT_FAILURE);}
u32 __ZH_ROP__minus_minus_u32R(u32* v291) {{
  u32 v292;
  ((v292)=(*v291));
  (__ZH_BOP__minus_equal_u32Ru32(&(*v291), (((__ZH_LOP_u32_()))-((~((__ZH_LOP_u32_())))))));
  return (v292);
};printf("%s", "reached function end without returning anything rop u32 -- u32R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u64Ru64(u64* v294, u64 v295){
  ((*v294)=(((*v294))+((v295))));
}
void __ZH_BOP__minus_equal_u64Ru64(u64* v296, u64 v297){
  ((*v296)=(((*v296))-((v297))));
}
void __ZH_BOP__slash_equal_u64Ru64(u64* v298, u64 v299){
  ((*v298)=(((*v298))/((v299))));
}
void __ZH_BOP__percent_equal_u64Ru64(u64* v300, u64 v301){
  ((*v300)=(((*v300))%((v301))));
}
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v302, u64 v303){
  ((*v302)=(((*v302))*((v303))));
}
void __ZH_BOP__caret_equal_u64Ru64(u64* v304, u64 v305){
  ((*v304)=(((*v304))^((v305))));
}
void __ZH_BOP__ampersand_equal_u64Ru64(u64* v306, u64 v307){
  ((*v306)=(((*v306))&((v307))));
}
void __ZH_BOP__pipe_equal_u64Ru64(u64* v308, u64 v309){
  ((*v308)=(((*v308))|((v309))));
}
bool __ZH_BOP__percent_percent_u64u64(u64 v310, u64 v311) {{
  return (!((((v310))%((v311)))));
};printf("%s", "reached function end without returning anything op bool %% u64 a u64 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u64u64(u64 v312, u64 v313) {{
  return (!((__ZH_BOP__percent_percent_u64u64((v312), (v313)))));
};printf("%s", "reached function end without returning anything op bool !% u64 a u64 b\n"); exit(EXIT_FAILURE);}
u64* __ZH_LOP__plus_plus_u64R(u64* v314) {{
  (__ZH_BOP__plus_equal_u64Ru64(&(*v314), (((__ZH_LOP_u64_()))-((~((__ZH_LOP_u64_())))))));
  return &(*v314);
};printf("%s", "reached function end without returning anything lop u64R ++ u64R x\n"); exit(EXIT_FAILURE);}
u64* __ZH_LOP__minus_minus_u64R(u64* v315) {{
  (__ZH_BOP__minus_equal_u64Ru64(&(*v315), (((__ZH_LOP_u64_()))-((~((__ZH_LOP_u64_())))))));
  return &(*v315);
};printf("%s", "reached function end without returning anything lop u64R -- u64R x\n"); exit(EXIT_FAILURE);}
u64 __ZH_ROP__plus_plus_u64R(u64* v316) {{
  u64 v317;
  ((v317)=(*v316));
  (__ZH_BOP__plus_equal_u64Ru64(&(*v316), (((__ZH_LOP_u64_()))-((~((__ZH_LOP_u64_())))))));
  return (v317);
};printf("%s", "reached function end without returning anything rop u64 ++ u64R x\n"); exit(EXIT_FAILURE);}
u64 __ZH_ROP__minus_minus_u64R(u64* v318) {{
  u64 v319;
  ((v319)=(*v318));
  (__ZH_BOP__minus_equal_u64Ru64(&(*v318), (((__ZH_LOP_u64_()))-((~((__ZH_LOP_u64_())))))));
  return (v319);
};printf("%s", "reached function end without returning anything rop u64 -- u64R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_charRchar(char* v321, char v322){
  ((*v321)=(((*v321))+((v322))));
}
void __ZH_BOP__minus_equal_charRchar(char* v323, char v324){
  ((*v323)=(((*v323))-((v324))));
}
void __ZH_BOP__slash_equal_charRchar(char* v325, char v326){
  ((*v325)=(((*v325))/((v326))));
}
void __ZH_BOP__percent_equal_charRchar(char* v327, char v328){
  ((*v327)=(((*v327))%((v328))));
}
void __ZH_BOP__asterisk_equal_charRchar(char* v329, char v330){
  ((*v329)=(((*v329))*((v330))));
}
void __ZH_BOP__caret_equal_charRchar(char* v331, char v332){
  ((*v331)=(((*v331))^((v332))));
}
void __ZH_BOP__ampersand_equal_charRchar(char* v333, char v334){
  ((*v333)=(((*v333))&((v334))));
}
void __ZH_BOP__pipe_equal_charRchar(char* v335, char v336){
  ((*v335)=(((*v335))|((v336))));
}
bool __ZH_BOP__percent_percent_charchar(char v337, char v338) {{
  return (!((((v337))%((v338)))));
};printf("%s", "reached function end without returning anything op bool %% char a char b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_charchar(char v339, char v340) {{
  return (!((__ZH_BOP__percent_percent_charchar((v339), (v340)))));
};printf("%s", "reached function end without returning anything op bool !% char a char b\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__plus_plus_charR(char* v341) {{
  (__ZH_BOP__plus_equal_charRchar(&(*v341), (((__ZH_LOP_char_()))-((~((__ZH_LOP_char_())))))));
  return &(*v341);
};printf("%s", "reached function end without returning anything lop charR ++ charR x\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__minus_minus_charR(char* v342) {{
  (__ZH_BOP__minus_equal_charRchar(&(*v342), (((__ZH_LOP_char_()))-((~((__ZH_LOP_char_())))))));
  return &(*v342);
};printf("%s", "reached function end without returning anything lop charR -- charR x\n"); exit(EXIT_FAILURE);}
char __ZH_ROP__plus_plus_charR(char* v343) {{
  char v344;
  ((v344)=(*v343));
  (__ZH_BOP__plus_equal_charRchar(&(*v343), (((__ZH_LOP_char_()))-((~((__ZH_LOP_char_())))))));
  return (v344);
};printf("%s", "reached function end without returning anything rop char ++ charR x\n"); exit(EXIT_FAILURE);}
char __ZH_ROP__minus_minus_charR(char* v345) {{
  char v346;
  ((v346)=(*v345));
  (__ZH_BOP__minus_equal_charRchar(&(*v345), (((__ZH_LOP_char_()))-((~((__ZH_LOP_char_())))))));
  return (v346);
};printf("%s", "reached function end without returning anything rop char -- charR x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f32Rf32(f32* v348, f32 v349){
  ((*v348)=(((*v348))+((v349))));
}
void __ZH_BOP__minus_equal_f32Rf32(f32* v350, f32 v351){
  ((*v350)=(((*v350))-((v351))));
}
void __ZH_BOP__slash_equal_f32Rf32(f32* v352, f32 v353){
  ((*v352)=(((*v352))/((v353))));
}
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v354, f32 v355){
  ((*v354)=(((*v354))*((v355))));
}
void __ZH_BOP__plus_equal_f64Rf64(f64* v356, f64 v357){
  ((*v356)=(((*v356))+((v357))));
}
void __ZH_BOP__minus_equal_f64Rf64(f64* v358, f64 v359){
  ((*v358)=(((*v358))-((v359))));
}
void __ZH_BOP__slash_equal_f64Rf64(f64* v360, f64 v361){
  ((*v360)=(((*v360))/((v361))));
}
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v362, f64 v363){
  ((*v362)=(((*v362))*((v363))));
}
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v364, i64 v365) {{
  i64 v366;
  ((v366)=((i64)1));
  while ((((v365))!=(((i64)0)))) {
    if ((__ZH_BOP__exclamation_percent_i64i64((v365), ((i64)2)))) {
      (__ZH_BOP__asterisk_equal_i64Ri64(&(v366), (v364)));
    }
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v364), (v364)));
    (__ZH_BOP__slash_equal_i64Ri64(&(v365), ((i64)2)));
  }
  return (v366);
};printf("%s", "reached function end without returning anything op i64 ** i64 a i64 n\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP_Out_() {{
  __ZH_TYPE_Out v367;
  return (v367);
};printf("%s", "reached function end without returning anything lop Out Out\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v368, __ZH_TYPE_Out v369) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out a Out b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v370) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Out o\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_str(str v371) {{
  (printf("%s\n", (v371)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_str(str v372) {{
  ((printf("%s", (v372))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v373, str v374) {{
  ((printf("%s", (v374))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v375) {{
  ((*v375)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v376, str* v377) {{
  ((*v377)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_char(char v378) {{
  (printf("%c\n", (v378)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_char(char v379) {{
  ((printf("%c", (v379))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v380, char v381) {{
  ((printf("%c", (v381))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v382) {{
  ((*v382)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v383, char* v384) {{
  ((*v384)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v385) {{
  (printf("%d\n", (v385)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v386) {{
  ((printf("%d", (v386))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v387, i8 v388) {{
  ((printf("%d", (v388))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v389) {{
  ((*v389)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v390, i8* v391) {{
  ((*v391)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v392) {{
  (printf("%hd\n", (v392)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v393) {{
  ((printf("%hd", (v393))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v394, i16 v395) {{
  ((printf("%hd", (v395))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v396) {{
  ((*v396)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v397, i16* v398) {{
  ((*v398)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v399) {{
  (printf("%d\n", (v399)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v400) {{
  ((printf("%d", (v400))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v401, i32 v402) {{
  ((printf("%d", (v402))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v403) {{
  ((*v403)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v404, i32* v405) {{
  ((*v405)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v406) {{
  (printf("%lld\n", (v406)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v407) {{
  ((printf("%lld", (v407))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v408, i64 v409) {{
  ((printf("%lld", (v409))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v410) {{
  ((*v410)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v411, i64* v412) {{
  ((*v412)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v413) {{
  (printf("%d\n", (v413)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v414) {{
  ((printf("%d", (v414))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v415, u8 v416) {{
  ((printf("%d", (v416))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v417) {{
  ((*v417)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v418, u8* v419) {{
  ((*v419)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v420) {{
  (printf("%hd\n", (v420)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v421) {{
  ((printf("%hd", (v421))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v422, u16 v423) {{
  ((printf("%hd", (v423))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v424) {{
  ((*v424)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v425, u16* v426) {{
  ((*v426)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v427) {{
  (printf("%u\n", (v427)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v428) {{
  ((printf("%u", (v428))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v429, u32 v430) {{
  ((printf("%u", (v430))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v431) {{
  ((*v431)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v432, u32* v433) {{
  ((*v433)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v434) {{
  (printf("%llu\n", (v434)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v435) {{
  ((printf("%llu", (v435))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v436, u64 v437) {{
  ((printf("%llu", (v437))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v438) {{
  ((*v438)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v439, u64* v440) {{
  ((*v440)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v441) {{
  (printf("%f\n", (v441)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v442) {{
  ((printf("%f", (v442))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v443, f32 v444) {{
  ((printf("%f", (v444))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v445) {{
  ((*v445)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v446, f32* v447) {{
  ((*v447)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v448) {{
  (printf("%f\n", (v448)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v449) {{
  ((printf("%f", (v449))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v450, f64 v451) {{
  ((printf("%f", (v451))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v452) {{
  ((*v452)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v453, f64* v454) {{
  ((*v454)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f64R i\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_rangeMaker_(){
  __ZH_TYPE_Range_lesschar_greater v629;
  __ZH_TYPE_Range_lessi32_greater v559;
  __ZH_TYPE_Range_lessi16_greater v524;
  __ZH_TYPE_Range_lessi64_greater v594;
  __ZH_TYPE_Range_lessi8_greater v489;
}
i8 __ZH_BOP__dotcall_dotbegin_Range_lessi8_greaterP(__ZH_TYPE_Range_lessi8_greater* v455) {{
  return (((v455))->begin);
};printf("%s", "reached function end without returning anything op i8 .call.begin Range<i8>P slf\n"); exit(EXIT_FAILURE);}
i8 __ZH_BOP__dotcall_dotend_Range_lessi8_greaterP(__ZH_TYPE_Range_lessi8_greater* v456) {{
  return (((v456))->end);
};printf("%s", "reached function end without returning anything op i8 .call.end Range<i8>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP_Range_lessi8_greater_i8i8(i8 v457, i8 v458) {{
  __ZH_TYPE_Range_lessi8_greater v459;
  (((&(v459))->begin)=(v457));
  (((&(v459))->end)=(v458));
  return (v459);
};printf("%s", "reached function end without returning anything lop Range<i8> Range<i8> i8 begin i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_i8i8(i8 v460, i8 v461) {{
  return (__ZH_LOP_Range_lessi8_greater_i8i8((v460), (v461)));
};printf("%s", "reached function end without returning anything op Range<i8> .. i8 begin i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_minus_i8i8(i8 v462, i8 v463) {{
  return (__ZH_BOP__dot_dot_i8i8((v462), (-((v463)))));
};printf("%s", "reached function end without returning anything op Range<i8> ..- i8 begin i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_ROP__dot_dot_i8(i8 v464) {{
  return (__ZH_BOP__dot_dot_i8i8((v464), (~((__ZH_LOP_i8_())))));
};printf("%s", "reached function end without returning anything rop Range<i8> .. i8 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_i8(i8 v465) {{
  i8 v467;
  return (__ZH_BOP__dot_dot_i8i8((*__ZH_LOP__plus_plus_i8R(&(*(((v467)=(~((__ZH_LOP_i8_())))), (&(v467)))))), (v465)));
};printf("%s", "reached function end without returning anything lop Range<i8> .. i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_minus_i8(i8 v468) {{
  i8 v470;
  return (__ZH_BOP__dot_dot_i8i8((*__ZH_LOP__plus_plus_i8R(&(*(((v470)=(~((__ZH_LOP_i8_())))), (&(v470)))))), (-((v468)))));
};printf("%s", "reached function end without returning anything lop Range<i8> ..- i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__minus_Range_lessi8_greater(__ZH_TYPE_Range_lessi8_greater v471) {{
  return (__ZH_BOP__dot_dot_i8i8((-(((&(v471))->begin))), ((&(v471))->end)));
};printf("%s", "reached function end without returning anything lop Range<i8> - Range<i8> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_equal_i8i8(i8 v472, i8 v473) {{
  i8 v475;
  return (__ZH_BOP__dot_dot_i8i8((v472), (((v473))+((*__ZH_LOP__plus_plus_i8R(&(*(((v475)=(__ZH_LOP_i8_())), (&(v475))))))))));
};printf("%s", "reached function end without returning anything op Range<i8> ..= i8 begin i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_equal_i8(i8 v476) {{
  i8 v480;
  i8 v478;
  return (__ZH_BOP__dot_dot_i8i8((*__ZH_LOP__plus_plus_i8R(&(*(((v478)=(~((__ZH_LOP_i8_())))), (&(v478)))))), (((v476))+((*__ZH_LOP__plus_plus_i8R(&(*(((v480)=(~((__ZH_LOP_i8_())))), (&(v480))))))))));
};printf("%s", "reached function end without returning anything lop Range<i8> ..= i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_equal_minus_i8(i8 v481) {{
  i8 v485;
  i8 v483;
  return (__ZH_BOP__dot_dot_i8i8((*__ZH_LOP__plus_plus_i8R(&(*(((v483)=(~((__ZH_LOP_i8_())))), (&(v483)))))), (((-((v481))))+((*__ZH_LOP__plus_plus_i8R(&(*(((v485)=(~((__ZH_LOP_i8_())))), (&(v485))))))))));
};printf("%s", "reached function end without returning anything lop Range<i8> ..=- i8 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i8Range_lessi8_greater(i8 v486, __ZH_TYPE_Range_lessi8_greater v487) {{
  if (((((&(v487))->begin))<(((&(v487))->end)))) {
    return ((((((&(v487))->begin))<=((v486))))&&((((v486))<(((&(v487))->end)))));
  } else {
    return ((((((&(v487))->end))<=((v486))))&&((((v486))<(((&(v487))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i8 i Range<i8> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP_iter_Range_lessi8_greater(__ZH_TYPE_Range_lessi8_greater v488) {{
  return (v488);
};printf("%s", "reached function end without returning anything lop Range<i8> iter Range<i8> r\n"); exit(EXIT_FAILURE);}
i16 __ZH_BOP__dotcall_dotbegin_Range_lessi16_greaterP(__ZH_TYPE_Range_lessi16_greater* v490) {{
  return (((v490))->begin);
};printf("%s", "reached function end without returning anything op i16 .call.begin Range<i16>P slf\n"); exit(EXIT_FAILURE);}
i16 __ZH_BOP__dotcall_dotend_Range_lessi16_greaterP(__ZH_TYPE_Range_lessi16_greater* v491) {{
  return (((v491))->end);
};printf("%s", "reached function end without returning anything op i16 .call.end Range<i16>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP_Range_lessi16_greater_i16i16(i16 v492, i16 v493) {{
  __ZH_TYPE_Range_lessi16_greater v494;
  (((&(v494))->begin)=(v492));
  (((&(v494))->end)=(v493));
  return (v494);
};printf("%s", "reached function end without returning anything lop Range<i16> Range<i16> i16 begin i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_i16i16(i16 v495, i16 v496) {{
  return (__ZH_LOP_Range_lessi16_greater_i16i16((v495), (v496)));
};printf("%s", "reached function end without returning anything op Range<i16> .. i16 begin i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_minus_i16i16(i16 v497, i16 v498) {{
  return (__ZH_BOP__dot_dot_i16i16((v497), (-((v498)))));
};printf("%s", "reached function end without returning anything op Range<i16> ..- i16 begin i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_ROP__dot_dot_i16(i16 v499) {{
  return (__ZH_BOP__dot_dot_i16i16((v499), (~((__ZH_LOP_i16_())))));
};printf("%s", "reached function end without returning anything rop Range<i16> .. i16 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_i16(i16 v500) {{
  i16 v502;
  return (__ZH_BOP__dot_dot_i16i16((*__ZH_LOP__plus_plus_i16R(&(*(((v502)=(~((__ZH_LOP_i16_())))), (&(v502)))))), (v500)));
};printf("%s", "reached function end without returning anything lop Range<i16> .. i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_minus_i16(i16 v503) {{
  i16 v505;
  return (__ZH_BOP__dot_dot_i16i16((*__ZH_LOP__plus_plus_i16R(&(*(((v505)=(~((__ZH_LOP_i16_())))), (&(v505)))))), (-((v503)))));
};printf("%s", "reached function end without returning anything lop Range<i16> ..- i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__minus_Range_lessi16_greater(__ZH_TYPE_Range_lessi16_greater v506) {{
  return (__ZH_BOP__dot_dot_i16i16((-(((&(v506))->begin))), ((&(v506))->end)));
};printf("%s", "reached function end without returning anything lop Range<i16> - Range<i16> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_equal_i16i16(i16 v507, i16 v508) {{
  i16 v510;
  return (__ZH_BOP__dot_dot_i16i16((v507), (((v508))+((*__ZH_LOP__plus_plus_i16R(&(*(((v510)=(__ZH_LOP_i16_())), (&(v510))))))))));
};printf("%s", "reached function end without returning anything op Range<i16> ..= i16 begin i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_equal_i16(i16 v511) {{
  i16 v515;
  i16 v513;
  return (__ZH_BOP__dot_dot_i16i16((*__ZH_LOP__plus_plus_i16R(&(*(((v513)=(~((__ZH_LOP_i16_())))), (&(v513)))))), (((v511))+((*__ZH_LOP__plus_plus_i16R(&(*(((v515)=(~((__ZH_LOP_i16_())))), (&(v515))))))))));
};printf("%s", "reached function end without returning anything lop Range<i16> ..= i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_equal_minus_i16(i16 v516) {{
  i16 v520;
  i16 v518;
  return (__ZH_BOP__dot_dot_i16i16((*__ZH_LOP__plus_plus_i16R(&(*(((v518)=(~((__ZH_LOP_i16_())))), (&(v518)))))), (((-((v516))))+((*__ZH_LOP__plus_plus_i16R(&(*(((v520)=(~((__ZH_LOP_i16_())))), (&(v520))))))))));
};printf("%s", "reached function end without returning anything lop Range<i16> ..=- i16 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i16Range_lessi16_greater(i16 v521, __ZH_TYPE_Range_lessi16_greater v522) {{
  if (((((&(v522))->begin))<(((&(v522))->end)))) {
    return ((((((&(v522))->begin))<=((v521))))&&((((v521))<(((&(v522))->end)))));
  } else {
    return ((((((&(v522))->end))<=((v521))))&&((((v521))<(((&(v522))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i16 i Range<i16> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP_iter_Range_lessi16_greater(__ZH_TYPE_Range_lessi16_greater v523) {{
  return (v523);
};printf("%s", "reached function end without returning anything lop Range<i16> iter Range<i16> r\n"); exit(EXIT_FAILURE);}
i32 __ZH_BOP__dotcall_dotbegin_Range_lessi32_greaterP(__ZH_TYPE_Range_lessi32_greater* v525) {{
  return (((v525))->begin);
};printf("%s", "reached function end without returning anything op i32 .call.begin Range<i32>P slf\n"); exit(EXIT_FAILURE);}
i32 __ZH_BOP__dotcall_dotend_Range_lessi32_greaterP(__ZH_TYPE_Range_lessi32_greater* v526) {{
  return (((v526))->end);
};printf("%s", "reached function end without returning anything op i32 .call.end Range<i32>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP_Range_lessi32_greater_i32i32(i32 v527, i32 v528) {{
  __ZH_TYPE_Range_lessi32_greater v529;
  (((&(v529))->begin)=(v527));
  (((&(v529))->end)=(v528));
  return (v529);
};printf("%s", "reached function end without returning anything lop Range<i32> Range<i32> i32 begin i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_i32i32(i32 v530, i32 v531) {{
  return (__ZH_LOP_Range_lessi32_greater_i32i32((v530), (v531)));
};printf("%s", "reached function end without returning anything op Range<i32> .. i32 begin i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_minus_i32i32(i32 v532, i32 v533) {{
  return (__ZH_BOP__dot_dot_i32i32((v532), (-((v533)))));
};printf("%s", "reached function end without returning anything op Range<i32> ..- i32 begin i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_ROP__dot_dot_i32(i32 v534) {{
  return (__ZH_BOP__dot_dot_i32i32((v534), (~((__ZH_LOP_i32_())))));
};printf("%s", "reached function end without returning anything rop Range<i32> .. i32 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_i32(i32 v535) {{
  i32 v537;
  return (__ZH_BOP__dot_dot_i32i32((*__ZH_LOP__plus_plus_i32R(&(*(((v537)=(~((__ZH_LOP_i32_())))), (&(v537)))))), (v535)));
};printf("%s", "reached function end without returning anything lop Range<i32> .. i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_minus_i32(i32 v538) {{
  i32 v540;
  return (__ZH_BOP__dot_dot_i32i32((*__ZH_LOP__plus_plus_i32R(&(*(((v540)=(~((__ZH_LOP_i32_())))), (&(v540)))))), (-((v538)))));
};printf("%s", "reached function end without returning anything lop Range<i32> ..- i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__minus_Range_lessi32_greater(__ZH_TYPE_Range_lessi32_greater v541) {{
  return (__ZH_BOP__dot_dot_i32i32((-(((&(v541))->begin))), ((&(v541))->end)));
};printf("%s", "reached function end without returning anything lop Range<i32> - Range<i32> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_equal_i32i32(i32 v542, i32 v543) {{
  i32 v545;
  return (__ZH_BOP__dot_dot_i32i32((v542), (((v543))+((*__ZH_LOP__plus_plus_i32R(&(*(((v545)=(__ZH_LOP_i32_())), (&(v545))))))))));
};printf("%s", "reached function end without returning anything op Range<i32> ..= i32 begin i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_equal_i32(i32 v546) {{
  i32 v550;
  i32 v548;
  return (__ZH_BOP__dot_dot_i32i32((*__ZH_LOP__plus_plus_i32R(&(*(((v548)=(~((__ZH_LOP_i32_())))), (&(v548)))))), (((v546))+((*__ZH_LOP__plus_plus_i32R(&(*(((v550)=(~((__ZH_LOP_i32_())))), (&(v550))))))))));
};printf("%s", "reached function end without returning anything lop Range<i32> ..= i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_equal_minus_i32(i32 v551) {{
  i32 v555;
  i32 v553;
  return (__ZH_BOP__dot_dot_i32i32((*__ZH_LOP__plus_plus_i32R(&(*(((v553)=(~((__ZH_LOP_i32_())))), (&(v553)))))), (((-((v551))))+((*__ZH_LOP__plus_plus_i32R(&(*(((v555)=(~((__ZH_LOP_i32_())))), (&(v555))))))))));
};printf("%s", "reached function end without returning anything lop Range<i32> ..=- i32 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i32Range_lessi32_greater(i32 v556, __ZH_TYPE_Range_lessi32_greater v557) {{
  if (((((&(v557))->begin))<(((&(v557))->end)))) {
    return ((((((&(v557))->begin))<=((v556))))&&((((v556))<(((&(v557))->end)))));
  } else {
    return ((((((&(v557))->end))<=((v556))))&&((((v556))<(((&(v557))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i32 i Range<i32> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP_iter_Range_lessi32_greater(__ZH_TYPE_Range_lessi32_greater v558) {{
  return (v558);
};printf("%s", "reached function end without returning anything lop Range<i32> iter Range<i32> r\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP(__ZH_TYPE_Range_lessi64_greater* v560) {{
  return (((v560))->begin);
};printf("%s", "reached function end without returning anything op i64 .call.begin Range<i64>P slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotend_Range_lessi64_greaterP(__ZH_TYPE_Range_lessi64_greater* v561) {{
  return (((v561))->end);
};printf("%s", "reached function end without returning anything op i64 .call.end Range<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP_Range_lessi64_greater_i64i64(i64 v562, i64 v563) {{
  __ZH_TYPE_Range_lessi64_greater v564;
  (((&(v564))->begin)=(v562));
  (((&(v564))->end)=(v563));
  return (v564);
};printf("%s", "reached function end without returning anything lop Range<i64> Range<i64> i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_i64i64(i64 v565, i64 v566) {{
  return (__ZH_LOP_Range_lessi64_greater_i64i64((v565), (v566)));
};printf("%s", "reached function end without returning anything op Range<i64> .. i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_minus_i64i64(i64 v567, i64 v568) {{
  return (__ZH_BOP__dot_dot_i64i64((v567), (-((v568)))));
};printf("%s", "reached function end without returning anything op Range<i64> ..- i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_ROP__dot_dot_i64(i64 v569) {{
  return (__ZH_BOP__dot_dot_i64i64((v569), (~((__ZH_LOP_i64_())))));
};printf("%s", "reached function end without returning anything rop Range<i64> .. i64 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_i64(i64 v570) {{
  i64 v572;
  return (__ZH_BOP__dot_dot_i64i64((*__ZH_LOP__plus_plus_i64R(&(*(((v572)=(~((__ZH_LOP_i64_())))), (&(v572)))))), (v570)));
};printf("%s", "reached function end without returning anything lop Range<i64> .. i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_minus_i64(i64 v573) {{
  i64 v575;
  return (__ZH_BOP__dot_dot_i64i64((*__ZH_LOP__plus_plus_i64R(&(*(((v575)=(~((__ZH_LOP_i64_())))), (&(v575)))))), (-((v573)))));
};printf("%s", "reached function end without returning anything lop Range<i64> ..- i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__minus_Range_lessi64_greater(__ZH_TYPE_Range_lessi64_greater v576) {{
  return (__ZH_BOP__dot_dot_i64i64((-(((&(v576))->begin))), ((&(v576))->end)));
};printf("%s", "reached function end without returning anything lop Range<i64> - Range<i64> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_equal_i64i64(i64 v577, i64 v578) {{
  i64 v580;
  return (__ZH_BOP__dot_dot_i64i64((v577), (((v578))+((*__ZH_LOP__plus_plus_i64R(&(*(((v580)=(__ZH_LOP_i64_())), (&(v580))))))))));
};printf("%s", "reached function end without returning anything op Range<i64> ..= i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_equal_i64(i64 v581) {{
  i64 v585;
  i64 v583;
  return (__ZH_BOP__dot_dot_i64i64((*__ZH_LOP__plus_plus_i64R(&(*(((v583)=(~((__ZH_LOP_i64_())))), (&(v583)))))), (((v581))+((*__ZH_LOP__plus_plus_i64R(&(*(((v585)=(~((__ZH_LOP_i64_())))), (&(v585))))))))));
};printf("%s", "reached function end without returning anything lop Range<i64> ..= i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_equal_minus_i64(i64 v586) {{
  i64 v590;
  i64 v588;
  return (__ZH_BOP__dot_dot_i64i64((*__ZH_LOP__plus_plus_i64R(&(*(((v588)=(~((__ZH_LOP_i64_())))), (&(v588)))))), (((-((v586))))+((*__ZH_LOP__plus_plus_i64R(&(*(((v590)=(~((__ZH_LOP_i64_())))), (&(v590))))))))));
};printf("%s", "reached function end without returning anything lop Range<i64> ..=- i64 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i64Range_lessi64_greater(i64 v591, __ZH_TYPE_Range_lessi64_greater v592) {{
  if (((((&(v592))->begin))<(((&(v592))->end)))) {
    return ((((((&(v592))->begin))<=((v591))))&&((((v591))<(((&(v592))->end)))));
  } else {
    return ((((((&(v592))->end))<=((v591))))&&((((v591))<(((&(v592))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i64 i Range<i64> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP_iter_Range_lessi64_greater(__ZH_TYPE_Range_lessi64_greater v593) {{
  return (v593);
};printf("%s", "reached function end without returning anything lop Range<i64> iter Range<i64> r\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotbegin_Range_lesschar_greaterP(__ZH_TYPE_Range_lesschar_greater* v595) {{
  return (((v595))->begin);
};printf("%s", "reached function end without returning anything op char .call.begin Range<char>P slf\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotend_Range_lesschar_greaterP(__ZH_TYPE_Range_lesschar_greater* v596) {{
  return (((v596))->end);
};printf("%s", "reached function end without returning anything op char .call.end Range<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP_Range_lesschar_greater_charchar(char v597, char v598) {{
  __ZH_TYPE_Range_lesschar_greater v599;
  (((&(v599))->begin)=(v597));
  (((&(v599))->end)=(v598));
  return (v599);
};printf("%s", "reached function end without returning anything lop Range<char> Range<char> char begin char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_charchar(char v600, char v601) {{
  return (__ZH_LOP_Range_lesschar_greater_charchar((v600), (v601)));
};printf("%s", "reached function end without returning anything op Range<char> .. char begin char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_minus_charchar(char v602, char v603) {{
  return (__ZH_BOP__dot_dot_charchar((v602), (-((v603)))));
};printf("%s", "reached function end without returning anything op Range<char> ..- char begin char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_ROP__dot_dot_char(char v604) {{
  return (__ZH_BOP__dot_dot_charchar((v604), (~((__ZH_LOP_char_())))));
};printf("%s", "reached function end without returning anything rop Range<char> .. char begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_char(char v605) {{
  char v607;
  return (__ZH_BOP__dot_dot_charchar((*__ZH_LOP__plus_plus_charR(&(*(((v607)=(~((__ZH_LOP_char_())))), (&(v607)))))), (v605)));
};printf("%s", "reached function end without returning anything lop Range<char> .. char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_minus_char(char v608) {{
  char v610;
  return (__ZH_BOP__dot_dot_charchar((*__ZH_LOP__plus_plus_charR(&(*(((v610)=(~((__ZH_LOP_char_())))), (&(v610)))))), (-((v608)))));
};printf("%s", "reached function end without returning anything lop Range<char> ..- char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__minus_Range_lesschar_greater(__ZH_TYPE_Range_lesschar_greater v611) {{
  return (__ZH_BOP__dot_dot_charchar((-(((&(v611))->begin))), ((&(v611))->end)));
};printf("%s", "reached function end without returning anything lop Range<char> - Range<char> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_equal_charchar(char v612, char v613) {{
  char v615;
  return (__ZH_BOP__dot_dot_charchar((v612), (((v613))+((*__ZH_LOP__plus_plus_charR(&(*(((v615)=(__ZH_LOP_char_())), (&(v615))))))))));
};printf("%s", "reached function end without returning anything op Range<char> ..= char begin char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_equal_char(char v616) {{
  char v620;
  char v618;
  return (__ZH_BOP__dot_dot_charchar((*__ZH_LOP__plus_plus_charR(&(*(((v618)=(~((__ZH_LOP_char_())))), (&(v618)))))), (((v616))+((*__ZH_LOP__plus_plus_charR(&(*(((v620)=(~((__ZH_LOP_char_())))), (&(v620))))))))));
};printf("%s", "reached function end without returning anything lop Range<char> ..= char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_equal_minus_char(char v621) {{
  char v625;
  char v623;
  return (__ZH_BOP__dot_dot_charchar((*__ZH_LOP__plus_plus_charR(&(*(((v623)=(~((__ZH_LOP_char_())))), (&(v623)))))), (((-((v621))))+((*__ZH_LOP__plus_plus_charR(&(*(((v625)=(~((__ZH_LOP_char_())))), (&(v625))))))))));
};printf("%s", "reached function end without returning anything lop Range<char> ..=- char end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charRange_lesschar_greater(char v626, __ZH_TYPE_Range_lesschar_greater v627) {{
  if (((((&(v627))->begin))<(((&(v627))->end)))) {
    return ((((((&(v627))->begin))<=((v626))))&&((((v626))<(((&(v627))->end)))));
  } else {
    return ((((((&(v627))->end))<=((v626))))&&((((v626))<(((&(v627))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == char i Range<char> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP_iter_Range_lesschar_greater(__ZH_TYPE_Range_lesschar_greater v628) {{
  return (v628);
};printf("%s", "reached function end without returning anything lop Range<char> iter Range<char> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v651) {{
  __ZH_TYPE_VecIter_lessi64_greater v652;
  (((&(v652))->ptr)=(v651));
  return (v652);
};printf("%s", "reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n"); exit(EXIT_FAILURE);}
void __ZH_LOP__plus_plus_VecIter_lessi64_greaterR(__ZH_TYPE_VecIter_lessi64_greater* v653){
  (((&(*v653))->ptr)=((i64*)((((i64)((&(*v653))->ptr)))+(((((i64)1))*(((i64)8)))))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__plus_VecIter_lessi64_greateri64(__ZH_TYPE_VecIter_lessi64_greater v654, i64 v655) {{
  (((&(v654))->ptr)=((i64*)((((i64)((&(v654))->ptr)))+((((v655))*(((i64)8)))))));
  return (v654);
};printf("%s", "reached function end without returning anything op VecIter<i64> + VecIter<i64> slf i64 i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_equal_VecIter_lessi64_greaterVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v656, __ZH_TYPE_VecIter_lessi64_greater v657) {{
  return ((((i64)((&(v656))->ptr)))!=(((i64)((&(v657))->ptr))));
};printf("%s", "reached function end without returning anything op bool != VecIter<i64> a VecIter<i64> b\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v658) {{
  return &(*((&(v658))->ptr));
};printf("%s", "reached function end without returning anything lop i64R * VecIter<i64> slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_VecIterRange_lessi64_greaterP(__ZH_TYPE_VecIterRange_lessi64_greater* v661) {{
  return (((v661))->begin);
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin VecIterRange<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_VecIterRange_lessi64_greaterP(__ZH_TYPE_VecIterRange_lessi64_greater* v662) {{
  return (((v662))->end);
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end VecIterRange<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lessi64_greater __ZH_LOP_VecIterRange_lessi64_greater_VecIter_lessi64_greaterVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v663, __ZH_TYPE_VecIter_lessi64_greater v664) {{
  __ZH_TYPE_VecIterRange_lessi64_greater v665;
  (((&(v665))->begin)=(v663));
  (((&(v665))->end)=(v664));
  return (v665);
};printf("%s", "reached function end without returning anything lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v630, i64 v631) {{
  return ((i64*)((i64*)((((i64)(((v630))->head)))+((((v631))*(((i64)8)))))));
};printf("%s", "reached function end without returning anything op i64P .call.atP Vec<i64>P slf i64 pos\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v632, i64 v633) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v632), (v633))));
};printf("%s", "reached function end without returning anything op i64R .call.at Vec<i64>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v634){
  (printf("%s", ((str)"[")));
  {
      i64 v637;
      i64 v636;
      __ZH_TYPE_Range_lessi64_greater v635;
      ((v635)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v634))->size))))));
      ((v636)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v635)))));
      ((v637)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v635)))));
      while ((((v637))!=((v636)))) {
        if ((!((!((v637)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v634), (v637))))));
        (*__ZH_LOP__plus_plus_i64R(&(v637)));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v638){
  {
      i64 v641;
      i64 v640;
      __ZH_TYPE_Range_lessi64_greater v639;
      ((v639)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v638))->size))))));
      ((v640)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v639)))));
      ((v641)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v639)))));
      while ((((v641))!=((v640)))) {
        (printf("%lld\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v638), (v641))))));
        (*__ZH_LOP__plus_plus_i64R(&(v641)));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v642){
  i64 v643;
  ((v643)=(((v642))->cap));
  if ((((v643))==(((i64)0)))) {
    ((v643)=((i64)1));
    ((((v642))->head)=((i64*)(alloc(((i64)8)))));
    ((((v642))->cap)=(v643));
  } else {
    i64* v644;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v643), ((i64)2)));
    ((v644)=((i64*)(alloc((((v643))*(((i64)8)))))));
    {
        i64 v647;
        i64 v646;
        __ZH_TYPE_Range_lessi64_greater v645;
        ((v645)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v642))->size))))));
        ((v646)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v645)))));
        ((v647)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v645)))));
        while ((((v647))!=((v646)))) {
          ((*((i64*)((((i64)(v644)))+((((v647))*(((i64)8)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v642), (v647))));
          (*__ZH_LOP__plus_plus_i64R(&(v647)));
        }
      }
    (free((void*) ((i64)(((v642))->head))));
    ((((v642))->head)=(v644));
  }
  ((((v642))->cap)=(v643));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v648, i64 v649){
  if ((((((v648))->size))==((((v648))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP((v648)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v648), (((v648))->size)))=(v649));
  (*__ZH_LOP__plus_plus_i64R(&(((v648))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v650){
  (*__ZH_LOP__minus_minus_i64R(&(((v650))->size)));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v659) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((((v659))->head)));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v660) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v660), (((v660))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lessi64_greater __ZH_LOP_iter_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v666) {{
  __ZH_TYPE_VecIterRange_lessi64_greater v667;
  (((&(v667))->begin)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((&(*v666)))));
  (((&(v667))->end)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((&(*v666)))));
  return (v667);
};printf("%s", "reached function end without returning anything lop VecIterRange<i64> iter Vec<i64>R slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v668) {{
  return &(*(((v668))->head));
};printf("%s", "reached function end without returning anything op i64R .call.front Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v669) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v669), (((((v669))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op i64R .call.back Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v670){
  if ((!((!(((i64)(((v670))->head))))))) {
    (free((void*) ((i64)(((v670))->head))));
    ((((v670))->size)=((i64)0));
    ((((v670))->cap)=((i64)0));
    ((((v670))->head)=((i64*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v671) {{
  __ZH_TYPE_Vec_lessi64_greater v672;
  (((&(v672))->head)=((i64*)((i64)0)));
  (((&(v672))->size)=((i64)0));
  (((&(v672))->cap)=((i64)0));
  while (((((&(v672))->cap))<((v671)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP((&(v672))));
  }
  (((&(v672))->size)=(v671));
  (((&(v672))->cap)=(v671));
  {
      i64 v675;
      i64 v674;
      __ZH_TYPE_Range_lessi64_greater v673;
      ((v673)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v672))->size))))));
      ((v674)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v673)))));
      ((v675)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v673)))));
      while ((((v675))!=((v674)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v672)), (v675)))=(__ZH_LOP_i64_()));
        (*__ZH_LOP__plus_plus_i64R(&(v675)));
      }
    }
  return (v672);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v672))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v676, i64 v677) {{
  __ZH_TYPE_Vec_lessi64_greater v678;
  ((v678)=(__ZH_LOP_Vec_lessi64_greater_i64((v676))));
  {
      i64 v681;
      i64 v680;
      __ZH_TYPE_Range_lessi64_greater v679;
      ((v679)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v678))->size))))));
      ((v680)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v679)))));
      ((v681)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v679)))));
      while ((((v681))!=((v680)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v678)), (v681)))=(v677));
        (*__ZH_LOP__plus_plus_i64R(&(v681)));
      }
    }
  return (v678);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v678))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {{
  return (__ZH_LOP_Vec_lessi64_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v682) {{
  __ZH_TYPE_Vec_lessi64_greater v683;
  ((v683)=(__ZH_LOP_Vec_lessi64_greater_i64(((&(*v682))->size))));
  {
      i64 v686;
      i64 v685;
      __ZH_TYPE_Range_lessi64_greater v684;
      ((v684)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v682))->size))))));
      ((v685)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v684)))));
      ((v686)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v684)))));
      while ((((v686))!=((v685)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v683)), (v686)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(*v682)), (v686))));
        (*__ZH_LOP__plus_plus_i64R(&(v686)));
      }
    }
  return (v683);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v683))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v687, i64 v688){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(*v687)), (v688)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v689, __ZH_TYPE_Vec_lessi64_greater* v690){
  {
      __ZH_TYPE_VecIter_lessi64_greater v693;
      __ZH_TYPE_VecIter_lessi64_greater v692;
      __ZH_TYPE_VecIterRange_lessi64_greater v691;
      ((v691)=(__ZH_LOP_iter_Vec_lessi64_greaterR(&(*v690))));
      ((v692)=(__ZH_BOP__dotcall_dotend_VecIterRange_lessi64_greaterP((&(v691)))));
      ((v693)=(__ZH_BOP__dotcall_dotbegin_VecIterRange_lessi64_greaterP((&(v691)))));
      while ((__ZH_BOP__exclamation_equal_VecIter_lessi64_greaterVecIter_lessi64_greater((v693), (v692)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(*v689)), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v693)))));
        (__ZH_LOP__plus_plus_VecIter_lessi64_greaterR(&(v693)));
      }
    }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v694, i64 v695) {{
  __ZH_TYPE_Vec_lessi64_greater v696;
  ((v696)=(__ZH_LOP_Vec_lessi64_greater_()));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v696), (v694)));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v696), (v695)));
  return (v696);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v696))));
};printf("%s", "reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v697, i64 v698) {{
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(*v697), (v698)));
  return &(*v697);
};printf("%s", "reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v699){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP((&(*v699))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v700){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP((&(*v700))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v701) {{
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v701)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v702) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v702))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v703, __ZH_TYPE_Vec_lessi64_greater* v704) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v704))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<i64>R i\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v705, i64 v706) {{
  if ((((v706))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v706), (((v705))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v705), (v706)));
};printf("%s", "reached function end without returning anything op i64R .call.sub Vec<i64>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64(__ZH_TYPE_Vec_lessi64_greater* v707, i64 v708, i64 v709) {{
  __ZH_TYPE_Vec_lessi64_greater v710;
  ((v710)=(__ZH_LOP_Vec_lessi64_greater_i64(((i64)0))));
  {
      i64 v713;
      i64 v712;
      __ZH_TYPE_Range_lessi64_greater v711;
      ((v711)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64((v708), (v709))))));
      ((v712)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v711)))));
      ((v713)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v711)))));
      while ((((v713))!=((v712)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(v710)), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v707), (v713)))));
        (*__ZH_LOP__plus_plus_i64R(&(v713)));
      }
    }
  return (v710);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v710))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPRange_lessi64_greater(__ZH_TYPE_Vec_lessi64_greater* v714, __ZH_TYPE_Range_lessi64_greater v715) {{
  i64 v717;
  i64 v716;
  (((v716)=((&(v715))->begin)), ((v717)=((&(v715))->end)));
  if ((((v716))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v716), (((v714))->size)));
  }
  if ((((v716))<(((i64)0)))) {
    ((v716)=((i64)0));
  }
  if ((((v717))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v717), (((v714))->size)));
  }
  if ((((v717))>((((v714))->size)))) {
    ((v717)=(((v714))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64((v714), (v716), (v717)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v718) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64((v718), ((i64)0), (((v718))->size)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v719, __ZH_TYPE_Vec_lessi64_greater* v720) {{
  {
      i64 v723;
      i64 v722;
      __ZH_TYPE_Range_lessi64_greater v721;
      ((v721)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v719))->size), ((&(*v720))->size))))))));
      ((v722)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v721)))));
      ((v723)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v721)))));
      while ((((v723))!=((v722)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(*v719)), (v723))))<((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(*v720)), (v723)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(*v720)), (v723))))<((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(*v719)), (v723)))))) {
          return ((bool)0);
        }
        (*__ZH_LOP__plus_plus_i64R(&(v723)));
      }
    }
  if (((((&(*v719))->size))<(((&(*v720))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v719))->size))>(((&(*v720))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_i64Pi64P(i64* v724, i64* v725){
  i64 v726;
  ((v726)=(*(v724)));
  ((*(v724))=(*(v725)));
  ((*(v725))=(v726));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v727, i64* v728) {{
  i64* v731;
  i64* v730;
  i64* v729;
  (((v729)=((i64*)((((i64)(v728)))-(((((i64)1))*(((i64)8))))))), ((v730)=(v727)), ((v731)=(v727)));
  ((v731)=(v727));
  while (((((i64)(v731)))!=(((i64)(v729))))) {
    if ((((*(v731)))<((*(v729))))) {
      (__ZH_LOP_swap_i64Pi64P((v730), (v731)));
      ((v730)=((i64*)((((i64)(v730)))+(((((i64)1))*(((i64)8)))))));
    }
    ((v731)=((i64*)((((i64)(v731)))+(((((i64)1))*(((i64)8)))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v730), (v729)));
  return (v730);
};printf("%s", "reached function end without returning anything lop i64P partition i64P lo i64P hi\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_i64Pi64P(i64* v732, i64* v733){
  i64 v735;
  i64 v734;
  ((v734)=((((i64)(v733)))-(((i64)(v732)))));
  ((v735)=((i64)8));
  if ((((v734))>((v735)))) {
    i64* v736;
    ((v736)=(__ZH_LOP_partition_i64Pi64P((v732), (v733))));
    (__ZH_LOP_qsort_i64Pi64P((v732), (v736)));
    ((v736)=((i64*)((((i64)(v736)))+(((((i64)1))*(((i64)8)))))));
    (__ZH_LOP_qsort_i64Pi64P((v736), (v733)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v737){
  __ZH_TYPE_VecIter_lessi64_greater v741;
  __ZH_TYPE_VecIter_lessi64_greater v739;
  (__ZH_LOP_qsort_i64Pi64P(((&(*(((v739)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((v737)))), (&(v739)))))->ptr), ((&(*(((v741)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((v737)))), (&(v741)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v742){
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP((&(*v742))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v743, i64(*v744)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v745;
  ((v745)=(__ZH_LOP_Vec_lessi64_greater_i64((((v743))->size))));
  {
      i64 v748;
      i64 v747;
      __ZH_TYPE_Range_lessi64_greater v746;
      ((v746)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v743))->size))))));
      ((v747)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v746)))));
      ((v748)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v746)))));
      while ((((v748))!=((v747)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(v745)), (v748)))=((*(v744))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v743), (v748))))));
        (*__ZH_LOP__plus_plus_i64R(&(v748)));
      }
    }
  return (v745);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v745))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v749, bool(*v750)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v751;
  ((v751)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      i64 v754;
      i64 v753;
      __ZH_TYPE_Range_lessi64_greater v752;
      ((v752)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v749))->size))))));
      ((v753)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v752)))));
      ((v754)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v752)))));
      while ((((v754))!=((v753)))) {
        if (((*(v750))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v749), (v754)))))) {
          (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v751), (*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v749), (v754)))));
        }
        (*__ZH_LOP__plus_plus_i64R(&(v754)));
      }
    }
  return (v751);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v751))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v755, i64 v756) {{
  __ZH_TYPE_Vec_lessi64_greater v757;
  ((v757)=(__ZH_LOP_Vec_lessi64_greater_i64((((v756))-((v755))))));
  {
      i64 v760;
      i64 v759;
      __ZH_TYPE_Range_lessi64_greater v758;
      ((v758)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64((v755), (v756))))));
      ((v759)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v758)))));
      ((v760)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v758)))));
      while ((((v760))!=((v759)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v757)), (((v760))-((v755)))))=(v760));
        (*__ZH_LOP__plus_plus_i64R(&(v760)));
      }
    }
  return (v757);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v757))));
};printf("%s", "reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotsub_strPi64(str* v761, i64 v762) {{
  return (*((char*)((((i64)(*(v761))))+((v762)))));
};printf("%s", "reached function end without returning anything op char .call.sub strP slf i64 pos\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_str_() {{
  u8* v763;
  ((v763)=((u8*)(alloc(((i64)1)))));
  ((*(v763))=((u8)0));
  return ((str)(v763));
};printf("%s", "reached function end without returning anything lop str str\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charstr(char v764, str v765) {{
  return (((v764))==((__ZH_BOP__dotcall_dotsub_strPi64((&(v765)), ((i64)0)))));
};printf("%s", "reached function end without returning anything op bool == char ch str s\n"); exit(EXIT_FAILURE);}
char __ZH_LOP_chr_str(str v766) {{
  return (__ZH_BOP__dotcall_dotsub_strPi64((&(v766)), ((i64)0)));
};printf("%s", "reached function end without returning anything lop char chr str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v788) {{
  __ZH_TYPE_VecIter_lesschar_greater v789;
  (((&(v789))->ptr)=(v788));
  return (v789);
};printf("%s", "reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n"); exit(EXIT_FAILURE);}
void __ZH_LOP__plus_plus_VecIter_lesschar_greaterR(__ZH_TYPE_VecIter_lesschar_greater* v790){
  (((&(*v790))->ptr)=((char*)((((i64)((&(*v790))->ptr)))+(((((i64)1))*(((i64)1)))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__plus_VecIter_lesschar_greateri64(__ZH_TYPE_VecIter_lesschar_greater v791, i64 v792) {{
  (((&(v791))->ptr)=((char*)((((i64)((&(v791))->ptr)))+((((v792))*(((i64)1)))))));
  return (v791);
};printf("%s", "reached function end without returning anything op VecIter<char> + VecIter<char> slf i64 i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v793, __ZH_TYPE_VecIter_lesschar_greater v794) {{
  return ((((i64)((&(v793))->ptr)))!=(((i64)((&(v794))->ptr))));
};printf("%s", "reached function end without returning anything op bool != VecIter<char> a VecIter<char> b\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v795) {{
  return &(*((&(v795))->ptr));
};printf("%s", "reached function end without returning anything lop charR * VecIter<char> slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP(__ZH_TYPE_VecIterRange_lesschar_greater* v798) {{
  return (((v798))->begin);
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin VecIterRange<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP(__ZH_TYPE_VecIterRange_lesschar_greater* v799) {{
  return (((v799))->end);
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end VecIterRange<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_VecIterRange_lesschar_greater_VecIter_lesschar_greaterVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v800, __ZH_TYPE_VecIter_lesschar_greater v801) {{
  __ZH_TYPE_VecIterRange_lesschar_greater v802;
  (((&(v802))->begin)=(v800));
  (((&(v802))->end)=(v801));
  return (v802);
};printf("%s", "reached function end without returning anything lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v767, i64 v768) {{
  return ((char*)((char*)((((i64)(((v767))->head)))+((((v768))*(((i64)1)))))));
};printf("%s", "reached function end without returning anything op charP .call.atP Vec<char>P slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v769, i64 v770) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v769), (v770))));
};printf("%s", "reached function end without returning anything op charR .call.at Vec<char>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v771){
  (printf("%s", ((str)"[")));
  {
      i64 v774;
      i64 v773;
      __ZH_TYPE_Range_lessi64_greater v772;
      ((v772)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v771))->size))))));
      ((v773)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v772)))));
      ((v774)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v772)))));
      while ((((v774))!=((v773)))) {
        if ((!((!((v774)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v771), (v774))))));
        (*__ZH_LOP__plus_plus_i64R(&(v774)));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v775){
  {
      i64 v778;
      i64 v777;
      __ZH_TYPE_Range_lessi64_greater v776;
      ((v776)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v775))->size))))));
      ((v777)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v776)))));
      ((v778)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v776)))));
      while ((((v778))!=((v777)))) {
        (printf("%c\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v775), (v778))))));
        (*__ZH_LOP__plus_plus_i64R(&(v778)));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v779){
  i64 v780;
  ((v780)=(((v779))->cap));
  if ((((v780))==(((i64)0)))) {
    ((v780)=((i64)1));
    ((((v779))->head)=((char*)(alloc(((i64)1)))));
    ((((v779))->cap)=(v780));
  } else {
    char* v781;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v780), ((i64)2)));
    ((v781)=((char*)(alloc((((v780))*(((i64)1)))))));
    {
        i64 v784;
        i64 v783;
        __ZH_TYPE_Range_lessi64_greater v782;
        ((v782)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v779))->size))))));
        ((v783)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v782)))));
        ((v784)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v782)))));
        while ((((v784))!=((v783)))) {
          ((*((char*)((((i64)(v781)))+((((v784))*(((i64)1)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v779), (v784))));
          (*__ZH_LOP__plus_plus_i64R(&(v784)));
        }
      }
    (free((void*) ((i64)(((v779))->head))));
    ((((v779))->head)=(v781));
  }
  ((((v779))->cap)=(v780));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar(__ZH_TYPE_Vec_lesschar_greater* v785, char v786){
  if ((((((v785))->size))==((((v785))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP((v785)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v785), (((v785))->size)))=(v786));
  (*__ZH_LOP__plus_plus_i64R(&(((v785))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v787){
  (*__ZH_LOP__minus_minus_i64R(&(((v787))->size)));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v796) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((((v796))->head)));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin Vec<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v797) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v797), (((v797))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end Vec<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v803) {{
  __ZH_TYPE_VecIterRange_lesschar_greater v804;
  (((&(v804))->begin)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&(*v803)))));
  (((&(v804))->end)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP((&(*v803)))));
  return (v804);
};printf("%s", "reached function end without returning anything lop VecIterRange<char> iter Vec<char>R slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v805) {{
  return &(*(((v805))->head));
};printf("%s", "reached function end without returning anything op charR .call.front Vec<char>P slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v806) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v806), (((((v806))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op charR .call.back Vec<char>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v807){
  if ((!((!(((i64)(((v807))->head))))))) {
    (free((void*) ((i64)(((v807))->head))));
    ((((v807))->size)=((i64)0));
    ((((v807))->cap)=((i64)0));
    ((((v807))->head)=((char*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v808) {{
  __ZH_TYPE_Vec_lesschar_greater v809;
  (((&(v809))->head)=((char*)((i64)0)));
  (((&(v809))->size)=((i64)0));
  (((&(v809))->cap)=((i64)0));
  while (((((&(v809))->cap))<((v808)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP((&(v809))));
  }
  (((&(v809))->size)=(v808));
  (((&(v809))->cap)=(v808));
  {
      i64 v812;
      i64 v811;
      __ZH_TYPE_Range_lessi64_greater v810;
      ((v810)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v809))->size))))));
      ((v811)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v810)))));
      ((v812)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v810)))));
      while ((((v812))!=((v811)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v809)), (v812)))=(__ZH_LOP_char_()));
        (*__ZH_LOP__plus_plus_i64R(&(v812)));
      }
    }
  return (v809);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v809))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v813, char v814) {{
  __ZH_TYPE_Vec_lesschar_greater v815;
  ((v815)=(__ZH_LOP_Vec_lesschar_greater_i64((v813))));
  {
      i64 v818;
      i64 v817;
      __ZH_TYPE_Range_lessi64_greater v816;
      ((v816)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v815))->size))))));
      ((v817)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v816)))));
      ((v818)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v816)))));
      while ((((v818))!=((v817)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v815)), (v818)))=(v814));
        (*__ZH_LOP__plus_plus_i64R(&(v818)));
      }
    }
  return (v815);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v815))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {{
  return (__ZH_LOP_Vec_lesschar_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v819) {{
  __ZH_TYPE_Vec_lesschar_greater v820;
  ((v820)=(__ZH_LOP_Vec_lesschar_greater_i64(((&(*v819))->size))));
  {
      i64 v823;
      i64 v822;
      __ZH_TYPE_Range_lessi64_greater v821;
      ((v821)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v819))->size))))));
      ((v822)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v821)))));
      ((v823)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v821)))));
      while ((((v823))!=((v822)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v820)), (v823)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(*v819)), (v823))));
        (*__ZH_LOP__plus_plus_i64R(&(v823)));
      }
    }
  return (v820);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v820))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v824, char v825){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(*v824)), (v825)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v826, __ZH_TYPE_Vec_lesschar_greater* v827){
  {
      __ZH_TYPE_VecIter_lesschar_greater v830;
      __ZH_TYPE_VecIter_lesschar_greater v829;
      __ZH_TYPE_VecIterRange_lesschar_greater v828;
      ((v828)=(__ZH_LOP_iter_Vec_lesschar_greaterR(&(*v827))));
      ((v829)=(__ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP((&(v828)))));
      ((v830)=(__ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP((&(v828)))));
      while ((__ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater((v830), (v829)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(*v826)), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v830)))));
        (__ZH_LOP__plus_plus_VecIter_lesschar_greaterR(&(v830)));
      }
    }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v831, char v832) {{
  __ZH_TYPE_Vec_lesschar_greater v833;
  ((v833)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v833), (v831)));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v833), (v832)));
  return (v833);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v833))));
};printf("%s", "reached function end without returning anything op Vec<char> ,, char a char b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v834, char v835) {{
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(*v834), (v835)));
  return &(*v834);
};printf("%s", "reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v836){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP((&(*v836))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v837){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP((&(*v837))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v838) {{
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v838)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v839) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v839))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v840, __ZH_TYPE_Vec_lesschar_greater* v841) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v841))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<char>R i\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v842, i64 v843) {{
  if ((((v843))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v843), (((v842))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v842), (v843)));
};printf("%s", "reached function end without returning anything op charR .call.sub Vec<char>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64(__ZH_TYPE_Vec_lesschar_greater* v844, i64 v845, i64 v846) {{
  __ZH_TYPE_Vec_lesschar_greater v847;
  ((v847)=(__ZH_LOP_Vec_lesschar_greater_i64(((i64)0))));
  {
      i64 v850;
      i64 v849;
      __ZH_TYPE_Range_lessi64_greater v848;
      ((v848)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64((v845), (v846))))));
      ((v849)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v848)))));
      ((v850)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v848)))));
      while ((((v850))!=((v849)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(v847)), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v844), (v850)))));
        (*__ZH_LOP__plus_plus_i64R(&(v850)));
      }
    }
  return (v847);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v847))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPRange_lessi64_greater(__ZH_TYPE_Vec_lesschar_greater* v851, __ZH_TYPE_Range_lessi64_greater v852) {{
  i64 v854;
  i64 v853;
  (((v853)=((&(v852))->begin)), ((v854)=((&(v852))->end)));
  if ((((v853))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v853), (((v851))->size)));
  }
  if ((((v853))<(((i64)0)))) {
    ((v853)=((i64)0));
  }
  if ((((v854))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v854), (((v851))->size)));
  }
  if ((((v854))>((((v851))->size)))) {
    ((v854)=(((v851))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64((v851), (v853), (v854)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf Range<i64> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v855) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64((v855), ((i64)0), (((v855))->size)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v856, __ZH_TYPE_Vec_lesschar_greater* v857) {{
  {
      i64 v860;
      i64 v859;
      __ZH_TYPE_Range_lessi64_greater v858;
      ((v858)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v856))->size), ((&(*v857))->size))))))));
      ((v859)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v858)))));
      ((v860)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v858)))));
      while ((((v860))!=((v859)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(*v856)), (v860))))<((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(*v857)), (v860)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(*v857)), (v860))))<((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(*v856)), (v860)))))) {
          return ((bool)0);
        }
        (*__ZH_LOP__plus_plus_i64R(&(v860)));
      }
    }
  if (((((&(*v856))->size))<(((&(*v857))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v856))->size))>(((&(*v857))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_charPcharP(char* v861, char* v862){
  char v863;
  ((v863)=(*(v861)));
  ((*(v861))=(*(v862)));
  ((*(v862))=(v863));
}
char* __ZH_LOP_partition_charPcharP(char* v864, char* v865) {{
  char* v868;
  char* v867;
  char* v866;
  (((v866)=((char*)((((i64)(v865)))-(((((i64)1))*(((i64)1))))))), ((v867)=(v864)), ((v868)=(v864)));
  ((v868)=(v864));
  while (((((i64)(v868)))!=(((i64)(v866))))) {
    if ((((*(v868)))<((*(v866))))) {
      (__ZH_LOP_swap_charPcharP((v867), (v868)));
      ((v867)=((char*)((((i64)(v867)))+(((((i64)1))*(((i64)1)))))));
    }
    ((v868)=((char*)((((i64)(v868)))+(((((i64)1))*(((i64)1)))))));
  }
  (__ZH_LOP_swap_charPcharP((v867), (v866)));
  return (v867);
};printf("%s", "reached function end without returning anything lop charP partition charP lo charP hi\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_charPcharP(char* v869, char* v870){
  i64 v872;
  i64 v871;
  ((v871)=((((i64)(v870)))-(((i64)(v869)))));
  ((v872)=((i64)1));
  if ((((v871))>((v872)))) {
    char* v873;
    ((v873)=(__ZH_LOP_partition_charPcharP((v869), (v870))));
    (__ZH_LOP_qsort_charPcharP((v869), (v873)));
    ((v873)=((char*)((((i64)(v873)))+(((((i64)1))*(((i64)1)))))));
    (__ZH_LOP_qsort_charPcharP((v873), (v870)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v874){
  __ZH_TYPE_VecIter_lesschar_greater v878;
  __ZH_TYPE_VecIter_lesschar_greater v876;
  (__ZH_LOP_qsort_charPcharP(((&(*(((v876)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((v874)))), (&(v876)))))->ptr), ((&(*(((v878)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP((v874)))), (&(v878)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v879){
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP((&(*v879))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotmap_Vec_lesschar_greaterPF_lesschar_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v880, char(*v881)(char*)) {{
  __ZH_TYPE_Vec_lesschar_greater v882;
  ((v882)=(__ZH_LOP_Vec_lesschar_greater_i64((((v880))->size))));
  {
      i64 v885;
      i64 v884;
      __ZH_TYPE_Range_lessi64_greater v883;
      ((v883)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v880))->size))))));
      ((v884)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v883)))));
      ((v885)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v883)))));
      while ((((v885))!=((v884)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(v882)), (v885)))=((*(v881))(&(*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v880), (v885))))));
        (*__ZH_LOP__plus_plus_i64R(&(v885)));
      }
    }
  return (v882);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v882))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.map Vec<char>P slf F<char charR> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotfilter_Vec_lesschar_greaterPF_lessbool_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v886, bool(*v887)(char*)) {{
  __ZH_TYPE_Vec_lesschar_greater v888;
  ((v888)=(__ZH_LOP_Vec_lesschar_greater_()));
  {
      i64 v891;
      i64 v890;
      __ZH_TYPE_Range_lessi64_greater v889;
      ((v889)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v886))->size))))));
      ((v890)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v889)))));
      ((v891)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v889)))));
      while ((((v891))!=((v890)))) {
        if (((*(v887))(&(*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v886), (v891)))))) {
          (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v888), (*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v886), (v891)))));
        }
        (*__ZH_LOP__plus_plus_i64R(&(v891)));
      }
    }
  return (v888);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v888))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.filter Vec<char>P slf F<bool charR> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_() {{
  __ZH_TYPE_Str v892;
  (((&(v892))->data)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v892))->data)), ((char)((u8)0))));
  (((&(v892))->size)=((i64)0));
  return (v892);
};printf("%s", "reached function end without returning anything lop Str Str\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_StrP(__ZH_TYPE_Str* v893){
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(((v893))->data))));
}
str __ZH_BOP__dotcall_dotcstr_StrP(__ZH_TYPE_Str* v894) {{
  __ZH_TYPE_VecIter_lesschar_greater v895;
  ((v895)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&(((v894))->data)))));
  return ((str)((&(v895))->ptr));
};printf("%s", "reached function end without returning anything op str .call.cstr StrP slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_StrR(__ZH_TYPE_Str* v896) {{
  return (__ZH_LOP_VecIterRange_lesschar_greater_VecIter_lesschar_greaterVecIter_lesschar_greater((__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&((&(*v896))->data)))), (__ZH_BOP__plus_VecIter_lesschar_greateri64((__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&((&(*v896))->data)))), ((&(*v896))->size)))));
};printf("%s", "reached function end without returning anything lop VecIterRange<char> iter StrR s\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_StrPi64(__ZH_TYPE_Str* v897, i64 v898) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(((v897))->data)), (v898)));
};printf("%s", "reached function end without returning anything op charR .call.at StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_StrPi64(__ZH_TYPE_Str* v899, i64 v900) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(((v899))->data)), (v900)));
};printf("%s", "reached function end without returning anything op charR .call.sub StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_StrPi64(__ZH_TYPE_Str* v901, i64 v902) {{
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((&(((v901))->data)), (v902)));
};printf("%s", "reached function end without returning anything op charP .call.atP StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotpush_back_StrPchar(__ZH_TYPE_Str* v903, char v904){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v903))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v903))->data)), (v904)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v903))->data)), ((char)((u8)0))));
  (*__ZH_LOP__plus_plus_i64R(&(((v903))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_StrP(__ZH_TYPE_Str* v905){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v905))->data))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v905))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v905))->data)), ((char)((u8)0))));
  (*__ZH_LOP__minus_minus_i64R(&(((v905))->size)));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v906) {{
  __ZH_TYPE_Str v907;
  ((v907)=(__ZH_LOP_Str_()));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&((&(v907))->data))));
  while ((((*((char*)(v906))))!=(((char)((u8)0))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v907))->data)), (*((char*)(v906)))));
    ((v906)=((str)((((i64)(v906)))+(((i64)1)))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v907))->data)), ((char)((u8)0))));
  (((&(v907))->size)=((((&((&(v907))->data))->size))-(((i64)1))));
  return (v907);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v907))));
};printf("%s", "reached function end without returning anything lop Str Str str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v908) {{
  __ZH_TYPE_Str v909;
  ((v909)=(__ZH_LOP_Str_()));
  (((&(v909))->data)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&((&(*v908))->data))));
  (((&(v909))->size)=((&(*v908))->size));
  return (v909);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v909))));
};printf("%s", "reached function end without returning anything lop Str Str StrR s\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_len_str(str v910) {{
  i64 v911;
  ((v911)=((i64)0));
  while ((((*((char*)(v910))))!=(((char)((u8)0))))) {
    (*__ZH_LOP__plus_plus_i64R(&(v911)));
    ((v910)=((str)((((i64)(v910)))+(((i64)1)))));
  }
  return (v911);
};printf("%s", "reached function end without returning anything lop i64 len str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v912){
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP((&(*v912))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v913){
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP((&(*v913))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v914, char v915){
  (__ZH_BOP__dotcall_dotpush_back_StrPchar((&(*v914)), (v915)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v916, __ZH_TYPE_Str* v917){
  {
      i64 v920;
      i64 v919;
      __ZH_TYPE_Range_lessi64_greater v918;
      ((v918)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v917))->size))))));
      ((v919)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v918)))));
      ((v920)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v918)))));
      while ((((v920))!=((v919)))) {
        char v921;
        ((v921)=((char)((i8)115)));
        ((v921)=(*__ZH_BOP__dotcall_dotat_StrPi64((&(*v917)), (v920))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v916), (v921)));
        (*__ZH_LOP__plus_plus_i64R(&(v920)));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v922, str v923){
  i64 v924;
  ((v924)=(__ZH_LOP_len_str((v923))));
  {
      i64 v927;
      i64 v926;
      __ZH_TYPE_Range_lessi64_greater v925;
      ((v925)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (v924))))));
      ((v926)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v925)))));
      ((v927)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v925)))));
      while ((((v927))!=((v926)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v922), (__ZH_BOP__dotcall_dotsub_strPi64((&(v923)), (v927)))));
        (*__ZH_LOP__plus_plus_i64R(&(v927)));
      }
    }
}
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v928, __ZH_TYPE_Str* v929) {{
  __ZH_TYPE_Str v930;
  ((v930)=(__ZH_LOP_Str_StrR(&(*v928))));
  (__ZH_BOP__plus_equal_StrRStrR(&(v930), &(*v929)));
  return (v930);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v930))));
};printf("%s", "reached function end without returning anything op Str + StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v931, str v932) {{
  __ZH_TYPE_Str v936;
  __ZH_TYPE_Str v934;
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v934))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v936))));
  return (__ZH_BOP__plus_StrRStrR(&(*(((v934)=(__ZH_LOP_Str_str((v931)))), (&(v934)))), &(*(((v936)=(__ZH_LOP_Str_str((v932)))), (&(v936))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v934))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v936))));
};printf("%s", "reached function end without returning anything op Str + str a str b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v937) {{
  (__ZH_LOP_out_StrR(&(*v937)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v938) {{
  ((__ZH_LOP_put_StrR(&(*v938))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v939, __ZH_TYPE_Str* v940) {{
  ((__ZH_LOP_put_StrR(&(*v940))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o StrR i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v941, __ZH_TYPE_Str* v942) {{
  {
      i64 v945;
      i64 v944;
      __ZH_TYPE_Range_lessi64_greater v943;
      ((v943)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v941))->size), ((&(*v942))->size))))))));
      ((v944)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v943)))));
      ((v945)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v943)))));
      while ((((v945))!=((v944)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v941)), (v945))))<((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v942)), (v945)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v942)), (v945))))<((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v941)), (v945)))))) {
          return ((bool)0);
        }
        (*__ZH_LOP__plus_plus_i64R(&(v945)));
      }
    }
  if (((((&(*v941))->size))<(((&(*v942))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v941))->size))>(((&(*v942))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v946, i64 v947) {{
  __ZH_TYPE_Str v949;
  __ZH_TYPE_Str v948;
  ((v948)=(__ZH_LOP_Str_()));
  ((v949)=(__ZH_LOP_Str_str((v946))));
  {
      i64 v952;
      i64 v951;
      __ZH_TYPE_Range_lessi64_greater v950;
      ((v950)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (v947))))));
      ((v951)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v950)))));
      ((v952)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v950)))));
      while ((((v952))!=((v951)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v948), &(v949)));
        (*__ZH_LOP__plus_plus_i64R(&(v952)));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v949))));
  return (v948);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v948))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v949))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v948))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v949))));
};printf("%s", "reached function end without returning anything op Str * str s i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v953) {{
  return (__ZH_LOP_Str_str((v953)));
};printf("%s", "reached function end without returning anything lop Str $ str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_up_StrR(__ZH_TYPE_Str* v954){
  {
      __ZH_TYPE_VecIter_lesschar_greater v957;
      __ZH_TYPE_VecIter_lesschar_greater v956;
      __ZH_TYPE_VecIterRange_lesschar_greater v955;
      ((v955)=(__ZH_LOP_iter_StrR(&(*v954))));
      ((v956)=(__ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP((&(v955)))));
      ((v957)=(__ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP((&(v955)))));
      while ((__ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater((v957), (v956)))) {
        if ((__ZH_BOP__equal_equal_charRange_lesschar_greater((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v957))), (__ZH_BOP__dot_dot_equal_charchar((__ZH_LOP_chr_str(((str)"a"))), (__ZH_LOP_chr_str(((str)"z")))))))) {
          ((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v957)))=(((((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v957))))+((__ZH_LOP_chr_str(((str)"A"))))))-((__ZH_LOP_chr_str(((str)"a"))))));
        }
        (__ZH_LOP__plus_plus_VecIter_lesschar_greaterR(&(v957)));
      }
    }
}
void __ZH_LOP_low_StrR(__ZH_TYPE_Str* v958){
  {
      __ZH_TYPE_VecIter_lesschar_greater v961;
      __ZH_TYPE_VecIter_lesschar_greater v960;
      __ZH_TYPE_VecIterRange_lesschar_greater v959;
      ((v959)=(__ZH_LOP_iter_StrR(&(*v958))));
      ((v960)=(__ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP((&(v959)))));
      ((v961)=(__ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP((&(v959)))));
      while ((__ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater((v961), (v960)))) {
        if ((__ZH_BOP__equal_equal_charRange_lesschar_greater((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v961))), (__ZH_BOP__dot_dot_equal_charchar((__ZH_LOP_chr_str(((str)"A"))), (__ZH_LOP_chr_str(((str)"Z")))))))) {
          ((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v961)))=(((((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v961))))-((__ZH_LOP_chr_str(((str)"A"))))))+((__ZH_LOP_chr_str(((str)"a"))))));
        }
        (__ZH_LOP__plus_plus_VecIter_lesschar_greaterR(&(v961)));
      }
    }
}
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_str(str v962) {{
  __ZH_TYPE_Str v964;
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v964))));
  return (__ZH_LOP_iter_StrR(&(*(((v964)=(__ZH_LOP_Str_str((v962)))), (&(v964))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v964))));
};printf("%s", "reached function end without returning anything lop VecIterRange<char> iter str s\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_frog_() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
};printf("%s", "reached function end without returning anything lop str frog\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_sqrt_f64(f64 v965) {{
  f64 v966;
  ((v966)=((f64)1.000000));
  {
      i64 v969;
      i64 v968;
      __ZH_TYPE_Range_lessi64_greater v967;
      ((v967)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((i64)10))))));
      ((v968)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v967)))));
      ((v969)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v967)))));
      while ((((v969))!=((v968)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v966), (((((((v966))*((v966))))-((v965))))/(((((f64)2.000000))*((v966)))))));
        (*__ZH_LOP__plus_plus_i64R(&(v969)));
      }
    }
  return (v966);
};printf("%s", "reached function end without returning anything lop f64 sqrt f64 x\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v970, f64 v971) {{
  __ZH_TYPE_V2 v972;
  (((&(v972))->x)=(v970));
  (((&(v972))->y)=(v971));
  return (v972);
};printf("%s", "reached function end without returning anything lop V2 V2 f64 x f64 y\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v973, __ZH_TYPE_V2 v974) {{
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v973))->x), ((&(v974))->x)));
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v973))->y), ((&(v974))->y)));
  return (v973);
};printf("%s", "reached function end without returning anything op V2 + V2 a V2 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v975, __ZH_TYPE_V2 v976) {{
  __ZH_TYPE_V2 v977;
  (((&(v977))->x)=((((((&(v975))->x))*(((&(v976))->x))))-(((((&(v975))->y))*(((&(v976))->y))))));
  (((&(v977))->y)=((((((&(v975))->x))*(((&(v976))->y))))+(((((&(v975))->y))*(((&(v976))->x))))));
  return (v977);
};printf("%s", "reached function end without returning anything op V2 * V2 a V2 b\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v978) {{
  return (__ZH_LOP_sqrt_f64(((((((&(v978))->x))*(((&(v978))->x))))+(((((&(v978))->y))*(((&(v978))->y)))))));
};printf("%s", "reached function end without returning anything lop f64 abs V2 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v979){
  (printf("%f", ((&(v979))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v979))->y)));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v980){
  (printf("%f", ((&(v980))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v980))->y)));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v981) {{
  (__ZH_LOP_out_V2((v981)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v982) {{
  ((__ZH_LOP_put_V2((v982))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v983, __ZH_TYPE_V2 v984) {{
  ((__ZH_LOP_put_V2((v984))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v985) {{
  __ZH_TYPE_Rng v986;
  (((&(v986))->seed)=(v985));
  return (v986);
};printf("%s", "reached function end without returning anything lop Rng Rng i64 seed\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_() {{
  return (__ZH_LOP_Rng_i64(((i64)5323)));
};printf("%s", "reached function end without returning anything lop Rng Rng\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotcall_RngP(__ZH_TYPE_Rng* v987) {{
  ((((v987))->seed)=((((((i64)8253729))*((((v987))->seed))))+(((i64)2396403))));
  return (((((v987))->seed))%(((i64)32767)));
};printf("%s", "reached function end without returning anything op i64 .call.call RngP slf\n"); exit(EXIT_FAILURE);}
int main(int argc, char *argv[]) {
  __ZH_TYPE_Rng v1046;
  __ZH_TYPE_AVLTree_lessi64_greater v1045;
  ((v1045)=(__ZH_LOP_AVLTree_lessi64_greater_()));
  ((v1046)=(__ZH_LOP_Rng_()));
  {
      i64 v1049;
      i64 v1048;
      __ZH_TYPE_Range_lessi64_greater v1047;
      ((v1047)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((i64)10))))));
      ((v1048)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v1047)))));
      ((v1049)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v1047)))));
      while ((((v1049))!=((v1048)))) {
        __ZH_TYPE_Vec_lessi64_greater v1052;
        i64 v1050;
        ((v1050)=(__ZH_BOP__dotcall_dotcall_RngP((&(v1046)))));
        ((printf("%s", ((str)"inserting "))), (printf("%lld", (v1050))), (printf("%s\n", ((str)":"))));
        (__ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(&(v1045), (v1050)));
        (__ZH_LOP_out_Vec_lessi64_greaterR(&(*(((v1052)=(__ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP((&(v1045))))), (&(v1052))))));
        (__ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP((&(v1045))));
        (printf("%s\n", ((str)"")));
        (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1052))));
        (*__ZH_LOP__plus_plus_i64R(&(v1049)));
      }
    }
}
__ZH_TYPE_AVLNode_lessi64_greater __ZH_LOP_AVLNode_lessi64_greater_i64R(i64* v988) {{
  __ZH_TYPE_AVLNode_lessi64_greater v989;
  (((&(v989))->h)=((i64)1));
  (((&(v989))->val)=(*v988));
  (((&(v989))->lhs)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  (((&(v989))->rhs)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  (((&(v989))->par)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  return (v989);
};printf("%s", "reached function end without returning anything lop AVLNode<i64> AVLNode<i64> i64R val\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP_new_AVLNode_lessi64_greater(__ZH_TYPE_AVLNode_lessi64_greater v990) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v991;
  ((v991)=((__ZH_TYPE_AVLNode_lessi64_greater*)(alloc(((i64)40)))));
  ((*(v991))=(v990));
  return (v991);
};printf("%s", "reached function end without returning anything lop AVLNode<i64>P new AVLNode<i64> slf\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v992) {{
  return ((((i64)(v992)))!=(((i64)0)));
};printf("%s", "reached function end without returning anything lop bool !! AVLNode<i64>P ptr\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP__exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v993) {{
  return ((((i64)(v993)))==(((i64)0)));
};printf("%s", "reached function end without returning anything lop bool ! AVLNode<i64>P ptr\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v994) {{
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP((v994)))) {
    return ((i64)0);
  } else {
    return (((v994))->h);
  }
};printf("%s", "reached function end without returning anything op i64 .call.h AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v995) {{
  return (((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP((((v995))->rhs))))-((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP((((v995))->lhs)))));
};printf("%s", "reached function end without returning anything op i64 .call.bf AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v996){
  ((((v996))->h)=((((i64)1))+((__ZH_LOP_max_i64i64((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP((((v996))->rhs))), (__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP((((v996))->lhs))))))));
}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v997) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v998;
  ((v998)=(((v997))->lhs));
  ((((v997))->lhs)=(((v998))->rhs));
  ((((v998))->rhs)=(v997));
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v997))->rhs)))) {
    ((((((v997))->rhs))->par)=(v997));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v997))->lhs)))) {
    ((((((v997))->lhs))->par)=(v997));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v998))->rhs)))) {
    ((((((v998))->rhs))->par)=(v998));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v998))->lhs)))) {
    ((((((v998))->lhs))->par)=(v998));
  }
  ((__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP((v997))), (__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP((v998))));
  return (v998);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.rrot AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v999) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v1000;
  ((v1000)=(((v999))->rhs));
  ((((v999))->rhs)=(((v1000))->lhs));
  ((((v1000))->lhs)=(v999));
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v999))->rhs)))) {
    ((((((v999))->rhs))->par)=(v999));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v999))->lhs)))) {
    ((((((v999))->lhs))->par)=(v999));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v1000))->rhs)))) {
    ((((((v1000))->rhs))->par)=(v1000));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v1000))->lhs)))) {
    ((((((v1000))->lhs))->par)=(v1000));
  }
  ((__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP((v999))), (__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP((v1000))));
  return (v1000);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.lrot AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1001) {{
  (__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP((v1001)));
  if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP((v1001))))==(((i64)2)))) {
    if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP((((v1001))->rhs))))<(((i64)0)))) {
      ((((v1001))->rhs)=(__ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP((((v1001))->rhs))));
    }
    return (__ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP((v1001)));
  }
 else if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP((v1001))))==((-(((i64)2)))))) {
    if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP((((v1001))->lhs))))>(((i64)0)))) {
      ((((v1001))->lhs)=(__ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP((((v1001))->lhs))));
    }
    return (__ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP((v1001)));
  }
  return (v1001);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.balance AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R(__ZH_TYPE_AVLNode_lessi64_greater* v1002, i64* v1003) {{
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP((v1002)))) {
    return (__ZH_LOP_new_AVLNode_lessi64_greater((__ZH_LOP_AVLNode_lessi64_greater_i64R(&(*v1003)))));
  }
 else if ((((*v1003))<((((v1002))->val)))) {
    __ZH_TYPE_AVLNode_lessi64_greater* v1004;
    ((v1004)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R((((v1002))->lhs), &(*v1003))));
    ((((v1002))->lhs)=(v1004));
    ((((v1004))->par)=(v1002));
  }
 else if ((((((v1002))->val))<((*v1003)))) {
    __ZH_TYPE_AVLNode_lessi64_greater* v1005;
    ((v1005)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R((((v1002))->rhs), &(*v1003))));
    ((((v1002))->rhs)=(v1005));
    ((((v1005))->par)=(v1002));
  }
  ((v1002)=(__ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP((v1002))));
  ((((v1002))->par)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  return (v1002);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.insert AVLNode<i64>P slf i64R val\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R(__ZH_TYPE_AVLNode_lessi64_greater* v1006, i64* v1007) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v1008;
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP((v1006)))) {
    return ((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0));
  }
  ((v1008)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  if ((((*v1007))<((((v1006))->val)))) {
    ((v1008)=(__ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R((((v1006))->lhs), &(*v1007))));
  }
 else if ((((((v1006))->val))<((*v1007)))) {
    ((v1008)=(__ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R((((v1006))->rhs), &(*v1007))));
  } else {
    return (v1006);
  }
  return (v1008);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.sub AVLNode<i64>P slf i64R val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR(__ZH_TYPE_AVLNode_lessi64_greater* v1009, __ZH_TYPE_Str* v1010){
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((v1009)))) {
    __ZH_TYPE_Str v1012;
    __ZH_TYPE_Str v1011;
    ((printf("%lld\n", (((v1009))->val))), (__ZH_LOP_put_StrR(&(*v1010))), (printf("%s", ((str)"|--"))));
    (((v1011)=(__ZH_LOP_Str_StrR(&(*v1010)))), (__ZH_BOP__plus_equal_StrRstr(&(v1011), ((str)"|  "))));
    (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR((((v1009))->lhs), &(v1011)));
    ((__ZH_LOP_put_StrR(&(*v1010))), (printf("%s", ((str)"'--"))));
    (((v1012)=(__ZH_LOP_Str_StrR(&(*v1010)))), (__ZH_BOP__plus_equal_StrRstr(&(v1012), ((str)"   "))));
    (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR((((v1009))->rhs), &(v1012)));
    (__ZH_BOP__dotcall_dotdtor_StrP((&(v1011))));
    (__ZH_BOP__dotcall_dotdtor_StrP((&(v1012))));
  } else {
    (__ZH_LOP__less_Out((__ZH_ROP__less_str(((str)"null")))));
  }
}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_LOP_AVLIter_lessi64_greater_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1014) {{
  __ZH_TYPE_AVLIter_lessi64_greater v1015;
  (((&(v1015))->next)=(v1014));
  return (v1015);
};printf("%s", "reached function end without returning anything lop AVLIter<i64> AVLIter<i64> AVLNode<i64>P root\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_AVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1016) {{
  return &((((&(v1016))->next))->val);
};printf("%s", "reached function end without returning anything lop i64R * AVLIter<i64> it\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP__plus_plus_AVLIter_lessi64_greaterR(__ZH_TYPE_AVLIter_lessi64_greater* v1017) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v1018;
  ((v1018)=((&(*v1017))->next));
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(((((&(*v1017))->next))->rhs)))) {
    (((&(*v1017))->next)=((((&(*v1017))->next))->rhs));
    while ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(((((&(*v1017))->next))->lhs)))) {
      (((&(*v1017))->next)=((((&(*v1017))->next))->lhs));
    }
    return (v1018);
  }
  while (((bool)1)) {
    if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP(((((&(*v1017))->next))->par)))) {
      (((&(*v1017))->next)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
      return (v1018);
    }
    if (((((i64)((((((&(*v1017))->next))->par))->lhs)))==(((i64)((&(*v1017))->next))))) {
      (((&(*v1017))->next)=((((&(*v1017))->next))->par));
      return (v1018);
    }
    (((&(*v1017))->next)=((((&(*v1017))->next))->par));
  }
};printf("%s", "reached function end without returning anything lop AVLNode<i64>P ++ AVLIter<i64>R slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_equal_AVLIter_lessi64_greaterAVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1019, __ZH_TYPE_AVLIter_lessi64_greater v1020) {{
  return ((((i64)((&(v1019))->next)))!=(((i64)((&(v1020))->next))));
};printf("%s", "reached function end without returning anything op bool != AVLIter<i64> a AVLIter<i64> b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_AVLIterRange_lessi64_greaterP(__ZH_TYPE_AVLIterRange_lessi64_greater* v1024) {{
  return (((v1024))->begin);
};printf("%s", "reached function end without returning anything op AVLIter<i64> .call.begin AVLIterRange<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotend_AVLIterRange_lessi64_greaterP(__ZH_TYPE_AVLIterRange_lessi64_greater* v1025) {{
  return (((v1025))->end);
};printf("%s", "reached function end without returning anything op AVLIter<i64> .call.end AVLIterRange<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIterRange_lessi64_greater __ZH_LOP_AVLIterRange_lessi64_greater_AVLIter_lessi64_greaterAVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1026, __ZH_TYPE_AVLIter_lessi64_greater v1027) {{
  __ZH_TYPE_AVLIterRange_lessi64_greater v1028;
  (((&(v1028))->begin)=(v1026));
  (((&(v1028))->end)=(v1027));
  return (v1028);
};printf("%s", "reached function end without returning anything lop AVLIterRange<i64> AVLIterRange<i64> AVLIter<i64> begin AVLIter<i64> end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLTree_lessi64_greater __ZH_LOP_AVLTree_lessi64_greater_() {{
  __ZH_TYPE_AVLTree_lessi64_greater v1013;
  (((&(v1013))->root)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  return (v1013);
};printf("%s", "reached function end without returning anything lop AVLTree<i64> AVLTree<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1021) {{
  __ZH_TYPE_AVLIter_lessi64_greater v1022;
  ((v1022)=(__ZH_LOP_AVLIter_lessi64_greater_AVLNode_lessi64_greaterP((((v1021))->root))));
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP(((&(v1022))->next)))) {
    return (v1022);
  }
  while ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(((((&(v1022))->next))->lhs)))) {
    (((&(v1022))->next)=((((&(v1022))->next))->lhs));
  }
  return (v1022);
};printf("%s", "reached function end without returning anything op AVLIter<i64> .call.begin AVLTree<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotend_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1023) {{
  return (__ZH_LOP_AVLIter_lessi64_greater_AVLNode_lessi64_greaterP(((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0))));
};printf("%s", "reached function end without returning anything op AVLIter<i64> .call.end AVLTree<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIterRange_lessi64_greater __ZH_LOP_iter_AVLTree_lessi64_greaterR(__ZH_TYPE_AVLTree_lessi64_greater* v1029) {{
  __ZH_TYPE_AVLIterRange_lessi64_greater v1030;
  (((&(v1030))->begin)=(__ZH_BOP__dotcall_dotbegin_AVLTree_lessi64_greaterP((&(*v1029)))));
  (((&(v1030))->end)=(__ZH_BOP__dotcall_dotend_AVLTree_lessi64_greaterP((&(*v1029)))));
  return (v1030);
};printf("%s", "reached function end without returning anything lop AVLIterRange<i64> iter AVLTree<i64>R slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotinsert_AVLTree_lessi64_greaterPi64(__ZH_TYPE_AVLTree_lessi64_greater* v1031, i64 v1032){
  ((((v1031))->root)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R((((v1031))->root), &(v1032))));
}
i64* __ZH_BOP__dotcall_dotsub_AVLTree_lessi64_greaterPi64(__ZH_TYPE_AVLTree_lessi64_greater* v1033, i64 v1034) {{
  return &((&(*(__ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R((((v1033))->root), &(v1034)))))->val);
};printf("%s", "reached function end without returning anything op i64R .call.sub AVLTree<i64>P slf i64 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(__ZH_TYPE_AVLTree_lessi64_greater* v1035, i64 v1036){
  (((&(*v1035))->root)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R(((&(*v1035))->root), &(v1036))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1037) {{
  __ZH_TYPE_Vec_lessi64_greater v1038;
  ((v1038)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      __ZH_TYPE_AVLIter_lessi64_greater v1041;
      __ZH_TYPE_AVLIter_lessi64_greater v1040;
      __ZH_TYPE_AVLIterRange_lessi64_greater v1039;
      ((v1039)=(__ZH_LOP_iter_AVLTree_lessi64_greaterR(&(*(v1037)))));
      ((v1040)=(__ZH_BOP__dotcall_dotend_AVLIterRange_lessi64_greaterP((&(v1039)))));
      ((v1041)=(__ZH_BOP__dotcall_dotbegin_AVLIterRange_lessi64_greaterP((&(v1039)))));
      while ((__ZH_BOP__exclamation_equal_AVLIter_lessi64_greaterAVLIter_lessi64_greater((v1041), (v1040)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v1038), (*__ZH_LOP__asterisk_AVLIter_lessi64_greater((v1041)))));
        (__ZH_LOP__plus_plus_AVLIter_lessi64_greaterR(&(v1041)));
      }
    }
  return (v1038);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1038))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.call AVLTree<i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1042){
  __ZH_TYPE_Str v1044;
  (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR((((v1042))->root), &(*(((v1044)=(__ZH_LOP_Str_())), (&(v1044))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1044))));
}
