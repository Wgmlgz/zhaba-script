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
struct __PROT_ZH_TYPE_Out;
typedef struct __PROT_ZH_TYPE_Out __ZH_TYPE_Out;
struct __PROT_ZH_TYPE_Range;
typedef struct __PROT_ZH_TYPE_Range __ZH_TYPE_Range;
struct __PROT_ZH_TYPE_Vec_lessi64_greater;
typedef struct __PROT_ZH_TYPE_Vec_lessi64_greater __ZH_TYPE_Vec_lessi64_greater;
struct __PROT_ZH_TYPE_VecIter_lessi64_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lessi64_greater __ZH_TYPE_VecIter_lessi64_greater;
struct __PROT_ZH_TYPE_Vec_lesschar_greater;
typedef struct __PROT_ZH_TYPE_Vec_lesschar_greater __ZH_TYPE_Vec_lesschar_greater;
struct __PROT_ZH_TYPE_VecIter_lesschar_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lesschar_greater __ZH_TYPE_VecIter_lesschar_greater;
struct __PROT_ZH_TYPE_Str;
typedef struct __PROT_ZH_TYPE_Str __ZH_TYPE_Str;
struct __PROT_ZH_TYPE_V2;
typedef struct __PROT_ZH_TYPE_V2 __ZH_TYPE_V2;
struct __PROT_ZH_TYPE_Rng;
typedef struct __PROT_ZH_TYPE_Rng __ZH_TYPE_Rng;
struct __PROT_ZH_TYPE_MapNode_lessi64_spacei64_greater;
typedef struct __PROT_ZH_TYPE_MapNode_lessi64_spacei64_greater __ZH_TYPE_MapNode_lessi64_spacei64_greater;
struct __PROT_ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater;
typedef struct __PROT_ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater;
struct __PROT_ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater;
typedef struct __PROT_ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater __ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater;
struct __PROT_ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater;
typedef struct __PROT_ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater;
struct __PROT_ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater;
typedef struct __PROT_ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater;
struct __PROT_ZH_TYPE_Map_lessi64_spacei64_greater;
typedef struct __PROT_ZH_TYPE_Map_lessi64_spacei64_greater __ZH_TYPE_Map_lessi64_spacei64_greater;

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
struct __PROT_ZH_TYPE_Out {
  bool complex;
};
struct __PROT_ZH_TYPE_Range {
  i64 end;
  i64 begin;
};
struct __PROT_ZH_TYPE_Vec_lessi64_greater {
  i64* head;
  i64 cap;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lessi64_greater {
  i64* ptr;
};
struct __PROT_ZH_TYPE_Vec_lesschar_greater {
  char* head;
  i64 cap;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lesschar_greater {
  char* ptr;
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
struct __PROT_ZH_TYPE_MapNode_lessi64_spacei64_greater {
  i64 val;
  i64 key;
};
struct __PROT_ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater {
  __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* rhs;
  __ZH_TYPE_MapNode_lessi64_spacei64_greater val;
  __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* lhs;
  i64 h;
};
struct __PROT_ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater {
  __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* root;
};
struct __PROT_ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater {
  __ZH_TYPE_MapNode_lessi64_spacei64_greater* head;
  i64 cap;
  i64 size;
};
struct __PROT_ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater {
  __ZH_TYPE_MapNode_lessi64_spacei64_greater* ptr;
};
struct __PROT_ZH_TYPE_Map_lessi64_spacei64_greater {
  __ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater tree;
};
void __ZH_LOP_intOpMaker_();
void __ZH_BOP__plus_equal_i8Ri8(i8* v101, i8 v102);
void __ZH_BOP__minus_equal_i8Ri8(i8* v103, i8 v104);
void __ZH_BOP__slash_equal_i8Ri8(i8* v105, i8 v106);
void __ZH_BOP__percent_equal_i8Ri8(i8* v107, i8 v108);
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v109, i8 v110);
void __ZH_BOP__caret_equal_i8Ri8(i8* v111, i8 v112);
void __ZH_BOP__ampersand_equal_i8Ri8(i8* v113, i8 v114);
void __ZH_BOP__pipe_equal_i8Ri8(i8* v115, i8 v116);
bool __ZH_BOP__percent_percent_i8i8(i8 v117, i8 v118);
bool __ZH_BOP__exclamation_percent_i8i8(i8 v119, i8 v120);
void __ZH_BOP__plus_equal_i16Ri16(i16* v122, i16 v123);
void __ZH_BOP__minus_equal_i16Ri16(i16* v124, i16 v125);
void __ZH_BOP__slash_equal_i16Ri16(i16* v126, i16 v127);
void __ZH_BOP__percent_equal_i16Ri16(i16* v128, i16 v129);
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v130, i16 v131);
void __ZH_BOP__caret_equal_i16Ri16(i16* v132, i16 v133);
void __ZH_BOP__ampersand_equal_i16Ri16(i16* v134, i16 v135);
void __ZH_BOP__pipe_equal_i16Ri16(i16* v136, i16 v137);
bool __ZH_BOP__percent_percent_i16i16(i16 v138, i16 v139);
bool __ZH_BOP__exclamation_percent_i16i16(i16 v140, i16 v141);
void __ZH_BOP__plus_equal_i32Ri32(i32* v143, i32 v144);
void __ZH_BOP__minus_equal_i32Ri32(i32* v145, i32 v146);
void __ZH_BOP__slash_equal_i32Ri32(i32* v147, i32 v148);
void __ZH_BOP__percent_equal_i32Ri32(i32* v149, i32 v150);
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v151, i32 v152);
void __ZH_BOP__caret_equal_i32Ri32(i32* v153, i32 v154);
void __ZH_BOP__ampersand_equal_i32Ri32(i32* v155, i32 v156);
void __ZH_BOP__pipe_equal_i32Ri32(i32* v157, i32 v158);
bool __ZH_BOP__percent_percent_i32i32(i32 v159, i32 v160);
bool __ZH_BOP__exclamation_percent_i32i32(i32 v161, i32 v162);
void __ZH_BOP__plus_equal_i64Ri64(i64* v164, i64 v165);
void __ZH_BOP__minus_equal_i64Ri64(i64* v166, i64 v167);
void __ZH_BOP__slash_equal_i64Ri64(i64* v168, i64 v169);
void __ZH_BOP__percent_equal_i64Ri64(i64* v170, i64 v171);
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v172, i64 v173);
void __ZH_BOP__caret_equal_i64Ri64(i64* v174, i64 v175);
void __ZH_BOP__ampersand_equal_i64Ri64(i64* v176, i64 v177);
void __ZH_BOP__pipe_equal_i64Ri64(i64* v178, i64 v179);
bool __ZH_BOP__percent_percent_i64i64(i64 v180, i64 v181);
bool __ZH_BOP__exclamation_percent_i64i64(i64 v182, i64 v183);
void __ZH_BOP__plus_equal_u8Ru8(u8* v185, u8 v186);
void __ZH_BOP__minus_equal_u8Ru8(u8* v187, u8 v188);
void __ZH_BOP__slash_equal_u8Ru8(u8* v189, u8 v190);
void __ZH_BOP__percent_equal_u8Ru8(u8* v191, u8 v192);
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v193, u8 v194);
void __ZH_BOP__caret_equal_u8Ru8(u8* v195, u8 v196);
void __ZH_BOP__ampersand_equal_u8Ru8(u8* v197, u8 v198);
void __ZH_BOP__pipe_equal_u8Ru8(u8* v199, u8 v200);
bool __ZH_BOP__percent_percent_u8u8(u8 v201, u8 v202);
bool __ZH_BOP__exclamation_percent_u8u8(u8 v203, u8 v204);
void __ZH_BOP__plus_equal_u16Ru16(u16* v206, u16 v207);
void __ZH_BOP__minus_equal_u16Ru16(u16* v208, u16 v209);
void __ZH_BOP__slash_equal_u16Ru16(u16* v210, u16 v211);
void __ZH_BOP__percent_equal_u16Ru16(u16* v212, u16 v213);
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v214, u16 v215);
void __ZH_BOP__caret_equal_u16Ru16(u16* v216, u16 v217);
void __ZH_BOP__ampersand_equal_u16Ru16(u16* v218, u16 v219);
void __ZH_BOP__pipe_equal_u16Ru16(u16* v220, u16 v221);
bool __ZH_BOP__percent_percent_u16u16(u16 v222, u16 v223);
bool __ZH_BOP__exclamation_percent_u16u16(u16 v224, u16 v225);
void __ZH_BOP__plus_equal_u32Ru32(u32* v227, u32 v228);
void __ZH_BOP__minus_equal_u32Ru32(u32* v229, u32 v230);
void __ZH_BOP__slash_equal_u32Ru32(u32* v231, u32 v232);
void __ZH_BOP__percent_equal_u32Ru32(u32* v233, u32 v234);
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v235, u32 v236);
void __ZH_BOP__caret_equal_u32Ru32(u32* v237, u32 v238);
void __ZH_BOP__ampersand_equal_u32Ru32(u32* v239, u32 v240);
void __ZH_BOP__pipe_equal_u32Ru32(u32* v241, u32 v242);
bool __ZH_BOP__percent_percent_u32u32(u32 v243, u32 v244);
bool __ZH_BOP__exclamation_percent_u32u32(u32 v245, u32 v246);
void __ZH_BOP__plus_equal_u64Ru64(u64* v248, u64 v249);
void __ZH_BOP__minus_equal_u64Ru64(u64* v250, u64 v251);
void __ZH_BOP__slash_equal_u64Ru64(u64* v252, u64 v253);
void __ZH_BOP__percent_equal_u64Ru64(u64* v254, u64 v255);
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v256, u64 v257);
void __ZH_BOP__caret_equal_u64Ru64(u64* v258, u64 v259);
void __ZH_BOP__ampersand_equal_u64Ru64(u64* v260, u64 v261);
void __ZH_BOP__pipe_equal_u64Ru64(u64* v262, u64 v263);
bool __ZH_BOP__percent_percent_u64u64(u64 v264, u64 v265);
bool __ZH_BOP__exclamation_percent_u64u64(u64 v266, u64 v267);
i64* __ZH_LOP__plus_plus_i64R(i64* v269);
i64* __ZH_LOP__minus_minus_i64R(i64* v270);
i64 __ZH_ROP__plus_plus_i64R(i64* v271);
i64 __ZH_ROP__minus_minus_i64R(i64* v273);
void __ZH_BOP__plus_equal_f32Rf32(f32* v275, f32 v276);
void __ZH_BOP__minus_equal_f32Rf32(f32* v277, f32 v278);
void __ZH_BOP__slash_equal_f32Rf32(f32* v279, f32 v280);
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v281, f32 v282);
void __ZH_BOP__plus_equal_f64Rf64(f64* v283, f64 v284);
void __ZH_BOP__minus_equal_f64Rf64(f64* v285, f64 v286);
void __ZH_BOP__slash_equal_f64Rf64(f64* v287, f64 v288);
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v289, f64 v290);
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v291, i64 v292);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v295, __ZH_TYPE_Out v296);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v297);
__ZH_TYPE_Out __ZH_ROP__less_str(str v298);
__ZH_TYPE_Out __ZH_LOP__less_str(str v299);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v300, str v301);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v302);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v303, str* v304);
__ZH_TYPE_Out __ZH_ROP__less_char(char v305);
__ZH_TYPE_Out __ZH_LOP__less_char(char v306);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v307, char v308);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v309);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v310, char* v311);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v312);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v313);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v314, i8 v315);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v316);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v317, i8* v318);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v319);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v320);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v321, i16 v322);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v323);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v324, i16* v325);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v326);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v327);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v328, i32 v329);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v330);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v331, i32* v332);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v333);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v334);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v335, i64 v336);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v337);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v338, i64* v339);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v340);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v341);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v342, u8 v343);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v344);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v345, u8* v346);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v347);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v348);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v349, u16 v350);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v351);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v352, u16* v353);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v354);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v355);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v356, u32 v357);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v358);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v359, u32* v360);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v361);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v362);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v363, u64 v364);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v365);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v366, u64* v367);
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v368);
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v369);
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v370, f32 v371);
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v372);
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v373, f32* v374);
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v375);
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v376);
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v377, f64 v378);
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v379);
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v380, f64* v381);
void __ZH_BOP__dotcall_dotnext_i64P(i64* v382);
bool __ZH_BOP__dotcall_dotuneq_i64Pi64(i64* v383, i64 v384);
i64 __ZH_BOP__dotcall_dotbegin_RangeP(__ZH_TYPE_Range* v385);
i64 __ZH_BOP__dotcall_dotend_RangeP(__ZH_TYPE_Range* v386);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v387, i64 v388);
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v390, i64 v391);
i64 __ZH_LOP_rangeMin_();
i64 __ZH_LOP_rangeMax_();
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v392);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v393);
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v394);
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v395);
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v396, i64 v397);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v398);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v399);
bool __ZH_BOP__equal_equal_i64Range(i64 v400, __ZH_TYPE_Range v401);
i8 __ZH_LOP_i8_();
i16 __ZH_LOP_i16_();
i32 __ZH_LOP_i32_();
i64 __ZH_LOP_i64_();
u8 __ZH_LOP_u8_();
u16 __ZH_LOP_u16_();
u32 __ZH_LOP_u32_();
u64 __ZH_LOP_u64_();
char __ZH_LOP_char_();
i64 __ZH_LOP_max_i64i64(i64 v402, i64 v403);
i64 __ZH_LOP_min_i64i64(i64 v404, i64 v405);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v430);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP(__ZH_TYPE_VecIter_lessi64_greater* v432);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterPVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v433, __ZH_TYPE_VecIter_lessi64_greater v434);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v435);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v406, i64 v407);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v408, i64 v409);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v410);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v415);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v420);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v427, i64 v428);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v429);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v436);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v437);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v438);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v439);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v440);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v441);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v447, i64 v448);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v454);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v460, i64 v461);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v462, __ZH_TYPE_Vec_lessi64_greater* v463);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v468, i64 v469);
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v471, i64 v472);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v473);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v474);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v475);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v476);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v477, __ZH_TYPE_Vec_lessi64_greater* v478);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v479, i64 v480);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64(__ZH_TYPE_Vec_lessi64_greater* v481, i64 v482, i64 v483);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPRange(__ZH_TYPE_Vec_lessi64_greater* v489, __ZH_TYPE_Range v490);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v493);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v494, __ZH_TYPE_Vec_lessi64_greater* v495);
void __ZH_LOP_swap_i64Pi64P(i64* v496, i64* v497);
i64* __ZH_LOP_partition_i64Pi64P(i64* v499, i64* v500);
void __ZH_LOP_qsort_i64Pi64P(i64* v504, i64* v505);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v509);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v514);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v515, i64(*v516)(i64*));
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v522, bool(*v523)(i64*));
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v529, i64 v530);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP(__ZH_TYPE_Range* v536);
char __ZH_BOP__dotcall_dotsub_strPi64(str* v542, i64 v543);
str __ZH_LOP_str_();
bool __ZH_BOP__equal_equal_charstr(char v545, str v546);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v571);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP(__ZH_TYPE_VecIter_lesschar_greater* v573);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterPVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v574, __ZH_TYPE_VecIter_lesschar_greater v575);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v576);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v547, i64 v548);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v549, i64 v550);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v551);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v556);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v561);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar(__ZH_TYPE_Vec_lesschar_greater* v568, char v569);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v570);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v577);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v578);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v579);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v580);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v581);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v582);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v588, char v589);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v595);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v601, char v602);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v603, __ZH_TYPE_Vec_lesschar_greater* v604);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v609, char v610);
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v612, char v613);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v614);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v615);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v616);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v617);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v618, __ZH_TYPE_Vec_lesschar_greater* v619);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v620, i64 v621);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64(__ZH_TYPE_Vec_lesschar_greater* v622, i64 v623, i64 v624);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPRange(__ZH_TYPE_Vec_lesschar_greater* v630, __ZH_TYPE_Range v631);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v634);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v635, __ZH_TYPE_Vec_lesschar_greater* v636);
void __ZH_LOP_swap_charPcharP(char* v637, char* v638);
char* __ZH_LOP_partition_charPcharP(char* v640, char* v641);
void __ZH_LOP_qsort_charPcharP(char* v645, char* v646);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v650);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v655);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotmap_Vec_lesschar_greaterPF_lesschar_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v656, char(*v657)(char*));
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotfilter_Vec_lesschar_greaterPF_lessbool_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v663, bool(*v664)(char*));
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP(__ZH_TYPE_Str* v671);
str __ZH_BOP__dotcall_dotcstr_StrP(__ZH_TYPE_Str* v672);
char* __ZH_BOP__dotcall_dotat_StrPi64(__ZH_TYPE_Str* v674, i64 v675);
char* __ZH_BOP__dotcall_dotsub_StrPi64(__ZH_TYPE_Str* v676, i64 v677);
char* __ZH_BOP__dotcall_dotatP_StrPi64(__ZH_TYPE_Str* v678, i64 v679);
void __ZH_BOP__dotcall_dotpush_back_StrPchar(__ZH_TYPE_Str* v680, char v681);
void __ZH_BOP__dotcall_dotpop_back_StrP(__ZH_TYPE_Str* v682);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v683);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v685);
i64 __ZH_LOP_len_str(str v687);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v689);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v690);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v691, char v692);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v693, __ZH_TYPE_Str* v694);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v700, str v701);
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v707, __ZH_TYPE_Str* v708);
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v710, str v711);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v716);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v717);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v718, __ZH_TYPE_Str* v719);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v720, __ZH_TYPE_Str* v721);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v726, i64 v727);
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v734);
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v735);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v741, f64 v742);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v744, __ZH_TYPE_V2 v745);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v746, __ZH_TYPE_V2 v747);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v749);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v750);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v751);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v752);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v753);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v754, __ZH_TYPE_V2 v755);
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v756);
__ZH_TYPE_Rng __ZH_LOP_Rng_();
i64 __ZH_BOP__dotcall_dotcall_RngP(__ZH_TYPE_Rng* v758);
int main(int argc, char *argv[]) ;
__ZH_TYPE_MapNode_lessi64_spacei64_greater __ZH_LOP_MapNode_lessi64_spacei64_greater_i64Ri64R(i64* v762, i64* v763);
__ZH_TYPE_MapNode_lessi64_spacei64_greater __ZH_LOP_MapNode_lessi64_spacei64_greater_();
bool __ZH_BOP__less_MapNode_lessi64_spacei64_greaterRMapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v769, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v770);
void __ZH_LOP_put_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v771);
void __ZH_LOP_out_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v772);
__ZH_TYPE_Out __ZH_ROP__less_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v773);
__ZH_TYPE_Out __ZH_LOP__less_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v774);
__ZH_TYPE_Out __ZH_BOP__less_OutMapNode_lessi64_spacei64_greaterR(__ZH_TYPE_Out v775, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v776);
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_AVLNode_lessMapNode_lessi64_spacei64_greater_greater_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v777);
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_LOP_new_AVLNode_lessMapNode_lessi64_spacei64_greater_greater(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater v779);
bool __ZH_LOP__exclamation_exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v781);
bool __ZH_LOP__exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v782);
i64 __ZH_BOP__dotcall_doth_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v783);
i64 __ZH_BOP__dotcall_dotbf_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v784);
void __ZH_BOP__dotcall_dotfix_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v785);
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotrrot_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v786);
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotlrot_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v788);
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotbalance_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v790);
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotinsert_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v791, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v792);
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotsub_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v793, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v794);
void __ZH_BOP__dotcall_dotshow_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPStrR(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v796, __ZH_TYPE_Str* v797);
__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_VecIter_lessMapNode_lessi64_spacei64_greater_greater_MapNode_lessi64_spacei64_greaterP(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v831);
void __ZH_BOP__dotcall_dotnext_VecIter_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater* v833);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessMapNode_lessi64_spacei64_greater_greaterPVecIter_lessMapNode_lessi64_spacei64_greater_greater(__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater* v834, __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v835);
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_LOP__asterisk_VecIter_lessMapNode_lessi64_spacei64_greater_greater(__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v836);
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotatP_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v807, i64 v808);
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v809, i64 v810);
void __ZH_BOP__dotcall_dotprint_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v811);
void __ZH_BOP__dotcall_dotprintln_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v816);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v821);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v828, __ZH_TYPE_MapNode_lessi64_spacei64_greater v829);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v830);
__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotbegin_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v837);
__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotend_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v838);
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotfront_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v839);
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotback_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v840);
void __ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v841);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64(i64 v842);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64MapNode_lessi64_spacei64_greater(i64 v848, __ZH_TYPE_MapNode_lessi64_spacei64_greater v849);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_();
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v855);
void __ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v861, __ZH_TYPE_MapNode_lessi64_spacei64_greater v862);
void __ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRVec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v863, __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v864);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__comma_comma_MapNode_lessi64_spacei64_greaterMapNode_lessi64_spacei64_greater(__ZH_TYPE_MapNode_lessi64_spacei64_greater v869, __ZH_TYPE_MapNode_lessi64_spacei64_greater v870);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__comma_comma_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v872, __ZH_TYPE_MapNode_lessi64_spacei64_greater v873);
void __ZH_LOP_put_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v874);
void __ZH_LOP_out_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v875);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v876);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v877);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Out v878, __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v879);
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v880, i64 v881);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64i64(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v882, i64 v883, i64 v884);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPRange(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v890, __ZH_TYPE_Range v891);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v894);
bool __ZH_BOP__less_Vec_lessMapNode_lessi64_spacei64_greater_greaterRVec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v895, __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v896);
void __ZH_LOP_swap_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v897, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v898);
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_LOP_partition_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v900, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v901);
void __ZH_LOP_qsort_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v905, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v906);
void __ZH_BOP__dotcall_dotsort_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v910);
void __ZH_LOP_sort_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v915);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotmap_Vec_lessMapNode_lessi64_spacei64_greater_greaterPF_lessMapNode_lessi64_spacei64_greater_spaceMapNode_lessi64_spacei64_greaterR_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v916, __ZH_TYPE_MapNode_lessi64_spacei64_greater(*v917)(__ZH_TYPE_MapNode_lessi64_spacei64_greater*));
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotfilter_Vec_lessMapNode_lessi64_spacei64_greater_greaterPF_lessbool_spaceMapNode_lessi64_spacei64_greaterR_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v923, bool(*v924)(__ZH_TYPE_MapNode_lessi64_spacei64_greater*));
__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_AVLTree_lessMapNode_lessi64_spacei64_greater_greater_();
void __ZH_BOP__dotcall_dotinsert_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v801, __ZH_TYPE_MapNode_lessi64_spacei64_greater v802);
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotsub_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v803, __ZH_TYPE_MapNode_lessi64_spacei64_greater v804);
void __ZH_BOP__plus_equal_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v805, __ZH_TYPE_MapNode_lessi64_spacei64_greater v806);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* __ZH_LOP_toVec_Vec_lessMapNode_lessi64_spacei64_greater_greaterRAVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v930, __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v931);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotcall_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v932);
void __ZH_BOP__dotcall_dotshow_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v934);
__ZH_TYPE_Map_lessi64_spacei64_greater __ZH_LOP_Map_lessi64_spacei64_greater_();
i64* __ZH_BOP__dotcall_dotsub_Map_lessi64_spacei64_greaterPi64R(__ZH_TYPE_Map_lessi64_spacei64_greater* v938, i64* v939);
void __ZH_BOP__dotcall_dotinsert_Map_lessi64_spacei64_greaterPi64Ri64R(__ZH_TYPE_Map_lessi64_spacei64_greater* v942, i64* v943, i64* v944);
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotcall_Map_lessi64_spacei64_greaterP(__ZH_TYPE_Map_lessi64_spacei64_greater* v946);
void __ZH_BOP__dotcall_dotprint_Map_lessi64_spacei64_greaterP(__ZH_TYPE_Map_lessi64_spacei64_greater* v948);
void __ZH_LOP_put_Map_lessi64_spacei64_greaterR(__ZH_TYPE_Map_lessi64_spacei64_greater* v954);
void __ZH_LOP_out_Map_lessi64_spacei64_greaterR(__ZH_TYPE_Map_lessi64_spacei64_greater* v955);
__ZH_TYPE_Out __ZH_ROP__less_Map_lessi64_spacei64_greaterR(__ZH_TYPE_Map_lessi64_spacei64_greater* v956);
__ZH_TYPE_Out __ZH_LOP__less_Map_lessi64_spacei64_greaterR(__ZH_TYPE_Map_lessi64_spacei64_greater* v957);
__ZH_TYPE_Out __ZH_BOP__less_OutMap_lessi64_spacei64_greaterR(__ZH_TYPE_Out v958, __ZH_TYPE_Map_lessi64_spacei64_greater* v959);

