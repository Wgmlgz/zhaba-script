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
i64 __ZH_LOP__plus_i64(i64 v101);
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103);
void __ZH_BOP__plus_equal_u8Ru8(u8* v104, u8 v105);
void __ZH_BOP__minus_equal_u8Ru8(u8* v106, u8 v107);
void __ZH_BOP__slash_equal_u8Ru8(u8* v108, u8 v109);
void __ZH_BOP__percent_equal_u8Ru8(u8* v110, u8 v111);
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v112, u8 v113);
void __ZH_BOP__plus_equal_u16Ru16(u16* v114, u16 v115);
void __ZH_BOP__minus_equal_u16Ru16(u16* v116, u16 v117);
void __ZH_BOP__slash_equal_u16Ru16(u16* v118, u16 v119);
void __ZH_BOP__percent_equal_u16Ru16(u16* v120, u16 v121);
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v122, u16 v123);
void __ZH_BOP__plus_equal_u32Ru32(u32* v124, u32 v125);
void __ZH_BOP__minus_equal_u32Ru32(u32* v126, u32 v127);
void __ZH_BOP__slash_equal_u32Ru32(u32* v128, u32 v129);
void __ZH_BOP__percent_equal_u32Ru32(u32* v130, u32 v131);
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v132, u32 v133);
void __ZH_BOP__plus_equal_u64Ru64(u64* v134, u64 v135);
void __ZH_BOP__minus_equal_u64Ru64(u64* v136, u64 v137);
void __ZH_BOP__slash_equal_u64Ru64(u64* v138, u64 v139);
void __ZH_BOP__percent_equal_u64Ru64(u64* v140, u64 v141);
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v142, u64 v143);
i8 __ZH_LOP__minus_i8(i8 v144);
void __ZH_BOP__plus_equal_i8Ri8(i8* v145, i8 v146);
void __ZH_BOP__minus_equal_i8Ri8(i8* v147, i8 v148);
void __ZH_BOP__slash_equal_i8Ri8(i8* v149, i8 v150);
void __ZH_BOP__percent_equal_i8Ri8(i8* v151, i8 v152);
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v153, i8 v154);
i16 __ZH_LOP__minus_i16(i16 v155);
void __ZH_BOP__plus_equal_i16Ri16(i16* v156, i16 v157);
void __ZH_BOP__minus_equal_i16Ri16(i16* v158, i16 v159);
void __ZH_BOP__slash_equal_i16Ri16(i16* v160, i16 v161);
void __ZH_BOP__percent_equal_i16Ri16(i16* v162, i16 v163);
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v164, i16 v165);
i32 __ZH_LOP__minus_i32(i32 v166);
void __ZH_BOP__plus_equal_i32Ri32(i32* v167, i32 v168);
void __ZH_BOP__minus_equal_i32Ri32(i32* v169, i32 v170);
void __ZH_BOP__slash_equal_i32Ri32(i32* v171, i32 v172);
void __ZH_BOP__percent_equal_i32Ri32(i32* v173, i32 v174);
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v175, i32 v176);
i64 __ZH_LOP__minus_i64(i64 v177);
void __ZH_BOP__plus_equal_i64Ri64(i64* v178, i64 v179);
void __ZH_BOP__minus_equal_i64Ri64(i64* v180, i64 v181);
void __ZH_BOP__slash_equal_i64Ri64(i64* v182, i64 v183);
void __ZH_BOP__percent_equal_i64Ri64(i64* v184, i64 v185);
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v186, i64 v187);
f32 __ZH_LOP__minus_f32(f32 v188);
void __ZH_BOP__plus_equal_f32Rf32(f32* v189, f32 v190);
void __ZH_BOP__minus_equal_f32Rf32(f32* v191, f32 v192);
void __ZH_BOP__slash_equal_f32Rf32(f32* v193, f32 v194);
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v195, f32 v196);
f64 __ZH_LOP__minus_f64(f64 v197);
void __ZH_BOP__plus_equal_f64Rf64(f64* v198, f64 v199);
void __ZH_BOP__minus_equal_f64Rf64(f64* v200, f64 v201);
void __ZH_BOP__slash_equal_f64Rf64(f64* v202, f64 v203);
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v204, f64 v205);
void __ZH_LOP__plus_plus_i64R(i64* v206);
void __ZH_LOP__minus_minus_i64R(i64* v207);
void __ZH_LOP__plus_plus_u8R(u8* v208);
void __ZH_LOP__minus_minus_u8R(u8* v209);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v211, __ZH_TYPE_Out v212);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v213);
__ZH_TYPE_Out __ZH_ROP__less_str(str v214);
__ZH_TYPE_Out __ZH_LOP__less_str(str v215);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v216, str v217);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v218);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v219, str* v220);
__ZH_TYPE_Out __ZH_ROP__less_char(char v221);
__ZH_TYPE_Out __ZH_LOP__less_char(char v222);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v223, char v224);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v225);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v226, char* v227);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v228);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v229);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v230, i8 v231);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v232);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v233, i8* v234);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v235);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v236);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v237, i16 v238);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v239);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v240, i16* v241);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v242);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v243);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v244, i32 v245);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v246);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v247, i32* v248);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v249);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v250);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v251, i64 v252);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v253);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v254, i64* v255);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v256);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v257);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v258, u8 v259);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v260);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v261, u8* v262);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v263);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v264);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v265, u16 v266);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v267);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v268, u16* v269);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v270);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v271);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v272, u32 v273);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v274);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v275, u32* v276);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v277);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v278);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v279, u64 v280);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v281);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v282, u64* v283);
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v284);
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v285);
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v286, f32 v287);
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v288);
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v289, f32* v290);
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v291);
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v292);
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v293, f64 v294);
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v295);
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v296, f64* v297);
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v298);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v299, i64 v300);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v301);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v302);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v303, i64 v304);
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v306, i64 v307);
i64 __ZH_LOP_rangeMin_();
i64 __ZH_LOP_rangeMax_();
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v308);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v309);
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v310);
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v311);
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v312, i64 v313);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v314);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v315);
bool __ZH_BOP__equal_equal_i64Range(i64 v316, __ZH_TYPE_Range v317);
i8 __ZH_LOP_i8_();
i16 __ZH_LOP_i16_();
i32 __ZH_LOP_i32_();
i64 __ZH_LOP_i64_();
u8 __ZH_LOP_u8_();
u16 __ZH_LOP_u16_();
u32 __ZH_LOP_u32_();
u64 __ZH_LOP_u64_();
char __ZH_LOP_char_();
i64 __ZH_LOP_max_i64i64(i64 v318, i64 v319);
i64 __ZH_LOP_min_i64i64(i64 v320, i64 v321);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v346);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v348);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v349, __ZH_TYPE_VecIter_lessi64_greater v350);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v351);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v322, i64 v323);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v324, i64 v325);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v326);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v331);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v336);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v343, i64 v344);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v345);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v352);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v353);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v354);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v355);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v356);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v357);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v363, i64 v364);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v370);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v376, i64 v377);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v378, __ZH_TYPE_Vec_lessi64_greater* v379);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v384, i64 v385);
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v387, i64 v388);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v389);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v390);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v391);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v392);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v393, __ZH_TYPE_Vec_lessi64_greater* v394);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v395, i64 v396);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v397, i64 v398, i64 v399);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v405, __ZH_TYPE_Range v406);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v409);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v410, __ZH_TYPE_Vec_lessi64_greater* v411);
void __ZH_LOP_swap_i64Pi64P(i64* v412, i64* v413);
i64* __ZH_LOP_partition_i64Pi64P(i64* v415, i64* v416);
void __ZH_LOP_qsort_i64Pi64P(i64* v420, i64* v421);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v425);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v430);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v431, i64 v432);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v438);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v444, i64 v445);
str __ZH_LOP_str_();
char __ZH_BOP__caret_stri64(str v447, i64 v448);
bool __ZH_BOP__equal_equal_charstr(char v449, str v450);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v475);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v477);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v478, __ZH_TYPE_VecIter_lesschar_greater v479);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v480);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v451, i64 v452);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v453, i64 v454);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v455);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v460);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v465);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v472, char v473);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v474);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v481);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v482);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v483);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v484);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v485);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v486);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v492, char v493);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v499);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v505, char v506);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v507, __ZH_TYPE_Vec_lesschar_greater* v508);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v513, char v514);
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v516, char v517);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v518);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v519);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v520);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v521);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v522, __ZH_TYPE_Vec_lesschar_greater* v523);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v524, i64 v525);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v526, i64 v527, i64 v528);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v534, __ZH_TYPE_Range v535);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v538);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v539, __ZH_TYPE_Vec_lesschar_greater* v540);
void __ZH_LOP_swap_charPcharP(char* v541, char* v542);
char* __ZH_LOP_partition_charPcharP(char* v544, char* v545);
void __ZH_LOP_qsort_charPcharP(char* v549, char* v550);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v554);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v559);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v561);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v562);
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v564, i64 v565);
char* __ZH_BOP__dotcall_dotsub_StrP_ampersandi64(__ZH_TYPE_Str* v566, i64 v567);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v568, i64 v569);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v570, char v571);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v572);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v573);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v575);
i64 __ZH_LOP_len_str(str v577);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v579);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v580);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v581, char v582);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v583, __ZH_TYPE_Str* v584);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v590, str v591);
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v597, __ZH_TYPE_Str* v598);
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v600, str v601);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v606);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v607);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v608, __ZH_TYPE_Str* v609);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v610, __ZH_TYPE_Str* v611);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v616, i64 v617);
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v624);
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v625);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v631, f64 v632);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v634, __ZH_TYPE_V2 v635);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v636, __ZH_TYPE_V2 v637);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v639);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v640);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v641);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v642);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v643);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v644, __ZH_TYPE_V2 v645);
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v646);
__ZH_TYPE_Rng __ZH_LOP_Rng_();
i64 __ZH_BOP__dotcall_dotcall_RngP_ampersand(__ZH_TYPE_Rng* v648);
int main(int argc, char *argv[]) ;

