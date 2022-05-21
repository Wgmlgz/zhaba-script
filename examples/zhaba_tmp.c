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
struct __PROT_ZH_TYPE_Str;
typedef struct __PROT_ZH_TYPE_Str __ZH_TYPE_Str;
struct __PROT_ZH_TYPE_VecIterRange_lesschar_greater;
typedef struct __PROT_ZH_TYPE_VecIterRange_lesschar_greater __ZH_TYPE_VecIterRange_lesschar_greater;
struct __PROT_ZH_TYPE_V2;
typedef struct __PROT_ZH_TYPE_V2 __ZH_TYPE_V2;
struct __PROT_ZH_TYPE_Rng;
typedef struct __PROT_ZH_TYPE_Rng __ZH_TYPE_Rng;
struct __PROT_ZH_TYPE_AVLTree_lessi64_greater;
typedef struct __PROT_ZH_TYPE_AVLTree_lessi64_greater __ZH_TYPE_AVLTree_lessi64_greater;
struct __PROT_ZH_TYPE_AVLNode_lessi64_greater;
typedef struct __PROT_ZH_TYPE_AVLNode_lessi64_greater __ZH_TYPE_AVLNode_lessi64_greater;
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
  i8 begin;
  i8 end;
};
struct __PROT_ZH_TYPE_Range_lessi16_greater {
  i16 begin;
  i16 end;
};
struct __PROT_ZH_TYPE_Range_lessi32_greater {
  i32 begin;
  i32 end;
};
struct __PROT_ZH_TYPE_Range_lessi64_greater {
  i64 begin;
  i64 end;
};
struct __PROT_ZH_TYPE_Range_lesschar_greater {
  char begin;
  char end;
};
struct __PROT_ZH_TYPE_Vec_lessi64_greater {
  i64 cap;
  i64* head;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lessi64_greater {
  i64* ptr;
};
struct __PROT_ZH_TYPE_VecIterRange_lessi64_greater {
  __ZH_TYPE_VecIter_lessi64_greater begin;
  __ZH_TYPE_VecIter_lessi64_greater end;
};
struct __PROT_ZH_TYPE_Vec_lesschar_greater {
  i64 cap;
  char* head;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lesschar_greater {
  char* ptr;
};
struct __PROT_ZH_TYPE_Str {
  __ZH_TYPE_Vec_lesschar_greater data;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIterRange_lesschar_greater {
  __ZH_TYPE_VecIter_lesschar_greater begin;
  __ZH_TYPE_VecIter_lesschar_greater end;
};
struct __PROT_ZH_TYPE_V2 {
  f64 x;
  f64 y;
};
struct __PROT_ZH_TYPE_Rng {
  i64 seed;
};
struct __PROT_ZH_TYPE_AVLTree_lessi64_greater {
  __ZH_TYPE_AVLNode_lessi64_greater* root;
};
struct __PROT_ZH_TYPE_AVLNode_lessi64_greater {
  i64 h;
  __ZH_TYPE_AVLNode_lessi64_greater* lhs;
  __ZH_TYPE_AVLNode_lessi64_greater* par;
  __ZH_TYPE_AVLNode_lessi64_greater* rhs;
  i64 val;
};
struct __PROT_ZH_TYPE_AVLIter_lessi64_greater {
  __ZH_TYPE_AVLNode_lessi64_greater* next;
};
struct __PROT_ZH_TYPE_AVLIterRange_lessi64_greater {
  __ZH_TYPE_AVLIter_lessi64_greater begin;
  __ZH_TYPE_AVLIter_lessi64_greater end;
};
i8 __ZH_LOP_i8_();
i16 __ZH_LOP_i16_();
i32 __ZH_LOP_i32_();
i64 __ZH_LOP_i64_();
u8 __ZH_LOP_u8_();
u16 __ZH_LOP_u16_();
u32 __ZH_LOP_u32_();
u64 __ZH_LOP_u64_();
bool __ZH_LOP_bool_();
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
bool __ZH_BOP__less_boolbool(bool v364, bool v365);
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v366, i64 v367);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v370, __ZH_TYPE_Out v371);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v372);
__ZH_TYPE_Out __ZH_ROP__less_str(str v373);
__ZH_TYPE_Out __ZH_LOP__less_str(str v374);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v375, str v376);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v377);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v378, str* v379);
__ZH_TYPE_Out __ZH_ROP__less_char(char v380);
__ZH_TYPE_Out __ZH_LOP__less_char(char v381);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v382, char v383);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v384);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v385, char* v386);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v387);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v388);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v389, i8 v390);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v391);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v392, i8* v393);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v394);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v395);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v396, i16 v397);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v398);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v399, i16* v400);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v401);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v402);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v403, i32 v404);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v405);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v406, i32* v407);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v408);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v409);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v410, i64 v411);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v412);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v413, i64* v414);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v415);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v416);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v417, u8 v418);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v419);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v420, u8* v421);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v422);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v423);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v424, u16 v425);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v426);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v427, u16* v428);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v429);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v430);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v431, u32 v432);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v433);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v434, u32* v435);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v436);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v437);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v438, u64 v439);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v440);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v441, u64* v442);
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v443);
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v444);
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v445, f32 v446);
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v447);
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v448, f32* v449);
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v450);
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v451);
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v452, f64 v453);
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v454);
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v455, f64* v456);
void __ZH_LOP_rangeMaker_();
i8 __ZH_BOP__dotcall_dotbegin_Range_lessi8_greaterP(__ZH_TYPE_Range_lessi8_greater* v457);
i8 __ZH_BOP__dotcall_dotend_Range_lessi8_greaterP(__ZH_TYPE_Range_lessi8_greater* v458);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP_Range_lessi8_greater_i8i8(i8 v459, i8 v460);
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_i8i8(i8 v462, i8 v463);
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_minus_i8i8(i8 v464, i8 v465);
__ZH_TYPE_Range_lessi8_greater __ZH_ROP__dot_dot_i8(i8 v466);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_i8(i8 v467);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_minus_i8(i8 v470);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__minus_Range_lessi8_greater(__ZH_TYPE_Range_lessi8_greater v473);
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_equal_i8i8(i8 v474, i8 v475);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_equal_i8(i8 v478);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_equal_minus_i8(i8 v483);
bool __ZH_BOP__equal_equal_i8Range_lessi8_greater(i8 v488, __ZH_TYPE_Range_lessi8_greater v489);
__ZH_TYPE_Range_lessi8_greater __ZH_LOP_iter_Range_lessi8_greater(__ZH_TYPE_Range_lessi8_greater v490);
i16 __ZH_BOP__dotcall_dotbegin_Range_lessi16_greaterP(__ZH_TYPE_Range_lessi16_greater* v492);
i16 __ZH_BOP__dotcall_dotend_Range_lessi16_greaterP(__ZH_TYPE_Range_lessi16_greater* v493);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP_Range_lessi16_greater_i16i16(i16 v494, i16 v495);
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_i16i16(i16 v497, i16 v498);
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_minus_i16i16(i16 v499, i16 v500);
__ZH_TYPE_Range_lessi16_greater __ZH_ROP__dot_dot_i16(i16 v501);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_i16(i16 v502);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_minus_i16(i16 v505);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__minus_Range_lessi16_greater(__ZH_TYPE_Range_lessi16_greater v508);
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_equal_i16i16(i16 v509, i16 v510);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_equal_i16(i16 v513);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_equal_minus_i16(i16 v518);
bool __ZH_BOP__equal_equal_i16Range_lessi16_greater(i16 v523, __ZH_TYPE_Range_lessi16_greater v524);
__ZH_TYPE_Range_lessi16_greater __ZH_LOP_iter_Range_lessi16_greater(__ZH_TYPE_Range_lessi16_greater v525);
i32 __ZH_BOP__dotcall_dotbegin_Range_lessi32_greaterP(__ZH_TYPE_Range_lessi32_greater* v527);
i32 __ZH_BOP__dotcall_dotend_Range_lessi32_greaterP(__ZH_TYPE_Range_lessi32_greater* v528);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP_Range_lessi32_greater_i32i32(i32 v529, i32 v530);
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_i32i32(i32 v532, i32 v533);
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_minus_i32i32(i32 v534, i32 v535);
__ZH_TYPE_Range_lessi32_greater __ZH_ROP__dot_dot_i32(i32 v536);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_i32(i32 v537);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_minus_i32(i32 v540);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__minus_Range_lessi32_greater(__ZH_TYPE_Range_lessi32_greater v543);
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_equal_i32i32(i32 v544, i32 v545);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_equal_i32(i32 v548);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_equal_minus_i32(i32 v553);
bool __ZH_BOP__equal_equal_i32Range_lessi32_greater(i32 v558, __ZH_TYPE_Range_lessi32_greater v559);
__ZH_TYPE_Range_lessi32_greater __ZH_LOP_iter_Range_lessi32_greater(__ZH_TYPE_Range_lessi32_greater v560);
i64 __ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP(__ZH_TYPE_Range_lessi64_greater* v562);
i64 __ZH_BOP__dotcall_dotend_Range_lessi64_greaterP(__ZH_TYPE_Range_lessi64_greater* v563);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP_Range_lessi64_greater_i64i64(i64 v564, i64 v565);
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_i64i64(i64 v567, i64 v568);
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_minus_i64i64(i64 v569, i64 v570);
__ZH_TYPE_Range_lessi64_greater __ZH_ROP__dot_dot_i64(i64 v571);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_i64(i64 v572);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_minus_i64(i64 v575);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__minus_Range_lessi64_greater(__ZH_TYPE_Range_lessi64_greater v578);
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_equal_i64i64(i64 v579, i64 v580);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_equal_i64(i64 v583);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_equal_minus_i64(i64 v588);
bool __ZH_BOP__equal_equal_i64Range_lessi64_greater(i64 v593, __ZH_TYPE_Range_lessi64_greater v594);
__ZH_TYPE_Range_lessi64_greater __ZH_LOP_iter_Range_lessi64_greater(__ZH_TYPE_Range_lessi64_greater v595);
char __ZH_BOP__dotcall_dotbegin_Range_lesschar_greaterP(__ZH_TYPE_Range_lesschar_greater* v597);
char __ZH_BOP__dotcall_dotend_Range_lesschar_greaterP(__ZH_TYPE_Range_lesschar_greater* v598);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP_Range_lesschar_greater_charchar(char v599, char v600);
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_charchar(char v602, char v603);
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_minus_charchar(char v604, char v605);
__ZH_TYPE_Range_lesschar_greater __ZH_ROP__dot_dot_char(char v606);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_char(char v607);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_minus_char(char v610);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__minus_Range_lesschar_greater(__ZH_TYPE_Range_lesschar_greater v613);
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_equal_charchar(char v614, char v615);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_equal_char(char v618);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_equal_minus_char(char v623);
bool __ZH_BOP__equal_equal_charRange_lesschar_greater(char v628, __ZH_TYPE_Range_lesschar_greater v629);
__ZH_TYPE_Range_lesschar_greater __ZH_LOP_iter_Range_lesschar_greater(__ZH_TYPE_Range_lesschar_greater v630);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v653);
void __ZH_LOP__plus_plus_VecIter_lessi64_greaterR(__ZH_TYPE_VecIter_lessi64_greater* v655);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__plus_VecIter_lessi64_greateri64(__ZH_TYPE_VecIter_lessi64_greater v656, i64 v657);
bool __ZH_BOP__exclamation_equal_VecIter_lessi64_greaterVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v658, __ZH_TYPE_VecIter_lessi64_greater v659);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v660);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_VecIterRange_lessi64_greaterP(__ZH_TYPE_VecIterRange_lessi64_greater* v663);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_VecIterRange_lessi64_greaterP(__ZH_TYPE_VecIterRange_lessi64_greater* v664);
__ZH_TYPE_VecIterRange_lessi64_greater __ZH_LOP_VecIterRange_lessi64_greater_VecIter_lessi64_greaterVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v665, __ZH_TYPE_VecIter_lessi64_greater v666);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v632, i64 v633);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v634, i64 v635);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v636);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v640);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v644);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v650, i64 v651);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v652);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v661);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v662);
__ZH_TYPE_VecIterRange_lessi64_greater __ZH_LOP_iter_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v668);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v670);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v671);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v672);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v673);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v678, i64 v679);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v684);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v689, i64 v690);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v691, __ZH_TYPE_Vec_lessi64_greater* v692);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v696, i64 v697);
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v699, i64 v700);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v701);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v702);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v703);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v704);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v705, __ZH_TYPE_Vec_lessi64_greater* v706);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v707, i64 v708);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64(__ZH_TYPE_Vec_lessi64_greater* v709, i64 v710, i64 v711);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPRange_lessi64_greater(__ZH_TYPE_Vec_lessi64_greater* v716, __ZH_TYPE_Range_lessi64_greater v717);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v720);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v721, __ZH_TYPE_Vec_lessi64_greater* v722);
void __ZH_LOP_swap_i64Pi64P(i64* v726, i64* v727);
i64* __ZH_LOP_partition_i64Pi64P(i64* v729, i64* v730);
void __ZH_LOP_qsort_i64Pi64P(i64* v734, i64* v735);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v739);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v744);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v745, i64(*v746)(i64*));
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v751, bool(*v752)(i64*));
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v757, i64 v758);
char __ZH_BOP__dotcall_dotsub_strPi64(str* v763, i64 v764);
str __ZH_LOP_str_();
bool __ZH_BOP__equal_equal_charstr(char v766, str v767);
char __ZH_LOP_chr_str(str v768);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v790);
void __ZH_LOP__plus_plus_VecIter_lesschar_greaterR(__ZH_TYPE_VecIter_lesschar_greater* v792);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__plus_VecIter_lesschar_greateri64(__ZH_TYPE_VecIter_lesschar_greater v793, i64 v794);
bool __ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v795, __ZH_TYPE_VecIter_lesschar_greater v796);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v797);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP(__ZH_TYPE_VecIterRange_lesschar_greater* v800);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP(__ZH_TYPE_VecIterRange_lesschar_greater* v801);
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_VecIterRange_lesschar_greater_VecIter_lesschar_greaterVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v802, __ZH_TYPE_VecIter_lesschar_greater v803);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v769, i64 v770);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v771, i64 v772);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v773);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v777);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v781);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar(__ZH_TYPE_Vec_lesschar_greater* v787, char v788);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v789);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v798);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v799);
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v805);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v807);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v808);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v809);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v810);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v815, char v816);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v821);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v826, char v827);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v828, __ZH_TYPE_Vec_lesschar_greater* v829);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v833, char v834);
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v836, char v837);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v838);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v839);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v840);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v841);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v842, __ZH_TYPE_Vec_lesschar_greater* v843);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v844, i64 v845);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64(__ZH_TYPE_Vec_lesschar_greater* v846, i64 v847, i64 v848);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPRange_lessi64_greater(__ZH_TYPE_Vec_lesschar_greater* v853, __ZH_TYPE_Range_lessi64_greater v854);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v857);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v858, __ZH_TYPE_Vec_lesschar_greater* v859);
void __ZH_LOP_swap_charPcharP(char* v863, char* v864);
char* __ZH_LOP_partition_charPcharP(char* v866, char* v867);
void __ZH_LOP_qsort_charPcharP(char* v871, char* v872);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v876);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v881);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotmap_Vec_lesschar_greaterPF_lesschar_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v882, char(*v883)(char*));
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotfilter_Vec_lesschar_greaterPF_lessbool_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v888, bool(*v889)(char*));
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP(__ZH_TYPE_Str* v895);
str __ZH_BOP__dotcall_dotcstr_StrP(__ZH_TYPE_Str* v896);
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_StrR(__ZH_TYPE_Str* v898);
char* __ZH_BOP__dotcall_dotat_StrPi64(__ZH_TYPE_Str* v899, i64 v900);
char* __ZH_BOP__dotcall_dotsub_StrPi64(__ZH_TYPE_Str* v901, i64 v902);
char* __ZH_BOP__dotcall_dotatP_StrPi64(__ZH_TYPE_Str* v903, i64 v904);
void __ZH_BOP__dotcall_dotpush_back_StrPchar(__ZH_TYPE_Str* v905, char v906);
void __ZH_BOP__dotcall_dotpop_back_StrP(__ZH_TYPE_Str* v907);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v908);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v910);
i64 __ZH_LOP_len_str(str v912);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v914);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v915);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v916, char v917);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v918, __ZH_TYPE_Str* v919);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v924, str v925);
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v930, __ZH_TYPE_Str* v931);
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v933, str v934);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v939);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v940);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v941, __ZH_TYPE_Str* v942);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v943, __ZH_TYPE_Str* v944);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v948, i64 v949);
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v955);
void __ZH_LOP_up_StrR(__ZH_TYPE_Str* v956);
void __ZH_LOP_low_StrR(__ZH_TYPE_Str* v960);
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_str(str v964);
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v967);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v972, f64 v973);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v975, __ZH_TYPE_V2 v976);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v977, __ZH_TYPE_V2 v978);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v980);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v981);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v982);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v983);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v984);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v985, __ZH_TYPE_V2 v986);
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v987);
__ZH_TYPE_Rng __ZH_LOP_Rng_();
i64 __ZH_BOP__dotcall_dotcall_RngP(__ZH_TYPE_Rng* v989);
int main(int argc, char *argv[]) ;
__ZH_TYPE_AVLNode_lessi64_greater __ZH_LOP_AVLNode_lessi64_greater_i64R(i64* v990);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP_new_AVLNode_lessi64_greater(__ZH_TYPE_AVLNode_lessi64_greater v992);
bool __ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v994);
bool __ZH_LOP__exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v995);
i64 __ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v996);
i64 __ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v997);
void __ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v998);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v999);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1001);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1003);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R(__ZH_TYPE_AVLNode_lessi64_greater* v1004, i64* v1005);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R(__ZH_TYPE_AVLNode_lessi64_greater* v1008, i64* v1009);
void __ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR(__ZH_TYPE_AVLNode_lessi64_greater* v1011, __ZH_TYPE_Str* v1012);
__ZH_TYPE_AVLIter_lessi64_greater __ZH_LOP_AVLIter_lessi64_greater_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1016);
i64* __ZH_LOP__asterisk_AVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1018);
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP__plus_plus_AVLIter_lessi64_greaterR(__ZH_TYPE_AVLIter_lessi64_greater* v1019);
bool __ZH_BOP__exclamation_equal_AVLIter_lessi64_greaterAVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1021, __ZH_TYPE_AVLIter_lessi64_greater v1022);
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_AVLIterRange_lessi64_greaterP(__ZH_TYPE_AVLIterRange_lessi64_greater* v1026);
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotend_AVLIterRange_lessi64_greaterP(__ZH_TYPE_AVLIterRange_lessi64_greater* v1027);
__ZH_TYPE_AVLIterRange_lessi64_greater __ZH_LOP_AVLIterRange_lessi64_greater_AVLIter_lessi64_greaterAVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1028, __ZH_TYPE_AVLIter_lessi64_greater v1029);
__ZH_TYPE_AVLTree_lessi64_greater __ZH_LOP_AVLTree_lessi64_greater_();
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1023);
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotend_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1025);
__ZH_TYPE_AVLIterRange_lessi64_greater __ZH_LOP_iter_AVLTree_lessi64_greaterR(__ZH_TYPE_AVLTree_lessi64_greater* v1031);
void __ZH_BOP__dotcall_dotinsert_AVLTree_lessi64_greaterPi64(__ZH_TYPE_AVLTree_lessi64_greater* v1033, i64 v1034);
i64* __ZH_BOP__dotcall_dotsub_AVLTree_lessi64_greaterPi64(__ZH_TYPE_AVLTree_lessi64_greater* v1035, i64 v1036);
void __ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(__ZH_TYPE_AVLTree_lessi64_greater* v1037, i64 v1038);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1039);
void __ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1044);

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
bool __ZH_LOP_bool_() {{
  return ((bool)0);
};printf("%s", "reached function end without returning anything lop bool bool\n"); exit(EXIT_FAILURE);}
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
bool __ZH_BOP__less_boolbool(bool v364, bool v365) {{
  return (((!((v364))))&&((v365)));
};printf("%s", "reached function end without returning anything op bool < bool a bool b\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v366, i64 v367) {{
  i64 v368;
  ((v368)=((i64)1));
  while ((((v367))!=(((i64)0)))) {
    if ((__ZH_BOP__exclamation_percent_i64i64((v367), ((i64)2)))) {
      (__ZH_BOP__asterisk_equal_i64Ri64(&(v368), (v366)));
    }
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v366), (v366)));
    (__ZH_BOP__slash_equal_i64Ri64(&(v367), ((i64)2)));
  }
  return (v368);
};printf("%s", "reached function end without returning anything op i64 ** i64 a i64 n\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP_Out_() {{
  __ZH_TYPE_Out v369;
  return (v369);
};printf("%s", "reached function end without returning anything lop Out Out\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v370, __ZH_TYPE_Out v371) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out a Out b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v372) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Out o\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_str(str v373) {{
  (printf("%s\n", (v373)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_str(str v374) {{
  ((printf("%s", (v374))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v375, str v376) {{
  ((printf("%s", (v376))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v377) {{
  ((*v377)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v378, str* v379) {{
  ((*v379)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_char(char v380) {{
  (printf("%c\n", (v380)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_char(char v381) {{
  ((printf("%c", (v381))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v382, char v383) {{
  ((printf("%c", (v383))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v384) {{
  ((*v384)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v385, char* v386) {{
  ((*v386)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v387) {{
  (printf("%d\n", (v387)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v388) {{
  ((printf("%d", (v388))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v389, i8 v390) {{
  ((printf("%d", (v390))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v391) {{
  ((*v391)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v392, i8* v393) {{
  ((*v393)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v394) {{
  (printf("%hd\n", (v394)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v395) {{
  ((printf("%hd", (v395))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v396, i16 v397) {{
  ((printf("%hd", (v397))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v398) {{
  ((*v398)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v399, i16* v400) {{
  ((*v400)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v401) {{
  (printf("%d\n", (v401)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v402) {{
  ((printf("%d", (v402))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v403, i32 v404) {{
  ((printf("%d", (v404))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v405) {{
  ((*v405)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v406, i32* v407) {{
  ((*v407)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v408) {{
  (printf("%lld\n", (v408)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v409) {{
  ((printf("%lld", (v409))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v410, i64 v411) {{
  ((printf("%lld", (v411))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v412) {{
  ((*v412)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v413, i64* v414) {{
  ((*v414)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v415) {{
  (printf("%d\n", (v415)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v416) {{
  ((printf("%d", (v416))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v417, u8 v418) {{
  ((printf("%d", (v418))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v419) {{
  ((*v419)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v420, u8* v421) {{
  ((*v421)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v422) {{
  (printf("%hd\n", (v422)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v423) {{
  ((printf("%hd", (v423))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v424, u16 v425) {{
  ((printf("%hd", (v425))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v426) {{
  ((*v426)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v427, u16* v428) {{
  ((*v428)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v429) {{
  (printf("%u\n", (v429)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v430) {{
  ((printf("%u", (v430))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v431, u32 v432) {{
  ((printf("%u", (v432))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v433) {{
  ((*v433)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v434, u32* v435) {{
  ((*v435)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v436) {{
  (printf("%llu\n", (v436)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v437) {{
  ((printf("%llu", (v437))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v438, u64 v439) {{
  ((printf("%llu", (v439))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v440) {{
  ((*v440)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v441, u64* v442) {{
  ((*v442)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v443) {{
  (printf("%f\n", (v443)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v444) {{
  ((printf("%f", (v444))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v445, f32 v446) {{
  ((printf("%f", (v446))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v447) {{
  ((*v447)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v448, f32* v449) {{
  ((*v449)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v450) {{
  (printf("%f\n", (v450)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v451) {{
  ((printf("%f", (v451))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v452, f64 v453) {{
  ((printf("%f", (v453))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v454) {{
  ((*v454)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v455, f64* v456) {{
  ((*v456)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f64R i\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_rangeMaker_(){
  __ZH_TYPE_Range_lesschar_greater v631;
  __ZH_TYPE_Range_lessi32_greater v561;
  __ZH_TYPE_Range_lessi16_greater v526;
  __ZH_TYPE_Range_lessi64_greater v596;
  __ZH_TYPE_Range_lessi8_greater v491;
}
i8 __ZH_BOP__dotcall_dotbegin_Range_lessi8_greaterP(__ZH_TYPE_Range_lessi8_greater* v457) {{
  return (((v457))->begin);
};printf("%s", "reached function end without returning anything op i8 .call.begin Range<i8>P slf\n"); exit(EXIT_FAILURE);}
i8 __ZH_BOP__dotcall_dotend_Range_lessi8_greaterP(__ZH_TYPE_Range_lessi8_greater* v458) {{
  return (((v458))->end);
};printf("%s", "reached function end without returning anything op i8 .call.end Range<i8>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP_Range_lessi8_greater_i8i8(i8 v459, i8 v460) {{
  __ZH_TYPE_Range_lessi8_greater v461;
  (((&(v461))->begin)=(v459));
  (((&(v461))->end)=(v460));
  return (v461);
};printf("%s", "reached function end without returning anything lop Range<i8> Range<i8> i8 begin i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_i8i8(i8 v462, i8 v463) {{
  return (__ZH_LOP_Range_lessi8_greater_i8i8((v462), (v463)));
};printf("%s", "reached function end without returning anything op Range<i8> .. i8 begin i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_minus_i8i8(i8 v464, i8 v465) {{
  return (__ZH_BOP__dot_dot_i8i8((v464), (-((v465)))));
};printf("%s", "reached function end without returning anything op Range<i8> ..- i8 begin i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_ROP__dot_dot_i8(i8 v466) {{
  return (__ZH_BOP__dot_dot_i8i8((v466), (~((__ZH_LOP_i8_())))));
};printf("%s", "reached function end without returning anything rop Range<i8> .. i8 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_i8(i8 v467) {{
  i8 v469;
  return (__ZH_BOP__dot_dot_i8i8((*__ZH_LOP__plus_plus_i8R(&(*(((v469)=(~((__ZH_LOP_i8_())))), (&(v469)))))), (v467)));
};printf("%s", "reached function end without returning anything lop Range<i8> .. i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_minus_i8(i8 v470) {{
  i8 v472;
  return (__ZH_BOP__dot_dot_i8i8((*__ZH_LOP__plus_plus_i8R(&(*(((v472)=(~((__ZH_LOP_i8_())))), (&(v472)))))), (-((v470)))));
};printf("%s", "reached function end without returning anything lop Range<i8> ..- i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__minus_Range_lessi8_greater(__ZH_TYPE_Range_lessi8_greater v473) {{
  return (__ZH_BOP__dot_dot_i8i8((-(((&(v473))->begin))), ((&(v473))->end)));
};printf("%s", "reached function end without returning anything lop Range<i8> - Range<i8> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_BOP__dot_dot_equal_i8i8(i8 v474, i8 v475) {{
  i8 v477;
  return (__ZH_BOP__dot_dot_i8i8((v474), (((v475))+((*__ZH_LOP__plus_plus_i8R(&(*(((v477)=(__ZH_LOP_i8_())), (&(v477))))))))));
};printf("%s", "reached function end without returning anything op Range<i8> ..= i8 begin i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_equal_i8(i8 v478) {{
  i8 v482;
  i8 v480;
  return (__ZH_BOP__dot_dot_i8i8((*__ZH_LOP__plus_plus_i8R(&(*(((v480)=(~((__ZH_LOP_i8_())))), (&(v480)))))), (((v478))+((*__ZH_LOP__plus_plus_i8R(&(*(((v482)=(~((__ZH_LOP_i8_())))), (&(v482))))))))));
};printf("%s", "reached function end without returning anything lop Range<i8> ..= i8 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP__dot_dot_equal_minus_i8(i8 v483) {{
  i8 v487;
  i8 v485;
  return (__ZH_BOP__dot_dot_i8i8((*__ZH_LOP__plus_plus_i8R(&(*(((v485)=(~((__ZH_LOP_i8_())))), (&(v485)))))), (((-((v483))))+((*__ZH_LOP__plus_plus_i8R(&(*(((v487)=(~((__ZH_LOP_i8_())))), (&(v487))))))))));
};printf("%s", "reached function end without returning anything lop Range<i8> ..=- i8 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i8Range_lessi8_greater(i8 v488, __ZH_TYPE_Range_lessi8_greater v489) {{
  if (((((&(v489))->begin))<(((&(v489))->end)))) {
    return ((((((&(v489))->begin))<=((v488))))&&((((v488))<(((&(v489))->end)))));
  } else {
    return ((((((&(v489))->end))<=((v488))))&&((((v488))<(((&(v489))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i8 i Range<i8> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi8_greater __ZH_LOP_iter_Range_lessi8_greater(__ZH_TYPE_Range_lessi8_greater v490) {{
  return (v490);
};printf("%s", "reached function end without returning anything lop Range<i8> iter Range<i8> r\n"); exit(EXIT_FAILURE);}
i16 __ZH_BOP__dotcall_dotbegin_Range_lessi16_greaterP(__ZH_TYPE_Range_lessi16_greater* v492) {{
  return (((v492))->begin);
};printf("%s", "reached function end without returning anything op i16 .call.begin Range<i16>P slf\n"); exit(EXIT_FAILURE);}
i16 __ZH_BOP__dotcall_dotend_Range_lessi16_greaterP(__ZH_TYPE_Range_lessi16_greater* v493) {{
  return (((v493))->end);
};printf("%s", "reached function end without returning anything op i16 .call.end Range<i16>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP_Range_lessi16_greater_i16i16(i16 v494, i16 v495) {{
  __ZH_TYPE_Range_lessi16_greater v496;
  (((&(v496))->begin)=(v494));
  (((&(v496))->end)=(v495));
  return (v496);
};printf("%s", "reached function end without returning anything lop Range<i16> Range<i16> i16 begin i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_i16i16(i16 v497, i16 v498) {{
  return (__ZH_LOP_Range_lessi16_greater_i16i16((v497), (v498)));
};printf("%s", "reached function end without returning anything op Range<i16> .. i16 begin i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_minus_i16i16(i16 v499, i16 v500) {{
  return (__ZH_BOP__dot_dot_i16i16((v499), (-((v500)))));
};printf("%s", "reached function end without returning anything op Range<i16> ..- i16 begin i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_ROP__dot_dot_i16(i16 v501) {{
  return (__ZH_BOP__dot_dot_i16i16((v501), (~((__ZH_LOP_i16_())))));
};printf("%s", "reached function end without returning anything rop Range<i16> .. i16 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_i16(i16 v502) {{
  i16 v504;
  return (__ZH_BOP__dot_dot_i16i16((*__ZH_LOP__plus_plus_i16R(&(*(((v504)=(~((__ZH_LOP_i16_())))), (&(v504)))))), (v502)));
};printf("%s", "reached function end without returning anything lop Range<i16> .. i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_minus_i16(i16 v505) {{
  i16 v507;
  return (__ZH_BOP__dot_dot_i16i16((*__ZH_LOP__plus_plus_i16R(&(*(((v507)=(~((__ZH_LOP_i16_())))), (&(v507)))))), (-((v505)))));
};printf("%s", "reached function end without returning anything lop Range<i16> ..- i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__minus_Range_lessi16_greater(__ZH_TYPE_Range_lessi16_greater v508) {{
  return (__ZH_BOP__dot_dot_i16i16((-(((&(v508))->begin))), ((&(v508))->end)));
};printf("%s", "reached function end without returning anything lop Range<i16> - Range<i16> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_BOP__dot_dot_equal_i16i16(i16 v509, i16 v510) {{
  i16 v512;
  return (__ZH_BOP__dot_dot_i16i16((v509), (((v510))+((*__ZH_LOP__plus_plus_i16R(&(*(((v512)=(__ZH_LOP_i16_())), (&(v512))))))))));
};printf("%s", "reached function end without returning anything op Range<i16> ..= i16 begin i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_equal_i16(i16 v513) {{
  i16 v517;
  i16 v515;
  return (__ZH_BOP__dot_dot_i16i16((*__ZH_LOP__plus_plus_i16R(&(*(((v515)=(~((__ZH_LOP_i16_())))), (&(v515)))))), (((v513))+((*__ZH_LOP__plus_plus_i16R(&(*(((v517)=(~((__ZH_LOP_i16_())))), (&(v517))))))))));
};printf("%s", "reached function end without returning anything lop Range<i16> ..= i16 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP__dot_dot_equal_minus_i16(i16 v518) {{
  i16 v522;
  i16 v520;
  return (__ZH_BOP__dot_dot_i16i16((*__ZH_LOP__plus_plus_i16R(&(*(((v520)=(~((__ZH_LOP_i16_())))), (&(v520)))))), (((-((v518))))+((*__ZH_LOP__plus_plus_i16R(&(*(((v522)=(~((__ZH_LOP_i16_())))), (&(v522))))))))));
};printf("%s", "reached function end without returning anything lop Range<i16> ..=- i16 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i16Range_lessi16_greater(i16 v523, __ZH_TYPE_Range_lessi16_greater v524) {{
  if (((((&(v524))->begin))<(((&(v524))->end)))) {
    return ((((((&(v524))->begin))<=((v523))))&&((((v523))<(((&(v524))->end)))));
  } else {
    return ((((((&(v524))->end))<=((v523))))&&((((v523))<(((&(v524))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i16 i Range<i16> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi16_greater __ZH_LOP_iter_Range_lessi16_greater(__ZH_TYPE_Range_lessi16_greater v525) {{
  return (v525);
};printf("%s", "reached function end without returning anything lop Range<i16> iter Range<i16> r\n"); exit(EXIT_FAILURE);}
i32 __ZH_BOP__dotcall_dotbegin_Range_lessi32_greaterP(__ZH_TYPE_Range_lessi32_greater* v527) {{
  return (((v527))->begin);
};printf("%s", "reached function end without returning anything op i32 .call.begin Range<i32>P slf\n"); exit(EXIT_FAILURE);}
i32 __ZH_BOP__dotcall_dotend_Range_lessi32_greaterP(__ZH_TYPE_Range_lessi32_greater* v528) {{
  return (((v528))->end);
};printf("%s", "reached function end without returning anything op i32 .call.end Range<i32>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP_Range_lessi32_greater_i32i32(i32 v529, i32 v530) {{
  __ZH_TYPE_Range_lessi32_greater v531;
  (((&(v531))->begin)=(v529));
  (((&(v531))->end)=(v530));
  return (v531);
};printf("%s", "reached function end without returning anything lop Range<i32> Range<i32> i32 begin i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_i32i32(i32 v532, i32 v533) {{
  return (__ZH_LOP_Range_lessi32_greater_i32i32((v532), (v533)));
};printf("%s", "reached function end without returning anything op Range<i32> .. i32 begin i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_minus_i32i32(i32 v534, i32 v535) {{
  return (__ZH_BOP__dot_dot_i32i32((v534), (-((v535)))));
};printf("%s", "reached function end without returning anything op Range<i32> ..- i32 begin i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_ROP__dot_dot_i32(i32 v536) {{
  return (__ZH_BOP__dot_dot_i32i32((v536), (~((__ZH_LOP_i32_())))));
};printf("%s", "reached function end without returning anything rop Range<i32> .. i32 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_i32(i32 v537) {{
  i32 v539;
  return (__ZH_BOP__dot_dot_i32i32((*__ZH_LOP__plus_plus_i32R(&(*(((v539)=(~((__ZH_LOP_i32_())))), (&(v539)))))), (v537)));
};printf("%s", "reached function end without returning anything lop Range<i32> .. i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_minus_i32(i32 v540) {{
  i32 v542;
  return (__ZH_BOP__dot_dot_i32i32((*__ZH_LOP__plus_plus_i32R(&(*(((v542)=(~((__ZH_LOP_i32_())))), (&(v542)))))), (-((v540)))));
};printf("%s", "reached function end without returning anything lop Range<i32> ..- i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__minus_Range_lessi32_greater(__ZH_TYPE_Range_lessi32_greater v543) {{
  return (__ZH_BOP__dot_dot_i32i32((-(((&(v543))->begin))), ((&(v543))->end)));
};printf("%s", "reached function end without returning anything lop Range<i32> - Range<i32> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_BOP__dot_dot_equal_i32i32(i32 v544, i32 v545) {{
  i32 v547;
  return (__ZH_BOP__dot_dot_i32i32((v544), (((v545))+((*__ZH_LOP__plus_plus_i32R(&(*(((v547)=(__ZH_LOP_i32_())), (&(v547))))))))));
};printf("%s", "reached function end without returning anything op Range<i32> ..= i32 begin i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_equal_i32(i32 v548) {{
  i32 v552;
  i32 v550;
  return (__ZH_BOP__dot_dot_i32i32((*__ZH_LOP__plus_plus_i32R(&(*(((v550)=(~((__ZH_LOP_i32_())))), (&(v550)))))), (((v548))+((*__ZH_LOP__plus_plus_i32R(&(*(((v552)=(~((__ZH_LOP_i32_())))), (&(v552))))))))));
};printf("%s", "reached function end without returning anything lop Range<i32> ..= i32 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP__dot_dot_equal_minus_i32(i32 v553) {{
  i32 v557;
  i32 v555;
  return (__ZH_BOP__dot_dot_i32i32((*__ZH_LOP__plus_plus_i32R(&(*(((v555)=(~((__ZH_LOP_i32_())))), (&(v555)))))), (((-((v553))))+((*__ZH_LOP__plus_plus_i32R(&(*(((v557)=(~((__ZH_LOP_i32_())))), (&(v557))))))))));
};printf("%s", "reached function end without returning anything lop Range<i32> ..=- i32 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i32Range_lessi32_greater(i32 v558, __ZH_TYPE_Range_lessi32_greater v559) {{
  if (((((&(v559))->begin))<(((&(v559))->end)))) {
    return ((((((&(v559))->begin))<=((v558))))&&((((v558))<(((&(v559))->end)))));
  } else {
    return ((((((&(v559))->end))<=((v558))))&&((((v558))<(((&(v559))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i32 i Range<i32> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi32_greater __ZH_LOP_iter_Range_lessi32_greater(__ZH_TYPE_Range_lessi32_greater v560) {{
  return (v560);
};printf("%s", "reached function end without returning anything lop Range<i32> iter Range<i32> r\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP(__ZH_TYPE_Range_lessi64_greater* v562) {{
  return (((v562))->begin);
};printf("%s", "reached function end without returning anything op i64 .call.begin Range<i64>P slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotend_Range_lessi64_greaterP(__ZH_TYPE_Range_lessi64_greater* v563) {{
  return (((v563))->end);
};printf("%s", "reached function end without returning anything op i64 .call.end Range<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP_Range_lessi64_greater_i64i64(i64 v564, i64 v565) {{
  __ZH_TYPE_Range_lessi64_greater v566;
  (((&(v566))->begin)=(v564));
  (((&(v566))->end)=(v565));
  return (v566);
};printf("%s", "reached function end without returning anything lop Range<i64> Range<i64> i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_i64i64(i64 v567, i64 v568) {{
  return (__ZH_LOP_Range_lessi64_greater_i64i64((v567), (v568)));
};printf("%s", "reached function end without returning anything op Range<i64> .. i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_minus_i64i64(i64 v569, i64 v570) {{
  return (__ZH_BOP__dot_dot_i64i64((v569), (-((v570)))));
};printf("%s", "reached function end without returning anything op Range<i64> ..- i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_ROP__dot_dot_i64(i64 v571) {{
  return (__ZH_BOP__dot_dot_i64i64((v571), (~((__ZH_LOP_i64_())))));
};printf("%s", "reached function end without returning anything rop Range<i64> .. i64 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_i64(i64 v572) {{
  i64 v574;
  return (__ZH_BOP__dot_dot_i64i64((*__ZH_LOP__plus_plus_i64R(&(*(((v574)=(~((__ZH_LOP_i64_())))), (&(v574)))))), (v572)));
};printf("%s", "reached function end without returning anything lop Range<i64> .. i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_minus_i64(i64 v575) {{
  i64 v577;
  return (__ZH_BOP__dot_dot_i64i64((*__ZH_LOP__plus_plus_i64R(&(*(((v577)=(~((__ZH_LOP_i64_())))), (&(v577)))))), (-((v575)))));
};printf("%s", "reached function end without returning anything lop Range<i64> ..- i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__minus_Range_lessi64_greater(__ZH_TYPE_Range_lessi64_greater v578) {{
  return (__ZH_BOP__dot_dot_i64i64((-(((&(v578))->begin))), ((&(v578))->end)));
};printf("%s", "reached function end without returning anything lop Range<i64> - Range<i64> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_BOP__dot_dot_equal_i64i64(i64 v579, i64 v580) {{
  i64 v582;
  return (__ZH_BOP__dot_dot_i64i64((v579), (((v580))+((*__ZH_LOP__plus_plus_i64R(&(*(((v582)=(__ZH_LOP_i64_())), (&(v582))))))))));
};printf("%s", "reached function end without returning anything op Range<i64> ..= i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_equal_i64(i64 v583) {{
  i64 v587;
  i64 v585;
  return (__ZH_BOP__dot_dot_i64i64((*__ZH_LOP__plus_plus_i64R(&(*(((v585)=(~((__ZH_LOP_i64_())))), (&(v585)))))), (((v583))+((*__ZH_LOP__plus_plus_i64R(&(*(((v587)=(~((__ZH_LOP_i64_())))), (&(v587))))))))));
};printf("%s", "reached function end without returning anything lop Range<i64> ..= i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP__dot_dot_equal_minus_i64(i64 v588) {{
  i64 v592;
  i64 v590;
  return (__ZH_BOP__dot_dot_i64i64((*__ZH_LOP__plus_plus_i64R(&(*(((v590)=(~((__ZH_LOP_i64_())))), (&(v590)))))), (((-((v588))))+((*__ZH_LOP__plus_plus_i64R(&(*(((v592)=(~((__ZH_LOP_i64_())))), (&(v592))))))))));
};printf("%s", "reached function end without returning anything lop Range<i64> ..=- i64 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i64Range_lessi64_greater(i64 v593, __ZH_TYPE_Range_lessi64_greater v594) {{
  if (((((&(v594))->begin))<(((&(v594))->end)))) {
    return ((((((&(v594))->begin))<=((v593))))&&((((v593))<(((&(v594))->end)))));
  } else {
    return ((((((&(v594))->end))<=((v593))))&&((((v593))<(((&(v594))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i64 i Range<i64> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lessi64_greater __ZH_LOP_iter_Range_lessi64_greater(__ZH_TYPE_Range_lessi64_greater v595) {{
  return (v595);
};printf("%s", "reached function end without returning anything lop Range<i64> iter Range<i64> r\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotbegin_Range_lesschar_greaterP(__ZH_TYPE_Range_lesschar_greater* v597) {{
  return (((v597))->begin);
};printf("%s", "reached function end without returning anything op char .call.begin Range<char>P slf\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotend_Range_lesschar_greaterP(__ZH_TYPE_Range_lesschar_greater* v598) {{
  return (((v598))->end);
};printf("%s", "reached function end without returning anything op char .call.end Range<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP_Range_lesschar_greater_charchar(char v599, char v600) {{
  __ZH_TYPE_Range_lesschar_greater v601;
  (((&(v601))->begin)=(v599));
  (((&(v601))->end)=(v600));
  return (v601);
};printf("%s", "reached function end without returning anything lop Range<char> Range<char> char begin char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_charchar(char v602, char v603) {{
  return (__ZH_LOP_Range_lesschar_greater_charchar((v602), (v603)));
};printf("%s", "reached function end without returning anything op Range<char> .. char begin char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_minus_charchar(char v604, char v605) {{
  return (__ZH_BOP__dot_dot_charchar((v604), (-((v605)))));
};printf("%s", "reached function end without returning anything op Range<char> ..- char begin char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_ROP__dot_dot_char(char v606) {{
  return (__ZH_BOP__dot_dot_charchar((v606), (~((__ZH_LOP_char_())))));
};printf("%s", "reached function end without returning anything rop Range<char> .. char begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_char(char v607) {{
  char v609;
  return (__ZH_BOP__dot_dot_charchar((*__ZH_LOP__plus_plus_charR(&(*(((v609)=(~((__ZH_LOP_char_())))), (&(v609)))))), (v607)));
};printf("%s", "reached function end without returning anything lop Range<char> .. char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_minus_char(char v610) {{
  char v612;
  return (__ZH_BOP__dot_dot_charchar((*__ZH_LOP__plus_plus_charR(&(*(((v612)=(~((__ZH_LOP_char_())))), (&(v612)))))), (-((v610)))));
};printf("%s", "reached function end without returning anything lop Range<char> ..- char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__minus_Range_lesschar_greater(__ZH_TYPE_Range_lesschar_greater v613) {{
  return (__ZH_BOP__dot_dot_charchar((-(((&(v613))->begin))), ((&(v613))->end)));
};printf("%s", "reached function end without returning anything lop Range<char> - Range<char> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_BOP__dot_dot_equal_charchar(char v614, char v615) {{
  char v617;
  return (__ZH_BOP__dot_dot_charchar((v614), (((v615))+((*__ZH_LOP__plus_plus_charR(&(*(((v617)=(__ZH_LOP_char_())), (&(v617))))))))));
};printf("%s", "reached function end without returning anything op Range<char> ..= char begin char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_equal_char(char v618) {{
  char v622;
  char v620;
  return (__ZH_BOP__dot_dot_charchar((*__ZH_LOP__plus_plus_charR(&(*(((v620)=(~((__ZH_LOP_char_())))), (&(v620)))))), (((v618))+((*__ZH_LOP__plus_plus_charR(&(*(((v622)=(~((__ZH_LOP_char_())))), (&(v622))))))))));
};printf("%s", "reached function end without returning anything lop Range<char> ..= char end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP__dot_dot_equal_minus_char(char v623) {{
  char v627;
  char v625;
  return (__ZH_BOP__dot_dot_charchar((*__ZH_LOP__plus_plus_charR(&(*(((v625)=(~((__ZH_LOP_char_())))), (&(v625)))))), (((-((v623))))+((*__ZH_LOP__plus_plus_charR(&(*(((v627)=(~((__ZH_LOP_char_())))), (&(v627))))))))));
};printf("%s", "reached function end without returning anything lop Range<char> ..=- char end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charRange_lesschar_greater(char v628, __ZH_TYPE_Range_lesschar_greater v629) {{
  if (((((&(v629))->begin))<(((&(v629))->end)))) {
    return ((((((&(v629))->begin))<=((v628))))&&((((v628))<(((&(v629))->end)))));
  } else {
    return ((((((&(v629))->end))<=((v628))))&&((((v628))<(((&(v629))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == char i Range<char> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range_lesschar_greater __ZH_LOP_iter_Range_lesschar_greater(__ZH_TYPE_Range_lesschar_greater v630) {{
  return (v630);
};printf("%s", "reached function end without returning anything lop Range<char> iter Range<char> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v653) {{
  __ZH_TYPE_VecIter_lessi64_greater v654;
  (((&(v654))->ptr)=(v653));
  return (v654);
};printf("%s", "reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n"); exit(EXIT_FAILURE);}
void __ZH_LOP__plus_plus_VecIter_lessi64_greaterR(__ZH_TYPE_VecIter_lessi64_greater* v655){
  (((&(*v655))->ptr)=((i64*)((((i64)((&(*v655))->ptr)))+(((((i64)1))*((sizeof(i64))))))));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__plus_VecIter_lessi64_greateri64(__ZH_TYPE_VecIter_lessi64_greater v656, i64 v657) {{
  (((&(v656))->ptr)=((i64*)((((i64)((&(v656))->ptr)))+((((v657))*((sizeof(i64))))))));
  return (v656);
};printf("%s", "reached function end without returning anything op VecIter<i64> + VecIter<i64> slf i64 i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_equal_VecIter_lessi64_greaterVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v658, __ZH_TYPE_VecIter_lessi64_greater v659) {{
  return ((((i64)((&(v658))->ptr)))!=(((i64)((&(v659))->ptr))));
};printf("%s", "reached function end without returning anything op bool != VecIter<i64> a VecIter<i64> b\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v660) {{
  return &(*((&(v660))->ptr));
};printf("%s", "reached function end without returning anything lop i64R * VecIter<i64> slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_VecIterRange_lessi64_greaterP(__ZH_TYPE_VecIterRange_lessi64_greater* v663) {{
  return (((v663))->begin);
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin VecIterRange<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_VecIterRange_lessi64_greaterP(__ZH_TYPE_VecIterRange_lessi64_greater* v664) {{
  return (((v664))->end);
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end VecIterRange<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lessi64_greater __ZH_LOP_VecIterRange_lessi64_greater_VecIter_lessi64_greaterVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v665, __ZH_TYPE_VecIter_lessi64_greater v666) {{
  __ZH_TYPE_VecIterRange_lessi64_greater v667;
  (((&(v667))->begin)=(v665));
  (((&(v667))->end)=(v666));
  return (v667);
};printf("%s", "reached function end without returning anything lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v632, i64 v633) {{
  return ((i64*)((i64*)((((i64)(((v632))->head)))+((((v633))*((sizeof(i64))))))));
};printf("%s", "reached function end without returning anything op i64P .call.atP Vec<i64>P slf i64 pos\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v634, i64 v635) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v634), (v635))));
};printf("%s", "reached function end without returning anything op i64R .call.at Vec<i64>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v636){
  (printf("%s", ((str)"[")));
  {
      i64 v639;
      i64 v638;
      __ZH_TYPE_Range_lessi64_greater v637;
      ((v637)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v636))->size))))));
      ((v638)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v637)))));
      ((v639)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v637)))));
      while ((((v639))!=((v638)))) {
        if ((!((!((v639)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v636), (v639))))));
        (*__ZH_LOP__plus_plus_i64R(&(v639)));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v640){
  {
      i64 v643;
      i64 v642;
      __ZH_TYPE_Range_lessi64_greater v641;
      ((v641)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v640))->size))))));
      ((v642)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v641)))));
      ((v643)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v641)))));
      while ((((v643))!=((v642)))) {
        (printf("%lld\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v640), (v643))))));
        (*__ZH_LOP__plus_plus_i64R(&(v643)));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v644){
  i64 v645;
  ((v645)=(((v644))->cap));
  if ((((v645))==(((i64)0)))) {
    ((v645)=((i64)1));
    ((((v644))->head)=((i64*)(alloc((sizeof(i64))))));
    ((((v644))->cap)=(v645));
  } else {
    i64* v646;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v645), ((i64)2)));
    ((v646)=((i64*)(alloc((((v645))*((sizeof(i64))))))));
    {
        i64 v649;
        i64 v648;
        __ZH_TYPE_Range_lessi64_greater v647;
        ((v647)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v644))->size))))));
        ((v648)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v647)))));
        ((v649)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v647)))));
        while ((((v649))!=((v648)))) {
          ((*((i64*)((((i64)(v646)))+((((v649))*((sizeof(i64))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v644), (v649))));
          (*__ZH_LOP__plus_plus_i64R(&(v649)));
        }
      }
    (free((void*) ((i64)(((v644))->head))));
    ((((v644))->head)=(v646));
  }
  ((((v644))->cap)=(v645));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v650, i64 v651){
  if ((((((v650))->size))==((((v650))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP((v650)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v650), (((v650))->size)))=(v651));
  (*__ZH_LOP__plus_plus_i64R(&(((v650))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v652){
  (*__ZH_LOP__minus_minus_i64R(&(((v652))->size)));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v661) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((((v661))->head)));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v662) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v662), (((v662))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lessi64_greater __ZH_LOP_iter_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v668) {{
  __ZH_TYPE_VecIterRange_lessi64_greater v669;
  (((&(v669))->begin)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((&(*v668)))));
  (((&(v669))->end)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((&(*v668)))));
  return (v669);
};printf("%s", "reached function end without returning anything lop VecIterRange<i64> iter Vec<i64>R slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v670) {{
  return &(*(((v670))->head));
};printf("%s", "reached function end without returning anything op i64R .call.front Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v671) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v671), (((((v671))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op i64R .call.back Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v672){
  if ((!((!(((i64)(((v672))->head))))))) {
    (free((void*) ((i64)(((v672))->head))));
    ((((v672))->size)=((i64)0));
    ((((v672))->cap)=((i64)0));
    ((((v672))->head)=((i64*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v673) {{
  __ZH_TYPE_Vec_lessi64_greater v674;
  (((&(v674))->head)=((i64*)((i64)0)));
  (((&(v674))->size)=((i64)0));
  (((&(v674))->cap)=((i64)0));
  while (((((&(v674))->cap))<((v673)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP((&(v674))));
  }
  (((&(v674))->size)=(v673));
  (((&(v674))->cap)=(v673));
  {
      i64 v677;
      i64 v676;
      __ZH_TYPE_Range_lessi64_greater v675;
      ((v675)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v674))->size))))));
      ((v676)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v675)))));
      ((v677)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v675)))));
      while ((((v677))!=((v676)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v674)), (v677)))=(__ZH_LOP_i64_()));
        (*__ZH_LOP__plus_plus_i64R(&(v677)));
      }
    }
  return (v674);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v674))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v678, i64 v679) {{
  __ZH_TYPE_Vec_lessi64_greater v680;
  ((v680)=(__ZH_LOP_Vec_lessi64_greater_i64((v678))));
  {
      i64 v683;
      i64 v682;
      __ZH_TYPE_Range_lessi64_greater v681;
      ((v681)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v680))->size))))));
      ((v682)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v681)))));
      ((v683)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v681)))));
      while ((((v683))!=((v682)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v680)), (v683)))=(v679));
        (*__ZH_LOP__plus_plus_i64R(&(v683)));
      }
    }
  return (v680);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v680))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {{
  return (__ZH_LOP_Vec_lessi64_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v684) {{
  __ZH_TYPE_Vec_lessi64_greater v685;
  ((v685)=(__ZH_LOP_Vec_lessi64_greater_i64(((&(*v684))->size))));
  {
      i64 v688;
      i64 v687;
      __ZH_TYPE_Range_lessi64_greater v686;
      ((v686)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v684))->size))))));
      ((v687)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v686)))));
      ((v688)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v686)))));
      while ((((v688))!=((v687)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v685)), (v688)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(*v684)), (v688))));
        (*__ZH_LOP__plus_plus_i64R(&(v688)));
      }
    }
  return (v685);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v685))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v689, i64 v690){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(*v689)), (v690)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v691, __ZH_TYPE_Vec_lessi64_greater* v692){
  {
      __ZH_TYPE_VecIter_lessi64_greater v695;
      __ZH_TYPE_VecIter_lessi64_greater v694;
      __ZH_TYPE_VecIterRange_lessi64_greater v693;
      ((v693)=(__ZH_LOP_iter_Vec_lessi64_greaterR(&(*v692))));
      ((v694)=(__ZH_BOP__dotcall_dotend_VecIterRange_lessi64_greaterP((&(v693)))));
      ((v695)=(__ZH_BOP__dotcall_dotbegin_VecIterRange_lessi64_greaterP((&(v693)))));
      while ((__ZH_BOP__exclamation_equal_VecIter_lessi64_greaterVecIter_lessi64_greater((v695), (v694)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(*v691)), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v695)))));
        (__ZH_LOP__plus_plus_VecIter_lessi64_greaterR(&(v695)));
      }
    }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v696, i64 v697) {{
  __ZH_TYPE_Vec_lessi64_greater v698;
  ((v698)=(__ZH_LOP_Vec_lessi64_greater_()));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v698), (v696)));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v698), (v697)));
  return (v698);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v698))));
};printf("%s", "reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v699, i64 v700) {{
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(*v699), (v700)));
  return &(*v699);
};printf("%s", "reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v701){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP((&(*v701))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v702){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP((&(*v702))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v703) {{
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v703)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v704) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v704))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v705, __ZH_TYPE_Vec_lessi64_greater* v706) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v706))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<i64>R i\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v707, i64 v708) {{
  if ((((v708))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v708), (((v707))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v707), (v708)));
};printf("%s", "reached function end without returning anything op i64R .call.sub Vec<i64>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64(__ZH_TYPE_Vec_lessi64_greater* v709, i64 v710, i64 v711) {{
  __ZH_TYPE_Vec_lessi64_greater v712;
  ((v712)=(__ZH_LOP_Vec_lessi64_greater_i64(((i64)0))));
  {
      i64 v715;
      i64 v714;
      __ZH_TYPE_Range_lessi64_greater v713;
      ((v713)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64((v710), (v711))))));
      ((v714)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v713)))));
      ((v715)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v713)))));
      while ((((v715))!=((v714)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(v712)), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v709), (v715)))));
        (*__ZH_LOP__plus_plus_i64R(&(v715)));
      }
    }
  return (v712);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v712))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPRange_lessi64_greater(__ZH_TYPE_Vec_lessi64_greater* v716, __ZH_TYPE_Range_lessi64_greater v717) {{
  i64 v719;
  i64 v718;
  (((v718)=((&(v717))->begin)), ((v719)=((&(v717))->end)));
  if ((((v718))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v718), (((v716))->size)));
  }
  if ((((v718))<(((i64)0)))) {
    ((v718)=((i64)0));
  }
  if ((((v719))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v719), (((v716))->size)));
  }
  if ((((v719))>((((v716))->size)))) {
    ((v719)=(((v716))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64((v716), (v718), (v719)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v720) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64((v720), ((i64)0), (((v720))->size)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v721, __ZH_TYPE_Vec_lessi64_greater* v722) {{
  {
      i64 v725;
      i64 v724;
      __ZH_TYPE_Range_lessi64_greater v723;
      ((v723)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v721))->size), ((&(*v722))->size))))))));
      ((v724)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v723)))));
      ((v725)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v723)))));
      while ((((v725))!=((v724)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(*v721)), (v725))))<((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(*v722)), (v725)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(*v722)), (v725))))<((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(*v721)), (v725)))))) {
          return ((bool)0);
        }
        (*__ZH_LOP__plus_plus_i64R(&(v725)));
      }
    }
  if (((((&(*v721))->size))<(((&(*v722))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v721))->size))>(((&(*v722))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_i64Pi64P(i64* v726, i64* v727){
  i64 v728;
  ((v728)=(*(v726)));
  ((*(v726))=(*(v727)));
  ((*(v727))=(v728));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v729, i64* v730) {{
  i64* v733;
  i64* v732;
  i64* v731;
  (((v731)=((i64*)((((i64)(v730)))-(((((i64)1))*((sizeof(i64)))))))), ((v732)=(v729)), ((v733)=(v729)));
  ((v733)=(v729));
  while (((((i64)(v733)))!=(((i64)(v731))))) {
    if ((((*(v733)))<((*(v731))))) {
      (__ZH_LOP_swap_i64Pi64P((v732), (v733)));
      ((v732)=((i64*)((((i64)(v732)))+(((((i64)1))*((sizeof(i64))))))));
    }
    ((v733)=((i64*)((((i64)(v733)))+(((((i64)1))*((sizeof(i64))))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v732), (v731)));
  return (v732);
};printf("%s", "reached function end without returning anything lop i64P partition i64P lo i64P hi\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_i64Pi64P(i64* v734, i64* v735){
  i64 v737;
  i64 v736;
  ((v736)=((((i64)(v735)))-(((i64)(v734)))));
  ((v737)=(sizeof(i64)));
  if ((((v736))>((v737)))) {
    i64* v738;
    ((v738)=(__ZH_LOP_partition_i64Pi64P((v734), (v735))));
    (__ZH_LOP_qsort_i64Pi64P((v734), (v738)));
    ((v738)=((i64*)((((i64)(v738)))+(((((i64)1))*((sizeof(i64))))))));
    (__ZH_LOP_qsort_i64Pi64P((v738), (v735)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v739){
  __ZH_TYPE_VecIter_lessi64_greater v743;
  __ZH_TYPE_VecIter_lessi64_greater v741;
  (__ZH_LOP_qsort_i64Pi64P(((&(*(((v741)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((v739)))), (&(v741)))))->ptr), ((&(*(((v743)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((v739)))), (&(v743)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v744){
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP((&(*v744))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v745, i64(*v746)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v747;
  ((v747)=(__ZH_LOP_Vec_lessi64_greater_i64((((v745))->size))));
  {
      i64 v750;
      i64 v749;
      __ZH_TYPE_Range_lessi64_greater v748;
      ((v748)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v745))->size))))));
      ((v749)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v748)))));
      ((v750)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v748)))));
      while ((((v750))!=((v749)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(v747)), (v750)))=((*(v746))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v745), (v750))))));
        (*__ZH_LOP__plus_plus_i64R(&(v750)));
      }
    }
  return (v747);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v747))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v751, bool(*v752)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v753;
  ((v753)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      i64 v756;
      i64 v755;
      __ZH_TYPE_Range_lessi64_greater v754;
      ((v754)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v751))->size))))));
      ((v755)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v754)))));
      ((v756)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v754)))));
      while ((((v756))!=((v755)))) {
        if (((*(v752))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v751), (v756)))))) {
          (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v753), (*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v751), (v756)))));
        }
        (*__ZH_LOP__plus_plus_i64R(&(v756)));
      }
    }
  return (v753);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v753))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v757, i64 v758) {{
  __ZH_TYPE_Vec_lessi64_greater v759;
  ((v759)=(__ZH_LOP_Vec_lessi64_greater_i64((((v758))-((v757))))));
  {
      i64 v762;
      i64 v761;
      __ZH_TYPE_Range_lessi64_greater v760;
      ((v760)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64((v757), (v758))))));
      ((v761)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v760)))));
      ((v762)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v760)))));
      while ((((v762))!=((v761)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v759)), (((v762))-((v757)))))=(v762));
        (*__ZH_LOP__plus_plus_i64R(&(v762)));
      }
    }
  return (v759);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v759))));
};printf("%s", "reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotsub_strPi64(str* v763, i64 v764) {{
  return (*((char*)((((i64)(*(v763))))+((v764)))));
};printf("%s", "reached function end without returning anything op char .call.sub strP slf i64 pos\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_str_() {{
  u8* v765;
  ((v765)=((u8*)(alloc(((i64)1)))));
  ((*(v765))=((u8)0));
  return ((str)(v765));
};printf("%s", "reached function end without returning anything lop str str\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charstr(char v766, str v767) {{
  return (((v766))==((__ZH_BOP__dotcall_dotsub_strPi64((&(v767)), ((i64)0)))));
};printf("%s", "reached function end without returning anything op bool == char ch str s\n"); exit(EXIT_FAILURE);}
char __ZH_LOP_chr_str(str v768) {{
  return (__ZH_BOP__dotcall_dotsub_strPi64((&(v768)), ((i64)0)));
};printf("%s", "reached function end without returning anything lop char chr str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v790) {{
  __ZH_TYPE_VecIter_lesschar_greater v791;
  (((&(v791))->ptr)=(v790));
  return (v791);
};printf("%s", "reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n"); exit(EXIT_FAILURE);}
void __ZH_LOP__plus_plus_VecIter_lesschar_greaterR(__ZH_TYPE_VecIter_lesschar_greater* v792){
  (((&(*v792))->ptr)=((char*)((((i64)((&(*v792))->ptr)))+(((((i64)1))*((sizeof(char))))))));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__plus_VecIter_lesschar_greateri64(__ZH_TYPE_VecIter_lesschar_greater v793, i64 v794) {{
  (((&(v793))->ptr)=((char*)((((i64)((&(v793))->ptr)))+((((v794))*((sizeof(char))))))));
  return (v793);
};printf("%s", "reached function end without returning anything op VecIter<char> + VecIter<char> slf i64 i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v795, __ZH_TYPE_VecIter_lesschar_greater v796) {{
  return ((((i64)((&(v795))->ptr)))!=(((i64)((&(v796))->ptr))));
};printf("%s", "reached function end without returning anything op bool != VecIter<char> a VecIter<char> b\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v797) {{
  return &(*((&(v797))->ptr));
};printf("%s", "reached function end without returning anything lop charR * VecIter<char> slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP(__ZH_TYPE_VecIterRange_lesschar_greater* v800) {{
  return (((v800))->begin);
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin VecIterRange<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP(__ZH_TYPE_VecIterRange_lesschar_greater* v801) {{
  return (((v801))->end);
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end VecIterRange<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_VecIterRange_lesschar_greater_VecIter_lesschar_greaterVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v802, __ZH_TYPE_VecIter_lesschar_greater v803) {{
  __ZH_TYPE_VecIterRange_lesschar_greater v804;
  (((&(v804))->begin)=(v802));
  (((&(v804))->end)=(v803));
  return (v804);
};printf("%s", "reached function end without returning anything lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v769, i64 v770) {{
  return ((char*)((char*)((((i64)(((v769))->head)))+((((v770))*((sizeof(char))))))));
};printf("%s", "reached function end without returning anything op charP .call.atP Vec<char>P slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v771, i64 v772) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v771), (v772))));
};printf("%s", "reached function end without returning anything op charR .call.at Vec<char>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v773){
  (printf("%s", ((str)"[")));
  {
      i64 v776;
      i64 v775;
      __ZH_TYPE_Range_lessi64_greater v774;
      ((v774)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v773))->size))))));
      ((v775)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v774)))));
      ((v776)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v774)))));
      while ((((v776))!=((v775)))) {
        if ((!((!((v776)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v773), (v776))))));
        (*__ZH_LOP__plus_plus_i64R(&(v776)));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v777){
  {
      i64 v780;
      i64 v779;
      __ZH_TYPE_Range_lessi64_greater v778;
      ((v778)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v777))->size))))));
      ((v779)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v778)))));
      ((v780)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v778)))));
      while ((((v780))!=((v779)))) {
        (printf("%c\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v777), (v780))))));
        (*__ZH_LOP__plus_plus_i64R(&(v780)));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v781){
  i64 v782;
  ((v782)=(((v781))->cap));
  if ((((v782))==(((i64)0)))) {
    ((v782)=((i64)1));
    ((((v781))->head)=((char*)(alloc((sizeof(char))))));
    ((((v781))->cap)=(v782));
  } else {
    char* v783;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v782), ((i64)2)));
    ((v783)=((char*)(alloc((((v782))*((sizeof(char))))))));
    {
        i64 v786;
        i64 v785;
        __ZH_TYPE_Range_lessi64_greater v784;
        ((v784)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v781))->size))))));
        ((v785)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v784)))));
        ((v786)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v784)))));
        while ((((v786))!=((v785)))) {
          ((*((char*)((((i64)(v783)))+((((v786))*((sizeof(char))))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v781), (v786))));
          (*__ZH_LOP__plus_plus_i64R(&(v786)));
        }
      }
    (free((void*) ((i64)(((v781))->head))));
    ((((v781))->head)=(v783));
  }
  ((((v781))->cap)=(v782));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar(__ZH_TYPE_Vec_lesschar_greater* v787, char v788){
  if ((((((v787))->size))==((((v787))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP((v787)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v787), (((v787))->size)))=(v788));
  (*__ZH_LOP__plus_plus_i64R(&(((v787))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v789){
  (*__ZH_LOP__minus_minus_i64R(&(((v789))->size)));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v798) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((((v798))->head)));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin Vec<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v799) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v799), (((v799))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end Vec<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v805) {{
  __ZH_TYPE_VecIterRange_lesschar_greater v806;
  (((&(v806))->begin)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&(*v805)))));
  (((&(v806))->end)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP((&(*v805)))));
  return (v806);
};printf("%s", "reached function end without returning anything lop VecIterRange<char> iter Vec<char>R slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v807) {{
  return &(*(((v807))->head));
};printf("%s", "reached function end without returning anything op charR .call.front Vec<char>P slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v808) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v808), (((((v808))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op charR .call.back Vec<char>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v809){
  if ((!((!(((i64)(((v809))->head))))))) {
    (free((void*) ((i64)(((v809))->head))));
    ((((v809))->size)=((i64)0));
    ((((v809))->cap)=((i64)0));
    ((((v809))->head)=((char*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v810) {{
  __ZH_TYPE_Vec_lesschar_greater v811;
  (((&(v811))->head)=((char*)((i64)0)));
  (((&(v811))->size)=((i64)0));
  (((&(v811))->cap)=((i64)0));
  while (((((&(v811))->cap))<((v810)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP((&(v811))));
  }
  (((&(v811))->size)=(v810));
  (((&(v811))->cap)=(v810));
  {
      i64 v814;
      i64 v813;
      __ZH_TYPE_Range_lessi64_greater v812;
      ((v812)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v811))->size))))));
      ((v813)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v812)))));
      ((v814)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v812)))));
      while ((((v814))!=((v813)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v811)), (v814)))=(__ZH_LOP_char_()));
        (*__ZH_LOP__plus_plus_i64R(&(v814)));
      }
    }
  return (v811);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v811))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v815, char v816) {{
  __ZH_TYPE_Vec_lesschar_greater v817;
  ((v817)=(__ZH_LOP_Vec_lesschar_greater_i64((v815))));
  {
      i64 v820;
      i64 v819;
      __ZH_TYPE_Range_lessi64_greater v818;
      ((v818)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v817))->size))))));
      ((v819)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v818)))));
      ((v820)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v818)))));
      while ((((v820))!=((v819)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v817)), (v820)))=(v816));
        (*__ZH_LOP__plus_plus_i64R(&(v820)));
      }
    }
  return (v817);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v817))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {{
  return (__ZH_LOP_Vec_lesschar_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v821) {{
  __ZH_TYPE_Vec_lesschar_greater v822;
  ((v822)=(__ZH_LOP_Vec_lesschar_greater_i64(((&(*v821))->size))));
  {
      i64 v825;
      i64 v824;
      __ZH_TYPE_Range_lessi64_greater v823;
      ((v823)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v821))->size))))));
      ((v824)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v823)))));
      ((v825)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v823)))));
      while ((((v825))!=((v824)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v822)), (v825)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(*v821)), (v825))));
        (*__ZH_LOP__plus_plus_i64R(&(v825)));
      }
    }
  return (v822);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v822))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v826, char v827){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(*v826)), (v827)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v828, __ZH_TYPE_Vec_lesschar_greater* v829){
  {
      __ZH_TYPE_VecIter_lesschar_greater v832;
      __ZH_TYPE_VecIter_lesschar_greater v831;
      __ZH_TYPE_VecIterRange_lesschar_greater v830;
      ((v830)=(__ZH_LOP_iter_Vec_lesschar_greaterR(&(*v829))));
      ((v831)=(__ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP((&(v830)))));
      ((v832)=(__ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP((&(v830)))));
      while ((__ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater((v832), (v831)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(*v828)), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v832)))));
        (__ZH_LOP__plus_plus_VecIter_lesschar_greaterR(&(v832)));
      }
    }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v833, char v834) {{
  __ZH_TYPE_Vec_lesschar_greater v835;
  ((v835)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v835), (v833)));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v835), (v834)));
  return (v835);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v835))));
};printf("%s", "reached function end without returning anything op Vec<char> ,, char a char b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v836, char v837) {{
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(*v836), (v837)));
  return &(*v836);
};printf("%s", "reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v838){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP((&(*v838))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v839){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP((&(*v839))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v840) {{
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v840)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v841) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v841))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v842, __ZH_TYPE_Vec_lesschar_greater* v843) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v843))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<char>R i\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v844, i64 v845) {{
  if ((((v845))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v845), (((v844))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v844), (v845)));
};printf("%s", "reached function end without returning anything op charR .call.sub Vec<char>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64(__ZH_TYPE_Vec_lesschar_greater* v846, i64 v847, i64 v848) {{
  __ZH_TYPE_Vec_lesschar_greater v849;
  ((v849)=(__ZH_LOP_Vec_lesschar_greater_i64(((i64)0))));
  {
      i64 v852;
      i64 v851;
      __ZH_TYPE_Range_lessi64_greater v850;
      ((v850)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64((v847), (v848))))));
      ((v851)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v850)))));
      ((v852)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v850)))));
      while ((((v852))!=((v851)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(v849)), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v846), (v852)))));
        (*__ZH_LOP__plus_plus_i64R(&(v852)));
      }
    }
  return (v849);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v849))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPRange_lessi64_greater(__ZH_TYPE_Vec_lesschar_greater* v853, __ZH_TYPE_Range_lessi64_greater v854) {{
  i64 v856;
  i64 v855;
  (((v855)=((&(v854))->begin)), ((v856)=((&(v854))->end)));
  if ((((v855))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v855), (((v853))->size)));
  }
  if ((((v855))<(((i64)0)))) {
    ((v855)=((i64)0));
  }
  if ((((v856))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v856), (((v853))->size)));
  }
  if ((((v856))>((((v853))->size)))) {
    ((v856)=(((v853))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64((v853), (v855), (v856)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf Range<i64> r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v857) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64((v857), ((i64)0), (((v857))->size)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v858, __ZH_TYPE_Vec_lesschar_greater* v859) {{
  {
      i64 v862;
      i64 v861;
      __ZH_TYPE_Range_lessi64_greater v860;
      ((v860)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v858))->size), ((&(*v859))->size))))))));
      ((v861)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v860)))));
      ((v862)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v860)))));
      while ((((v862))!=((v861)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(*v858)), (v862))))<((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(*v859)), (v862)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(*v859)), (v862))))<((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(*v858)), (v862)))))) {
          return ((bool)0);
        }
        (*__ZH_LOP__plus_plus_i64R(&(v862)));
      }
    }
  if (((((&(*v858))->size))<(((&(*v859))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v858))->size))>(((&(*v859))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_charPcharP(char* v863, char* v864){
  char v865;
  ((v865)=(*(v863)));
  ((*(v863))=(*(v864)));
  ((*(v864))=(v865));
}
char* __ZH_LOP_partition_charPcharP(char* v866, char* v867) {{
  char* v870;
  char* v869;
  char* v868;
  (((v868)=((char*)((((i64)(v867)))-(((((i64)1))*((sizeof(char)))))))), ((v869)=(v866)), ((v870)=(v866)));
  ((v870)=(v866));
  while (((((i64)(v870)))!=(((i64)(v868))))) {
    if ((((*(v870)))<((*(v868))))) {
      (__ZH_LOP_swap_charPcharP((v869), (v870)));
      ((v869)=((char*)((((i64)(v869)))+(((((i64)1))*((sizeof(char))))))));
    }
    ((v870)=((char*)((((i64)(v870)))+(((((i64)1))*((sizeof(char))))))));
  }
  (__ZH_LOP_swap_charPcharP((v869), (v868)));
  return (v869);
};printf("%s", "reached function end without returning anything lop charP partition charP lo charP hi\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_charPcharP(char* v871, char* v872){
  i64 v874;
  i64 v873;
  ((v873)=((((i64)(v872)))-(((i64)(v871)))));
  ((v874)=(sizeof(char)));
  if ((((v873))>((v874)))) {
    char* v875;
    ((v875)=(__ZH_LOP_partition_charPcharP((v871), (v872))));
    (__ZH_LOP_qsort_charPcharP((v871), (v875)));
    ((v875)=((char*)((((i64)(v875)))+(((((i64)1))*((sizeof(char))))))));
    (__ZH_LOP_qsort_charPcharP((v875), (v872)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v876){
  __ZH_TYPE_VecIter_lesschar_greater v880;
  __ZH_TYPE_VecIter_lesschar_greater v878;
  (__ZH_LOP_qsort_charPcharP(((&(*(((v878)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((v876)))), (&(v878)))))->ptr), ((&(*(((v880)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP((v876)))), (&(v880)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v881){
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP((&(*v881))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotmap_Vec_lesschar_greaterPF_lesschar_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v882, char(*v883)(char*)) {{
  __ZH_TYPE_Vec_lesschar_greater v884;
  ((v884)=(__ZH_LOP_Vec_lesschar_greater_i64((((v882))->size))));
  {
      i64 v887;
      i64 v886;
      __ZH_TYPE_Range_lessi64_greater v885;
      ((v885)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v882))->size))))));
      ((v886)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v885)))));
      ((v887)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v885)))));
      while ((((v887))!=((v886)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(v884)), (v887)))=((*(v883))(&(*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v882), (v887))))));
        (*__ZH_LOP__plus_plus_i64R(&(v887)));
      }
    }
  return (v884);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v884))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.map Vec<char>P slf F<char charR> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotfilter_Vec_lesschar_greaterPF_lessbool_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v888, bool(*v889)(char*)) {{
  __ZH_TYPE_Vec_lesschar_greater v890;
  ((v890)=(__ZH_LOP_Vec_lesschar_greater_()));
  {
      i64 v893;
      i64 v892;
      __ZH_TYPE_Range_lessi64_greater v891;
      ((v891)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (((v888))->size))))));
      ((v892)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v891)))));
      ((v893)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v891)))));
      while ((((v893))!=((v892)))) {
        if (((*(v889))(&(*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v888), (v893)))))) {
          (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v890), (*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v888), (v893)))));
        }
        (*__ZH_LOP__plus_plus_i64R(&(v893)));
      }
    }
  return (v890);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v890))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.filter Vec<char>P slf F<bool charR> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_() {{
  __ZH_TYPE_Str v894;
  (((&(v894))->data)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v894))->data)), ((char)((u8)0))));
  (((&(v894))->size)=((i64)0));
  return (v894);
};printf("%s", "reached function end without returning anything lop Str Str\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_StrP(__ZH_TYPE_Str* v895){
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(((v895))->data))));
}
str __ZH_BOP__dotcall_dotcstr_StrP(__ZH_TYPE_Str* v896) {{
  __ZH_TYPE_VecIter_lesschar_greater v897;
  ((v897)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&(((v896))->data)))));
  return ((str)((&(v897))->ptr));
};printf("%s", "reached function end without returning anything op str .call.cstr StrP slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_StrR(__ZH_TYPE_Str* v898) {{
  return (__ZH_LOP_VecIterRange_lesschar_greater_VecIter_lesschar_greaterVecIter_lesschar_greater((__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&((&(*v898))->data)))), (__ZH_BOP__plus_VecIter_lesschar_greateri64((__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&((&(*v898))->data)))), ((&(*v898))->size)))));
};printf("%s", "reached function end without returning anything lop VecIterRange<char> iter StrR s\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_StrPi64(__ZH_TYPE_Str* v899, i64 v900) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(((v899))->data)), (v900)));
};printf("%s", "reached function end without returning anything op charR .call.at StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_StrPi64(__ZH_TYPE_Str* v901, i64 v902) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(((v901))->data)), (v902)));
};printf("%s", "reached function end without returning anything op charR .call.sub StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_StrPi64(__ZH_TYPE_Str* v903, i64 v904) {{
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((&(((v903))->data)), (v904)));
};printf("%s", "reached function end without returning anything op charP .call.atP StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotpush_back_StrPchar(__ZH_TYPE_Str* v905, char v906){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v905))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v905))->data)), (v906)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v905))->data)), ((char)((u8)0))));
  (*__ZH_LOP__plus_plus_i64R(&(((v905))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_StrP(__ZH_TYPE_Str* v907){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v907))->data))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v907))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v907))->data)), ((char)((u8)0))));
  (*__ZH_LOP__minus_minus_i64R(&(((v907))->size)));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v908) {{
  __ZH_TYPE_Str v909;
  ((v909)=(__ZH_LOP_Str_()));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&((&(v909))->data))));
  while ((((*((char*)(v908))))!=(((char)((u8)0))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v909))->data)), (*((char*)(v908)))));
    ((v908)=((str)((((i64)(v908)))+(((i64)1)))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v909))->data)), ((char)((u8)0))));
  (((&(v909))->size)=((((&((&(v909))->data))->size))-(((i64)1))));
  return (v909);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v909))));
};printf("%s", "reached function end without returning anything lop Str Str str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v910) {{
  __ZH_TYPE_Str v911;
  ((v911)=(__ZH_LOP_Str_()));
  (((&(v911))->data)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&((&(*v910))->data))));
  (((&(v911))->size)=((&(*v910))->size));
  return (v911);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v911))));
};printf("%s", "reached function end without returning anything lop Str Str StrR s\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_len_str(str v912) {{
  i64 v913;
  ((v913)=((i64)0));
  while ((((*((char*)(v912))))!=(((char)((u8)0))))) {
    (*__ZH_LOP__plus_plus_i64R(&(v913)));
    ((v912)=((str)((((i64)(v912)))+(((i64)1)))));
  }
  return (v913);
};printf("%s", "reached function end without returning anything lop i64 len str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v914){
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP((&(*v914))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v915){
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP((&(*v915))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v916, char v917){
  (__ZH_BOP__dotcall_dotpush_back_StrPchar((&(*v916)), (v917)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v918, __ZH_TYPE_Str* v919){
  {
      i64 v922;
      i64 v921;
      __ZH_TYPE_Range_lessi64_greater v920;
      ((v920)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v919))->size))))));
      ((v921)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v920)))));
      ((v922)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v920)))));
      while ((((v922))!=((v921)))) {
        char v923;
        ((v923)=((char)((i8)115)));
        ((v923)=(*__ZH_BOP__dotcall_dotat_StrPi64((&(*v919)), (v922))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v918), (v923)));
        (*__ZH_LOP__plus_plus_i64R(&(v922)));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v924, str v925){
  i64 v926;
  ((v926)=(__ZH_LOP_len_str((v925))));
  {
      i64 v929;
      i64 v928;
      __ZH_TYPE_Range_lessi64_greater v927;
      ((v927)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (v926))))));
      ((v928)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v927)))));
      ((v929)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v927)))));
      while ((((v929))!=((v928)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v924), (__ZH_BOP__dotcall_dotsub_strPi64((&(v925)), (v929)))));
        (*__ZH_LOP__plus_plus_i64R(&(v929)));
      }
    }
}
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v930, __ZH_TYPE_Str* v931) {{
  __ZH_TYPE_Str v932;
  ((v932)=(__ZH_LOP_Str_StrR(&(*v930))));
  (__ZH_BOP__plus_equal_StrRStrR(&(v932), &(*v931)));
  return (v932);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v932))));
};printf("%s", "reached function end without returning anything op Str + StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v933, str v934) {{
  __ZH_TYPE_Str v938;
  __ZH_TYPE_Str v936;
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v936))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v938))));
  return (__ZH_BOP__plus_StrRStrR(&(*(((v936)=(__ZH_LOP_Str_str((v933)))), (&(v936)))), &(*(((v938)=(__ZH_LOP_Str_str((v934)))), (&(v938))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v936))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v938))));
};printf("%s", "reached function end without returning anything op Str + str a str b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v939) {{
  (__ZH_LOP_out_StrR(&(*v939)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v940) {{
  ((__ZH_LOP_put_StrR(&(*v940))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v941, __ZH_TYPE_Str* v942) {{
  ((__ZH_LOP_put_StrR(&(*v942))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o StrR i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v943, __ZH_TYPE_Str* v944) {{
  {
      i64 v947;
      i64 v946;
      __ZH_TYPE_Range_lessi64_greater v945;
      ((v945)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v943))->size), ((&(*v944))->size))))))));
      ((v946)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v945)))));
      ((v947)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v945)))));
      while ((((v947))!=((v946)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v943)), (v947))))<((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v944)), (v947)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v944)), (v947))))<((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v943)), (v947)))))) {
          return ((bool)0);
        }
        (*__ZH_LOP__plus_plus_i64R(&(v947)));
      }
    }
  if (((((&(*v943))->size))<(((&(*v944))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v943))->size))>(((&(*v944))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v948, i64 v949) {{
  __ZH_TYPE_Str v951;
  __ZH_TYPE_Str v950;
  ((v950)=(__ZH_LOP_Str_()));
  ((v951)=(__ZH_LOP_Str_str((v948))));
  {
      i64 v954;
      i64 v953;
      __ZH_TYPE_Range_lessi64_greater v952;
      ((v952)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), (v949))))));
      ((v953)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v952)))));
      ((v954)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v952)))));
      while ((((v954))!=((v953)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v950), &(v951)));
        (*__ZH_LOP__plus_plus_i64R(&(v954)));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v951))));
  return (v950);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v950))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v951))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v950))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v951))));
};printf("%s", "reached function end without returning anything op Str * str s i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v955) {{
  return (__ZH_LOP_Str_str((v955)));
};printf("%s", "reached function end without returning anything lop Str $ str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_up_StrR(__ZH_TYPE_Str* v956){
  {
      __ZH_TYPE_VecIter_lesschar_greater v959;
      __ZH_TYPE_VecIter_lesschar_greater v958;
      __ZH_TYPE_VecIterRange_lesschar_greater v957;
      ((v957)=(__ZH_LOP_iter_StrR(&(*v956))));
      ((v958)=(__ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP((&(v957)))));
      ((v959)=(__ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP((&(v957)))));
      while ((__ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater((v959), (v958)))) {
        if ((__ZH_BOP__equal_equal_charRange_lesschar_greater((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v959))), (__ZH_BOP__dot_dot_equal_charchar((__ZH_LOP_chr_str(((str)"a"))), (__ZH_LOP_chr_str(((str)"z")))))))) {
          ((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v959)))=(((((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v959))))+((__ZH_LOP_chr_str(((str)"A"))))))-((__ZH_LOP_chr_str(((str)"a"))))));
        }
        (__ZH_LOP__plus_plus_VecIter_lesschar_greaterR(&(v959)));
      }
    }
}
void __ZH_LOP_low_StrR(__ZH_TYPE_Str* v960){
  {
      __ZH_TYPE_VecIter_lesschar_greater v963;
      __ZH_TYPE_VecIter_lesschar_greater v962;
      __ZH_TYPE_VecIterRange_lesschar_greater v961;
      ((v961)=(__ZH_LOP_iter_StrR(&(*v960))));
      ((v962)=(__ZH_BOP__dotcall_dotend_VecIterRange_lesschar_greaterP((&(v961)))));
      ((v963)=(__ZH_BOP__dotcall_dotbegin_VecIterRange_lesschar_greaterP((&(v961)))));
      while ((__ZH_BOP__exclamation_equal_VecIter_lesschar_greaterVecIter_lesschar_greater((v963), (v962)))) {
        if ((__ZH_BOP__equal_equal_charRange_lesschar_greater((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v963))), (__ZH_BOP__dot_dot_equal_charchar((__ZH_LOP_chr_str(((str)"A"))), (__ZH_LOP_chr_str(((str)"Z")))))))) {
          ((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v963)))=(((((*__ZH_LOP__asterisk_VecIter_lesschar_greater((v963))))-((__ZH_LOP_chr_str(((str)"A"))))))+((__ZH_LOP_chr_str(((str)"a"))))));
        }
        (__ZH_LOP__plus_plus_VecIter_lesschar_greaterR(&(v963)));
      }
    }
}
__ZH_TYPE_VecIterRange_lesschar_greater __ZH_LOP_iter_str(str v964) {{
  __ZH_TYPE_Str v966;
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v966))));
  return (__ZH_LOP_iter_StrR(&(*(((v966)=(__ZH_LOP_Str_str((v964)))), (&(v966))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v966))));
};printf("%s", "reached function end without returning anything lop VecIterRange<char> iter str s\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_frog_() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
};printf("%s", "reached function end without returning anything lop str frog\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_sqrt_f64(f64 v967) {{
  f64 v968;
  ((v968)=((f64)1.000000));
  {
      i64 v971;
      i64 v970;
      __ZH_TYPE_Range_lessi64_greater v969;
      ((v969)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((i64)10))))));
      ((v970)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v969)))));
      ((v971)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v969)))));
      while ((((v971))!=((v970)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v968), (((((((v968))*((v968))))-((v967))))/(((((f64)2.000000))*((v968)))))));
        (*__ZH_LOP__plus_plus_i64R(&(v971)));
      }
    }
  return (v968);
};printf("%s", "reached function end without returning anything lop f64 sqrt f64 x\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v972, f64 v973) {{
  __ZH_TYPE_V2 v974;
  (((&(v974))->x)=(v972));
  (((&(v974))->y)=(v973));
  return (v974);
};printf("%s", "reached function end without returning anything lop V2 V2 f64 x f64 y\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v975, __ZH_TYPE_V2 v976) {{
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v975))->x), ((&(v976))->x)));
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v975))->y), ((&(v976))->y)));
  return (v975);
};printf("%s", "reached function end without returning anything op V2 + V2 a V2 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v977, __ZH_TYPE_V2 v978) {{
  __ZH_TYPE_V2 v979;
  (((&(v979))->x)=((((((&(v977))->x))*(((&(v978))->x))))-(((((&(v977))->y))*(((&(v978))->y))))));
  (((&(v979))->y)=((((((&(v977))->x))*(((&(v978))->y))))+(((((&(v977))->y))*(((&(v978))->x))))));
  return (v979);
};printf("%s", "reached function end without returning anything op V2 * V2 a V2 b\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v980) {{
  return (__ZH_LOP_sqrt_f64(((((((&(v980))->x))*(((&(v980))->x))))+(((((&(v980))->y))*(((&(v980))->y)))))));
};printf("%s", "reached function end without returning anything lop f64 abs V2 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v981){
  (printf("%f", ((&(v981))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v981))->y)));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v982){
  (printf("%f", ((&(v982))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v982))->y)));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v983) {{
  (__ZH_LOP_out_V2((v983)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v984) {{
  ((__ZH_LOP_put_V2((v984))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v985, __ZH_TYPE_V2 v986) {{
  ((__ZH_LOP_put_V2((v986))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v987) {{
  __ZH_TYPE_Rng v988;
  (((&(v988))->seed)=(v987));
  return (v988);
};printf("%s", "reached function end without returning anything lop Rng Rng i64 seed\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_() {{
  return (__ZH_LOP_Rng_i64(((i64)5323)));
};printf("%s", "reached function end without returning anything lop Rng Rng\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotcall_RngP(__ZH_TYPE_Rng* v989) {{
  ((((v989))->seed)=((((((i64)8253729))*((((v989))->seed))))+(((i64)2396403))));
  return (((((v989))->seed))%(((i64)32767)));
};printf("%s", "reached function end without returning anything op i64 .call.call RngP slf\n"); exit(EXIT_FAILURE);}
int main(int argc, char *argv[]) {
  __ZH_TYPE_Rng v1048;
  __ZH_TYPE_AVLTree_lessi64_greater v1047;
  ((v1047)=(__ZH_LOP_AVLTree_lessi64_greater_()));
  ((v1048)=(__ZH_LOP_Rng_()));
  {
      i64 v1051;
      i64 v1050;
      __ZH_TYPE_Range_lessi64_greater v1049;
      ((v1049)=(__ZH_LOP_iter_Range_lessi64_greater((__ZH_BOP__dot_dot_i64i64(((i64)0), ((i64)10))))));
      ((v1050)=(__ZH_BOP__dotcall_dotend_Range_lessi64_greaterP((&(v1049)))));
      ((v1051)=(__ZH_BOP__dotcall_dotbegin_Range_lessi64_greaterP((&(v1049)))));
      while ((((v1051))!=((v1050)))) {
        __ZH_TYPE_Vec_lessi64_greater v1054;
        i64 v1052;
        ((v1052)=(__ZH_BOP__dotcall_dotcall_RngP((&(v1048)))));
        ((printf("%s", ((str)"inserting "))), (printf("%lld", (v1052))), (printf("%s\n", ((str)":"))));
        (__ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(&(v1047), (v1052)));
        (__ZH_LOP_out_Vec_lessi64_greaterR(&(*(((v1054)=(__ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP((&(v1047))))), (&(v1054))))));
        (__ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP((&(v1047))));
        (printf("%s\n", ((str)"")));
        (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1054))));
        (*__ZH_LOP__plus_plus_i64R(&(v1051)));
      }
    }
}
__ZH_TYPE_AVLNode_lessi64_greater __ZH_LOP_AVLNode_lessi64_greater_i64R(i64* v990) {{
  __ZH_TYPE_AVLNode_lessi64_greater v991;
  (((&(v991))->h)=((i64)1));
  (((&(v991))->val)=(*v990));
  (((&(v991))->lhs)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  (((&(v991))->rhs)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  (((&(v991))->par)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  return (v991);
};printf("%s", "reached function end without returning anything lop AVLNode<i64> AVLNode<i64> i64R val\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP_new_AVLNode_lessi64_greater(__ZH_TYPE_AVLNode_lessi64_greater v992) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v993;
  ((v993)=((__ZH_TYPE_AVLNode_lessi64_greater*)(alloc((sizeof(__ZH_TYPE_AVLNode_lessi64_greater))))));
  ((*(v993))=(v992));
  return (v993);
};printf("%s", "reached function end without returning anything lop AVLNode<i64>P new AVLNode<i64> slf\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v994) {{
  return ((((i64)(v994)))!=(((i64)0)));
};printf("%s", "reached function end without returning anything lop bool !! AVLNode<i64>P ptr\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP__exclamation_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v995) {{
  return ((((i64)(v995)))==(((i64)0)));
};printf("%s", "reached function end without returning anything lop bool ! AVLNode<i64>P ptr\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v996) {{
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP((v996)))) {
    return ((i64)0);
  } else {
    return (((v996))->h);
  }
};printf("%s", "reached function end without returning anything op i64 .call.h AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v997) {{
  return (((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP((((v997))->rhs))))-((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP((((v997))->lhs)))));
};printf("%s", "reached function end without returning anything op i64 .call.bf AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v998){
  ((((v998))->h)=((((i64)1))+((__ZH_LOP_max_i64i64((__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP((((v998))->rhs))), (__ZH_BOP__dotcall_doth_AVLNode_lessi64_greaterP((((v998))->lhs))))))));
}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v999) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v1000;
  ((v1000)=(((v999))->lhs));
  ((((v999))->lhs)=(((v1000))->rhs));
  ((((v1000))->rhs)=(v999));
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
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.rrot AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1001) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v1002;
  ((v1002)=(((v1001))->rhs));
  ((((v1001))->rhs)=(((v1002))->lhs));
  ((((v1002))->lhs)=(v1001));
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v1001))->rhs)))) {
    ((((((v1001))->rhs))->par)=(v1001));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v1001))->lhs)))) {
    ((((((v1001))->lhs))->par)=(v1001));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v1002))->rhs)))) {
    ((((((v1002))->rhs))->par)=(v1002));
  }
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((((v1002))->lhs)))) {
    ((((((v1002))->lhs))->par)=(v1002));
  }
  ((__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP((v1001))), (__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP((v1002))));
  return (v1002);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.lrot AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1003) {{
  (__ZH_BOP__dotcall_dotfix_AVLNode_lessi64_greaterP((v1003)));
  if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP((v1003))))==(((i64)2)))) {
    if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP((((v1003))->rhs))))<(((i64)0)))) {
      ((((v1003))->rhs)=(__ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP((((v1003))->rhs))));
    }
    return (__ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP((v1003)));
  }
 else if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP((v1003))))==((-(((i64)2)))))) {
    if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessi64_greaterP((((v1003))->lhs))))>(((i64)0)))) {
      ((((v1003))->lhs)=(__ZH_BOP__dotcall_dotlrot_AVLNode_lessi64_greaterP((((v1003))->lhs))));
    }
    return (__ZH_BOP__dotcall_dotrrot_AVLNode_lessi64_greaterP((v1003)));
  }
  return (v1003);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.balance AVLNode<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R(__ZH_TYPE_AVLNode_lessi64_greater* v1004, i64* v1005) {{
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP((v1004)))) {
    return (__ZH_LOP_new_AVLNode_lessi64_greater((__ZH_LOP_AVLNode_lessi64_greater_i64R(&(*v1005)))));
  }
 else if ((((*v1005))<((((v1004))->val)))) {
    __ZH_TYPE_AVLNode_lessi64_greater* v1006;
    ((v1006)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R((((v1004))->lhs), &(*v1005))));
    ((((v1004))->lhs)=(v1006));
    ((((v1006))->par)=(v1004));
  }
 else if ((((((v1004))->val))<((*v1005)))) {
    __ZH_TYPE_AVLNode_lessi64_greater* v1007;
    ((v1007)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R((((v1004))->rhs), &(*v1005))));
    ((((v1004))->rhs)=(v1007));
    ((((v1007))->par)=(v1004));
  }
  ((v1004)=(__ZH_BOP__dotcall_dotbalance_AVLNode_lessi64_greaterP((v1004))));
  ((((v1004))->par)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  return (v1004);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.insert AVLNode<i64>P slf i64R val\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R(__ZH_TYPE_AVLNode_lessi64_greater* v1008, i64* v1009) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v1010;
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP((v1008)))) {
    return ((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0));
  }
  ((v1010)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  if ((((*v1009))<((((v1008))->val)))) {
    ((v1010)=(__ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R((((v1008))->lhs), &(*v1009))));
  }
 else if ((((((v1008))->val))<((*v1009)))) {
    ((v1010)=(__ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R((((v1008))->rhs), &(*v1009))));
  } else {
    return (v1008);
  }
  return (v1010);
};printf("%s", "reached function end without returning anything op AVLNode<i64>P .call.sub AVLNode<i64>P slf i64R val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR(__ZH_TYPE_AVLNode_lessi64_greater* v1011, __ZH_TYPE_Str* v1012){
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP((v1011)))) {
    __ZH_TYPE_Str v1014;
    __ZH_TYPE_Str v1013;
    ((printf("%lld\n", (((v1011))->val))), (__ZH_LOP_put_StrR(&(*v1012))), (printf("%s", ((str)"|--"))));
    (((v1013)=(__ZH_LOP_Str_StrR(&(*v1012)))), (__ZH_BOP__plus_equal_StrRstr(&(v1013), ((str)"|  "))));
    (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR((((v1011))->lhs), &(v1013)));
    ((__ZH_LOP_put_StrR(&(*v1012))), (printf("%s", ((str)"'--"))));
    (((v1014)=(__ZH_LOP_Str_StrR(&(*v1012)))), (__ZH_BOP__plus_equal_StrRstr(&(v1014), ((str)"   "))));
    (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR((((v1011))->rhs), &(v1014)));
    (__ZH_BOP__dotcall_dotdtor_StrP((&(v1013))));
    (__ZH_BOP__dotcall_dotdtor_StrP((&(v1014))));
  } else {
    (__ZH_LOP__less_Out((__ZH_ROP__less_str(((str)"null")))));
  }
}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_LOP_AVLIter_lessi64_greater_AVLNode_lessi64_greaterP(__ZH_TYPE_AVLNode_lessi64_greater* v1016) {{
  __ZH_TYPE_AVLIter_lessi64_greater v1017;
  (((&(v1017))->next)=(v1016));
  return (v1017);
};printf("%s", "reached function end without returning anything lop AVLIter<i64> AVLIter<i64> AVLNode<i64>P root\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_AVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1018) {{
  return &((((&(v1018))->next))->val);
};printf("%s", "reached function end without returning anything lop i64R * AVLIter<i64> it\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessi64_greater* __ZH_LOP__plus_plus_AVLIter_lessi64_greaterR(__ZH_TYPE_AVLIter_lessi64_greater* v1019) {{
  __ZH_TYPE_AVLNode_lessi64_greater* v1020;
  ((v1020)=((&(*v1019))->next));
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(((((&(*v1019))->next))->rhs)))) {
    (((&(*v1019))->next)=((((&(*v1019))->next))->rhs));
    while ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(((((&(*v1019))->next))->lhs)))) {
      (((&(*v1019))->next)=((((&(*v1019))->next))->lhs));
    }
    return (v1020);
  }
  while (((bool)1)) {
    if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP(((((&(*v1019))->next))->par)))) {
      (((&(*v1019))->next)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
      return (v1020);
    }
    if (((((i64)((((((&(*v1019))->next))->par))->lhs)))==(((i64)((&(*v1019))->next))))) {
      (((&(*v1019))->next)=((((&(*v1019))->next))->par));
      return (v1020);
    }
    (((&(*v1019))->next)=((((&(*v1019))->next))->par));
  }
};printf("%s", "reached function end without returning anything lop AVLNode<i64>P ++ AVLIter<i64>R slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_equal_AVLIter_lessi64_greaterAVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1021, __ZH_TYPE_AVLIter_lessi64_greater v1022) {{
  return ((((i64)((&(v1021))->next)))!=(((i64)((&(v1022))->next))));
};printf("%s", "reached function end without returning anything op bool != AVLIter<i64> a AVLIter<i64> b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_AVLIterRange_lessi64_greaterP(__ZH_TYPE_AVLIterRange_lessi64_greater* v1026) {{
  return (((v1026))->begin);
};printf("%s", "reached function end without returning anything op AVLIter<i64> .call.begin AVLIterRange<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotend_AVLIterRange_lessi64_greaterP(__ZH_TYPE_AVLIterRange_lessi64_greater* v1027) {{
  return (((v1027))->end);
};printf("%s", "reached function end without returning anything op AVLIter<i64> .call.end AVLIterRange<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIterRange_lessi64_greater __ZH_LOP_AVLIterRange_lessi64_greater_AVLIter_lessi64_greaterAVLIter_lessi64_greater(__ZH_TYPE_AVLIter_lessi64_greater v1028, __ZH_TYPE_AVLIter_lessi64_greater v1029) {{
  __ZH_TYPE_AVLIterRange_lessi64_greater v1030;
  (((&(v1030))->begin)=(v1028));
  (((&(v1030))->end)=(v1029));
  return (v1030);
};printf("%s", "reached function end without returning anything lop AVLIterRange<i64> AVLIterRange<i64> AVLIter<i64> begin AVLIter<i64> end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLTree_lessi64_greater __ZH_LOP_AVLTree_lessi64_greater_() {{
  __ZH_TYPE_AVLTree_lessi64_greater v1015;
  (((&(v1015))->root)=((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0)));
  return (v1015);
};printf("%s", "reached function end without returning anything lop AVLTree<i64> AVLTree<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1023) {{
  __ZH_TYPE_AVLIter_lessi64_greater v1024;
  ((v1024)=(__ZH_LOP_AVLIter_lessi64_greater_AVLNode_lessi64_greaterP((((v1023))->root))));
  if ((__ZH_LOP__exclamation_AVLNode_lessi64_greaterP(((&(v1024))->next)))) {
    return (v1024);
  }
  while ((__ZH_LOP__exclamation_exclamation_AVLNode_lessi64_greaterP(((((&(v1024))->next))->lhs)))) {
    (((&(v1024))->next)=((((&(v1024))->next))->lhs));
  }
  return (v1024);
};printf("%s", "reached function end without returning anything op AVLIter<i64> .call.begin AVLTree<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIter_lessi64_greater __ZH_BOP__dotcall_dotend_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1025) {{
  return (__ZH_LOP_AVLIter_lessi64_greater_AVLNode_lessi64_greaterP(((__ZH_TYPE_AVLNode_lessi64_greater*)((i64)0))));
};printf("%s", "reached function end without returning anything op AVLIter<i64> .call.end AVLTree<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLIterRange_lessi64_greater __ZH_LOP_iter_AVLTree_lessi64_greaterR(__ZH_TYPE_AVLTree_lessi64_greater* v1031) {{
  __ZH_TYPE_AVLIterRange_lessi64_greater v1032;
  (((&(v1032))->begin)=(__ZH_BOP__dotcall_dotbegin_AVLTree_lessi64_greaterP((&(*v1031)))));
  (((&(v1032))->end)=(__ZH_BOP__dotcall_dotend_AVLTree_lessi64_greaterP((&(*v1031)))));
  return (v1032);
};printf("%s", "reached function end without returning anything lop AVLIterRange<i64> iter AVLTree<i64>R slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotinsert_AVLTree_lessi64_greaterPi64(__ZH_TYPE_AVLTree_lessi64_greater* v1033, i64 v1034){
  ((((v1033))->root)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R((((v1033))->root), &(v1034))));
}
i64* __ZH_BOP__dotcall_dotsub_AVLTree_lessi64_greaterPi64(__ZH_TYPE_AVLTree_lessi64_greater* v1035, i64 v1036) {{
  return &((&(*(__ZH_BOP__dotcall_dotsub_AVLNode_lessi64_greaterPi64R((((v1035))->root), &(v1036)))))->val);
};printf("%s", "reached function end without returning anything op i64R .call.sub AVLTree<i64>P slf i64 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_AVLTree_lessi64_greaterRi64(__ZH_TYPE_AVLTree_lessi64_greater* v1037, i64 v1038){
  (((&(*v1037))->root)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessi64_greaterPi64R(((&(*v1037))->root), &(v1038))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1039) {{
  __ZH_TYPE_Vec_lessi64_greater v1040;
  ((v1040)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      __ZH_TYPE_AVLIter_lessi64_greater v1043;
      __ZH_TYPE_AVLIter_lessi64_greater v1042;
      __ZH_TYPE_AVLIterRange_lessi64_greater v1041;
      ((v1041)=(__ZH_LOP_iter_AVLTree_lessi64_greaterR(&(*(v1039)))));
      ((v1042)=(__ZH_BOP__dotcall_dotend_AVLIterRange_lessi64_greaterP((&(v1041)))));
      ((v1043)=(__ZH_BOP__dotcall_dotbegin_AVLIterRange_lessi64_greaterP((&(v1041)))));
      while ((__ZH_BOP__exclamation_equal_AVLIter_lessi64_greaterAVLIter_lessi64_greater((v1043), (v1042)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v1040), (*__ZH_LOP__asterisk_AVLIter_lessi64_greater((v1043)))));
        (__ZH_LOP__plus_plus_AVLIter_lessi64_greaterR(&(v1043)));
      }
    }
  return (v1040);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1040))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.call AVLTree<i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotshow_AVLTree_lessi64_greaterP(__ZH_TYPE_AVLTree_lessi64_greater* v1044){
  __ZH_TYPE_Str v1046;
  (__ZH_BOP__dotcall_dotshow_AVLNode_lessi64_greaterPStrR((((v1044))->root), &(*(((v1046)=(__ZH_LOP_Str_())), (&(v1046))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1046))));
}