void __ZH_LOP_intOpMaker_(){
  __ZH_TYPE_IntOpMaker_lessu64_greater v268;
  __ZH_TYPE_IntOpMaker_lessu32_greater v247;
  __ZH_TYPE_IntOpMaker_lessu16_greater v226;
  __ZH_TYPE_IntOpMaker_lessu8_greater v205;
  __ZH_TYPE_IntOpMaker_lessi32_greater v163;
  __ZH_TYPE_IntOpMaker_lessi16_greater v142;
  __ZH_TYPE_IntOpMaker_lessi64_greater v184;
  __ZH_TYPE_IntOpMaker_lessi8_greater v121;
}
void __ZH_BOP__plus_equal_i8Ri8(i8* v101, i8 v102){
  ((*v101)=(((*v101))+((v102))));
}
void __ZH_BOP__minus_equal_i8Ri8(i8* v103, i8 v104){
  ((*v103)=(((*v103))-((v104))));
}
void __ZH_BOP__slash_equal_i8Ri8(i8* v105, i8 v106){
  ((*v105)=(((*v105))/((v106))));
}
void __ZH_BOP__percent_equal_i8Ri8(i8* v107, i8 v108){
  ((*v107)=(((*v107))%((v108))));
}
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v109, i8 v110){
  ((*v109)=(((*v109))*((v110))));
}
void __ZH_BOP__caret_equal_i8Ri8(i8* v111, i8 v112){
  ((*v111)=(((*v111))^((v112))));
}
void __ZH_BOP__ampersand_equal_i8Ri8(i8* v113, i8 v114){
  ((*v113)=(((*v113))&((v114))));
}
void __ZH_BOP__pipe_equal_i8Ri8(i8* v115, i8 v116){
  ((*v115)=(((*v115))|((v116))));
}
bool __ZH_BOP__percent_percent_i8i8(i8 v117, i8 v118) {{
  return (!((((v117))%((v118)))));
};printf("%s", "reached function end without returning anything op bool %% i8 a i8 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i8i8(i8 v119, i8 v120) {{
  return (!((__ZH_BOP__percent_percent_i8i8((v119), (v120)))));
};printf("%s", "reached function end without returning anything op bool !% i8 a i8 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i16Ri16(i16* v122, i16 v123){
  ((*v122)=(((*v122))+((v123))));
}
void __ZH_BOP__minus_equal_i16Ri16(i16* v124, i16 v125){
  ((*v124)=(((*v124))-((v125))));
}
void __ZH_BOP__slash_equal_i16Ri16(i16* v126, i16 v127){
  ((*v126)=(((*v126))/((v127))));
}
void __ZH_BOP__percent_equal_i16Ri16(i16* v128, i16 v129){
  ((*v128)=(((*v128))%((v129))));
}
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v130, i16 v131){
  ((*v130)=(((*v130))*((v131))));
}
void __ZH_BOP__caret_equal_i16Ri16(i16* v132, i16 v133){
  ((*v132)=(((*v132))^((v133))));
}
void __ZH_BOP__ampersand_equal_i16Ri16(i16* v134, i16 v135){
  ((*v134)=(((*v134))&((v135))));
}
void __ZH_BOP__pipe_equal_i16Ri16(i16* v136, i16 v137){
  ((*v136)=(((*v136))|((v137))));
}
bool __ZH_BOP__percent_percent_i16i16(i16 v138, i16 v139) {{
  return (!((((v138))%((v139)))));
};printf("%s", "reached function end without returning anything op bool %% i16 a i16 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i16i16(i16 v140, i16 v141) {{
  return (!((__ZH_BOP__percent_percent_i16i16((v140), (v141)))));
};printf("%s", "reached function end without returning anything op bool !% i16 a i16 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i32Ri32(i32* v143, i32 v144){
  ((*v143)=(((*v143))+((v144))));
}
void __ZH_BOP__minus_equal_i32Ri32(i32* v145, i32 v146){
  ((*v145)=(((*v145))-((v146))));
}
void __ZH_BOP__slash_equal_i32Ri32(i32* v147, i32 v148){
  ((*v147)=(((*v147))/((v148))));
}
void __ZH_BOP__percent_equal_i32Ri32(i32* v149, i32 v150){
  ((*v149)=(((*v149))%((v150))));
}
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v151, i32 v152){
  ((*v151)=(((*v151))*((v152))));
}
void __ZH_BOP__caret_equal_i32Ri32(i32* v153, i32 v154){
  ((*v153)=(((*v153))^((v154))));
}
void __ZH_BOP__ampersand_equal_i32Ri32(i32* v155, i32 v156){
  ((*v155)=(((*v155))&((v156))));
}
void __ZH_BOP__pipe_equal_i32Ri32(i32* v157, i32 v158){
  ((*v157)=(((*v157))|((v158))));
}
bool __ZH_BOP__percent_percent_i32i32(i32 v159, i32 v160) {{
  return (!((((v159))%((v160)))));
};printf("%s", "reached function end without returning anything op bool %% i32 a i32 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i32i32(i32 v161, i32 v162) {{
  return (!((__ZH_BOP__percent_percent_i32i32((v161), (v162)))));
};printf("%s", "reached function end without returning anything op bool !% i32 a i32 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i64Ri64(i64* v164, i64 v165){
  ((*v164)=(((*v164))+((v165))));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v166, i64 v167){
  ((*v166)=(((*v166))-((v167))));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v168, i64 v169){
  ((*v168)=(((*v168))/((v169))));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v170, i64 v171){
  ((*v170)=(((*v170))%((v171))));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v172, i64 v173){
  ((*v172)=(((*v172))*((v173))));
}
void __ZH_BOP__caret_equal_i64Ri64(i64* v174, i64 v175){
  ((*v174)=(((*v174))^((v175))));
}
void __ZH_BOP__ampersand_equal_i64Ri64(i64* v176, i64 v177){
  ((*v176)=(((*v176))&((v177))));
}
void __ZH_BOP__pipe_equal_i64Ri64(i64* v178, i64 v179){
  ((*v178)=(((*v178))|((v179))));
}
bool __ZH_BOP__percent_percent_i64i64(i64 v180, i64 v181) {{
  return (!((((v180))%((v181)))));
};printf("%s", "reached function end without returning anything op bool %% i64 a i64 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i64i64(i64 v182, i64 v183) {{
  return (!((__ZH_BOP__percent_percent_i64i64((v182), (v183)))));
};printf("%s", "reached function end without returning anything op bool !% i64 a i64 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u8Ru8(u8* v185, u8 v186){
  ((*v185)=(((*v185))+((v186))));
}
void __ZH_BOP__minus_equal_u8Ru8(u8* v187, u8 v188){
  ((*v187)=(((*v187))-((v188))));
}
void __ZH_BOP__slash_equal_u8Ru8(u8* v189, u8 v190){
  ((*v189)=(((*v189))/((v190))));
}
void __ZH_BOP__percent_equal_u8Ru8(u8* v191, u8 v192){
  ((*v191)=(((*v191))%((v192))));
}
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v193, u8 v194){
  ((*v193)=(((*v193))*((v194))));
}
void __ZH_BOP__caret_equal_u8Ru8(u8* v195, u8 v196){
  ((*v195)=(((*v195))^((v196))));
}
void __ZH_BOP__ampersand_equal_u8Ru8(u8* v197, u8 v198){
  ((*v197)=(((*v197))&((v198))));
}
void __ZH_BOP__pipe_equal_u8Ru8(u8* v199, u8 v200){
  ((*v199)=(((*v199))|((v200))));
}
bool __ZH_BOP__percent_percent_u8u8(u8 v201, u8 v202) {{
  return (!((((v201))%((v202)))));
};printf("%s", "reached function end without returning anything op bool %% u8 a u8 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u8u8(u8 v203, u8 v204) {{
  return (!((__ZH_BOP__percent_percent_u8u8((v203), (v204)))));
};printf("%s", "reached function end without returning anything op bool !% u8 a u8 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u16Ru16(u16* v206, u16 v207){
  ((*v206)=(((*v206))+((v207))));
}
void __ZH_BOP__minus_equal_u16Ru16(u16* v208, u16 v209){
  ((*v208)=(((*v208))-((v209))));
}
void __ZH_BOP__slash_equal_u16Ru16(u16* v210, u16 v211){
  ((*v210)=(((*v210))/((v211))));
}
void __ZH_BOP__percent_equal_u16Ru16(u16* v212, u16 v213){
  ((*v212)=(((*v212))%((v213))));
}
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v214, u16 v215){
  ((*v214)=(((*v214))*((v215))));
}
void __ZH_BOP__caret_equal_u16Ru16(u16* v216, u16 v217){
  ((*v216)=(((*v216))^((v217))));
}
void __ZH_BOP__ampersand_equal_u16Ru16(u16* v218, u16 v219){
  ((*v218)=(((*v218))&((v219))));
}
void __ZH_BOP__pipe_equal_u16Ru16(u16* v220, u16 v221){
  ((*v220)=(((*v220))|((v221))));
}
bool __ZH_BOP__percent_percent_u16u16(u16 v222, u16 v223) {{
  return (!((((v222))%((v223)))));
};printf("%s", "reached function end without returning anything op bool %% u16 a u16 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u16u16(u16 v224, u16 v225) {{
  return (!((__ZH_BOP__percent_percent_u16u16((v224), (v225)))));
};printf("%s", "reached function end without returning anything op bool !% u16 a u16 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u32Ru32(u32* v227, u32 v228){
  ((*v227)=(((*v227))+((v228))));
}
void __ZH_BOP__minus_equal_u32Ru32(u32* v229, u32 v230){
  ((*v229)=(((*v229))-((v230))));
}
void __ZH_BOP__slash_equal_u32Ru32(u32* v231, u32 v232){
  ((*v231)=(((*v231))/((v232))));
}
void __ZH_BOP__percent_equal_u32Ru32(u32* v233, u32 v234){
  ((*v233)=(((*v233))%((v234))));
}
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v235, u32 v236){
  ((*v235)=(((*v235))*((v236))));
}
void __ZH_BOP__caret_equal_u32Ru32(u32* v237, u32 v238){
  ((*v237)=(((*v237))^((v238))));
}
void __ZH_BOP__ampersand_equal_u32Ru32(u32* v239, u32 v240){
  ((*v239)=(((*v239))&((v240))));
}
void __ZH_BOP__pipe_equal_u32Ru32(u32* v241, u32 v242){
  ((*v241)=(((*v241))|((v242))));
}
bool __ZH_BOP__percent_percent_u32u32(u32 v243, u32 v244) {{
  return (!((((v243))%((v244)))));
};printf("%s", "reached function end without returning anything op bool %% u32 a u32 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u32u32(u32 v245, u32 v246) {{
  return (!((__ZH_BOP__percent_percent_u32u32((v245), (v246)))));
};printf("%s", "reached function end without returning anything op bool !% u32 a u32 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u64Ru64(u64* v248, u64 v249){
  ((*v248)=(((*v248))+((v249))));
}
void __ZH_BOP__minus_equal_u64Ru64(u64* v250, u64 v251){
  ((*v250)=(((*v250))-((v251))));
}
void __ZH_BOP__slash_equal_u64Ru64(u64* v252, u64 v253){
  ((*v252)=(((*v252))/((v253))));
}
void __ZH_BOP__percent_equal_u64Ru64(u64* v254, u64 v255){
  ((*v254)=(((*v254))%((v255))));
}
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v256, u64 v257){
  ((*v256)=(((*v256))*((v257))));
}
void __ZH_BOP__caret_equal_u64Ru64(u64* v258, u64 v259){
  ((*v258)=(((*v258))^((v259))));
}
void __ZH_BOP__ampersand_equal_u64Ru64(u64* v260, u64 v261){
  ((*v260)=(((*v260))&((v261))));
}
void __ZH_BOP__pipe_equal_u64Ru64(u64* v262, u64 v263){
  ((*v262)=(((*v262))|((v263))));
}
bool __ZH_BOP__percent_percent_u64u64(u64 v264, u64 v265) {{
  return (!((((v264))%((v265)))));
};printf("%s", "reached function end without returning anything op bool %% u64 a u64 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u64u64(u64 v266, u64 v267) {{
  return (!((__ZH_BOP__percent_percent_u64u64((v266), (v267)))));
};printf("%s", "reached function end without returning anything op bool !% u64 a u64 b\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__plus_plus_i64R(i64* v269) {{
  (__ZH_BOP__plus_equal_i64Ri64(&(*v269), ((i64)1)));
  return &(*v269);
};printf("%s", "reached function end without returning anything lop i64R ++ i64R x\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__minus_minus_i64R(i64* v270) {{
  (__ZH_BOP__minus_equal_i64Ri64(&(*v270), ((i64)1)));
  return &(*v270);
};printf("%s", "reached function end without returning anything lop i64R -- i64R x\n"); exit(EXIT_FAILURE);}
i64 __ZH_ROP__plus_plus_i64R(i64* v271) {{
  i64 v272;
  ((v272)=(*v271));
  (__ZH_BOP__plus_equal_i64Ri64(&(*v271), ((i64)1)));
  return (v272);
};printf("%s", "reached function end without returning anything rop i64 ++ i64R x\n"); exit(EXIT_FAILURE);}
i64 __ZH_ROP__minus_minus_i64R(i64* v273) {{
  i64 v274;
  ((v274)=(*v273));
  (__ZH_BOP__minus_equal_i64Ri64(&(*v273), ((i64)1)));
  return (v274);
};printf("%s", "reached function end without returning anything rop i64 -- i64R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f32Rf32(f32* v275, f32 v276){
  ((*v275)=(((*v275))+((v276))));
}
void __ZH_BOP__minus_equal_f32Rf32(f32* v277, f32 v278){
  ((*v277)=(((*v277))-((v278))));
}
void __ZH_BOP__slash_equal_f32Rf32(f32* v279, f32 v280){
  ((*v279)=(((*v279))/((v280))));
}
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v281, f32 v282){
  ((*v281)=(((*v281))*((v282))));
}
void __ZH_BOP__plus_equal_f64Rf64(f64* v283, f64 v284){
  ((*v283)=(((*v283))+((v284))));
}
void __ZH_BOP__minus_equal_f64Rf64(f64* v285, f64 v286){
  ((*v285)=(((*v285))-((v286))));
}
void __ZH_BOP__slash_equal_f64Rf64(f64* v287, f64 v288){
  ((*v287)=(((*v287))/((v288))));
}
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v289, f64 v290){
  ((*v289)=(((*v289))*((v290))));
}
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v291, i64 v292) {{
  i64 v293;
  ((v293)=((i64)1));
  while ((((v292))!=(((i64)0)))) {
    if ((__ZH_BOP__exclamation_percent_i64i64((v292), ((i64)2)))) {
      (__ZH_BOP__asterisk_equal_i64Ri64(&(v293), (v291)));
    }
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v291), (v291)));
    (__ZH_BOP__slash_equal_i64Ri64(&(v292), ((i64)2)));
  }
  return (v293);
};printf("%s", "reached function end without returning anything op i64 ** i64 a i64 n\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP_Out_() {{
  __ZH_TYPE_Out v294;
  return (v294);
};printf("%s", "reached function end without returning anything lop Out Out\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v295, __ZH_TYPE_Out v296) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out a Out b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v297) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Out o\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_str(str v298) {{
  (printf("%s\n", (v298)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_str(str v299) {{
  ((printf("%s", (v299))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v300, str v301) {{
  ((printf("%s", (v301))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v302) {{
  ((*v302)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v303, str* v304) {{
  ((*v304)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_char(char v305) {{
  (printf("%c\n", (v305)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_char(char v306) {{
  ((printf("%c", (v306))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v307, char v308) {{
  ((printf("%c", (v308))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v309) {{
  ((*v309)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v310, char* v311) {{
  ((*v311)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v312) {{
  (printf("%d\n", (v312)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v313) {{
  ((printf("%d", (v313))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v314, i8 v315) {{
  ((printf("%d", (v315))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v316) {{
  ((*v316)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v317, i8* v318) {{
  ((*v318)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v319) {{
  (printf("%hd\n", (v319)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v320) {{
  ((printf("%hd", (v320))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v321, i16 v322) {{
  ((printf("%hd", (v322))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v323) {{
  ((*v323)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v324, i16* v325) {{
  ((*v325)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v326) {{
  (printf("%d\n", (v326)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v327) {{
  ((printf("%d", (v327))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v328, i32 v329) {{
  ((printf("%d", (v329))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v330) {{
  ((*v330)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v331, i32* v332) {{
  ((*v332)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v333) {{
  (printf("%lld\n", (v333)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v334) {{
  ((printf("%lld", (v334))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v335, i64 v336) {{
  ((printf("%lld", (v336))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v337) {{
  ((*v337)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v338, i64* v339) {{
  ((*v339)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v340) {{
  (printf("%d\n", (v340)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v341) {{
  ((printf("%d", (v341))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v342, u8 v343) {{
  ((printf("%d", (v343))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v344) {{
  ((*v344)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v345, u8* v346) {{
  ((*v346)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v347) {{
  (printf("%hd\n", (v347)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v348) {{
  ((printf("%hd", (v348))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v349, u16 v350) {{
  ((printf("%hd", (v350))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v351) {{
  ((*v351)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v352, u16* v353) {{
  ((*v353)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v354) {{
  (printf("%u\n", (v354)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v355) {{
  ((printf("%u", (v355))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v356, u32 v357) {{
  ((printf("%u", (v357))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v358) {{
  ((*v358)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v359, u32* v360) {{
  ((*v360)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v361) {{
  (printf("%llu\n", (v361)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v362) {{
  ((printf("%llu", (v362))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v363, u64 v364) {{
  ((printf("%llu", (v364))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v365) {{
  ((*v365)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v366, u64* v367) {{
  ((*v367)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v368) {{
  (printf("%f\n", (v368)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v369) {{
  ((printf("%f", (v369))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v370, f32 v371) {{
  ((printf("%f", (v371))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v372) {{
  ((*v372)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v373, f32* v374) {{
  ((*v374)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v375) {{
  (printf("%f\n", (v375)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v376) {{
  ((printf("%f", (v376))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v377, f64 v378) {{
  ((printf("%f", (v378))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v379) {{
  ((*v379)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v380, f64* v381) {{
  ((*v381)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f64R i\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_i64P(i64* v382){
  ((*(v382))=(((*(v382)))+(((i64)1))));
}
bool __ZH_BOP__dotcall_dotuneq_i64Pi64(i64* v383, i64 v384) {{
  return (((*(v383)))!=((v384)));
};printf("%s", "reached function end without returning anything op bool .call.uneq i64P slf i64 other\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbegin_RangeP(__ZH_TYPE_Range* v385) {{
  return (((v385))->begin);
};printf("%s", "reached function end without returning anything op i64 .call.begin RangeP slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotend_RangeP(__ZH_TYPE_Range* v386) {{
  return (((v386))->end);
};printf("%s", "reached function end without returning anything op i64 .call.end RangeP slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v387, i64 v388) {{
  __ZH_TYPE_Range v389;
  (((&(v389))->begin)=(v387));
  (((&(v389))->end)=(v388));
  return (v389);
};printf("%s", "reached function end without returning anything op Range .. i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v390, i64 v391) {{
  return (__ZH_BOP__dot_dot_i64i64((v390), (-((v391)))));
};printf("%s", "reached function end without returning anything op Range ..- i64 begin i64 end\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMin_() {{
  return (-(((i64)9223372036854775807)));
};printf("%s", "reached function end without returning anything lop i64 rangeMin\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMax_() {{
  return ((i64)9223372036854775807);
};printf("%s", "reached function end without returning anything lop i64 rangeMax\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v392) {{
  return (__ZH_BOP__dot_dot_i64i64((v392), (__ZH_LOP_rangeMax_())));
};printf("%s", "reached function end without returning anything rop Range .. i64 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v393) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v393)));
};printf("%s", "reached function end without returning anything lop Range .. i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v394) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (-((v394)))));
};printf("%s", "reached function end without returning anything lop Range ..- i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v395) {{
  return (__ZH_BOP__dot_dot_i64i64((-(((&(v395))->begin))), ((&(v395))->end)));
};printf("%s", "reached function end without returning anything lop Range - Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v396, i64 v397) {{
  return (__ZH_BOP__dot_dot_i64i64((v396), (((v397))+(((i64)1)))));
};printf("%s", "reached function end without returning anything op Range ..= i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v398) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v398))+(((i64)1)))));
};printf("%s", "reached function end without returning anything lop Range ..= i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v399) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((-((v399))))+(((i64)1)))));
};printf("%s", "reached function end without returning anything lop Range ..=- i64 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i64Range(i64 v400, __ZH_TYPE_Range v401) {{
  if (((((&(v401))->begin))<(((&(v401))->end)))) {
    return ((((((&(v401))->begin))<=((v400))))&&((((v400))<(((&(v401))->end)))));
  } else {
    return ((((((&(v401))->end))<=((v400))))&&((((v400))<(((&(v401))->begin)))));
  }
};printf("%s", "reached function end without returning anything op bool == i64 i Range r\n"); exit(EXIT_FAILURE);}
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
i64 __ZH_LOP_max_i64i64(i64 v402, i64 v403) {{
  if ((((v402))>((v403)))) {
    return (v402);
  } else {
    return (v403);
  }
};printf("%s", "reached function end without returning anything lop i64 max i64 a i64 b\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_min_i64i64(i64 v404, i64 v405) {{
  if ((((v404))<((v405)))) {
    return (v404);
  } else {
    return (v405);
  }
};printf("%s", "reached function end without returning anything lop i64 min i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v430) {{
  __ZH_TYPE_VecIter_lessi64_greater v431;
  (((&(v431))->ptr)=(v430));
  return (v431);
};printf("%s", "reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP(__ZH_TYPE_VecIter_lessi64_greater* v432){
  ((((v432))->ptr)=((i64*)((((i64)(((v432))->ptr)))+(((((i64)1))*(((i64)8)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterPVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v433, __ZH_TYPE_VecIter_lessi64_greater v434) {{
  return ((((i64)(((v433))->ptr)))!=(((i64)((&(v434))->ptr))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<i64>P slf VecIter<i64> other\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v435) {{
  return &(*((&(v435))->ptr));
};printf("%s", "reached function end without returning anything lop i64R * VecIter<i64> slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v406, i64 v407) {{
  return ((i64*)((i64*)((((i64)(((v406))->head)))+((((v407))*(((i64)8)))))));
};printf("%s", "reached function end without returning anything op i64P .call.atP Vec<i64>P slf i64 pos\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v408, i64 v409) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v408), (v409))));
};printf("%s", "reached function end without returning anything op i64R .call.at Vec<i64>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v410){
  (printf("%s", ((str)"[")));
  {
      i64 v414;
      i64 v413;
      i64 v412;
      __ZH_TYPE_Range v411;
      ((v411)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v410))->size))));
      ((v412)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v411)))));
      ((v413)=(__ZH_BOP__dotcall_dotend_RangeP((&(v411)))));
      ((v414)=(v412));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v414)), (v413)))) {
        if ((!((!((v414)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v410), (v414))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v414))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v415){
  {
      i64 v419;
      i64 v418;
      i64 v417;
      __ZH_TYPE_Range v416;
      ((v416)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v415))->size))));
      ((v417)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v416)))));
      ((v418)=(__ZH_BOP__dotcall_dotend_RangeP((&(v416)))));
      ((v419)=(v417));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v419)), (v418)))) {
        (printf("%lld\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v415), (v419))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v419))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v420){
  i64 v421;
  ((v421)=(((v420))->cap));
  if ((((v421))==(((i64)0)))) {
    ((v421)=((i64)1));
    ((((v420))->head)=((i64*)(alloc(((i64)8)))));
    ((((v420))->cap)=(v421));
  } else {
    i64* v422;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v421), ((i64)2)));
    ((v422)=((i64*)(alloc((((v421))*(((i64)8)))))));
    {
        i64 v426;
        i64 v425;
        i64 v424;
        __ZH_TYPE_Range v423;
        ((v423)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v420))->size))));
        ((v424)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v423)))));
        ((v425)=(__ZH_BOP__dotcall_dotend_RangeP((&(v423)))));
        ((v426)=(v424));
        while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v426)), (v425)))) {
          ((*((i64*)((((i64)(v422)))+((((v426))*(((i64)8)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v420), (v426))));
          (__ZH_BOP__dotcall_dotnext_i64P((&(v426))));
        }
      }
    (free((void*) ((i64)(((v420))->head))));
    ((((v420))->head)=(v422));
  }
  ((((v420))->cap)=(v421));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v427, i64 v428){
  if ((((((v427))->size))==((((v427))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP((v427)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v427), (((v427))->size)))=(v428));
  (*__ZH_LOP__plus_plus_i64R(&(((v427))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v429){
  (*__ZH_LOP__minus_minus_i64R(&(((v429))->size)));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v436) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((((v436))->head)));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v437) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v437), (((v437))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v438) {{
  return &(*(((v438))->head));
};printf("%s", "reached function end without returning anything op i64R .call.front Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v439) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v439), (((((v439))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op i64R .call.back Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v440){
  if ((!((!(((i64)(((v440))->head))))))) {
    (free((void*) ((i64)(((v440))->head))));
    ((((v440))->size)=((i64)0));
    ((((v440))->cap)=((i64)0));
    ((((v440))->head)=((i64*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v441) {{
  __ZH_TYPE_Vec_lessi64_greater v442;
  (((&(v442))->head)=((i64*)((i64)0)));
  (((&(v442))->size)=((i64)0));
  (((&(v442))->cap)=((i64)0));
  while (((((&(v442))->cap))<((v441)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP((&(v442))));
  }
  (((&(v442))->size)=(v441));
  (((&(v442))->cap)=(v441));
  {
      i64 v446;
      i64 v445;
      i64 v444;
      __ZH_TYPE_Range v443;
      ((v443)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v442))->size))));
      ((v444)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v443)))));
      ((v445)=(__ZH_BOP__dotcall_dotend_RangeP((&(v443)))));
      ((v446)=(v444));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v446)), (v445)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v442)), (v446)))=(__ZH_LOP_i64_()));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v446))));
      }
    }
  return (v442);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v442))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v447, i64 v448) {{
  __ZH_TYPE_Vec_lessi64_greater v449;
  ((v449)=(__ZH_LOP_Vec_lessi64_greater_i64((v447))));
  {
      i64 v453;
      i64 v452;
      i64 v451;
      __ZH_TYPE_Range v450;
      ((v450)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v449))->size))));
      ((v451)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v450)))));
      ((v452)=(__ZH_BOP__dotcall_dotend_RangeP((&(v450)))));
      ((v453)=(v451));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v453)), (v452)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v449)), (v453)))=(v448));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v453))));
      }
    }
  return (v449);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v449))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {{
  return (__ZH_LOP_Vec_lessi64_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v454) {{
  __ZH_TYPE_Vec_lessi64_greater v455;
  ((v455)=(__ZH_LOP_Vec_lessi64_greater_i64(((&(*v454))->size))));
  {
      i64 v459;
      i64 v458;
      i64 v457;
      __ZH_TYPE_Range v456;
      ((v456)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v454))->size))));
      ((v457)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v456)))));
      ((v458)=(__ZH_BOP__dotcall_dotend_RangeP((&(v456)))));
      ((v459)=(v457));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v459)), (v458)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v455)), (v459)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(*v454)), (v459))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v459))));
      }
    }
  return (v455);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v455))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v460, i64 v461){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(*v460)), (v461)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v462, __ZH_TYPE_Vec_lessi64_greater* v463){
  {
      __ZH_TYPE_VecIter_lessi64_greater v467;
      __ZH_TYPE_VecIter_lessi64_greater v466;
      __ZH_TYPE_VecIter_lessi64_greater v465;
      __ZH_TYPE_Vec_lessi64_greater v464;
      ((v464)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v463))));
      ((v465)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((&(v464)))));
      ((v466)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((&(v464)))));
      ((v467)=(v465));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterPVecIter_lessi64_greater((&(v467)), (v466)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(*v462)), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v467)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP((&(v467))));
      }
    }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v468, i64 v469) {{
  __ZH_TYPE_Vec_lessi64_greater v470;
  ((v470)=(__ZH_LOP_Vec_lessi64_greater_()));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v470), (v468)));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v470), (v469)));
  return (v470);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v470))));
};printf("%s", "reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v471, i64 v472) {{
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(*v471), (v472)));
  return &(*v471);
};printf("%s", "reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v473){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP((&(*v473))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v474){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP((&(*v474))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v475) {{
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v475)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v476) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v476))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v477, __ZH_TYPE_Vec_lessi64_greater* v478) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v478))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<i64>R i\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v479, i64 v480) {{
  if ((((v480))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v480), (((v479))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v479), (v480)));
};printf("%s", "reached function end without returning anything op i64R .call.sub Vec<i64>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64(__ZH_TYPE_Vec_lessi64_greater* v481, i64 v482, i64 v483) {{
  __ZH_TYPE_Vec_lessi64_greater v484;
  ((v484)=(__ZH_LOP_Vec_lessi64_greater_i64(((i64)0))));
  {
      i64 v488;
      i64 v487;
      i64 v486;
      __ZH_TYPE_Range v485;
      ((v485)=(__ZH_BOP__dot_dot_i64i64((v482), (v483))));
      ((v486)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v485)))));
      ((v487)=(__ZH_BOP__dotcall_dotend_RangeP((&(v485)))));
      ((v488)=(v486));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v488)), (v487)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(v484)), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v481), (v488)))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v488))));
      }
    }
  return (v484);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v484))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPRange(__ZH_TYPE_Vec_lessi64_greater* v489, __ZH_TYPE_Range v490) {{
  i64 v492;
  i64 v491;
  (((v491)=((&(v490))->begin)), ((v492)=((&(v490))->end)));
  if ((((v491))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v491), (((v489))->size)));
  }
  if ((((v491))<(((i64)0)))) {
    ((v491)=((i64)0));
  }
  if ((((v492))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v492), (((v489))->size)));
  }
  if ((((v492))>((((v489))->size)))) {
    ((v492)=(((v489))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64((v489), (v491), (v492)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v493) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64((v493), ((i64)0), (((v493))->size)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v494, __ZH_TYPE_Vec_lessi64_greater* v495) {{
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_i64Pi64P(i64* v496, i64* v497){
  i64 v498;
  ((v498)=(*(v496)));
  ((*(v496))=(*(v497)));
  ((*(v497))=(v498));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v499, i64* v500) {{
  i64* v503;
  i64* v502;
  i64* v501;
  (((v501)=((i64*)((((i64)(v500)))-(((((i64)1))*(((i64)8))))))), ((v502)=(v499)), ((v503)=(v499)));
  ((v503)=(v499));
  while (((((i64)(v503)))!=(((i64)(v501))))) {
    if ((((*(v503)))<((*(v501))))) {
      (__ZH_LOP_swap_i64Pi64P((v502), (v503)));
      ((v502)=((i64*)((((i64)(v502)))+(((((i64)1))*(((i64)8)))))));
    }
    ((v503)=((i64*)((((i64)(v503)))+(((((i64)1))*(((i64)8)))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v502), (v501)));
  return (v502);
};printf("%s", "reached function end without returning anything lop i64P partition i64P low i64P high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_i64Pi64P(i64* v504, i64* v505){
  i64 v507;
  i64 v506;
  ((v506)=((((i64)(v505)))-(((i64)(v504)))));
  ((v507)=((i64)8));
  if ((((v506))>((v507)))) {
    i64* v508;
    ((v508)=(__ZH_LOP_partition_i64Pi64P((v504), (v505))));
    (__ZH_LOP_qsort_i64Pi64P((v504), (v508)));
    ((v508)=((i64*)((((i64)(v508)))+(((((i64)1))*(((i64)8)))))));
    (__ZH_LOP_qsort_i64Pi64P((v508), (v505)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v509){
  __ZH_TYPE_VecIter_lessi64_greater v513;
  __ZH_TYPE_VecIter_lessi64_greater v511;
  (__ZH_LOP_qsort_i64Pi64P(((&(*(((v511)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((v509)))), (&(v511)))))->ptr), ((&(*(((v513)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((v509)))), (&(v513)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v514){
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP((&(*v514))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v515, i64(*v516)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v517;
  ((v517)=(__ZH_LOP_Vec_lessi64_greater_i64((((v515))->size))));
  {
      i64 v521;
      i64 v520;
      i64 v519;
      __ZH_TYPE_Range v518;
      ((v518)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v515))->size))));
      ((v519)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v518)))));
      ((v520)=(__ZH_BOP__dotcall_dotend_RangeP((&(v518)))));
      ((v521)=(v519));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v521)), (v520)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(v517)), (v521)))=((*(v516))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v515), (v521))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v521))));
      }
    }
  return (v517);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v517))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v522, bool(*v523)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v524;
  ((v524)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      i64 v528;
      i64 v527;
      i64 v526;
      __ZH_TYPE_Range v525;
      ((v525)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v522))->size))));
      ((v526)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v525)))));
      ((v527)=(__ZH_BOP__dotcall_dotend_RangeP((&(v525)))));
      ((v528)=(v526));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v528)), (v527)))) {
        if (((*(v523))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v522), (v528)))))) {
          (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v524), (*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v522), (v528)))));
        }
        (__ZH_BOP__dotcall_dotnext_i64P((&(v528))));
      }
    }
  return (v524);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v524))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v529, i64 v530) {{
  __ZH_TYPE_Vec_lessi64_greater v531;
  ((v531)=(__ZH_LOP_Vec_lessi64_greater_i64((((v530))-((v529))))));
  {
      i64 v535;
      i64 v534;
      i64 v533;
      __ZH_TYPE_Range v532;
      ((v532)=(__ZH_BOP__dot_dot_i64i64((v529), (v530))));
      ((v533)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v532)))));
      ((v534)=(__ZH_BOP__dotcall_dotend_RangeP((&(v532)))));
      ((v535)=(v533));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v535)), (v534)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v531)), (((v535))-((v529)))))=(v535));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v535))));
      }
    }
  return (v531);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v531))));
};printf("%s", "reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP(__ZH_TYPE_Range* v536) {{
  __ZH_TYPE_Vec_lessi64_greater v537;
  ((v537)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      i64 v541;
      i64 v540;
      i64 v539;
      __ZH_TYPE_Range v538;
      ((v538)=(*(v536)));
      ((v539)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v538)))));
      ((v540)=(__ZH_BOP__dotcall_dotend_RangeP((&(v538)))));
      ((v541)=(v539));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v541)), (v540)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v537), (v541)));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v541))));
      }
    }
  return (v537);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v537))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.call RangeP slf\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotsub_strPi64(str* v542, i64 v543) {{
  return (*((char*)((((i64)(*(v542))))+((v543)))));
};printf("%s", "reached function end without returning anything op char .call.sub strP slf i64 pos\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_str_() {{
  u8* v544;
  ((v544)=((u8*)(alloc(((i64)1)))));
  ((*(v544))=((u8)0));
  return ((str)(v544));
};printf("%s", "reached function end without returning anything lop str str\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charstr(char v545, str v546) {{
  return (((v545))==((__ZH_BOP__dotcall_dotsub_strPi64((&(v546)), ((i64)0)))));
};printf("%s", "reached function end without returning anything op bool == char ch str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v571) {{
  __ZH_TYPE_VecIter_lesschar_greater v572;
  (((&(v572))->ptr)=(v571));
  return (v572);
};printf("%s", "reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP(__ZH_TYPE_VecIter_lesschar_greater* v573){
  ((((v573))->ptr)=((char*)((((i64)(((v573))->ptr)))+(((((i64)1))*(((i64)1)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterPVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v574, __ZH_TYPE_VecIter_lesschar_greater v575) {{
  return ((((i64)(((v574))->ptr)))!=(((i64)((&(v575))->ptr))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<char>P slf VecIter<char> other\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v576) {{
  return &(*((&(v576))->ptr));
};printf("%s", "reached function end without returning anything lop charR * VecIter<char> slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v547, i64 v548) {{
  return ((char*)((char*)((((i64)(((v547))->head)))+((((v548))*(((i64)1)))))));
};printf("%s", "reached function end without returning anything op charP .call.atP Vec<char>P slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v549, i64 v550) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v549), (v550))));
};printf("%s", "reached function end without returning anything op charR .call.at Vec<char>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v551){
  (printf("%s", ((str)"[")));
  {
      i64 v555;
      i64 v554;
      i64 v553;
      __ZH_TYPE_Range v552;
      ((v552)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v551))->size))));
      ((v553)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v552)))));
      ((v554)=(__ZH_BOP__dotcall_dotend_RangeP((&(v552)))));
      ((v555)=(v553));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v555)), (v554)))) {
        if ((!((!((v555)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v551), (v555))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v555))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v556){
  {
      i64 v560;
      i64 v559;
      i64 v558;
      __ZH_TYPE_Range v557;
      ((v557)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v556))->size))));
      ((v558)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v557)))));
      ((v559)=(__ZH_BOP__dotcall_dotend_RangeP((&(v557)))));
      ((v560)=(v558));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v560)), (v559)))) {
        (printf("%c\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v556), (v560))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v560))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v561){
  i64 v562;
  ((v562)=(((v561))->cap));
  if ((((v562))==(((i64)0)))) {
    ((v562)=((i64)1));
    ((((v561))->head)=((char*)(alloc(((i64)1)))));
    ((((v561))->cap)=(v562));
  } else {
    char* v563;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v562), ((i64)2)));
    ((v563)=((char*)(alloc((((v562))*(((i64)1)))))));
    {
        i64 v567;
        i64 v566;
        i64 v565;
        __ZH_TYPE_Range v564;
        ((v564)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v561))->size))));
        ((v565)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v564)))));
        ((v566)=(__ZH_BOP__dotcall_dotend_RangeP((&(v564)))));
        ((v567)=(v565));
        while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v567)), (v566)))) {
          ((*((char*)((((i64)(v563)))+((((v567))*(((i64)1)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v561), (v567))));
          (__ZH_BOP__dotcall_dotnext_i64P((&(v567))));
        }
      }
    (free((void*) ((i64)(((v561))->head))));
    ((((v561))->head)=(v563));
  }
  ((((v561))->cap)=(v562));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar(__ZH_TYPE_Vec_lesschar_greater* v568, char v569){
  if ((((((v568))->size))==((((v568))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP((v568)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v568), (((v568))->size)))=(v569));
  (*__ZH_LOP__plus_plus_i64R(&(((v568))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v570){
  (*__ZH_LOP__minus_minus_i64R(&(((v570))->size)));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v577) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((((v577))->head)));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin Vec<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v578) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v578), (((v578))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end Vec<char>P slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v579) {{
  return &(*(((v579))->head));
};printf("%s", "reached function end without returning anything op charR .call.front Vec<char>P slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v580) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v580), (((((v580))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op charR .call.back Vec<char>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v581){
  if ((!((!(((i64)(((v581))->head))))))) {
    (free((void*) ((i64)(((v581))->head))));
    ((((v581))->size)=((i64)0));
    ((((v581))->cap)=((i64)0));
    ((((v581))->head)=((char*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v582) {{
  __ZH_TYPE_Vec_lesschar_greater v583;
  (((&(v583))->head)=((char*)((i64)0)));
  (((&(v583))->size)=((i64)0));
  (((&(v583))->cap)=((i64)0));
  while (((((&(v583))->cap))<((v582)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP((&(v583))));
  }
  (((&(v583))->size)=(v582));
  (((&(v583))->cap)=(v582));
  {
      i64 v587;
      i64 v586;
      i64 v585;
      __ZH_TYPE_Range v584;
      ((v584)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v583))->size))));
      ((v585)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v584)))));
      ((v586)=(__ZH_BOP__dotcall_dotend_RangeP((&(v584)))));
      ((v587)=(v585));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v587)), (v586)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v583)), (v587)))=(__ZH_LOP_char_()));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v587))));
      }
    }
  return (v583);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v583))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v588, char v589) {{
  __ZH_TYPE_Vec_lesschar_greater v590;
  ((v590)=(__ZH_LOP_Vec_lesschar_greater_i64((v588))));
  {
      i64 v594;
      i64 v593;
      i64 v592;
      __ZH_TYPE_Range v591;
      ((v591)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v590))->size))));
      ((v592)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v591)))));
      ((v593)=(__ZH_BOP__dotcall_dotend_RangeP((&(v591)))));
      ((v594)=(v592));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v594)), (v593)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v590)), (v594)))=(v589));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v594))));
      }
    }
  return (v590);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v590))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {{
  return (__ZH_LOP_Vec_lesschar_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v595) {{
  __ZH_TYPE_Vec_lesschar_greater v596;
  ((v596)=(__ZH_LOP_Vec_lesschar_greater_i64(((&(*v595))->size))));
  {
      i64 v600;
      i64 v599;
      i64 v598;
      __ZH_TYPE_Range v597;
      ((v597)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v595))->size))));
      ((v598)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v597)))));
      ((v599)=(__ZH_BOP__dotcall_dotend_RangeP((&(v597)))));
      ((v600)=(v598));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v600)), (v599)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v596)), (v600)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(*v595)), (v600))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v600))));
      }
    }
  return (v596);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v596))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v601, char v602){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(*v601)), (v602)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v603, __ZH_TYPE_Vec_lesschar_greater* v604){
  {
      __ZH_TYPE_VecIter_lesschar_greater v608;
      __ZH_TYPE_VecIter_lesschar_greater v607;
      __ZH_TYPE_VecIter_lesschar_greater v606;
      __ZH_TYPE_Vec_lesschar_greater v605;
      ((v605)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v604))));
      ((v606)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&(v605)))));
      ((v607)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP((&(v605)))));
      ((v608)=(v606));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterPVecIter_lesschar_greater((&(v608)), (v607)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(*v603)), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v608)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP((&(v608))));
      }
    }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v609, char v610) {{
  __ZH_TYPE_Vec_lesschar_greater v611;
  ((v611)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v611), (v609)));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v611), (v610)));
  return (v611);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v611))));
};printf("%s", "reached function end without returning anything op Vec<char> ,, char a char b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v612, char v613) {{
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(*v612), (v613)));
  return &(*v612);
};printf("%s", "reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v614){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP((&(*v614))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v615){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP((&(*v615))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v616) {{
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v616)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v617) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v617))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v618, __ZH_TYPE_Vec_lesschar_greater* v619) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v619))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<char>R i\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v620, i64 v621) {{
  if ((((v621))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v621), (((v620))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v620), (v621)));
};printf("%s", "reached function end without returning anything op charR .call.sub Vec<char>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64(__ZH_TYPE_Vec_lesschar_greater* v622, i64 v623, i64 v624) {{
  __ZH_TYPE_Vec_lesschar_greater v625;
  ((v625)=(__ZH_LOP_Vec_lesschar_greater_i64(((i64)0))));
  {
      i64 v629;
      i64 v628;
      i64 v627;
      __ZH_TYPE_Range v626;
      ((v626)=(__ZH_BOP__dot_dot_i64i64((v623), (v624))));
      ((v627)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v626)))));
      ((v628)=(__ZH_BOP__dotcall_dotend_RangeP((&(v626)))));
      ((v629)=(v627));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v629)), (v628)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(v625)), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v622), (v629)))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v629))));
      }
    }
  return (v625);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v625))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPRange(__ZH_TYPE_Vec_lesschar_greater* v630, __ZH_TYPE_Range v631) {{
  i64 v633;
  i64 v632;
  (((v632)=((&(v631))->begin)), ((v633)=((&(v631))->end)));
  if ((((v632))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v632), (((v630))->size)));
  }
  if ((((v632))<(((i64)0)))) {
    ((v632)=((i64)0));
  }
  if ((((v633))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v633), (((v630))->size)));
  }
  if ((((v633))>((((v630))->size)))) {
    ((v633)=(((v630))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64((v630), (v632), (v633)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v634) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64((v634), ((i64)0), (((v634))->size)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v635, __ZH_TYPE_Vec_lesschar_greater* v636) {{
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_charPcharP(char* v637, char* v638){
  char v639;
  ((v639)=(*(v637)));
  ((*(v637))=(*(v638)));
  ((*(v638))=(v639));
}
char* __ZH_LOP_partition_charPcharP(char* v640, char* v641) {{
  char* v644;
  char* v643;
  char* v642;
  (((v642)=((char*)((((i64)(v641)))-(((((i64)1))*(((i64)1))))))), ((v643)=(v640)), ((v644)=(v640)));
  ((v644)=(v640));
  while (((((i64)(v644)))!=(((i64)(v642))))) {
    if ((((*(v644)))<((*(v642))))) {
      (__ZH_LOP_swap_charPcharP((v643), (v644)));
      ((v643)=((char*)((((i64)(v643)))+(((((i64)1))*(((i64)1)))))));
    }
    ((v644)=((char*)((((i64)(v644)))+(((((i64)1))*(((i64)1)))))));
  }
  (__ZH_LOP_swap_charPcharP((v643), (v642)));
  return (v643);
};printf("%s", "reached function end without returning anything lop charP partition charP low charP high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_charPcharP(char* v645, char* v646){
  i64 v648;
  i64 v647;
  ((v647)=((((i64)(v646)))-(((i64)(v645)))));
  ((v648)=((i64)1));
  if ((((v647))>((v648)))) {
    char* v649;
    ((v649)=(__ZH_LOP_partition_charPcharP((v645), (v646))));
    (__ZH_LOP_qsort_charPcharP((v645), (v649)));
    ((v649)=((char*)((((i64)(v649)))+(((((i64)1))*(((i64)1)))))));
    (__ZH_LOP_qsort_charPcharP((v649), (v646)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v650){
  __ZH_TYPE_VecIter_lesschar_greater v654;
  __ZH_TYPE_VecIter_lesschar_greater v652;
  (__ZH_LOP_qsort_charPcharP(((&(*(((v652)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((v650)))), (&(v652)))))->ptr), ((&(*(((v654)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP((v650)))), (&(v654)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v655){
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP((&(*v655))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotmap_Vec_lesschar_greaterPF_lesschar_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v656, char(*v657)(char*)) {{
  __ZH_TYPE_Vec_lesschar_greater v658;
  ((v658)=(__ZH_LOP_Vec_lesschar_greater_i64((((v656))->size))));
  {
      i64 v662;
      i64 v661;
      i64 v660;
      __ZH_TYPE_Range v659;
      ((v659)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v656))->size))));
      ((v660)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v659)))));
      ((v661)=(__ZH_BOP__dotcall_dotend_RangeP((&(v659)))));
      ((v662)=(v660));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v662)), (v661)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(v658)), (v662)))=((*(v657))(&(*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v656), (v662))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v662))));
      }
    }
  return (v658);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v658))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.map Vec<char>P slf F<char charR> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotfilter_Vec_lesschar_greaterPF_lessbool_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v663, bool(*v664)(char*)) {{
  __ZH_TYPE_Vec_lesschar_greater v665;
  ((v665)=(__ZH_LOP_Vec_lesschar_greater_()));
  {
      i64 v669;
      i64 v668;
      i64 v667;
      __ZH_TYPE_Range v666;
      ((v666)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v663))->size))));
      ((v667)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v666)))));
      ((v668)=(__ZH_BOP__dotcall_dotend_RangeP((&(v666)))));
      ((v669)=(v667));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v669)), (v668)))) {
        if (((*(v664))(&(*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v663), (v669)))))) {
          (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v665), (*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v663), (v669)))));
        }
        (__ZH_BOP__dotcall_dotnext_i64P((&(v669))));
      }
    }
  return (v665);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v665))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.filter Vec<char>P slf F<bool charR> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_() {{
  __ZH_TYPE_Str v670;
  (((&(v670))->data)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v670))->data)), ((char)((u8)0))));
  (((&(v670))->size)=((i64)0));
  return (v670);
};printf("%s", "reached function end without returning anything lop Str Str\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_StrP(__ZH_TYPE_Str* v671){
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(((v671))->data))));
}
str __ZH_BOP__dotcall_dotcstr_StrP(__ZH_TYPE_Str* v672) {{
  __ZH_TYPE_VecIter_lesschar_greater v673;
  ((v673)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&(((v672))->data)))));
  return ((str)((&(v673))->ptr));
};printf("%s", "reached function end without returning anything op str .call.cstr StrP slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_StrPi64(__ZH_TYPE_Str* v674, i64 v675) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(((v674))->data)), (v675)));
};printf("%s", "reached function end without returning anything op charR .call.at StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_StrPi64(__ZH_TYPE_Str* v676, i64 v677) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(((v676))->data)), (v677)));
};printf("%s", "reached function end without returning anything op charR .call.sub StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_StrPi64(__ZH_TYPE_Str* v678, i64 v679) {{
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((&(((v678))->data)), (v679)));
};printf("%s", "reached function end without returning anything op charP .call.atP StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotpush_back_StrPchar(__ZH_TYPE_Str* v680, char v681){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v680))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v680))->data)), (v681)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v680))->data)), ((char)((u8)0))));
  (*__ZH_LOP__plus_plus_i64R(&(((v680))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_StrP(__ZH_TYPE_Str* v682){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v682))->data))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v682))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v682))->data)), ((char)((u8)0))));
  (*__ZH_LOP__minus_minus_i64R(&(((v682))->size)));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v683) {{
  __ZH_TYPE_Str v684;
  ((v684)=(__ZH_LOP_Str_()));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&((&(v684))->data))));
  while ((((*((char*)(v683))))!=(((char)((u8)0))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v684))->data)), (*((char*)(v683)))));
    ((v683)=((str)((((i64)(v683)))+(((i64)1)))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v684))->data)), ((char)((u8)0))));
  (((&(v684))->size)=((((&((&(v684))->data))->size))-(((i64)1))));
  return (v684);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v684))));
};printf("%s", "reached function end without returning anything lop Str Str str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v685) {{
  __ZH_TYPE_Str v686;
  ((v686)=(__ZH_LOP_Str_()));
  (((&(v686))->data)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&((&(*v685))->data))));
  (((&(v686))->size)=((&(*v685))->size));
  return (v686);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v686))));
};printf("%s", "reached function end without returning anything lop Str Str StrR s\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_len_str(str v687) {{
  i64 v688;
  ((v688)=((i64)0));
  while ((((*((char*)(v687))))!=(((char)((u8)0))))) {
    (*__ZH_LOP__plus_plus_i64R(&(v688)));
    ((v687)=((str)((((i64)(v687)))+(((i64)1)))));
  }
  return (v688);
};printf("%s", "reached function end without returning anything lop i64 len str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v689){
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP((&(*v689))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v690){
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP((&(*v690))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v691, char v692){
  (__ZH_BOP__dotcall_dotpush_back_StrPchar((&(*v691)), (v692)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v693, __ZH_TYPE_Str* v694){
  {
      i64 v698;
      i64 v697;
      i64 v696;
      __ZH_TYPE_Range v695;
      ((v695)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v694))->size))));
      ((v696)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v695)))));
      ((v697)=(__ZH_BOP__dotcall_dotend_RangeP((&(v695)))));
      ((v698)=(v696));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v698)), (v697)))) {
        char v699;
        ((v699)=((char)((i8)115)));
        ((v699)=(*__ZH_BOP__dotcall_dotat_StrPi64((&(*v694)), (v698))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v693), (v699)));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v698))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v700, str v701){
  i64 v702;
  ((v702)=(__ZH_LOP_len_str((v701))));
  {
      i64 v706;
      i64 v705;
      i64 v704;
      __ZH_TYPE_Range v703;
      ((v703)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (v702))));
      ((v704)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v703)))));
      ((v705)=(__ZH_BOP__dotcall_dotend_RangeP((&(v703)))));
      ((v706)=(v704));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v706)), (v705)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v700), (__ZH_BOP__dotcall_dotsub_strPi64((&(v701)), (v706)))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v706))));
      }
    }
}
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v707, __ZH_TYPE_Str* v708) {{
  __ZH_TYPE_Str v709;
  ((v709)=(__ZH_LOP_Str_StrR(&(*v707))));
  (__ZH_BOP__plus_equal_StrRStrR(&(v709), &(*v708)));
  return (v709);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v709))));
};printf("%s", "reached function end without returning anything op Str + StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v710, str v711) {{
  __ZH_TYPE_Str v715;
  __ZH_TYPE_Str v713;
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v713))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v715))));
  return (__ZH_BOP__plus_StrRStrR(&(*(((v713)=(__ZH_LOP_Str_str((v710)))), (&(v713)))), &(*(((v715)=(__ZH_LOP_Str_str((v711)))), (&(v715))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v713))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v715))));
};printf("%s", "reached function end without returning anything op Str + str a str b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v716) {{
  (__ZH_LOP_out_StrR(&(*v716)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v717) {{
  ((__ZH_LOP_put_StrR(&(*v717))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v718, __ZH_TYPE_Str* v719) {{
  ((__ZH_LOP_put_StrR(&(*v719))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o StrR i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v720, __ZH_TYPE_Str* v721) {{
  {
      i64 v725;
      i64 v724;
      i64 v723;
      __ZH_TYPE_Range v722;
      ((v722)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v720))->size), ((&(*v721))->size))))));
      ((v723)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v722)))));
      ((v724)=(__ZH_BOP__dotcall_dotend_RangeP((&(v722)))));
      ((v725)=(v723));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v725)), (v724)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v720)), (v725))))<((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v721)), (v725)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v720)), (v725))))>((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v721)), (v725)))))) {
          return ((bool)0);
        }
        (__ZH_BOP__dotcall_dotnext_i64P((&(v725))));
      }
    }
  if (((((&(*v720))->size))<(((&(*v721))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v720))->size))>(((&(*v721))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v726, i64 v727) {{
  __ZH_TYPE_Str v729;
  __ZH_TYPE_Str v728;
  ((v728)=(__ZH_LOP_Str_()));
  ((v729)=(__ZH_LOP_Str_str((v726))));
  {
      i64 v733;
      i64 v732;
      i64 v731;
      __ZH_TYPE_Range v730;
      ((v730)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (v727))));
      ((v731)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v730)))));
      ((v732)=(__ZH_BOP__dotcall_dotend_RangeP((&(v730)))));
      ((v733)=(v731));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v733)), (v732)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v728), &(v729)));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v733))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v729))));
  return (v728);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v728))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v729))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v728))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v729))));
};printf("%s", "reached function end without returning anything op Str * str s i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v734) {{
  return (__ZH_LOP_Str_str((v734)));
};printf("%s", "reached function end without returning anything lop Str $ str s\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_frog_() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
};printf("%s", "reached function end without returning anything lop str frog\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_sqrt_f64(f64 v735) {{
  f64 v736;
  ((v736)=((f64)1.000000));
  {
      i64 v740;
      i64 v739;
      i64 v738;
      __ZH_TYPE_Range v737;
      ((v737)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((i64)10))));
      ((v738)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v737)))));
      ((v739)=(__ZH_BOP__dotcall_dotend_RangeP((&(v737)))));
      ((v740)=(v738));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v740)), (v739)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v736), (((((((v736))*((v736))))-((v735))))/(((((f64)2.000000))*((v736)))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v740))));
      }
    }
  return (v736);
};printf("%s", "reached function end without returning anything lop f64 sqrt f64 x\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v741, f64 v742) {{
  __ZH_TYPE_V2 v743;
  (((&(v743))->x)=(v741));
  (((&(v743))->y)=(v742));
  return (v743);
};printf("%s", "reached function end without returning anything lop V2 V2 f64 x f64 y\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v744, __ZH_TYPE_V2 v745) {{
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v744))->x), ((&(v745))->x)));
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v744))->y), ((&(v745))->y)));
  return (v744);
};printf("%s", "reached function end without returning anything op V2 + V2 a V2 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v746, __ZH_TYPE_V2 v747) {{
  __ZH_TYPE_V2 v748;
  (((&(v748))->x)=((((((&(v746))->x))*(((&(v747))->x))))-(((((&(v746))->y))*(((&(v747))->y))))));
  (((&(v748))->y)=((((((&(v746))->x))*(((&(v747))->y))))+(((((&(v746))->y))*(((&(v747))->x))))));
  return (v748);
};printf("%s", "reached function end without returning anything op V2 * V2 a V2 b\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v749) {{
  return (__ZH_LOP_sqrt_f64(((((((&(v749))->x))*(((&(v749))->x))))+(((((&(v749))->y))*(((&(v749))->y)))))));
};printf("%s", "reached function end without returning anything lop f64 abs V2 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v750){
  (printf("%f", ((&(v750))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v750))->y)));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v751){
  (printf("%f", ((&(v751))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v751))->y)));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v752) {{
  (__ZH_LOP_out_V2((v752)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v753) {{
  ((__ZH_LOP_put_V2((v753))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v754, __ZH_TYPE_V2 v755) {{
  ((__ZH_LOP_put_V2((v755))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v756) {{
  __ZH_TYPE_Rng v757;
  (((&(v757))->seed)=(v756));
  return (v757);
};printf("%s", "reached function end without returning anything lop Rng Rng i64 seed\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_() {{
  return (__ZH_LOP_Rng_i64(((i64)5323)));
};printf("%s", "reached function end without returning anything lop Rng Rng\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotcall_RngP(__ZH_TYPE_Rng* v758) {{
  ((((v758))->seed)=((((((i64)8253729))*((((v758))->seed))))+(((i64)2396403))));
  return (((((v758))->seed))%(((i64)32767)));
};printf("%s", "reached function end without returning anything op i64 .call.call RngP slf\n"); exit(EXIT_FAILURE);}
int main(int argc, char *argv[]) {
  __ZH_TYPE_Map_lessi64_spacei64_greater v960;
  __ZH_TYPE_Vec_lessi64_greater v761;
  __ZH_TYPE_Vec_lessi64_greater v760;
  ((v761)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*__ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(&(*__ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(&(*__ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(&(*__ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(&(*__ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(&(*__ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(&(*__ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(&(*(((v760)=(__ZH_BOP__comma_comma_i64i64(((i64)1), ((i64)5)))), (&(v760)))), ((i64)6))), ((i64)1))), ((i64)4))), ((i64)6))), ((i64)87))), ((i64)1))), ((i64)1))))));
  ((v960)=(__ZH_LOP_Map_lessi64_spacei64_greater_()));
  {
      __ZH_TYPE_VecIter_lessi64_greater v964;
      __ZH_TYPE_VecIter_lessi64_greater v963;
      __ZH_TYPE_VecIter_lessi64_greater v962;
      __ZH_TYPE_Vec_lessi64_greater v961;
      ((v961)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(v761))));
      ((v962)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((&(v961)))));
      ((v963)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((&(v961)))));
      ((v964)=(v962));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterPVecIter_lessi64_greater((&(v964)), (v963)))) {
        (*__ZH_LOP__plus_plus_i64R(&(*__ZH_BOP__dotcall_dotsub_Map_lessi64_spacei64_greaterPi64R((&(v960)), &(*__ZH_LOP__asterisk_VecIter_lessi64_greater((v964)))))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP((&(v964))));
      }
    }
  (__ZH_LOP__less_Out((__ZH_ROP__less_Map_lessi64_spacei64_greaterR(&(v960)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v760))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v761))));
}
__ZH_TYPE_MapNode_lessi64_spacei64_greater __ZH_LOP_MapNode_lessi64_spacei64_greater_i64Ri64R(i64* v762, i64* v763) {{
  __ZH_TYPE_MapNode_lessi64_spacei64_greater v764;
  (((&(v764))->key)=(*v762));
  (((&(v764))->val)=(*v763));
  return (v764);
};printf("%s", "reached function end without returning anything lop MapNode<i64 i64> MapNode<i64 i64> i64R key i64R val\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_MapNode_lessi64_spacei64_greater __ZH_LOP_MapNode_lessi64_spacei64_greater_() {{
  i64 v768;
  i64 v766;
  return (__ZH_LOP_MapNode_lessi64_spacei64_greater_i64Ri64R(&(*(((v766)=(__ZH_LOP_i64_())), (&(v766)))), &(*(((v768)=(__ZH_LOP_i64_())), (&(v768))))));
};printf("%s", "reached function end without returning anything lop MapNode<i64 i64> MapNode<i64 i64>\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_MapNode_lessi64_spacei64_greaterRMapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v769, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v770) {{
  return ((((&(*v769))->key))<(((&(*v770))->key)));
};printf("%s", "reached function end without returning anything op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v771){
  (printf("%s", ((str)"{")));
  (printf("%lld", ((&(*v771))->key)));
  (printf("%s", ((str)": ")));
  (printf("%lld", ((&(*v771))->val)));
  (printf("%s", ((str)"}")));
}
void __ZH_LOP_out_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v772){
  (__ZH_LOP_put_MapNode_lessi64_spacei64_greaterR(&(*v772)));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v773) {{
  (__ZH_LOP_out_MapNode_lessi64_spacei64_greaterR(&(*v773)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < MapNode<i64 i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v774) {{
  ((__ZH_LOP_put_MapNode_lessi64_spacei64_greaterR(&(*v774))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < MapNode<i64 i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutMapNode_lessi64_spacei64_greaterR(__ZH_TYPE_Out v775, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v776) {{
  ((__ZH_LOP_put_MapNode_lessi64_spacei64_greaterR(&(*v776))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o MapNode<i64 i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_AVLNode_lessMapNode_lessi64_spacei64_greater_greater_MapNode_lessi64_spacei64_greaterR(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v777) {{
  __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater v778;
  (((&(v778))->h)=((i64)1));
  (((&(v778))->val)=(*v777));
  (((&(v778))->lhs)=((__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater*)((i64)0)));
  (((&(v778))->rhs)=((__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater*)((i64)0)));
  return (v778);
};printf("%s", "reached function end without returning anything lop AVLNode<MapNode<i64 i64>> AVLNode<MapNode<i64 i64>> MapNode<i64 i64>R val\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_LOP_new_AVLNode_lessMapNode_lessi64_spacei64_greater_greater(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater v779) {{
  __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v780;
  ((v780)=((__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater*)(alloc(((i64)40)))));
  ((*(v780))=(v779));
  return (v780);
};printf("%s", "reached function end without returning anything lop AVLNode<MapNode<i64 i64>>P new AVLNode<MapNode<i64 i64>> slf\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP__exclamation_exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v781) {{
  return ((((i64)(v781)))!=(((i64)0)));
};printf("%s", "reached function end without returning anything lop bool !! AVLNode<MapNode<i64 i64>>P ptr\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP__exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v782) {{
  return ((((i64)(v782)))==(((i64)0)));
};printf("%s", "reached function end without returning anything lop bool ! AVLNode<MapNode<i64 i64>>P ptr\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_doth_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v783) {{
  if ((__ZH_LOP__exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v783)))) {
    return ((i64)0);
  } else {
    return (((v783))->h);
  }
};printf("%s", "reached function end without returning anything op i64 .call.h AVLNode<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbf_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v784) {{
  return (((__ZH_BOP__dotcall_doth_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((((v784))->rhs))))-((__ZH_BOP__dotcall_doth_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((((v784))->lhs)))));
};printf("%s", "reached function end without returning anything op i64 .call.bf AVLNode<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotfix_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v785){
  ((((v785))->h)=((((i64)1))+((__ZH_LOP_max_i64i64((__ZH_BOP__dotcall_doth_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((((v785))->rhs))), (__ZH_BOP__dotcall_doth_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((((v785))->lhs))))))));
}
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotrrot_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v786) {{
  __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v787;
  ((v787)=(((v786))->lhs));
  ((((v786))->lhs)=(((v787))->rhs));
  ((((v787))->rhs)=(v786));
  ((__ZH_BOP__dotcall_dotfix_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v786))), (__ZH_BOP__dotcall_dotfix_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v787))));
  return (v787);
};printf("%s", "reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.rrot AVLNode<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotlrot_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v788) {{
  __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v789;
  ((v789)=(((v788))->rhs));
  ((((v788))->rhs)=(((v789))->lhs));
  ((((v789))->lhs)=(v788));
  ((__ZH_BOP__dotcall_dotfix_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v788))), (__ZH_BOP__dotcall_dotfix_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v789))));
  return (v789);
};printf("%s", "reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.lrot AVLNode<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotbalance_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v790) {{
  (__ZH_BOP__dotcall_dotfix_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v790)));
  if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v790))))==(((i64)2)))) {
    if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((((v790))->rhs))))<(((i64)0)))) {
      ((((v790))->rhs)=(__ZH_BOP__dotcall_dotrrot_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((((v790))->rhs))));
    }
    return (__ZH_BOP__dotcall_dotlrot_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v790)));
  }
 else if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v790))))==((-(((i64)2)))))) {
    if ((((__ZH_BOP__dotcall_dotbf_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((((v790))->lhs))))>(((i64)0)))) {
      ((((v790))->lhs)=(__ZH_BOP__dotcall_dotlrot_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((((v790))->lhs))));
    }
    return (__ZH_BOP__dotcall_dotrrot_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v790)));
  }
  return (v790);
};printf("%s", "reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.balance AVLNode<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotinsert_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v791, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v792) {{
  if ((__ZH_LOP__exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v791)))) {
    return (__ZH_LOP_new_AVLNode_lessMapNode_lessi64_spacei64_greater_greater((__ZH_LOP_AVLNode_lessMapNode_lessi64_spacei64_greater_greater_MapNode_lessi64_spacei64_greaterR(&(*v792)))));
  }
 else if ((__ZH_BOP__less_MapNode_lessi64_spacei64_greaterRMapNode_lessi64_spacei64_greaterR(&(*v792), &(((v791))->val)))) {
    ((((v791))->lhs)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR((((v791))->lhs), &(*v792))));
  }
 else if ((__ZH_BOP__less_MapNode_lessi64_spacei64_greaterRMapNode_lessi64_spacei64_greaterR(&(((v791))->val), &(*v792)))) {
    ((((v791))->rhs)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR((((v791))->rhs), &(*v792))));
  }
  ((v791)=(__ZH_BOP__dotcall_dotbalance_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v791))));
  return (v791);
};printf("%s", "reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.insert AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__dotcall_dotsub_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v793, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v794) {{
  __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v795;
  if ((__ZH_LOP__exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v793)))) {
    return ((__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater*)((i64)0));
  }
  ((v795)=((__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater*)((i64)0)));
  if ((__ZH_BOP__less_MapNode_lessi64_spacei64_greaterRMapNode_lessi64_spacei64_greaterR(&(*v794), &(((v793))->val)))) {
    ((v795)=(__ZH_BOP__dotcall_dotsub_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR((((v793))->lhs), &(*v794))));
  }
 else if ((__ZH_BOP__less_MapNode_lessi64_spacei64_greaterRMapNode_lessi64_spacei64_greaterR(&(((v793))->val), &(*v794)))) {
    ((v795)=(__ZH_BOP__dotcall_dotsub_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR((((v793))->rhs), &(*v794))));
  } else {
    return (v793);
  }
  return (v795);
};printf("%s", "reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.sub AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotshow_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPStrR(__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v796, __ZH_TYPE_Str* v797){
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v796)))) {
    __ZH_TYPE_Str v799;
    __ZH_TYPE_Str v798;
    ((__ZH_LOP_out_MapNode_lessi64_spacei64_greaterR(&(((v796))->val))), (__ZH_LOP_put_StrR(&(*v797))), (printf("%s", ((str)"|--"))));
    (((v798)=(__ZH_LOP_Str_StrR(&(*v797)))), (__ZH_BOP__plus_equal_StrRstr(&(v798), ((str)"|  "))));
    (__ZH_BOP__dotcall_dotshow_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPStrR((((v796))->lhs), &(v798)));
    ((__ZH_LOP_put_StrR(&(*v797))), (printf("%s", ((str)"'--"))));
    (((v799)=(__ZH_LOP_Str_StrR(&(*v797)))), (__ZH_BOP__plus_equal_StrRstr(&(v799), ((str)"   "))));
    (__ZH_BOP__dotcall_dotshow_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPStrR((((v796))->rhs), &(v799)));
    (__ZH_BOP__dotcall_dotdtor_StrP((&(v798))));
    (__ZH_BOP__dotcall_dotdtor_StrP((&(v799))));
  } else {
    (__ZH_LOP__less_Out((__ZH_ROP__less_str(((str)"null")))));
  }
}
__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_VecIter_lessMapNode_lessi64_spacei64_greater_greater_MapNode_lessi64_spacei64_greaterP(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v831) {{
  __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v832;
  (((&(v832))->ptr)=(v831));
  return (v832);
};printf("%s", "reached function end without returning anything lop VecIter<MapNode<i64 i64>> VecIter<MapNode<i64 i64>> MapNode<i64 i64>P ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater* v833){
  ((((v833))->ptr)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((((i64)(((v833))->ptr)))+(((((i64)1))*(((i64)16)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessMapNode_lessi64_spacei64_greater_greaterPVecIter_lessMapNode_lessi64_spacei64_greater_greater(__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater* v834, __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v835) {{
  return ((((i64)(((v834))->ptr)))!=(((i64)((&(v835))->ptr))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<MapNode<i64 i64>>P slf VecIter<MapNode<i64 i64>> other\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_LOP__asterisk_VecIter_lessMapNode_lessi64_spacei64_greater_greater(__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v836) {{
  return &(*((&(v836))->ptr));
};printf("%s", "reached function end without returning anything lop MapNode<i64 i64>R * VecIter<MapNode<i64 i64>> slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotatP_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v807, i64 v808) {{
  return ((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((((i64)(((v807))->head)))+((((v808))*(((i64)16)))))));
};printf("%s", "reached function end without returning anything op MapNode<i64 i64>P .call.atP Vec<MapNode<i64 i64>>P slf i64 pos\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v809, i64 v810) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v809), (v810))));
};printf("%s", "reached function end without returning anything op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v811){
  (printf("%s", ((str)"[")));
  {
      i64 v815;
      i64 v814;
      i64 v813;
      __ZH_TYPE_Range v812;
      ((v812)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v811))->size))));
      ((v813)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v812)))));
      ((v814)=(__ZH_BOP__dotcall_dotend_RangeP((&(v812)))));
      ((v815)=(v813));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v815)), (v814)))) {
        if ((!((!((v815)))))) {
          (printf("%s", ((str)" ")));
        }
        (__ZH_LOP_put_MapNode_lessi64_spacei64_greaterR(&(*(__ZH_BOP__dotcall_dotatP_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v811), (v815))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v815))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v816){
  {
      i64 v820;
      i64 v819;
      i64 v818;
      __ZH_TYPE_Range v817;
      ((v817)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v816))->size))));
      ((v818)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v817)))));
      ((v819)=(__ZH_BOP__dotcall_dotend_RangeP((&(v817)))));
      ((v820)=(v818));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v820)), (v819)))) {
        (__ZH_LOP_out_MapNode_lessi64_spacei64_greaterR(&(*(__ZH_BOP__dotcall_dotatP_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v816), (v820))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v820))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v821){
  i64 v822;
  ((v822)=(((v821))->cap));
  if ((((v822))==(((i64)0)))) {
    ((v822)=((i64)1));
    ((((v821))->head)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)(alloc(((i64)16)))));
    ((((v821))->cap)=(v822));
  } else {
    __ZH_TYPE_MapNode_lessi64_spacei64_greater* v823;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v822), ((i64)2)));
    ((v823)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)(alloc((((v822))*(((i64)16)))))));
    {
        i64 v827;
        i64 v826;
        i64 v825;
        __ZH_TYPE_Range v824;
        ((v824)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v821))->size))));
        ((v825)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v824)))));
        ((v826)=(__ZH_BOP__dotcall_dotend_RangeP((&(v824)))));
        ((v827)=(v825));
        while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v827)), (v826)))) {
          ((*((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((((i64)(v823)))+((((v827))*(((i64)16)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v821), (v827))));
          (__ZH_BOP__dotcall_dotnext_i64P((&(v827))));
        }
      }
    (free((void*) ((i64)(((v821))->head))));
    ((((v821))->head)=(v823));
  }
  ((((v821))->cap)=(v822));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v828, __ZH_TYPE_MapNode_lessi64_spacei64_greater v829){
  if ((((((v828))->size))==((((v828))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((v828)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v828), (((v828))->size)))=(v829));
  (*__ZH_LOP__plus_plus_i64R(&(((v828))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v830){
  (*__ZH_LOP__minus_minus_i64R(&(((v830))->size)));
}
__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotbegin_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v837) {{
  return (__ZH_LOP_VecIter_lessMapNode_lessi64_spacei64_greater_greater_MapNode_lessi64_spacei64_greaterP((((v837))->head)));
};printf("%s", "reached function end without returning anything op VecIter<MapNode<i64 i64>> .call.begin Vec<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotend_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v838) {{
  return (__ZH_LOP_VecIter_lessMapNode_lessi64_spacei64_greater_greater_MapNode_lessi64_spacei64_greaterP((__ZH_BOP__dotcall_dotatP_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v838), (((v838))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<MapNode<i64 i64>> .call.end Vec<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotfront_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v839) {{
  return &(*(((v839))->head));
};printf("%s", "reached function end without returning anything op MapNode<i64 i64>R .call.front Vec<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotback_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v840) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v840), (((((v840))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op MapNode<i64 i64>R .call.back Vec<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v841){
  if ((!((!(((i64)(((v841))->head))))))) {
    (free((void*) ((i64)(((v841))->head))));
    ((((v841))->size)=((i64)0));
    ((((v841))->cap)=((i64)0));
    ((((v841))->head)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64(i64 v842) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v843;
  (((&(v843))->head)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((i64)0)));
  (((&(v843))->size)=((i64)0));
  (((&(v843))->cap)=((i64)0));
  while (((((&(v843))->cap))<((v842)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v843))));
  }
  (((&(v843))->size)=(v842));
  (((&(v843))->cap)=(v842));
  {
      i64 v847;
      i64 v846;
      i64 v845;
      __ZH_TYPE_Range v844;
      ((v844)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v843))->size))));
      ((v845)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v844)))));
      ((v846)=(__ZH_BOP__dotcall_dotend_RangeP((&(v844)))));
      ((v847)=(v845));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v847)), (v846)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((&(v843)), (v847)))=(__ZH_LOP_MapNode_lessi64_spacei64_greater_()));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v847))));
      }
    }
  return (v843);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v843))));
};printf("%s", "reached function end without returning anything lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64MapNode_lessi64_spacei64_greater(i64 v848, __ZH_TYPE_MapNode_lessi64_spacei64_greater v849) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v850;
  ((v850)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64((v848))));
  {
      i64 v854;
      i64 v853;
      i64 v852;
      __ZH_TYPE_Range v851;
      ((v851)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v850))->size))));
      ((v852)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v851)))));
      ((v853)=(__ZH_BOP__dotcall_dotend_RangeP((&(v851)))));
      ((v854)=(v852));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v854)), (v853)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((&(v850)), (v854)))=(v849));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v854))));
      }
    }
  return (v850);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v850))));
};printf("%s", "reached function end without returning anything lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size MapNode<i64 i64> default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_() {{
  return (__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v855) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v856;
  ((v856)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64(((&(*v855))->size))));
  {
      i64 v860;
      i64 v859;
      i64 v858;
      __ZH_TYPE_Range v857;
      ((v857)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v855))->size))));
      ((v858)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v857)))));
      ((v859)=(__ZH_BOP__dotcall_dotend_RangeP((&(v857)))));
      ((v860)=(v858));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v860)), (v859)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((&(v856)), (v860)))=(*__ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((&(*v855)), (v860))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v860))));
      }
    }
  return (v856);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v856))));
};printf("%s", "reached function end without returning anything lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v861, __ZH_TYPE_MapNode_lessi64_spacei64_greater v862){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater((&(*v861)), (v862)));
}
void __ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRVec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v863, __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v864){
  {
      __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v868;
      __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v867;
      __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v866;
      __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v865;
      ((v865)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(&(*v864))));
      ((v866)=(__ZH_BOP__dotcall_dotbegin_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v865)))));
      ((v867)=(__ZH_BOP__dotcall_dotend_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v865)))));
      ((v868)=(v866));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessMapNode_lessi64_spacei64_greater_greaterPVecIter_lessMapNode_lessi64_spacei64_greater_greater((&(v868)), (v867)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater((&(*v863)), (*__ZH_LOP__asterisk_VecIter_lessMapNode_lessi64_spacei64_greater_greater((v868)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessMapNode_lessi64_spacei64_greater_greaterP((&(v868))));
      }
    }
}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__comma_comma_MapNode_lessi64_spacei64_greaterMapNode_lessi64_spacei64_greater(__ZH_TYPE_MapNode_lessi64_spacei64_greater v869, __ZH_TYPE_MapNode_lessi64_spacei64_greater v870) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v871;
  ((v871)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_()));
  (__ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(&(v871), (v869)));
  (__ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(&(v871), (v870)));
  return (v871);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v871))));
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>> ,, MapNode<i64 i64> a MapNode<i64 i64> b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* __ZH_BOP__comma_comma_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v872, __ZH_TYPE_MapNode_lessi64_spacei64_greater v873) {{
  (__ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(&(*v872), (v873)));
  return &(*v872);
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>>R ,, Vec<MapNode<i64 i64>>R v MapNode<i64 i64> a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v874){
  (__ZH_BOP__dotcall_dotprint_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(*v874))));
}
void __ZH_LOP_out_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v875){
  (__ZH_BOP__dotcall_dotprint_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(*v875))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v876) {{
  (__ZH_LOP_out_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(&(*v876)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<MapNode<i64 i64>>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v877) {{
  ((__ZH_LOP_put_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(&(*v877))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<MapNode<i64 i64>>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Out v878, __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v879) {{
  ((__ZH_LOP_put_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(&(*v879))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<MapNode<i64 i64>>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v880, i64 v881) {{
  if ((((v881))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v881), (((v880))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v880), (v881)));
};printf("%s", "reached function end without returning anything op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64i64(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v882, i64 v883, i64 v884) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v885;
  ((v885)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64(((i64)0))));
  {
      i64 v889;
      i64 v888;
      i64 v887;
      __ZH_TYPE_Range v886;
      ((v886)=(__ZH_BOP__dot_dot_i64i64((v883), (v884))));
      ((v887)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v886)))));
      ((v888)=(__ZH_BOP__dotcall_dotend_RangeP((&(v886)))));
      ((v889)=(v887));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v889)), (v888)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater((&(v885)), (*__ZH_BOP__dotcall_dotat_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v882), (v889)))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v889))));
      }
    }
  return (v885);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v885))));
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPRange(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v890, __ZH_TYPE_Range v891) {{
  i64 v893;
  i64 v892;
  (((v892)=((&(v891))->begin)), ((v893)=((&(v891))->end)));
  if ((((v892))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v892), (((v890))->size)));
  }
  if ((((v892))<(((i64)0)))) {
    ((v892)=((i64)0));
  }
  if ((((v893))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v893), (((v890))->size)));
  }
  if ((((v893))>((((v890))->size)))) {
    ((v893)=(((v890))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64i64((v890), (v892), (v893)));
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v894) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64i64((v894), ((i64)0), (((v894))->size)));
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lessMapNode_lessi64_spacei64_greater_greaterRVec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v895, __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v896) {{
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<MapNode<i64 i64>>R a Vec<MapNode<i64 i64>>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v897, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v898){
  __ZH_TYPE_MapNode_lessi64_spacei64_greater v899;
  ((v899)=(*(v897)));
  ((*(v897))=(*(v898)));
  ((*(v898))=(v899));
}
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_LOP_partition_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v900, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v901) {{
  __ZH_TYPE_MapNode_lessi64_spacei64_greater* v904;
  __ZH_TYPE_MapNode_lessi64_spacei64_greater* v903;
  __ZH_TYPE_MapNode_lessi64_spacei64_greater* v902;
  (((v902)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((((i64)(v901)))-(((((i64)1))*(((i64)16))))))), ((v903)=(v900)), ((v904)=(v900)));
  ((v904)=(v900));
  while (((((i64)(v904)))!=(((i64)(v902))))) {
    if ((__ZH_BOP__less_MapNode_lessi64_spacei64_greaterRMapNode_lessi64_spacei64_greaterR(&(*(v904)), &(*(v902))))) {
      (__ZH_LOP_swap_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP((v903), (v904)));
      ((v903)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((((i64)(v903)))+(((((i64)1))*(((i64)16)))))));
    }
    ((v904)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((((i64)(v904)))+(((((i64)1))*(((i64)16)))))));
  }
  (__ZH_LOP_swap_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP((v903), (v902)));
  return (v903);
};printf("%s", "reached function end without returning anything lop MapNode<i64 i64>P partition MapNode<i64 i64>P low MapNode<i64 i64>P high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP(__ZH_TYPE_MapNode_lessi64_spacei64_greater* v905, __ZH_TYPE_MapNode_lessi64_spacei64_greater* v906){
  i64 v908;
  i64 v907;
  ((v907)=((((i64)(v906)))-(((i64)(v905)))));
  ((v908)=((i64)16));
  if ((((v907))>((v908)))) {
    __ZH_TYPE_MapNode_lessi64_spacei64_greater* v909;
    ((v909)=(__ZH_LOP_partition_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP((v905), (v906))));
    (__ZH_LOP_qsort_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP((v905), (v909)));
    ((v909)=((__ZH_TYPE_MapNode_lessi64_spacei64_greater*)((((i64)(v909)))+(((((i64)1))*(((i64)16)))))));
    (__ZH_LOP_qsort_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP((v909), (v906)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v910){
  __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v914;
  __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v912;
  (__ZH_LOP_qsort_MapNode_lessi64_spacei64_greaterPMapNode_lessi64_spacei64_greaterP(((&(*(((v912)=(__ZH_BOP__dotcall_dotbegin_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((v910)))), (&(v912)))))->ptr), ((&(*(((v914)=(__ZH_BOP__dotcall_dotend_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((v910)))), (&(v914)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v915){
  (__ZH_BOP__dotcall_dotsort_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(*v915))));
}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotmap_Vec_lessMapNode_lessi64_spacei64_greater_greaterPF_lessMapNode_lessi64_spacei64_greater_spaceMapNode_lessi64_spacei64_greaterR_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v916, __ZH_TYPE_MapNode_lessi64_spacei64_greater(*v917)(__ZH_TYPE_MapNode_lessi64_spacei64_greater*)) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v918;
  ((v918)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_i64((((v916))->size))));
  {
      i64 v922;
      i64 v921;
      i64 v920;
      __ZH_TYPE_Range v919;
      ((v919)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v916))->size))));
      ((v920)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v919)))));
      ((v921)=(__ZH_BOP__dotcall_dotend_RangeP((&(v919)))));
      ((v922)=(v920));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v922)), (v921)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((&(v918)), (v922)))=((*(v917))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v916), (v922))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v922))));
      }
    }
  return (v918);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v918))));
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>> .call.map Vec<MapNode<i64 i64>>P slf F<MapNode<i64 i64> MapNode<i64 i64>R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotfilter_Vec_lessMapNode_lessi64_spacei64_greater_greaterPF_lessbool_spaceMapNode_lessi64_spacei64_greaterR_greater(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v923, bool(*v924)(__ZH_TYPE_MapNode_lessi64_spacei64_greater*)) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v925;
  ((v925)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_()));
  {
      i64 v929;
      i64 v928;
      i64 v927;
      __ZH_TYPE_Range v926;
      ((v926)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v923))->size))));
      ((v927)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v926)))));
      ((v928)=(__ZH_BOP__dotcall_dotend_RangeP((&(v926)))));
      ((v929)=(v927));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v929)), (v928)))) {
        if (((*(v924))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v923), (v929)))))) {
          (__ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(&(v925), (*__ZH_BOP__dotcall_dotsub_Vec_lessMapNode_lessi64_spacei64_greater_greaterPi64((v923), (v929)))));
        }
        (__ZH_BOP__dotcall_dotnext_i64P((&(v929))));
      }
    }
  return (v925);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v925))));
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>> .call.filter Vec<MapNode<i64 i64>>P slf F<bool MapNode<i64 i64>R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater __ZH_LOP_AVLTree_lessMapNode_lessi64_spacei64_greater_greater_() {{
  __ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater v800;
  (((&(v800))->root)=((__ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater*)((i64)0)));
  return (v800);
};printf("%s", "reached function end without returning anything lop AVLTree<MapNode<i64 i64>> AVLTree<MapNode<i64 i64>>\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotinsert_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v801, __ZH_TYPE_MapNode_lessi64_spacei64_greater v802){
  ((((v801))->root)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR((((v801))->root), &(v802))));
}
__ZH_TYPE_MapNode_lessi64_spacei64_greater* __ZH_BOP__dotcall_dotsub_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v803, __ZH_TYPE_MapNode_lessi64_spacei64_greater v804) {{
  return &((&(*(__ZH_BOP__dotcall_dotsub_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR((((v803))->root), &(v804)))))->val);
};printf("%s", "reached function end without returning anything op MapNode<i64 i64>R .call.sub AVLTree<MapNode<i64 i64>>P slf MapNode<i64 i64> val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v805, __ZH_TYPE_MapNode_lessi64_spacei64_greater v806){
  (((&(*v805))->root)=(__ZH_BOP__dotcall_dotinsert_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greaterR(((&(*v805))->root), &(v806))));
}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* __ZH_LOP_toVec_Vec_lessMapNode_lessi64_spacei64_greater_greaterRAVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater* v930, __ZH_TYPE_AVLNode_lessMapNode_lessi64_spacei64_greater_greater* v931) {{
  if ((__ZH_LOP__exclamation_exclamation_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterP((v931)))) {
    (*__ZH_LOP_toVec_Vec_lessMapNode_lessi64_spacei64_greater_greaterRAVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(&(*v930), (((v931))->lhs)));
    (__ZH_BOP__plus_equal_Vec_lessMapNode_lessi64_spacei64_greater_greaterRMapNode_lessi64_spacei64_greater(&(*v930), (((v931))->val)));
    (*__ZH_LOP_toVec_Vec_lessMapNode_lessi64_spacei64_greater_greaterRAVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(&(*v930), (((v931))->rhs)));
  }
  return &(*v930);
};printf("%s", "reached function end without returning anything lop Vec<MapNode<i64 i64>>R toVec Vec<MapNode<i64 i64>>R vec AVLNode<MapNode<i64 i64>>P ptr\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotcall_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v932) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v933;
  ((v933)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_()));
  (*__ZH_LOP_toVec_Vec_lessMapNode_lessi64_spacei64_greater_greaterRAVLNode_lessMapNode_lessi64_spacei64_greater_greaterP(&(v933), (((v932))->root)));
  return (v933);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v933))));
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>> .call.call AVLTree<MapNode<i64 i64>>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotshow_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterP(__ZH_TYPE_AVLTree_lessMapNode_lessi64_spacei64_greater_greater* v934){
  __ZH_TYPE_Str v936;
  (__ZH_BOP__dotcall_dotshow_AVLNode_lessMapNode_lessi64_spacei64_greater_greaterPStrR((((v934))->root), &(*(((v936)=(__ZH_LOP_Str_())), (&(v936))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v936))));
}
__ZH_TYPE_Map_lessi64_spacei64_greater __ZH_LOP_Map_lessi64_spacei64_greater_() {{
  __ZH_TYPE_Map_lessi64_spacei64_greater v937;
  (((&(v937))->tree)=(__ZH_LOP_AVLTree_lessMapNode_lessi64_spacei64_greater_greater_()));
  return (v937);
};printf("%s", "reached function end without returning anything lop Map<i64 i64> Map<i64 i64>\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotsub_Map_lessi64_spacei64_greaterPi64R(__ZH_TYPE_Map_lessi64_spacei64_greater* v938, i64* v939) {{
  __ZH_TYPE_MapNode_lessi64_spacei64_greater v941;
  i64 v940;
  ((v940)=(__ZH_LOP_i64_()));
  ((v941)=(__ZH_LOP_MapNode_lessi64_spacei64_greater_i64Ri64R(&(*v939), &(v940))));
  (__ZH_BOP__dotcall_dotinsert_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater((&(((v938))->tree)), (v941)));
  return &((&(*__ZH_BOP__dotcall_dotsub_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater((&(((v938))->tree)), (v941))))->val);
};printf("%s", "reached function end without returning anything op i64R .call.sub Map<i64 i64>P slf i64R key\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotinsert_Map_lessi64_spacei64_greaterPi64Ri64R(__ZH_TYPE_Map_lessi64_spacei64_greater* v942, i64* v943, i64* v944){
  __ZH_TYPE_MapNode_lessi64_spacei64_greater v945;
  ((v945)=(__ZH_LOP_MapNode_lessi64_spacei64_greater_i64Ri64R(&(*v943), &(*v944))));
  (__ZH_BOP__dotcall_dotinsert_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterPMapNode_lessi64_spacei64_greater((&(((v942))->tree)), (v945)));
}
__ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater __ZH_BOP__dotcall_dotcall_Map_lessi64_spacei64_greaterP(__ZH_TYPE_Map_lessi64_spacei64_greater* v946) {{
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v947;
  ((v947)=(__ZH_BOP__dotcall_dotcall_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterP((&(((v946))->tree)))));
  return (v947);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v947))));
};printf("%s", "reached function end without returning anything op Vec<MapNode<i64 i64>> .call.call Map<i64 i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Map_lessi64_spacei64_greaterP(__ZH_TYPE_Map_lessi64_spacei64_greater* v948){
  __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v949;
  (printf("%s\n", ((str)"{")));
  ((v949)=(__ZH_BOP__dotcall_dotcall_AVLTree_lessMapNode_lessi64_spacei64_greater_greaterP((&(((v948))->tree)))));
  {
      __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v953;
      __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v952;
      __ZH_TYPE_VecIter_lessMapNode_lessi64_spacei64_greater_greater v951;
      __ZH_TYPE_Vec_lessMapNode_lessi64_spacei64_greater_greater v950;
      ((v950)=(__ZH_LOP_Vec_lessMapNode_lessi64_spacei64_greater_greater_Vec_lessMapNode_lessi64_spacei64_greater_greaterR(&(v949))));
      ((v951)=(__ZH_BOP__dotcall_dotbegin_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v950)))));
      ((v952)=(__ZH_BOP__dotcall_dotend_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v950)))));
      ((v953)=(v951));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessMapNode_lessi64_spacei64_greater_greaterPVecIter_lessMapNode_lessi64_spacei64_greater_greater((&(v953)), (v952)))) {
        (printf("%s", ((str)"  ")));
        (printf("%lld", ((((&(v953))->ptr))->key)));
        (printf("%s", ((str)": ")));
        (printf("%lld\n", ((((&(v953))->ptr))->val)));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessMapNode_lessi64_spacei64_greater_greaterP((&(v953))));
      }
    }
  (printf("%s", ((str)"}")));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessMapNode_lessi64_spacei64_greater_greaterP((&(v949))));
}
void __ZH_LOP_put_Map_lessi64_spacei64_greaterR(__ZH_TYPE_Map_lessi64_spacei64_greater* v954){
  (__ZH_BOP__dotcall_dotprint_Map_lessi64_spacei64_greaterP((&(*v954))));
}
void __ZH_LOP_out_Map_lessi64_spacei64_greaterR(__ZH_TYPE_Map_lessi64_spacei64_greater* v955){
  (__ZH_BOP__dotcall_dotprint_Map_lessi64_spacei64_greaterP((&(*v955))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Map_lessi64_spacei64_greaterR(__ZH_TYPE_Map_lessi64_spacei64_greater* v956) {{
  (__ZH_LOP_out_Map_lessi64_spacei64_greaterR(&(*v956)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Map<i64 i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Map_lessi64_spacei64_greaterR(__ZH_TYPE_Map_lessi64_spacei64_greater* v957) {{
  ((__ZH_LOP_put_Map_lessi64_spacei64_greaterR(&(*v957))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Map<i64 i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutMap_lessi64_spacei64_greaterR(__ZH_TYPE_Out v958, __ZH_TYPE_Map_lessi64_spacei64_greater* v959) {{
  ((__ZH_LOP_put_Map_lessi64_spacei64_greaterR(&(*v959))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Map<i64 i64>R i\n"); exit(EXIT_FAILURE);}