i64 __ZH_LOP__plus_i64(i64 v101) {{
  return (v101);
};printf("%s", "reached function end without returning anything lop i64 + i64 a\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103) {{
  return (!((((v102))%((v103)))));
};printf("%s", "reached function end without returning anything op bool %% i64 a i64 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u8Ru8(u8* v104, u8 v105){
  ((*v104)=(((*v104))+((v105))));
}
void __ZH_BOP__minus_equal_u8Ru8(u8* v106, u8 v107){
  ((*v106)=(((*v106))-((v107))));
}
void __ZH_BOP__slash_equal_u8Ru8(u8* v108, u8 v109){
  ((*v108)=(((*v108))/((v109))));
}
void __ZH_BOP__percent_equal_u8Ru8(u8* v110, u8 v111){
  ((*v110)=(((*v110))%((v111))));
}
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v112, u8 v113){
  ((*v112)=(((*v112))*((v113))));
}
void __ZH_BOP__plus_equal_u16Ru16(u16* v114, u16 v115){
  ((*v114)=(((*v114))+((v115))));
}
void __ZH_BOP__minus_equal_u16Ru16(u16* v116, u16 v117){
  ((*v116)=(((*v116))-((v117))));
}
void __ZH_BOP__slash_equal_u16Ru16(u16* v118, u16 v119){
  ((*v118)=(((*v118))/((v119))));
}
void __ZH_BOP__percent_equal_u16Ru16(u16* v120, u16 v121){
  ((*v120)=(((*v120))%((v121))));
}
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v122, u16 v123){
  ((*v122)=(((*v122))*((v123))));
}
void __ZH_BOP__plus_equal_u32Ru32(u32* v124, u32 v125){
  ((*v124)=(((*v124))+((v125))));
}
void __ZH_BOP__minus_equal_u32Ru32(u32* v126, u32 v127){
  ((*v126)=(((*v126))-((v127))));
}
void __ZH_BOP__slash_equal_u32Ru32(u32* v128, u32 v129){
  ((*v128)=(((*v128))/((v129))));
}
void __ZH_BOP__percent_equal_u32Ru32(u32* v130, u32 v131){
  ((*v130)=(((*v130))%((v131))));
}
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v132, u32 v133){
  ((*v132)=(((*v132))*((v133))));
}
void __ZH_BOP__plus_equal_u64Ru64(u64* v134, u64 v135){
  ((*v134)=(((*v134))+((v135))));
}
void __ZH_BOP__minus_equal_u64Ru64(u64* v136, u64 v137){
  ((*v136)=(((*v136))-((v137))));
}
void __ZH_BOP__slash_equal_u64Ru64(u64* v138, u64 v139){
  ((*v138)=(((*v138))/((v139))));
}
void __ZH_BOP__percent_equal_u64Ru64(u64* v140, u64 v141){
  ((*v140)=(((*v140))%((v141))));
}
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v142, u64 v143){
  ((*v142)=(((*v142))*((v143))));
}
i8 __ZH_LOP__minus_i8(i8 v144) {{
  return ((((i8)0))-((v144)));
};printf("%s", "reached function end without returning anything lop i8 - i8 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i8Ri8(i8* v145, i8 v146){
  ((*v145)=(((*v145))+((v146))));
}
void __ZH_BOP__minus_equal_i8Ri8(i8* v147, i8 v148){
  ((*v147)=(((*v147))-((v148))));
}
void __ZH_BOP__slash_equal_i8Ri8(i8* v149, i8 v150){
  ((*v149)=(((*v149))/((v150))));
}
void __ZH_BOP__percent_equal_i8Ri8(i8* v151, i8 v152){
  ((*v151)=(((*v151))%((v152))));
}
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v153, i8 v154){
  ((*v153)=(((*v153))*((v154))));
}
i16 __ZH_LOP__minus_i16(i16 v155) {{
  return ((((i16)0))-((v155)));
};printf("%s", "reached function end without returning anything lop i16 - i16 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i16Ri16(i16* v156, i16 v157){
  ((*v156)=(((*v156))+((v157))));
}
void __ZH_BOP__minus_equal_i16Ri16(i16* v158, i16 v159){
  ((*v158)=(((*v158))-((v159))));
}
void __ZH_BOP__slash_equal_i16Ri16(i16* v160, i16 v161){
  ((*v160)=(((*v160))/((v161))));
}
void __ZH_BOP__percent_equal_i16Ri16(i16* v162, i16 v163){
  ((*v162)=(((*v162))%((v163))));
}
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v164, i16 v165){
  ((*v164)=(((*v164))*((v165))));
}
i32 __ZH_LOP__minus_i32(i32 v166) {{
  return ((((i32)0))-((v166)));
};printf("%s", "reached function end without returning anything lop i32 - i32 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i32Ri32(i32* v167, i32 v168){
  ((*v167)=(((*v167))+((v168))));
}
void __ZH_BOP__minus_equal_i32Ri32(i32* v169, i32 v170){
  ((*v169)=(((*v169))-((v170))));
}
void __ZH_BOP__slash_equal_i32Ri32(i32* v171, i32 v172){
  ((*v171)=(((*v171))/((v172))));
}
void __ZH_BOP__percent_equal_i32Ri32(i32* v173, i32 v174){
  ((*v173)=(((*v173))%((v174))));
}
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v175, i32 v176){
  ((*v175)=(((*v175))*((v176))));
}
i64 __ZH_LOP__minus_i64(i64 v177) {{
  return ((((i64)0))-((v177)));
};printf("%s", "reached function end without returning anything lop i64 - i64 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i64Ri64(i64* v178, i64 v179){
  ((*v178)=(((*v178))+((v179))));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v180, i64 v181){
  ((*v180)=(((*v180))-((v181))));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v182, i64 v183){
  ((*v182)=(((*v182))/((v183))));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v184, i64 v185){
  ((*v184)=(((*v184))%((v185))));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v186, i64 v187){
  ((*v186)=(((*v186))*((v187))));
}
f32 __ZH_LOP__minus_f32(f32 v188) {{
  return ((((f32)0.000000))-((v188)));
};printf("%s", "reached function end without returning anything lop f32 - f32 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f32Rf32(f32* v189, f32 v190){
  ((*v189)=(((*v189))+((v190))));
}
void __ZH_BOP__minus_equal_f32Rf32(f32* v191, f32 v192){
  ((*v191)=(((*v191))-((v192))));
}
void __ZH_BOP__slash_equal_f32Rf32(f32* v193, f32 v194){
  ((*v193)=(((*v193))/((v194))));
}
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v195, f32 v196){
  ((*v195)=(((*v195))*((v196))));
}
f64 __ZH_LOP__minus_f64(f64 v197) {{
  return ((((f64)0.000000))-((v197)));
};printf("%s", "reached function end without returning anything lop f64 - f64 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f64Rf64(f64* v198, f64 v199){
  ((*v198)=(((*v198))+((v199))));
}
void __ZH_BOP__minus_equal_f64Rf64(f64* v200, f64 v201){
  ((*v200)=(((*v200))-((v201))));
}
void __ZH_BOP__slash_equal_f64Rf64(f64* v202, f64 v203){
  ((*v202)=(((*v202))/((v203))));
}
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v204, f64 v205){
  ((*v204)=(((*v204))*((v205))));
}
void __ZH_LOP__plus_plus_i64R(i64* v206){
  (__ZH_BOP__plus_equal_i64Ri64(&(*v206), ((i64)1)));
}
void __ZH_LOP__minus_minus_i64R(i64* v207){
  (__ZH_BOP__minus_equal_i64Ri64(&(*v207), ((i64)1)));
}
void __ZH_LOP__plus_plus_u8R(u8* v208){
  ((*v208)=(((*v208))+(((u8)1))));
}
void __ZH_LOP__minus_minus_u8R(u8* v209){
  ((*v209)=(((*v209))-(((u8)1))));
}
__ZH_TYPE_Out __ZH_LOP_Out_() {{
  __ZH_TYPE_Out v210;
  return (v210);
};printf("%s", "reached function end without returning anything lop Out Out\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v211, __ZH_TYPE_Out v212) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out a Out b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v213) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Out o\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_str(str v214) {{
  (printf("%s\n", (v214)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_str(str v215) {{
  ((printf("%s", (v215))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v216, str v217) {{
  ((printf("%s", (v217))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v218) {{
  ((*v218)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v219, str* v220) {{
  ((*v220)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_char(char v221) {{
  (printf("%c\n", (v221)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_char(char v222) {{
  ((printf("%c", (v222))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v223, char v224) {{
  ((printf("%c", (v224))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v225) {{
  ((*v225)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v226, char* v227) {{
  ((*v227)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v228) {{
  (printf("%d\n", (v228)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v229) {{
  ((printf("%d", (v229))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v230, i8 v231) {{
  ((printf("%d", (v231))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v232) {{
  ((*v232)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v233, i8* v234) {{
  ((*v234)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v235) {{
  (printf("%hd\n", (v235)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v236) {{
  ((printf("%hd", (v236))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v237, i16 v238) {{
  ((printf("%hd", (v238))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v239) {{
  ((*v239)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v240, i16* v241) {{
  ((*v241)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v242) {{
  (printf("%d\n", (v242)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v243) {{
  ((printf("%d", (v243))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v244, i32 v245) {{
  ((printf("%d", (v245))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v246) {{
  ((*v246)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v247, i32* v248) {{
  ((*v248)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v249) {{
  (printf("%lld\n", (v249)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v250) {{
  ((printf("%lld", (v250))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v251, i64 v252) {{
  ((printf("%lld", (v252))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v253) {{
  ((*v253)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v254, i64* v255) {{
  ((*v255)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v256) {{
  (printf("%d\n", (v256)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v257) {{
  ((printf("%d", (v257))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v258, u8 v259) {{
  ((printf("%d", (v259))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v260) {{
  ((*v260)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v261, u8* v262) {{
  ((*v262)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v263) {{
  (printf("%hd\n", (v263)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v264) {{
  ((printf("%hd", (v264))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v265, u16 v266) {{
  ((printf("%hd", (v266))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v267) {{
  ((*v267)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v268, u16* v269) {{
  ((*v269)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v270) {{
  (printf("%u\n", (v270)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v271) {{
  ((printf("%u", (v271))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v272, u32 v273) {{
  ((printf("%u", (v273))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v274) {{
  ((*v274)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v275, u32* v276) {{
  ((*v276)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v277) {{
  (printf("%llu\n", (v277)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v278) {{
  ((printf("%llu", (v278))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v279, u64 v280) {{
  ((printf("%llu", (v280))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v281) {{
  ((*v281)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v282, u64* v283) {{
  ((*v283)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v284) {{
  (printf("%f\n", (v284)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v285) {{
  ((printf("%f", (v285))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v286, f32 v287) {{
  ((printf("%f", (v287))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v288) {{
  ((*v288)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v289, f32* v290) {{
  ((*v290)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v291) {{
  (printf("%f\n", (v291)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v292) {{
  ((printf("%f", (v292))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v293, f64 v294) {{
  ((printf("%f", (v294))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v295) {{
  ((*v295)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v296, f64* v297) {{
  ((*v297)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f64R i\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v298){
  ((*(v298))=(((*(v298)))+(((i64)1))));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v299, i64 v300) {{
  return (((*(v299)))!=((v300)));
};printf("%s", "reached function end without returning anything op bool .call.uneq i64P& slf i64 other\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v301) {{
  return (((v301))->begin);
};printf("%s", "reached function end without returning anything op i64 .call.begin RangeP& slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v302) {{
  return (((v302))->end);
};printf("%s", "reached function end without returning anything op i64 .call.end RangeP& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v303, i64 v304) {{
  __ZH_TYPE_Range v305;
  (((&(v305))->begin)=(v303));
  (((&(v305))->end)=(v304));
  return (v305);
};printf("%s", "reached function end without returning anything op Range .. i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v306, i64 v307) {{
  return (__ZH_BOP__dot_dot_i64i64((v306), (__ZH_LOP__minus_i64((v307)))));
};printf("%s", "reached function end without returning anything op Range ..- i64 begin i64 end\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMin_() {{
  return (__ZH_LOP__minus_i64(((i64)9223372036854775807)));
};printf("%s", "reached function end without returning anything lop i64 rangeMin\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMax_() {{
  return ((i64)9223372036854775807);
};printf("%s", "reached function end without returning anything lop i64 rangeMax\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v308) {{
  return (__ZH_BOP__dot_dot_i64i64((v308), (__ZH_LOP_rangeMax_())));
};printf("%s", "reached function end without returning anything rop Range .. i64 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v309) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v309)));
};printf("%s", "reached function end without returning anything lop Range .. i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v310) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (__ZH_LOP__minus_i64((v310)))));
};printf("%s", "reached function end without returning anything lop Range ..- i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v311) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP__minus_i64(((&(v311))->begin))), ((&(v311))->end)));
};printf("%s", "reached function end without returning anything lop Range - Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v312, i64 v313) {{
  return (__ZH_BOP__dot_dot_i64i64((v312), (((v313))+(((i64)1)))));
};printf("%s", "reached function end without returning anything op Range ..= i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v314) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v314))+(((i64)1)))));
};printf("%s", "reached function end without returning anything lop Range ..= i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v315) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((__ZH_LOP__minus_i64((v315))))+(((i64)1)))));
};printf("%s", "reached function end without returning anything lop Range ..=- i64 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i64Range(i64 v316, __ZH_TYPE_Range v317) {{
  if (((((&(v317))->begin))<(((&(v317))->end)))) {
    return ((((((&(v317))->begin))<=((v316))))&&((((v316))<(((&(v317))->end)))));
  } else {
    return ((((((&(v317))->end))<=((v316))))&&((((v316))<(((&(v317))->begin)))));
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
i64 __ZH_LOP_max_i64i64(i64 v318, i64 v319) {{
  if ((((v318))>((v319)))) {
    return (v318);
  } else {
    return (v319);
  }
};printf("%s", "reached function end without returning anything lop i64 max i64 a i64 b\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_min_i64i64(i64 v320, i64 v321) {{
  if ((((v320))<((v321)))) {
    return (v320);
  } else {
    return (v321);
  }
};printf("%s", "reached function end without returning anything lop i64 min i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v346) {{
  __ZH_TYPE_VecIter_lessi64_greater v347;
  (((&(v347))->ptr)=(v346));
  return (v347);
};printf("%s", "reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v348){
  ((((v348))->ptr)=((i64*)((((i64)(((v348))->ptr)))+(((((i64)1))*(((i64)8)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v349, __ZH_TYPE_VecIter_lessi64_greater v350) {{
  return ((((i64)(((v349))->ptr)))!=(((i64)((&(v350))->ptr))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<i64>P& slf VecIter<i64> other\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v351) {{
  return &(*((&(v351))->ptr));
};printf("%s", "reached function end without returning anything lop i64R * VecIter<i64> slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v322, i64 v323) {{
  return ((i64*)((i64*)((((i64)(((v322))->head)))+((((v323))*(((i64)8)))))));
};printf("%s", "reached function end without returning anything op i64P .call.atP Vec<i64>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v324, i64 v325) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v324), (v325))));
};printf("%s", "reached function end without returning anything op i64R .call.at Vec<i64>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v326){
  (printf("%s", ((str)"[")));
  {
      i64 v330;
      i64 v329;
      i64 v328;
      __ZH_TYPE_Range v327;
      ((v327)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v326))->size))));
      ((v328)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v327)))));
      ((v329)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v327)))));
      ((v330)=(v328));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v330)), (v329)))) {
        if ((!((!((v330)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v326), (v330))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v330))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v331){
  {
      i64 v335;
      i64 v334;
      i64 v333;
      __ZH_TYPE_Range v332;
      ((v332)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v331))->size))));
      ((v333)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v332)))));
      ((v334)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v332)))));
      ((v335)=(v333));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v335)), (v334)))) {
        (printf("%lld\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v331), (v335))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v335))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v336){
  i64 v337;
  ((v337)=(((v336))->cap));
  if ((((v337))==(((i64)0)))) {
    ((v337)=((i64)1));
    ((((v336))->head)=((i64*)(alloc(((i64)8)))));
    ((((v336))->cap)=(v337));
  } else {
    i64* v338;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v337), ((i64)2)));
    ((v338)=((i64*)(alloc((((v337))*(((i64)8)))))));
    {
        i64 v342;
        i64 v341;
        i64 v340;
        __ZH_TYPE_Range v339;
        ((v339)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v336))->size))));
        ((v340)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v339)))));
        ((v341)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v339)))));
        ((v342)=(v340));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v342)), (v341)))) {
          ((*((i64*)((((i64)(v338)))+((((v342))*(((i64)8)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v336), (v342))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v342))));
        }
      }
    (free((void*) ((i64)(((v336))->head))));
    ((((v336))->head)=(v338));
  }
  ((((v336))->cap)=(v337));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v343, i64 v344){
  if ((((((v343))->size))==((((v343))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP_ampersand((v343)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v343), (((v343))->size)))=(v344));
  (__ZH_LOP__plus_plus_i64R(&(((v343))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v345){
  (__ZH_LOP__minus_minus_i64R(&(((v345))->size)));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v352) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((((v352))->head)));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v353) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v353), (((v353))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v354) {{
  return &(*(((v354))->head));
};printf("%s", "reached function end without returning anything op i64R .call.front Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v355) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v355), (((((v355))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op i64R .call.back Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v356){
  if ((!((!(((i64)(((v356))->head))))))) {
    (free((void*) ((i64)(((v356))->head))));
    ((((v356))->size)=((i64)0));
    ((((v356))->cap)=((i64)0));
    ((((v356))->head)=((i64*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v357) {{
  __ZH_TYPE_Vec_lessi64_greater v358;
  (((&(v358))->head)=((i64*)((i64)0)));
  (((&(v358))->size)=((i64)0));
  (((&(v358))->cap)=((i64)0));
  while (((((&(v358))->cap))<((v357)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP_ampersand((&(v358))));
  }
  (((&(v358))->size)=(v357));
  (((&(v358))->cap)=(v357));
  {
      i64 v362;
      i64 v361;
      i64 v360;
      __ZH_TYPE_Range v359;
      ((v359)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v358))->size))));
      ((v360)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v359)))));
      ((v361)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v359)))));
      ((v362)=(v360));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v362)), (v361)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(v358)), (v362)))=(__ZH_LOP_i64_()));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v362))));
      }
    }
  return (v358);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v358))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v363, i64 v364) {{
  __ZH_TYPE_Vec_lessi64_greater v365;
  ((v365)=(__ZH_LOP_Vec_lessi64_greater_i64((v363))));
  {
      i64 v369;
      i64 v368;
      i64 v367;
      __ZH_TYPE_Range v366;
      ((v366)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v365))->size))));
      ((v367)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v366)))));
      ((v368)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v366)))));
      ((v369)=(v367));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v369)), (v368)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(v365)), (v369)))=(v364));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v369))));
      }
    }
  return (v365);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v365))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {{
  return (__ZH_LOP_Vec_lessi64_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v370) {{
  __ZH_TYPE_Vec_lessi64_greater v371;
  ((v371)=(__ZH_LOP_Vec_lessi64_greater_i64(((&(*v370))->size))));
  {
      i64 v375;
      i64 v374;
      i64 v373;
      __ZH_TYPE_Range v372;
      ((v372)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v370))->size))));
      ((v373)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v372)))));
      ((v374)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v372)))));
      ((v375)=(v373));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v375)), (v374)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(v371)), (v375)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(*v370)), (v375))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v375))));
      }
    }
  return (v371);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v371))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v376, i64 v377){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&(*v376)), (v377)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v378, __ZH_TYPE_Vec_lessi64_greater* v379){
  {
      __ZH_TYPE_VecIter_lessi64_greater v383;
      __ZH_TYPE_VecIter_lessi64_greater v382;
      __ZH_TYPE_VecIter_lessi64_greater v381;
      __ZH_TYPE_Vec_lessi64_greater v380;
      ((v380)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v379))));
      ((v381)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&(v380)))));
      ((v382)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&(v380)))));
      ((v383)=(v381));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&(v383)), (v382)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&(*v378)), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v383)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&(v383))));
      }
    }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v384, i64 v385) {{
  __ZH_TYPE_Vec_lessi64_greater v386;
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v386), (v384)));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v386), (v385)));
  return (v386);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v386))));
};printf("%s", "reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v387, i64 v388) {{
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(*v387), (v388)));
  return &(*v387);
};printf("%s", "reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v389){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&(*v389))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v390){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&(*v390))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v391) {{
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v391)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v392) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v392))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v393, __ZH_TYPE_Vec_lessi64_greater* v394) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v394))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<i64>R i\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v395, i64 v396) {{
  if ((((v396))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v396), (((v395))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v395), (v396)));
};printf("%s", "reached function end without returning anything op i64R .call.sub Vec<i64>P& slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v397, i64 v398, i64 v399) {{
  __ZH_TYPE_Vec_lessi64_greater v400;
  ((v400)=(__ZH_LOP_Vec_lessi64_greater_i64(((i64)0))));
  {
      i64 v404;
      i64 v403;
      i64 v402;
      __ZH_TYPE_Range v401;
      ((v401)=(__ZH_BOP__dot_dot_i64i64((v398), (v399))));
      ((v402)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v401)))));
      ((v403)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v401)))));
      ((v404)=(v402));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v404)), (v403)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&(v400)), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v397), (v404)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v404))));
      }
    }
  return (v400);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v400))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v405, __ZH_TYPE_Range v406) {{
  i64 v408;
  i64 v407;
  (((v407)=((&(v406))->begin)), ((v408)=((&(v406))->end)));
  if ((((v407))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v407), (((v405))->size)));
  }
  if ((((v407))<(((i64)0)))) {
    ((v407)=((i64)0));
  }
  if ((((v408))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v408), (((v405))->size)));
  }
  if ((((v408))>((((v405))->size)))) {
    ((v408)=(((v405))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v405), (v407), (v408)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v409) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v409), ((i64)0), (((v409))->size)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v410, __ZH_TYPE_Vec_lessi64_greater* v411) {{
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_i64Pi64P(i64* v412, i64* v413){
  i64 v414;
  ((v414)=(*(v412)));
  ((*(v412))=(*(v413)));
  ((*(v413))=(v414));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v415, i64* v416) {{
  i64* v419;
  i64* v418;
  i64* v417;
  (((v417)=((i64*)((((i64)(v416)))-(((((i64)1))*(((i64)8))))))), ((v418)=(v415)), ((v419)=(v415)));
  ((v419)=(v415));
  while (((((i64)(v419)))!=(((i64)(v417))))) {
    if ((((*(v419)))<((*(v417))))) {
      (__ZH_LOP_swap_i64Pi64P((v418), (v419)));
      ((v418)=((i64*)((((i64)(v418)))+(((((i64)1))*(((i64)8)))))));
    }
    ((v419)=((i64*)((((i64)(v419)))+(((((i64)1))*(((i64)8)))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v418), (v417)));
  return (v418);
};printf("%s", "reached function end without returning anything lop i64P partition i64P low i64P high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_i64Pi64P(i64* v420, i64* v421){
  i64 v423;
  i64 v422;
  ((v422)=((((i64)(v421)))-(((i64)(v420)))));
  ((v423)=((i64)8));
  if ((((v422))>((v423)))) {
    i64* v424;
    ((v424)=(__ZH_LOP_partition_i64Pi64P((v420), (v421))));
    (__ZH_LOP_qsort_i64Pi64P((v420), (v424)));
    ((v424)=((i64*)((((i64)(v424)))+(((((i64)1))*(((i64)8)))))));
    (__ZH_LOP_qsort_i64Pi64P((v424), (v421)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v425){
  __ZH_TYPE_VecIter_lessi64_greater v429;
  __ZH_TYPE_VecIter_lessi64_greater v427;
  (__ZH_LOP_qsort_i64Pi64P(((&(*(((v427)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v425)))), (&(v427)))))->ptr), ((&(*(((v429)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v425)))), (&(v429)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v430){
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&(*v430))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v431, i64 v432) {{
  __ZH_TYPE_Vec_lessi64_greater v433;
  ((v433)=(__ZH_LOP_Vec_lessi64_greater_i64((((v432))-((v431))))));
  {
      i64 v437;
      i64 v436;
      i64 v435;
      __ZH_TYPE_Range v434;
      ((v434)=(__ZH_BOP__dot_dot_i64i64((v431), (v432))));
      ((v435)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v434)))));
      ((v436)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v434)))));
      ((v437)=(v435));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v437)), (v436)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(v433)), (((v437))-((v431)))))=(v437));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v437))));
      }
    }
  return (v433);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v433))));
};printf("%s", "reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v438) {{
  __ZH_TYPE_Vec_lessi64_greater v439;
  ((v439)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      i64 v443;
      i64 v442;
      i64 v441;
      __ZH_TYPE_Range v440;
      ((v440)=(*(v438)));
      ((v441)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v440)))));
      ((v442)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v440)))));
      ((v443)=(v441));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v443)), (v442)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v439), (v443)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v443))));
      }
    }
  return (v439);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v439))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.call RangeP& slf\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v444, i64 v445) {{
  return (*((char*)((((i64)(*(v444))))+((v445)))));
};printf("%s", "reached function end without returning anything op char .call.at strP& slf i64 pos\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_str_() {{
  u8* v446;
  ((v446)=((u8*)(alloc(((i64)1)))));
  ((*(v446))=((u8)0));
  return ((str)(v446));
};printf("%s", "reached function end without returning anything lop str str\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__caret_stri64(str v447, i64 v448) {{
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&(v447)), (v448)));
};printf("%s", "reached function end without returning anything op char ^ str s i64 i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charstr(char v449, str v450) {{
  return (((v449))==((__ZH_BOP__caret_stri64((v450), ((i64)0)))));
};printf("%s", "reached function end without returning anything op bool == char ch str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v475) {{
  __ZH_TYPE_VecIter_lesschar_greater v476;
  (((&(v476))->ptr)=(v475));
  return (v476);
};printf("%s", "reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v477){
  ((((v477))->ptr)=((char*)((((i64)(((v477))->ptr)))+(((((i64)1))*(((i64)1)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v478, __ZH_TYPE_VecIter_lesschar_greater v479) {{
  return ((((i64)(((v478))->ptr)))!=(((i64)((&(v479))->ptr))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<char>P& slf VecIter<char> other\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v480) {{
  return &(*((&(v480))->ptr));
};printf("%s", "reached function end without returning anything lop charR * VecIter<char> slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v451, i64 v452) {{
  return ((char*)((char*)((((i64)(((v451))->head)))+((((v452))*(((i64)1)))))));
};printf("%s", "reached function end without returning anything op charP .call.atP Vec<char>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v453, i64 v454) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v453), (v454))));
};printf("%s", "reached function end without returning anything op charR .call.at Vec<char>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v455){
  (printf("%s", ((str)"[")));
  {
      i64 v459;
      i64 v458;
      i64 v457;
      __ZH_TYPE_Range v456;
      ((v456)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v455))->size))));
      ((v457)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v456)))));
      ((v458)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v456)))));
      ((v459)=(v457));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v459)), (v458)))) {
        if ((!((!((v459)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v455), (v459))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v459))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v460){
  {
      i64 v464;
      i64 v463;
      i64 v462;
      __ZH_TYPE_Range v461;
      ((v461)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v460))->size))));
      ((v462)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v461)))));
      ((v463)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v461)))));
      ((v464)=(v462));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v464)), (v463)))) {
        (printf("%c\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v460), (v464))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v464))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v465){
  i64 v466;
  ((v466)=(((v465))->cap));
  if ((((v466))==(((i64)0)))) {
    ((v466)=((i64)1));
    ((((v465))->head)=((char*)(alloc(((i64)1)))));
    ((((v465))->cap)=(v466));
  } else {
    char* v467;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v466), ((i64)2)));
    ((v467)=((char*)(alloc((((v466))*(((i64)1)))))));
    {
        i64 v471;
        i64 v470;
        i64 v469;
        __ZH_TYPE_Range v468;
        ((v468)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v465))->size))));
        ((v469)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v468)))));
        ((v470)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v468)))));
        ((v471)=(v469));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v471)), (v470)))) {
          ((*((char*)((((i64)(v467)))+((((v471))*(((i64)1)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v465), (v471))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v471))));
        }
      }
    (free((void*) ((i64)(((v465))->head))));
    ((((v465))->head)=(v467));
  }
  ((((v465))->cap)=(v466));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v472, char v473){
  if ((((((v472))->size))==((((v472))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP_ampersand((v472)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v472), (((v472))->size)))=(v473));
  (__ZH_LOP__plus_plus_i64R(&(((v472))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v474){
  (__ZH_LOP__minus_minus_i64R(&(((v474))->size)));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v481) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((((v481))->head)));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v482) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v482), (((v482))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v483) {{
  return &(*(((v483))->head));
};printf("%s", "reached function end without returning anything op charR .call.front Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v484) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v484), (((((v484))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op charR .call.back Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v485){
  if ((!((!(((i64)(((v485))->head))))))) {
    (free((void*) ((i64)(((v485))->head))));
    ((((v485))->size)=((i64)0));
    ((((v485))->cap)=((i64)0));
    ((((v485))->head)=((char*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v486) {{
  __ZH_TYPE_Vec_lesschar_greater v487;
  (((&(v487))->head)=((char*)((i64)0)));
  (((&(v487))->size)=((i64)0));
  (((&(v487))->cap)=((i64)0));
  while (((((&(v487))->cap))<((v486)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP_ampersand((&(v487))));
  }
  (((&(v487))->size)=(v486));
  (((&(v487))->cap)=(v486));
  {
      i64 v491;
      i64 v490;
      i64 v489;
      __ZH_TYPE_Range v488;
      ((v488)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v487))->size))));
      ((v489)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v488)))));
      ((v490)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v488)))));
      ((v491)=(v489));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v491)), (v490)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(v487)), (v491)))=(__ZH_LOP_char_()));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v491))));
      }
    }
  return (v487);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v487))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v492, char v493) {{
  __ZH_TYPE_Vec_lesschar_greater v494;
  ((v494)=(__ZH_LOP_Vec_lesschar_greater_i64((v492))));
  {
      i64 v498;
      i64 v497;
      i64 v496;
      __ZH_TYPE_Range v495;
      ((v495)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v494))->size))));
      ((v496)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v495)))));
      ((v497)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v495)))));
      ((v498)=(v496));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v498)), (v497)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(v494)), (v498)))=(v493));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v498))));
      }
    }
  return (v494);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v494))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {{
  return (__ZH_LOP_Vec_lesschar_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v499) {{
  __ZH_TYPE_Vec_lesschar_greater v500;
  ((v500)=(__ZH_LOP_Vec_lesschar_greater_i64(((&(*v499))->size))));
  {
      i64 v504;
      i64 v503;
      i64 v502;
      __ZH_TYPE_Range v501;
      ((v501)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v499))->size))));
      ((v502)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v501)))));
      ((v503)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v501)))));
      ((v504)=(v502));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v504)), (v503)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(v500)), (v504)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(*v499)), (v504))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v504))));
      }
    }
  return (v500);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v500))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v505, char v506){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(*v505)), (v506)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v507, __ZH_TYPE_Vec_lesschar_greater* v508){
  {
      __ZH_TYPE_VecIter_lesschar_greater v512;
      __ZH_TYPE_VecIter_lesschar_greater v511;
      __ZH_TYPE_VecIter_lesschar_greater v510;
      __ZH_TYPE_Vec_lesschar_greater v509;
      ((v509)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v508))));
      ((v510)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(v509)))));
      ((v511)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&(v509)))));
      ((v512)=(v510));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&(v512)), (v511)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(*v507)), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v512)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&(v512))));
      }
    }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v513, char v514) {{
  __ZH_TYPE_Vec_lesschar_greater v515;
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v515), (v513)));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v515), (v514)));
  return (v515);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v515))));
};printf("%s", "reached function end without returning anything op Vec<char> ,, char a char b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v516, char v517) {{
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(*v516), (v517)));
  return &(*v516);
};printf("%s", "reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v518){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&(*v518))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v519){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&(*v519))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v520) {{
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v520)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v521) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v521))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v522, __ZH_TYPE_Vec_lesschar_greater* v523) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v523))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<char>R i\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v524, i64 v525) {{
  if ((((v525))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v525), (((v524))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v524), (v525)));
};printf("%s", "reached function end without returning anything op charR .call.sub Vec<char>P& slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v526, i64 v527, i64 v528) {{
  __ZH_TYPE_Vec_lesschar_greater v529;
  ((v529)=(__ZH_LOP_Vec_lesschar_greater_i64(((i64)0))));
  {
      i64 v533;
      i64 v532;
      i64 v531;
      __ZH_TYPE_Range v530;
      ((v530)=(__ZH_BOP__dot_dot_i64i64((v527), (v528))));
      ((v531)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v530)))));
      ((v532)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v530)))));
      ((v533)=(v531));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v533)), (v532)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(v529)), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v526), (v533)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v533))));
      }
    }
  return (v529);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v529))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v534, __ZH_TYPE_Range v535) {{
  i64 v537;
  i64 v536;
  (((v536)=((&(v535))->begin)), ((v537)=((&(v535))->end)));
  if ((((v536))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v536), (((v534))->size)));
  }
  if ((((v536))<(((i64)0)))) {
    ((v536)=((i64)0));
  }
  if ((((v537))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v537), (((v534))->size)));
  }
  if ((((v537))>((((v534))->size)))) {
    ((v537)=(((v534))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v534), (v536), (v537)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v538) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v538), ((i64)0), (((v538))->size)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v539, __ZH_TYPE_Vec_lesschar_greater* v540) {{
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_charPcharP(char* v541, char* v542){
  char v543;
  ((v543)=(*(v541)));
  ((*(v541))=(*(v542)));
  ((*(v542))=(v543));
}
char* __ZH_LOP_partition_charPcharP(char* v544, char* v545) {{
  char* v548;
  char* v547;
  char* v546;
  (((v546)=((char*)((((i64)(v545)))-(((((i64)1))*(((i64)1))))))), ((v547)=(v544)), ((v548)=(v544)));
  ((v548)=(v544));
  while (((((i64)(v548)))!=(((i64)(v546))))) {
    if ((((*(v548)))<((*(v546))))) {
      (__ZH_LOP_swap_charPcharP((v547), (v548)));
      ((v547)=((char*)((((i64)(v547)))+(((((i64)1))*(((i64)1)))))));
    }
    ((v548)=((char*)((((i64)(v548)))+(((((i64)1))*(((i64)1)))))));
  }
  (__ZH_LOP_swap_charPcharP((v547), (v546)));
  return (v547);
};printf("%s", "reached function end without returning anything lop charP partition charP low charP high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_charPcharP(char* v549, char* v550){
  i64 v552;
  i64 v551;
  ((v551)=((((i64)(v550)))-(((i64)(v549)))));
  ((v552)=((i64)1));
  if ((((v551))>((v552)))) {
    char* v553;
    ((v553)=(__ZH_LOP_partition_charPcharP((v549), (v550))));
    (__ZH_LOP_qsort_charPcharP((v549), (v553)));
    ((v553)=((char*)((((i64)(v553)))+(((((i64)1))*(((i64)1)))))));
    (__ZH_LOP_qsort_charPcharP((v553), (v550)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v554){
  __ZH_TYPE_VecIter_lesschar_greater v558;
  __ZH_TYPE_VecIter_lesschar_greater v556;
  (__ZH_LOP_qsort_charPcharP(((&(*(((v556)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v554)))), (&(v556)))))->ptr), ((&(*(((v558)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v554)))), (&(v558)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v559){
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&(*v559))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {{
  __ZH_TYPE_Str v560;
  (((&(v560))->data)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((&(v560))->data)), ((char)((u8)0))));
  (((&(v560))->size)=((i64)0));
  return (v560);
};printf("%s", "reached function end without returning anything lop Str Str\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v561){
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((v561))->data))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v562) {{
  __ZH_TYPE_VecIter_lesschar_greater v563;
  ((v563)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((v562))->data)))));
  return ((str)((&(v563))->ptr));
};printf("%s", "reached function end without returning anything op str .call.cstr StrP& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v564, i64 v565) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((v564))->data)), (v565)));
};printf("%s", "reached function end without returning anything op charR .call.at StrP& slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_StrP_ampersandi64(__ZH_TYPE_Str* v566, i64 v567) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((v566))->data)), (v567)));
};printf("%s", "reached function end without returning anything op charR .call.sub StrP& slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v568, i64 v569) {{
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((v568))->data)), (v569)));
};printf("%s", "reached function end without returning anything op charP .call.atP StrP& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v570, char v571){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((v570))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((v570))->data)), (v571)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((v570))->data)), ((char)((u8)0))));
  (__ZH_LOP__plus_plus_i64R(&(((v570))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v572){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((v572))->data))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((v572))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((v572))->data)), ((char)((u8)0))));
  (__ZH_LOP__minus_minus_i64R(&(((v572))->size)));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v573) {{
  __ZH_TYPE_Str v574;
  ((v574)=(__ZH_LOP_Str_()));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((&(v574))->data))));
  while ((((*((char*)(v573))))!=(((char)((u8)0))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((&(v574))->data)), (*((char*)(v573)))));
    ((v573)=((str)((((i64)(v573)))+(((i64)1)))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((&(v574))->data)), ((char)((u8)0))));
  (((&(v574))->size)=((((&((&(v574))->data))->size))-(((i64)1))));
  return (v574);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v574))));
};printf("%s", "reached function end without returning anything lop Str Str str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v575) {{
  __ZH_TYPE_Str v576;
  ((v576)=(__ZH_LOP_Str_()));
  (((&(v576))->data)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&((&(*v575))->data))));
  (((&(v576))->size)=((&(*v575))->size));
  return (v576);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v576))));
};printf("%s", "reached function end without returning anything lop Str Str StrR s\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_len_str(str v577) {{
  i64 v578;
  ((v578)=((i64)0));
  while ((((*((char*)(v577))))!=(((char)((u8)0))))) {
    (__ZH_LOP__plus_plus_i64R(&(v578)));
    ((v577)=((str)((((i64)(v577)))+(((i64)1)))));
  }
  return (v578);
};printf("%s", "reached function end without returning anything lop i64 len str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v579){
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&(*v579))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v580){
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&(*v580))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v581, char v582){
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&(*v581)), (v582)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v583, __ZH_TYPE_Str* v584){
  {
      i64 v588;
      i64 v587;
      i64 v586;
      __ZH_TYPE_Range v585;
      ((v585)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v584))->size))));
      ((v586)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v585)))));
      ((v587)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v585)))));
      ((v588)=(v586));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v588)), (v587)))) {
        char v589;
        ((v589)=((char)((i8)115)));
        ((v589)=(*__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&(*v584)), (v588))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v583), (v589)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v588))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v590, str v591){
  i64 v592;
  ((v592)=(__ZH_LOP_len_str((v591))));
  {
      i64 v596;
      i64 v595;
      i64 v594;
      __ZH_TYPE_Range v593;
      ((v593)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (v592))));
      ((v594)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v593)))));
      ((v595)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v593)))));
      ((v596)=(v594));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v596)), (v595)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v590), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&(v591)), (v596)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v596))));
      }
    }
}
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v597, __ZH_TYPE_Str* v598) {{
  __ZH_TYPE_Str v599;
  ((v599)=(__ZH_LOP_Str_StrR(&(*v597))));
  (__ZH_BOP__plus_equal_StrRStrR(&(v599), &(*v598)));
  return (v599);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v599))));
};printf("%s", "reached function end without returning anything op Str + StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v600, str v601) {{
  __ZH_TYPE_Str v605;
  __ZH_TYPE_Str v603;
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v603))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v605))));
  return (__ZH_BOP__plus_StrRStrR(&(*(((v603)=(__ZH_LOP_Str_str((v600)))), (&(v603)))), &(*(((v605)=(__ZH_LOP_Str_str((v601)))), (&(v605))))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v603))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v605))));
};printf("%s", "reached function end without returning anything op Str + str a str b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v606) {{
  (__ZH_LOP_out_StrR(&(*v606)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v607) {{
  ((__ZH_LOP_put_StrR(&(*v607))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v608, __ZH_TYPE_Str* v609) {{
  ((__ZH_LOP_put_StrR(&(*v609))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o StrR i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v610, __ZH_TYPE_Str* v611) {{
  {
      i64 v615;
      i64 v614;
      i64 v613;
      __ZH_TYPE_Range v612;
      ((v612)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v610))->size), ((&(*v611))->size))))));
      ((v613)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v612)))));
      ((v614)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v612)))));
      ((v615)=(v613));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v615)), (v614)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_StrP_ampersandi64((&(*v610)), (v615))))<((*__ZH_BOP__dotcall_dotsub_StrP_ampersandi64((&(*v611)), (v615)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_StrP_ampersandi64((&(*v610)), (v615))))>((*__ZH_BOP__dotcall_dotsub_StrP_ampersandi64((&(*v611)), (v615)))))) {
          return ((bool)0);
        }
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v615))));
      }
    }
  if (((((&(*v610))->size))<(((&(*v611))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v610))->size))>(((&(*v611))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v616, i64 v617) {{
  __ZH_TYPE_Str v619;
  __ZH_TYPE_Str v618;
  ((v618)=(__ZH_LOP_Str_()));
  ((v619)=(__ZH_LOP_Str_str((v616))));
  {
      i64 v623;
      i64 v622;
      i64 v621;
      __ZH_TYPE_Range v620;
      ((v620)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (v617))));
      ((v621)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v620)))));
      ((v622)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v620)))));
      ((v623)=(v621));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v623)), (v622)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v618), &(v619)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v623))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v619))));
  return (v618);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v618))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v619))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v618))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v619))));
};printf("%s", "reached function end without returning anything op Str * str s i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v624) {{
  return (__ZH_LOP_Str_str((v624)));
};printf("%s", "reached function end without returning anything lop Str $ str s\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_frog_() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
};printf("%s", "reached function end without returning anything lop str frog\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_sqrt_f64(f64 v625) {{
  f64 v626;
  ((v626)=((f64)1.000000));
  {
      i64 v630;
      i64 v629;
      i64 v628;
      __ZH_TYPE_Range v627;
      ((v627)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((i64)10))));
      ((v628)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v627)))));
      ((v629)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v627)))));
      ((v630)=(v628));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v630)), (v629)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v626), (((((((v626))*((v626))))-((v625))))/(((((f64)2.000000))*((v626)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v630))));
      }
    }
  return (v626);
};printf("%s", "reached function end without returning anything lop f64 sqrt f64 x\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v631, f64 v632) {{
  __ZH_TYPE_V2 v633;
  (((&(v633))->x)=(v631));
  (((&(v633))->y)=(v632));
  return (v633);
};printf("%s", "reached function end without returning anything lop V2 V2 f64 x f64 y\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v634, __ZH_TYPE_V2 v635) {{
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v634))->x), ((&(v635))->x)));
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v634))->y), ((&(v635))->y)));
  return (v634);
};printf("%s", "reached function end without returning anything op V2 + V2 a V2 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v636, __ZH_TYPE_V2 v637) {{
  __ZH_TYPE_V2 v638;
  (((&(v638))->x)=((((((&(v636))->x))*(((&(v637))->x))))-(((((&(v636))->y))*(((&(v637))->y))))));
  (((&(v638))->y)=((((((&(v636))->x))*(((&(v637))->y))))+(((((&(v636))->y))*(((&(v637))->x))))));
  return (v638);
};printf("%s", "reached function end without returning anything op V2 * V2 a V2 b\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v639) {{
  return (__ZH_LOP_sqrt_f64(((((((&(v639))->x))*(((&(v639))->x))))+(((((&(v639))->y))*(((&(v639))->y)))))));
};printf("%s", "reached function end without returning anything lop f64 abs V2 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v640){
  (printf("%f", ((&(v640))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v640))->y)));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v641){
  (printf("%f", ((&(v641))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v641))->y)));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v642) {{
  (__ZH_LOP_out_V2((v642)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v643) {{
  ((__ZH_LOP_put_V2((v643))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v644, __ZH_TYPE_V2 v645) {{
  ((__ZH_LOP_put_V2((v645))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v646) {{
  __ZH_TYPE_Rng v647;
  (((&(v647))->seed)=(v646));
  return (v647);
};printf("%s", "reached function end without returning anything lop Rng Rng i64 seed\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_() {{
  return (__ZH_LOP_Rng_i64(((i64)5323)));
};printf("%s", "reached function end without returning anything lop Rng Rng\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotcall_RngP_ampersand(__ZH_TYPE_Rng* v648) {{
  ((((v648))->seed)=((((((i64)8253729))*((((v648))->seed))))+(((i64)2396403))));
  return (((((v648))->seed))%(((i64)32767)));
};printf("%s", "reached function end without returning anything op i64 .call.call RngP& slf\n"); exit(EXIT_FAILURE);}
int main(int argc, char *argv[]) {
  (printf("%s\n", (__ZH_LOP_frog_())));
}
