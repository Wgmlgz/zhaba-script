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
bool __ZH_BOP__exclamation_percent_i64i64(i64 v104, i64 v105);
void __ZH_BOP__plus_equal_u8Ru8(u8* v106, u8 v107);
void __ZH_BOP__minus_equal_u8Ru8(u8* v108, u8 v109);
void __ZH_BOP__slash_equal_u8Ru8(u8* v110, u8 v111);
void __ZH_BOP__percent_equal_u8Ru8(u8* v112, u8 v113);
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v114, u8 v115);
void __ZH_BOP__plus_equal_u16Ru16(u16* v116, u16 v117);
void __ZH_BOP__minus_equal_u16Ru16(u16* v118, u16 v119);
void __ZH_BOP__slash_equal_u16Ru16(u16* v120, u16 v121);
void __ZH_BOP__percent_equal_u16Ru16(u16* v122, u16 v123);
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v124, u16 v125);
void __ZH_BOP__plus_equal_u32Ru32(u32* v126, u32 v127);
void __ZH_BOP__minus_equal_u32Ru32(u32* v128, u32 v129);
void __ZH_BOP__slash_equal_u32Ru32(u32* v130, u32 v131);
void __ZH_BOP__percent_equal_u32Ru32(u32* v132, u32 v133);
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v134, u32 v135);
void __ZH_BOP__plus_equal_u64Ru64(u64* v136, u64 v137);
void __ZH_BOP__minus_equal_u64Ru64(u64* v138, u64 v139);
void __ZH_BOP__slash_equal_u64Ru64(u64* v140, u64 v141);
void __ZH_BOP__percent_equal_u64Ru64(u64* v142, u64 v143);
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v144, u64 v145);
i8 __ZH_LOP__minus_i8(i8 v146);
void __ZH_BOP__plus_equal_i8Ri8(i8* v147, i8 v148);
void __ZH_BOP__minus_equal_i8Ri8(i8* v149, i8 v150);
void __ZH_BOP__slash_equal_i8Ri8(i8* v151, i8 v152);
void __ZH_BOP__percent_equal_i8Ri8(i8* v153, i8 v154);
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v155, i8 v156);
i16 __ZH_LOP__minus_i16(i16 v157);
void __ZH_BOP__plus_equal_i16Ri16(i16* v158, i16 v159);
void __ZH_BOP__minus_equal_i16Ri16(i16* v160, i16 v161);
void __ZH_BOP__slash_equal_i16Ri16(i16* v162, i16 v163);
void __ZH_BOP__percent_equal_i16Ri16(i16* v164, i16 v165);
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v166, i16 v167);
i32 __ZH_LOP__minus_i32(i32 v168);
void __ZH_BOP__plus_equal_i32Ri32(i32* v169, i32 v170);
void __ZH_BOP__minus_equal_i32Ri32(i32* v171, i32 v172);
void __ZH_BOP__slash_equal_i32Ri32(i32* v173, i32 v174);
void __ZH_BOP__percent_equal_i32Ri32(i32* v175, i32 v176);
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v177, i32 v178);
i64 __ZH_LOP__minus_i64(i64 v179);
void __ZH_BOP__plus_equal_i64Ri64(i64* v180, i64 v181);
void __ZH_BOP__minus_equal_i64Ri64(i64* v182, i64 v183);
void __ZH_BOP__slash_equal_i64Ri64(i64* v184, i64 v185);
void __ZH_BOP__percent_equal_i64Ri64(i64* v186, i64 v187);
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v188, i64 v189);
f32 __ZH_LOP__minus_f32(f32 v190);
void __ZH_BOP__plus_equal_f32Rf32(f32* v191, f32 v192);
void __ZH_BOP__minus_equal_f32Rf32(f32* v193, f32 v194);
void __ZH_BOP__slash_equal_f32Rf32(f32* v195, f32 v196);
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v197, f32 v198);
f64 __ZH_LOP__minus_f64(f64 v199);
void __ZH_BOP__plus_equal_f64Rf64(f64* v200, f64 v201);
void __ZH_BOP__minus_equal_f64Rf64(f64* v202, f64 v203);
void __ZH_BOP__slash_equal_f64Rf64(f64* v204, f64 v205);
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v206, f64 v207);
void __ZH_LOP__plus_plus_i64R(i64* v208);
void __ZH_LOP__minus_minus_i64R(i64* v209);
void __ZH_LOP__plus_plus_u8R(u8* v210);
void __ZH_LOP__minus_minus_u8R(u8* v211);
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v212, i64 v213);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v216, __ZH_TYPE_Out v217);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v218);
__ZH_TYPE_Out __ZH_ROP__less_str(str v219);
__ZH_TYPE_Out __ZH_LOP__less_str(str v220);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v221, str v222);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v223);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v224, str* v225);
__ZH_TYPE_Out __ZH_ROP__less_char(char v226);
__ZH_TYPE_Out __ZH_LOP__less_char(char v227);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v228, char v229);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v230);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v231, char* v232);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v233);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v234);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v235, i8 v236);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v237);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v238, i8* v239);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v240);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v241);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v242, i16 v243);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v244);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v245, i16* v246);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v247);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v248);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v249, i32 v250);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v251);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v252, i32* v253);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v254);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v255);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v256, i64 v257);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v258);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v259, i64* v260);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v261);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v262);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v263, u8 v264);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v265);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v266, u8* v267);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v268);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v269);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v270, u16 v271);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v272);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v273, u16* v274);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v275);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v276);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v277, u32 v278);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v279);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v280, u32* v281);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v282);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v283);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v284, u64 v285);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v286);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v287, u64* v288);
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v289);
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v290);
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v291, f32 v292);
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v293);
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v294, f32* v295);
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v296);
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v297);
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v298, f64 v299);
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v300);
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v301, f64* v302);
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v303);
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v304, i64 v305);
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v306);
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v307);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v308, i64 v309);
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v311, i64 v312);
i64 __ZH_LOP_rangeMin_();
i64 __ZH_LOP_rangeMax_();
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v313);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v314);
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v315);
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v316);
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v317, i64 v318);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v319);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v320);
bool __ZH_BOP__equal_equal_i64Range(i64 v321, __ZH_TYPE_Range v322);
i8 __ZH_LOP_i8_();
i16 __ZH_LOP_i16_();
i32 __ZH_LOP_i32_();
i64 __ZH_LOP_i64_();
u8 __ZH_LOP_u8_();
u16 __ZH_LOP_u16_();
u32 __ZH_LOP_u32_();
u64 __ZH_LOP_u64_();
char __ZH_LOP_char_();
i64 __ZH_LOP_max_i64i64(i64 v323, i64 v324);
i64 __ZH_LOP_min_i64i64(i64 v325, i64 v326);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v351);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v353);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v354, __ZH_TYPE_VecIter_lessi64_greater v355);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v356);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v327, i64 v328);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v329, i64 v330);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v331);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v336);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v341);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v348, i64 v349);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v350);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v357);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v358);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v359);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v360);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v361);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v362);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v368, i64 v369);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v375);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v381, i64 v382);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v383, __ZH_TYPE_Vec_lessi64_greater* v384);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v389, i64 v390);
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v392, i64 v393);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v394);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v395);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v396);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v397);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v398, __ZH_TYPE_Vec_lessi64_greater* v399);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v400, i64 v401);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v402, i64 v403, i64 v404);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v410, __ZH_TYPE_Range v411);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v414);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v415, __ZH_TYPE_Vec_lessi64_greater* v416);
void __ZH_LOP_swap_i64Pi64P(i64* v417, i64* v418);
i64* __ZH_LOP_partition_i64Pi64P(i64* v420, i64* v421);
void __ZH_LOP_qsort_i64Pi64P(i64* v425, i64* v426);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v430);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v435);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v436, i64 v437);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v443);
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v449, i64 v450);
str __ZH_LOP_str_();
char __ZH_BOP__caret_stri64(str v452, i64 v453);
bool __ZH_BOP__equal_equal_charstr(char v454, str v455);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v480);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v482);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v483, __ZH_TYPE_VecIter_lesschar_greater v484);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v485);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v456, i64 v457);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v458, i64 v459);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v460);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v465);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v470);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v477, char v478);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v479);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v486);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v487);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v488);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v489);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v490);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v491);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v497, char v498);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v504);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v510, char v511);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v512, __ZH_TYPE_Vec_lesschar_greater* v513);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v518, char v519);
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v521, char v522);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v523);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v524);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v525);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v526);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v527, __ZH_TYPE_Vec_lesschar_greater* v528);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v529, i64 v530);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v531, i64 v532, i64 v533);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v539, __ZH_TYPE_Range v540);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v543);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v544, __ZH_TYPE_Vec_lesschar_greater* v545);
void __ZH_LOP_swap_charPcharP(char* v546, char* v547);
char* __ZH_LOP_partition_charPcharP(char* v549, char* v550);
void __ZH_LOP_qsort_charPcharP(char* v554, char* v555);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v559);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v564);
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v566);
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v567);
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v569, i64 v570);
char* __ZH_BOP__dotcall_dotsub_StrP_ampersandi64(__ZH_TYPE_Str* v571, i64 v572);
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v573, i64 v574);
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v575, char v576);
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v577);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v578);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v580);
i64 __ZH_LOP_len_str(str v582);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v584);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v585);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v586, char v587);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v588, __ZH_TYPE_Str* v589);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v595, str v596);
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v602, __ZH_TYPE_Str* v603);
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v605, str v606);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v611);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v612);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v613, __ZH_TYPE_Str* v614);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v615, __ZH_TYPE_Str* v616);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v621, i64 v622);
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v629);
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v630);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v636, f64 v637);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v639, __ZH_TYPE_V2 v640);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v641, __ZH_TYPE_V2 v642);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v644);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v645);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v646);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v647);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v648);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v649, __ZH_TYPE_V2 v650);
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v651);
__ZH_TYPE_Rng __ZH_LOP_Rng_();
i64 __ZH_BOP__dotcall_dotcall_RngP_ampersand(__ZH_TYPE_Rng* v653);
int main(int argc, char *argv[]) ;

i64 __ZH_LOP__plus_i64(i64 v101) {{
  return (v101);
};printf("%s", "reached function end without returning anything lop i64 + i64 a\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__percent_percent_i64i64(i64 v102, i64 v103) {{
  return (!((((v102))%((v103)))));
};printf("%s", "reached function end without returning anything op bool %% i64 a i64 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i64i64(i64 v104, i64 v105) {{
  return (!((__ZH_BOP__percent_percent_i64i64((v104), (v105)))));
};printf("%s", "reached function end without returning anything op bool !% i64 a i64 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u8Ru8(u8* v106, u8 v107){
  ((*v106)=(((*v106))+((v107))));
}
void __ZH_BOP__minus_equal_u8Ru8(u8* v108, u8 v109){
  ((*v108)=(((*v108))-((v109))));
}
void __ZH_BOP__slash_equal_u8Ru8(u8* v110, u8 v111){
  ((*v110)=(((*v110))/((v111))));
}
void __ZH_BOP__percent_equal_u8Ru8(u8* v112, u8 v113){
  ((*v112)=(((*v112))%((v113))));
}
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v114, u8 v115){
  ((*v114)=(((*v114))*((v115))));
}
void __ZH_BOP__plus_equal_u16Ru16(u16* v116, u16 v117){
  ((*v116)=(((*v116))+((v117))));
}
void __ZH_BOP__minus_equal_u16Ru16(u16* v118, u16 v119){
  ((*v118)=(((*v118))-((v119))));
}
void __ZH_BOP__slash_equal_u16Ru16(u16* v120, u16 v121){
  ((*v120)=(((*v120))/((v121))));
}
void __ZH_BOP__percent_equal_u16Ru16(u16* v122, u16 v123){
  ((*v122)=(((*v122))%((v123))));
}
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v124, u16 v125){
  ((*v124)=(((*v124))*((v125))));
}
void __ZH_BOP__plus_equal_u32Ru32(u32* v126, u32 v127){
  ((*v126)=(((*v126))+((v127))));
}
void __ZH_BOP__minus_equal_u32Ru32(u32* v128, u32 v129){
  ((*v128)=(((*v128))-((v129))));
}
void __ZH_BOP__slash_equal_u32Ru32(u32* v130, u32 v131){
  ((*v130)=(((*v130))/((v131))));
}
void __ZH_BOP__percent_equal_u32Ru32(u32* v132, u32 v133){
  ((*v132)=(((*v132))%((v133))));
}
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v134, u32 v135){
  ((*v134)=(((*v134))*((v135))));
}
void __ZH_BOP__plus_equal_u64Ru64(u64* v136, u64 v137){
  ((*v136)=(((*v136))+((v137))));
}
void __ZH_BOP__minus_equal_u64Ru64(u64* v138, u64 v139){
  ((*v138)=(((*v138))-((v139))));
}
void __ZH_BOP__slash_equal_u64Ru64(u64* v140, u64 v141){
  ((*v140)=(((*v140))/((v141))));
}
void __ZH_BOP__percent_equal_u64Ru64(u64* v142, u64 v143){
  ((*v142)=(((*v142))%((v143))));
}
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v144, u64 v145){
  ((*v144)=(((*v144))*((v145))));
}
i8 __ZH_LOP__minus_i8(i8 v146) {{
  return ((((i8)0))-((v146)));
};printf("%s", "reached function end without returning anything lop i8 - i8 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i8Ri8(i8* v147, i8 v148){
  ((*v147)=(((*v147))+((v148))));
}
void __ZH_BOP__minus_equal_i8Ri8(i8* v149, i8 v150){
  ((*v149)=(((*v149))-((v150))));
}
void __ZH_BOP__slash_equal_i8Ri8(i8* v151, i8 v152){
  ((*v151)=(((*v151))/((v152))));
}
void __ZH_BOP__percent_equal_i8Ri8(i8* v153, i8 v154){
  ((*v153)=(((*v153))%((v154))));
}
void __ZH_BOP__asterisk_equal_i8Ri8(i8* v155, i8 v156){
  ((*v155)=(((*v155))*((v156))));
}
i16 __ZH_LOP__minus_i16(i16 v157) {{
  return ((((i16)0))-((v157)));
};printf("%s", "reached function end without returning anything lop i16 - i16 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i16Ri16(i16* v158, i16 v159){
  ((*v158)=(((*v158))+((v159))));
}
void __ZH_BOP__minus_equal_i16Ri16(i16* v160, i16 v161){
  ((*v160)=(((*v160))-((v161))));
}
void __ZH_BOP__slash_equal_i16Ri16(i16* v162, i16 v163){
  ((*v162)=(((*v162))/((v163))));
}
void __ZH_BOP__percent_equal_i16Ri16(i16* v164, i16 v165){
  ((*v164)=(((*v164))%((v165))));
}
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v166, i16 v167){
  ((*v166)=(((*v166))*((v167))));
}
i32 __ZH_LOP__minus_i32(i32 v168) {{
  return ((((i32)0))-((v168)));
};printf("%s", "reached function end without returning anything lop i32 - i32 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i32Ri32(i32* v169, i32 v170){
  ((*v169)=(((*v169))+((v170))));
}
void __ZH_BOP__minus_equal_i32Ri32(i32* v171, i32 v172){
  ((*v171)=(((*v171))-((v172))));
}
void __ZH_BOP__slash_equal_i32Ri32(i32* v173, i32 v174){
  ((*v173)=(((*v173))/((v174))));
}
void __ZH_BOP__percent_equal_i32Ri32(i32* v175, i32 v176){
  ((*v175)=(((*v175))%((v176))));
}
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v177, i32 v178){
  ((*v177)=(((*v177))*((v178))));
}
i64 __ZH_LOP__minus_i64(i64 v179) {{
  return ((((i64)0))-((v179)));
};printf("%s", "reached function end without returning anything lop i64 - i64 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i64Ri64(i64* v180, i64 v181){
  ((*v180)=(((*v180))+((v181))));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v182, i64 v183){
  ((*v182)=(((*v182))-((v183))));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v184, i64 v185){
  ((*v184)=(((*v184))/((v185))));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v186, i64 v187){
  ((*v186)=(((*v186))%((v187))));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v188, i64 v189){
  ((*v188)=(((*v188))*((v189))));
}
f32 __ZH_LOP__minus_f32(f32 v190) {{
  return ((((f32)0.000000))-((v190)));
};printf("%s", "reached function end without returning anything lop f32 - f32 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f32Rf32(f32* v191, f32 v192){
  ((*v191)=(((*v191))+((v192))));
}
void __ZH_BOP__minus_equal_f32Rf32(f32* v193, f32 v194){
  ((*v193)=(((*v193))-((v194))));
}
void __ZH_BOP__slash_equal_f32Rf32(f32* v195, f32 v196){
  ((*v195)=(((*v195))/((v196))));
}
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v197, f32 v198){
  ((*v197)=(((*v197))*((v198))));
}
f64 __ZH_LOP__minus_f64(f64 v199) {{
  return ((((f64)0.000000))-((v199)));
};printf("%s", "reached function end without returning anything lop f64 - f64 val\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f64Rf64(f64* v200, f64 v201){
  ((*v200)=(((*v200))+((v201))));
}
void __ZH_BOP__minus_equal_f64Rf64(f64* v202, f64 v203){
  ((*v202)=(((*v202))-((v203))));
}
void __ZH_BOP__slash_equal_f64Rf64(f64* v204, f64 v205){
  ((*v204)=(((*v204))/((v205))));
}
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v206, f64 v207){
  ((*v206)=(((*v206))*((v207))));
}
void __ZH_LOP__plus_plus_i64R(i64* v208){
  (__ZH_BOP__plus_equal_i64Ri64(&(*v208), ((i64)1)));
}
void __ZH_LOP__minus_minus_i64R(i64* v209){
  (__ZH_BOP__minus_equal_i64Ri64(&(*v209), ((i64)1)));
}
void __ZH_LOP__plus_plus_u8R(u8* v210){
  ((*v210)=(((*v210))+(((u8)1))));
}
void __ZH_LOP__minus_minus_u8R(u8* v211){
  ((*v211)=(((*v211))-(((u8)1))));
}
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v212, i64 v213) {{
  i64 v214;
  ((v214)=((i64)1));
  while ((((v213))!=(((i64)0)))) {
    if ((__ZH_BOP__exclamation_percent_i64i64((v213), ((i64)2)))) {
      (__ZH_BOP__asterisk_equal_i64Ri64(&(v214), (v212)));
    }
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v212), (v212)));
    (__ZH_BOP__slash_equal_i64Ri64(&(v213), ((i64)2)));
  }
  return (v214);
};printf("%s", "reached function end without returning anything op i64 ** i64 a i64 n\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP_Out_() {{
  __ZH_TYPE_Out v215;
  return (v215);
};printf("%s", "reached function end without returning anything lop Out Out\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v216, __ZH_TYPE_Out v217) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out a Out b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v218) {{
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Out o\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_str(str v219) {{
  (printf("%s\n", (v219)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_str(str v220) {{
  ((printf("%s", (v220))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v221, str v222) {{
  ((printf("%s", (v222))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v223) {{
  ((*v223)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v224, str* v225) {{
  ((*v225)=(in_str()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_char(char v226) {{
  (printf("%c\n", (v226)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_char(char v227) {{
  ((printf("%c", (v227))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v228, char v229) {{
  ((printf("%c", (v229))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v230) {{
  ((*v230)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v231, char* v232) {{
  ((*v232)=(in_char()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v233) {{
  (printf("%d\n", (v233)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v234) {{
  ((printf("%d", (v234))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v235, i8 v236) {{
  ((printf("%d", (v236))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v237) {{
  ((*v237)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v238, i8* v239) {{
  ((*v239)=(in_i8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v240) {{
  (printf("%hd\n", (v240)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v241) {{
  ((printf("%hd", (v241))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v242, i16 v243) {{
  ((printf("%hd", (v243))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v244) {{
  ((*v244)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v245, i16* v246) {{
  ((*v246)=(in_i16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v247) {{
  (printf("%d\n", (v247)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v248) {{
  ((printf("%d", (v248))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v249, i32 v250) {{
  ((printf("%d", (v250))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v251) {{
  ((*v251)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v252, i32* v253) {{
  ((*v253)=(in_i32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v254) {{
  (printf("%lld\n", (v254)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v255) {{
  ((printf("%lld", (v255))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v256, i64 v257) {{
  ((printf("%lld", (v257))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v258) {{
  ((*v258)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v259, i64* v260) {{
  ((*v260)=(in_i64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v261) {{
  (printf("%d\n", (v261)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v262) {{
  ((printf("%d", (v262))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v263, u8 v264) {{
  ((printf("%d", (v264))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v265) {{
  ((*v265)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v266, u8* v267) {{
  ((*v267)=(in_u8()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v268) {{
  (printf("%hd\n", (v268)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v269) {{
  ((printf("%hd", (v269))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v270, u16 v271) {{
  ((printf("%hd", (v271))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v272) {{
  ((*v272)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v273, u16* v274) {{
  ((*v274)=(in_u16()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v275) {{
  (printf("%u\n", (v275)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v276) {{
  ((printf("%u", (v276))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v277, u32 v278) {{
  ((printf("%u", (v278))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v279) {{
  ((*v279)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v280, u32* v281) {{
  ((*v281)=(in_u32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v282) {{
  (printf("%llu\n", (v282)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v283) {{
  ((printf("%llu", (v283))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v284, u64 v285) {{
  ((printf("%llu", (v285))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v286) {{
  ((*v286)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v287, u64* v288) {{
  ((*v288)=(in_u64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v289) {{
  (printf("%f\n", (v289)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v290) {{
  ((printf("%f", (v290))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v291, f32 v292) {{
  ((printf("%f", (v292))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v293) {{
  ((*v293)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v294, f32* v295) {{
  ((*v295)=(in_f32()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v296) {{
  (printf("%f\n", (v296)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v297) {{
  ((printf("%f", (v297))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v298, f64 v299) {{
  ((printf("%f", (v299))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v300) {{
  ((*v300)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out > f64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v301, f64* v302) {{
  ((*v302)=(in_f64()));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out > Out o f64R i\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_i64P_ampersand(i64* v303){
  ((*(v303))=(((*(v303)))+(((i64)1))));
}
bool __ZH_BOP__dotcall_dotuneq_i64P_ampersandi64(i64* v304, i64 v305) {{
  return (((*(v304)))!=((v305)));
};printf("%s", "reached function end without returning anything op bool .call.uneq i64P& slf i64 other\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbegin_RangeP_ampersand(__ZH_TYPE_Range* v306) {{
  return (((v306))->begin);
};printf("%s", "reached function end without returning anything op i64 .call.begin RangeP& slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotend_RangeP_ampersand(__ZH_TYPE_Range* v307) {{
  return (((v307))->end);
};printf("%s", "reached function end without returning anything op i64 .call.end RangeP& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v308, i64 v309) {{
  __ZH_TYPE_Range v310;
  (((&(v310))->begin)=(v308));
  (((&(v310))->end)=(v309));
  return (v310);
};printf("%s", "reached function end without returning anything op Range .. i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v311, i64 v312) {{
  return (__ZH_BOP__dot_dot_i64i64((v311), (__ZH_LOP__minus_i64((v312)))));
};printf("%s", "reached function end without returning anything op Range ..- i64 begin i64 end\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMin_() {{
  return (__ZH_LOP__minus_i64(((i64)9223372036854775807)));
};printf("%s", "reached function end without returning anything lop i64 rangeMin\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMax_() {{
  return ((i64)9223372036854775807);
};printf("%s", "reached function end without returning anything lop i64 rangeMax\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v313) {{
  return (__ZH_BOP__dot_dot_i64i64((v313), (__ZH_LOP_rangeMax_())));
};printf("%s", "reached function end without returning anything rop Range .. i64 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v314) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v314)));
};printf("%s", "reached function end without returning anything lop Range .. i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v315) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (__ZH_LOP__minus_i64((v315)))));
};printf("%s", "reached function end without returning anything lop Range ..- i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v316) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP__minus_i64(((&(v316))->begin))), ((&(v316))->end)));
};printf("%s", "reached function end without returning anything lop Range - Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v317, i64 v318) {{
  return (__ZH_BOP__dot_dot_i64i64((v317), (((v318))+(((i64)1)))));
};printf("%s", "reached function end without returning anything op Range ..= i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v319) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v319))+(((i64)1)))));
};printf("%s", "reached function end without returning anything lop Range ..= i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v320) {{
  return (__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((__ZH_LOP__minus_i64((v320))))+(((i64)1)))));
};printf("%s", "reached function end without returning anything lop Range ..=- i64 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i64Range(i64 v321, __ZH_TYPE_Range v322) {{
  if (((((&(v322))->begin))<(((&(v322))->end)))) {
    return ((((((&(v322))->begin))<=((v321))))&&((((v321))<(((&(v322))->end)))));
  } else {
    return ((((((&(v322))->end))<=((v321))))&&((((v321))<(((&(v322))->begin)))));
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
i64 __ZH_LOP_max_i64i64(i64 v323, i64 v324) {{
  if ((((v323))>((v324)))) {
    return (v323);
  } else {
    return (v324);
  }
};printf("%s", "reached function end without returning anything lop i64 max i64 a i64 b\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_min_i64i64(i64 v325, i64 v326) {{
  if ((((v325))<((v326)))) {
    return (v325);
  } else {
    return (v326);
  }
};printf("%s", "reached function end without returning anything lop i64 min i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v351) {{
  __ZH_TYPE_VecIter_lessi64_greater v352;
  (((&(v352))->ptr)=(v351));
  return (v352);
};printf("%s", "reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand(__ZH_TYPE_VecIter_lessi64_greater* v353){
  ((((v353))->ptr)=((i64*)((((i64)(((v353))->ptr)))+(((((i64)1))*(((i64)8)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v354, __ZH_TYPE_VecIter_lessi64_greater v355) {{
  return ((((i64)(((v354))->ptr)))!=(((i64)((&(v355))->ptr))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<i64>P& slf VecIter<i64> other\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v356) {{
  return &(*((&(v356))->ptr));
};printf("%s", "reached function end without returning anything lop i64R * VecIter<i64> slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v327, i64 v328) {{
  return ((i64*)((i64*)((((i64)(((v327))->head)))+((((v328))*(((i64)8)))))));
};printf("%s", "reached function end without returning anything op i64P .call.atP Vec<i64>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v329, i64 v330) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v329), (v330))));
};printf("%s", "reached function end without returning anything op i64R .call.at Vec<i64>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v331){
  (printf("%s", ((str)"[")));
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
        if ((!((!((v335)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v331), (v335))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v335))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v336){
  {
      i64 v340;
      i64 v339;
      i64 v338;
      __ZH_TYPE_Range v337;
      ((v337)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v336))->size))));
      ((v338)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v337)))));
      ((v339)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v337)))));
      ((v340)=(v338));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v340)), (v339)))) {
        (printf("%lld\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v336), (v340))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v340))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v341){
  i64 v342;
  ((v342)=(((v341))->cap));
  if ((((v342))==(((i64)0)))) {
    ((v342)=((i64)1));
    ((((v341))->head)=((i64*)(alloc(((i64)8)))));
    ((((v341))->cap)=(v342));
  } else {
    i64* v343;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v342), ((i64)2)));
    ((v343)=((i64*)(alloc((((v342))*(((i64)8)))))));
    {
        i64 v347;
        i64 v346;
        i64 v345;
        __ZH_TYPE_Range v344;
        ((v344)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v341))->size))));
        ((v345)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v344)))));
        ((v346)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v344)))));
        ((v347)=(v345));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v347)), (v346)))) {
          ((*((i64*)((((i64)(v343)))+((((v347))*(((i64)8)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v341), (v347))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v347))));
        }
      }
    (free((void*) ((i64)(((v341))->head))));
    ((((v341))->head)=(v343));
  }
  ((((v341))->cap)=(v342));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v348, i64 v349){
  if ((((((v348))->size))==((((v348))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP_ampersand((v348)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v348), (((v348))->size)))=(v349));
  (__ZH_LOP__plus_plus_i64R(&(((v348))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v350){
  (__ZH_LOP__minus_minus_i64R(&(((v350))->size)));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v357) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((((v357))->head)));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v358) {{
  return (__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v358), (((v358))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v359) {{
  return &(*(((v359))->head));
};printf("%s", "reached function end without returning anything op i64R .call.front Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v360) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterP_ampersandi64((v360), (((((v360))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op i64R .call.back Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v361){
  if ((!((!(((i64)(((v361))->head))))))) {
    (free((void*) ((i64)(((v361))->head))));
    ((((v361))->size)=((i64)0));
    ((((v361))->cap)=((i64)0));
    ((((v361))->head)=((i64*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v362) {{
  __ZH_TYPE_Vec_lessi64_greater v363;
  (((&(v363))->head)=((i64*)((i64)0)));
  (((&(v363))->size)=((i64)0));
  (((&(v363))->cap)=((i64)0));
  while (((((&(v363))->cap))<((v362)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP_ampersand((&(v363))));
  }
  (((&(v363))->size)=(v362));
  (((&(v363))->cap)=(v362));
  {
      i64 v367;
      i64 v366;
      i64 v365;
      __ZH_TYPE_Range v364;
      ((v364)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v363))->size))));
      ((v365)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v364)))));
      ((v366)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v364)))));
      ((v367)=(v365));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v367)), (v366)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(v363)), (v367)))=(__ZH_LOP_i64_()));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v367))));
      }
    }
  return (v363);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v363))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v368, i64 v369) {{
  __ZH_TYPE_Vec_lessi64_greater v370;
  ((v370)=(__ZH_LOP_Vec_lessi64_greater_i64((v368))));
  {
      i64 v374;
      i64 v373;
      i64 v372;
      __ZH_TYPE_Range v371;
      ((v371)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v370))->size))));
      ((v372)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v371)))));
      ((v373)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v371)))));
      ((v374)=(v372));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v374)), (v373)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(v370)), (v374)))=(v369));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v374))));
      }
    }
  return (v370);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v370))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {{
  return (__ZH_LOP_Vec_lessi64_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v375) {{
  __ZH_TYPE_Vec_lessi64_greater v376;
  ((v376)=(__ZH_LOP_Vec_lessi64_greater_i64(((&(*v375))->size))));
  {
      i64 v380;
      i64 v379;
      i64 v378;
      __ZH_TYPE_Range v377;
      ((v377)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v375))->size))));
      ((v378)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v377)))));
      ((v379)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v377)))));
      ((v380)=(v378));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v380)), (v379)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(v376)), (v380)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(*v375)), (v380))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v380))));
      }
    }
  return (v376);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v376))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v381, i64 v382){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&(*v381)), (v382)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v383, __ZH_TYPE_Vec_lessi64_greater* v384){
  {
      __ZH_TYPE_VecIter_lessi64_greater v388;
      __ZH_TYPE_VecIter_lessi64_greater v387;
      __ZH_TYPE_VecIter_lessi64_greater v386;
      __ZH_TYPE_Vec_lessi64_greater v385;
      ((v385)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v384))));
      ((v386)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((&(v385)))));
      ((v387)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((&(v385)))));
      ((v388)=(v386));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterP_ampersandVecIter_lessi64_greater((&(v388)), (v387)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&(*v383)), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v388)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP_ampersand((&(v388))));
      }
    }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v389, i64 v390) {{
  __ZH_TYPE_Vec_lessi64_greater v391;
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v391), (v389)));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v391), (v390)));
  return (v391);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v391))));
};printf("%s", "reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v392, i64 v393) {{
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(*v392), (v393)));
  return &(*v392);
};printf("%s", "reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v394){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&(*v394))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v395){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP_ampersand((&(*v395))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v396) {{
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v396)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v397) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v397))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v398, __ZH_TYPE_Vec_lessi64_greater* v399) {{
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v399))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<i64>R i\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64(__ZH_TYPE_Vec_lessi64_greater* v400, i64 v401) {{
  if ((((v401))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v401), (((v400))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v400), (v401)));
};printf("%s", "reached function end without returning anything op i64R .call.sub Vec<i64>P& slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lessi64_greater* v402, i64 v403, i64 v404) {{
  __ZH_TYPE_Vec_lessi64_greater v405;
  ((v405)=(__ZH_LOP_Vec_lessi64_greater_i64(((i64)0))));
  {
      i64 v409;
      i64 v408;
      i64 v407;
      __ZH_TYPE_Range v406;
      ((v406)=(__ZH_BOP__dot_dot_i64i64((v403), (v404))));
      ((v407)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v406)))));
      ((v408)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v406)))));
      ((v409)=(v407));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v409)), (v408)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterP_ampersandi64((&(v405)), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((v402), (v409)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v409))));
      }
    }
  return (v405);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v405))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandRange(__ZH_TYPE_Vec_lessi64_greater* v410, __ZH_TYPE_Range v411) {{
  i64 v413;
  i64 v412;
  (((v412)=((&(v411))->begin)), ((v413)=((&(v411))->end)));
  if ((((v412))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v412), (((v410))->size)));
  }
  if ((((v412))<(((i64)0)))) {
    ((v412)=((i64)0));
  }
  if ((((v413))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v413), (((v410))->size)));
  }
  if ((((v413))>((((v410))->size)))) {
    ((v413)=(((v410))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v410), (v412), (v413)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v414) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP_ampersandi64i64((v414), ((i64)0), (((v414))->size)));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P& slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v415, __ZH_TYPE_Vec_lessi64_greater* v416) {{
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_i64Pi64P(i64* v417, i64* v418){
  i64 v419;
  ((v419)=(*(v417)));
  ((*(v417))=(*(v418)));
  ((*(v418))=(v419));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v420, i64* v421) {{
  i64* v424;
  i64* v423;
  i64* v422;
  (((v422)=((i64*)((((i64)(v421)))-(((((i64)1))*(((i64)8))))))), ((v423)=(v420)), ((v424)=(v420)));
  ((v424)=(v420));
  while (((((i64)(v424)))!=(((i64)(v422))))) {
    if ((((*(v424)))<((*(v422))))) {
      (__ZH_LOP_swap_i64Pi64P((v423), (v424)));
      ((v423)=((i64*)((((i64)(v423)))+(((((i64)1))*(((i64)8)))))));
    }
    ((v424)=((i64*)((((i64)(v424)))+(((((i64)1))*(((i64)8)))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v423), (v422)));
  return (v423);
};printf("%s", "reached function end without returning anything lop i64P partition i64P low i64P high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_i64Pi64P(i64* v425, i64* v426){
  i64 v428;
  i64 v427;
  ((v427)=((((i64)(v426)))-(((i64)(v425)))));
  ((v428)=((i64)8));
  if ((((v427))>((v428)))) {
    i64* v429;
    ((v429)=(__ZH_LOP_partition_i64Pi64P((v425), (v426))));
    (__ZH_LOP_qsort_i64Pi64P((v425), (v429)));
    ((v429)=((i64*)((((i64)(v429)))+(((((i64)1))*(((i64)8)))))));
    (__ZH_LOP_qsort_i64Pi64P((v429), (v426)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand(__ZH_TYPE_Vec_lessi64_greater* v430){
  __ZH_TYPE_VecIter_lessi64_greater v434;
  __ZH_TYPE_VecIter_lessi64_greater v432;
  (__ZH_LOP_qsort_i64Pi64P(((&(*(((v432)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP_ampersand((v430)))), (&(v432)))))->ptr), ((&(*(((v434)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP_ampersand((v430)))), (&(v434)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v435){
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP_ampersand((&(*v435))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v436, i64 v437) {{
  __ZH_TYPE_Vec_lessi64_greater v438;
  ((v438)=(__ZH_LOP_Vec_lessi64_greater_i64((((v437))-((v436))))));
  {
      i64 v442;
      i64 v441;
      i64 v440;
      __ZH_TYPE_Range v439;
      ((v439)=(__ZH_BOP__dot_dot_i64i64((v436), (v437))));
      ((v440)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v439)))));
      ((v441)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v439)))));
      ((v442)=(v440));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v442)), (v441)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterP_ampersandi64((&(v438)), (((v442))-((v436)))))=(v442));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v442))));
      }
    }
  return (v438);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v438))));
};printf("%s", "reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP_ampersand(__ZH_TYPE_Range* v443) {{
  __ZH_TYPE_Vec_lessi64_greater v444;
  ((v444)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      i64 v448;
      i64 v447;
      i64 v446;
      __ZH_TYPE_Range v445;
      ((v445)=(*(v443)));
      ((v446)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v445)))));
      ((v447)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v445)))));
      ((v448)=(v446));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v448)), (v447)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v444), (v448)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v448))));
      }
    }
  return (v444);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v444))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.call RangeP& slf\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotat_strP_ampersandi64(str* v449, i64 v450) {{
  return (*((char*)((((i64)(*(v449))))+((v450)))));
};printf("%s", "reached function end without returning anything op char .call.at strP& slf i64 pos\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_str_() {{
  u8* v451;
  ((v451)=((u8*)(alloc(((i64)1)))));
  ((*(v451))=((u8)0));
  return ((str)(v451));
};printf("%s", "reached function end without returning anything lop str str\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__caret_stri64(str v452, i64 v453) {{
  return (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&(v452)), (v453)));
};printf("%s", "reached function end without returning anything op char ^ str s i64 i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charstr(char v454, str v455) {{
  return (((v454))==((__ZH_BOP__caret_stri64((v455), ((i64)0)))));
};printf("%s", "reached function end without returning anything op bool == char ch str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v480) {{
  __ZH_TYPE_VecIter_lesschar_greater v481;
  (((&(v481))->ptr)=(v480));
  return (v481);
};printf("%s", "reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand(__ZH_TYPE_VecIter_lesschar_greater* v482){
  ((((v482))->ptr)=((char*)((((i64)(((v482))->ptr)))+(((((i64)1))*(((i64)1)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v483, __ZH_TYPE_VecIter_lesschar_greater v484) {{
  return ((((i64)(((v483))->ptr)))!=(((i64)((&(v484))->ptr))));
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<char>P& slf VecIter<char> other\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v485) {{
  return &(*((&(v485))->ptr));
};printf("%s", "reached function end without returning anything lop charR * VecIter<char> slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v456, i64 v457) {{
  return ((char*)((char*)((((i64)(((v456))->head)))+((((v457))*(((i64)1)))))));
};printf("%s", "reached function end without returning anything op charP .call.atP Vec<char>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v458, i64 v459) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v458), (v459))));
};printf("%s", "reached function end without returning anything op charR .call.at Vec<char>P& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v460){
  (printf("%s", ((str)"[")));
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
        if ((!((!((v464)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v460), (v464))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v464))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v465){
  {
      i64 v469;
      i64 v468;
      i64 v467;
      __ZH_TYPE_Range v466;
      ((v466)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v465))->size))));
      ((v467)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v466)))));
      ((v468)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v466)))));
      ((v469)=(v467));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v469)), (v468)))) {
        (printf("%c\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v465), (v469))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v469))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v470){
  i64 v471;
  ((v471)=(((v470))->cap));
  if ((((v471))==(((i64)0)))) {
    ((v471)=((i64)1));
    ((((v470))->head)=((char*)(alloc(((i64)1)))));
    ((((v470))->cap)=(v471));
  } else {
    char* v472;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v471), ((i64)2)));
    ((v472)=((char*)(alloc((((v471))*(((i64)1)))))));
    {
        i64 v476;
        i64 v475;
        i64 v474;
        __ZH_TYPE_Range v473;
        ((v473)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v470))->size))));
        ((v474)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v473)))));
        ((v475)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v473)))));
        ((v476)=(v474));
        while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v476)), (v475)))) {
          ((*((char*)((((i64)(v472)))+((((v476))*(((i64)1)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v470), (v476))));
          (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v476))));
        }
      }
    (free((void*) ((i64)(((v470))->head))));
    ((((v470))->head)=(v472));
  }
  ((((v470))->cap)=(v471));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar(__ZH_TYPE_Vec_lesschar_greater* v477, char v478){
  if ((((((v477))->size))==((((v477))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP_ampersand((v477)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v477), (((v477))->size)))=(v478));
  (__ZH_LOP__plus_plus_i64R(&(((v477))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v479){
  (__ZH_LOP__minus_minus_i64R(&(((v479))->size)));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v486) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((((v486))->head)));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v487) {{
  return (__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v487), (((v487))->size)))));
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v488) {{
  return &(*(((v488))->head));
};printf("%s", "reached function end without returning anything op charR .call.front Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v489) {{
  return &(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((v489), (((((v489))->size))-(((i64)1))))));
};printf("%s", "reached function end without returning anything op charR .call.back Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v490){
  if ((!((!(((i64)(((v490))->head))))))) {
    (free((void*) ((i64)(((v490))->head))));
    ((((v490))->size)=((i64)0));
    ((((v490))->cap)=((i64)0));
    ((((v490))->head)=((char*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v491) {{
  __ZH_TYPE_Vec_lesschar_greater v492;
  (((&(v492))->head)=((char*)((i64)0)));
  (((&(v492))->size)=((i64)0));
  (((&(v492))->cap)=((i64)0));
  while (((((&(v492))->cap))<((v491)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP_ampersand((&(v492))));
  }
  (((&(v492))->size)=(v491));
  (((&(v492))->cap)=(v491));
  {
      i64 v496;
      i64 v495;
      i64 v494;
      __ZH_TYPE_Range v493;
      ((v493)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v492))->size))));
      ((v494)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v493)))));
      ((v495)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v493)))));
      ((v496)=(v494));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v496)), (v495)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(v492)), (v496)))=(__ZH_LOP_char_()));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v496))));
      }
    }
  return (v492);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v492))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v497, char v498) {{
  __ZH_TYPE_Vec_lesschar_greater v499;
  ((v499)=(__ZH_LOP_Vec_lesschar_greater_i64((v497))));
  {
      i64 v503;
      i64 v502;
      i64 v501;
      __ZH_TYPE_Range v500;
      ((v500)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v499))->size))));
      ((v501)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v500)))));
      ((v502)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v500)))));
      ((v503)=(v501));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v503)), (v502)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(v499)), (v503)))=(v498));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v503))));
      }
    }
  return (v499);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v499))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {{
  return (__ZH_LOP_Vec_lesschar_greater_i64(((i64)0)));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v504) {{
  __ZH_TYPE_Vec_lesschar_greater v505;
  ((v505)=(__ZH_LOP_Vec_lesschar_greater_i64(((&(*v504))->size))));
  {
      i64 v509;
      i64 v508;
      i64 v507;
      __ZH_TYPE_Range v506;
      ((v506)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v504))->size))));
      ((v507)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v506)))));
      ((v508)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v506)))));
      ((v509)=(v507));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v509)), (v508)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(v505)), (v509)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(*v504)), (v509))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v509))));
      }
    }
  return (v505);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v505))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v510, char v511){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(*v510)), (v511)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v512, __ZH_TYPE_Vec_lesschar_greater* v513){
  {
      __ZH_TYPE_VecIter_lesschar_greater v517;
      __ZH_TYPE_VecIter_lesschar_greater v516;
      __ZH_TYPE_VecIter_lesschar_greater v515;
      __ZH_TYPE_Vec_lesschar_greater v514;
      ((v514)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v513))));
      ((v515)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(v514)))));
      ((v516)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((&(v514)))));
      ((v517)=(v515));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterP_ampersandVecIter_lesschar_greater((&(v517)), (v516)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(*v512)), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v517)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP_ampersand((&(v517))));
      }
    }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v518, char v519) {{
  __ZH_TYPE_Vec_lesschar_greater v520;
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v520), (v518)));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v520), (v519)));
  return (v520);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v520))));
};printf("%s", "reached function end without returning anything op Vec<char> ,, char a char b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v521, char v522) {{
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(*v521), (v522)));
  return &(*v521);
};printf("%s", "reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v523){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&(*v523))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v524){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP_ampersand((&(*v524))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v525) {{
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v525)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v526) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v526))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v527, __ZH_TYPE_Vec_lesschar_greater* v528) {{
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v528))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o Vec<char>R i\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64(__ZH_TYPE_Vec_lesschar_greater* v529, i64 v530) {{
  if ((((v530))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v530), (((v529))->size)));
  }
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v529), (v530)));
};printf("%s", "reached function end without returning anything op charR .call.sub Vec<char>P& slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64(__ZH_TYPE_Vec_lesschar_greater* v531, i64 v532, i64 v533) {{
  __ZH_TYPE_Vec_lesschar_greater v534;
  ((v534)=(__ZH_LOP_Vec_lesschar_greater_i64(((i64)0))));
  {
      i64 v538;
      i64 v537;
      i64 v536;
      __ZH_TYPE_Range v535;
      ((v535)=(__ZH_BOP__dot_dot_i64i64((v532), (v533))));
      ((v536)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v535)))));
      ((v537)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v535)))));
      ((v538)=(v536));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v538)), (v537)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(v534)), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((v531), (v538)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v538))));
      }
    }
  return (v534);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(v534))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandRange(__ZH_TYPE_Vec_lesschar_greater* v539, __ZH_TYPE_Range v540) {{
  i64 v542;
  i64 v541;
  (((v541)=((&(v540))->begin)), ((v542)=((&(v540))->end)));
  if ((((v541))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v541), (((v539))->size)));
  }
  if ((((v541))<(((i64)0)))) {
    ((v541)=((i64)0));
  }
  if ((((v542))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v542), (((v539))->size)));
  }
  if ((((v542))>((((v539))->size)))) {
    ((v542)=(((v539))->size));
  }
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v539), (v541), (v542)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v543) {{
  return (__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP_ampersandi64i64((v543), ((i64)0), (((v543))->size)));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P& slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v544, __ZH_TYPE_Vec_lesschar_greater* v545) {{
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_charPcharP(char* v546, char* v547){
  char v548;
  ((v548)=(*(v546)));
  ((*(v546))=(*(v547)));
  ((*(v547))=(v548));
}
char* __ZH_LOP_partition_charPcharP(char* v549, char* v550) {{
  char* v553;
  char* v552;
  char* v551;
  (((v551)=((char*)((((i64)(v550)))-(((((i64)1))*(((i64)1))))))), ((v552)=(v549)), ((v553)=(v549)));
  ((v553)=(v549));
  while (((((i64)(v553)))!=(((i64)(v551))))) {
    if ((((*(v553)))<((*(v551))))) {
      (__ZH_LOP_swap_charPcharP((v552), (v553)));
      ((v552)=((char*)((((i64)(v552)))+(((((i64)1))*(((i64)1)))))));
    }
    ((v553)=((char*)((((i64)(v553)))+(((((i64)1))*(((i64)1)))))));
  }
  (__ZH_LOP_swap_charPcharP((v552), (v551)));
  return (v552);
};printf("%s", "reached function end without returning anything lop charP partition charP low charP high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_charPcharP(char* v554, char* v555){
  i64 v557;
  i64 v556;
  ((v556)=((((i64)(v555)))-(((i64)(v554)))));
  ((v557)=((i64)1));
  if ((((v556))>((v557)))) {
    char* v558;
    ((v558)=(__ZH_LOP_partition_charPcharP((v554), (v555))));
    (__ZH_LOP_qsort_charPcharP((v554), (v558)));
    ((v558)=((char*)((((i64)(v558)))+(((((i64)1))*(((i64)1)))))));
    (__ZH_LOP_qsort_charPcharP((v558), (v555)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand(__ZH_TYPE_Vec_lesschar_greater* v559){
  __ZH_TYPE_VecIter_lesschar_greater v563;
  __ZH_TYPE_VecIter_lesschar_greater v561;
  (__ZH_LOP_qsort_charPcharP(((&(*(((v561)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((v559)))), (&(v561)))))->ptr), ((&(*(((v563)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP_ampersand((v559)))), (&(v563)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v564){
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP_ampersand((&(*v564))));
}
__ZH_TYPE_Str __ZH_LOP_Str_() {{
  __ZH_TYPE_Str v565;
  (((&(v565))->data)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((&(v565))->data)), ((char)((u8)0))));
  (((&(v565))->size)=((i64)0));
  return (v565);
};printf("%s", "reached function end without returning anything lop Str Str\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_StrP_ampersand(__ZH_TYPE_Str* v566){
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP_ampersand((&(((v566))->data))));
}
str __ZH_BOP__dotcall_dotcstr_StrP_ampersand(__ZH_TYPE_Str* v567) {{
  __ZH_TYPE_VecIter_lesschar_greater v568;
  ((v568)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP_ampersand((&(((v567))->data)))));
  return ((str)((&(v568))->ptr));
};printf("%s", "reached function end without returning anything op str .call.cstr StrP& slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_StrP_ampersandi64(__ZH_TYPE_Str* v569, i64 v570) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((v569))->data)), (v570)));
};printf("%s", "reached function end without returning anything op charR .call.at StrP& slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_StrP_ampersandi64(__ZH_TYPE_Str* v571, i64 v572) {{
  return &(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterP_ampersandi64((&(((v571))->data)), (v572)));
};printf("%s", "reached function end without returning anything op charR .call.sub StrP& slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_StrP_ampersandi64(__ZH_TYPE_Str* v573, i64 v574) {{
  return (__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterP_ampersandi64((&(((v573))->data)), (v574)));
};printf("%s", "reached function end without returning anything op charP .call.atP StrP& slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar(__ZH_TYPE_Str* v575, char v576){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((v575))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((v575))->data)), (v576)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((v575))->data)), ((char)((u8)0))));
  (__ZH_LOP__plus_plus_i64R(&(((v575))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_StrP_ampersand(__ZH_TYPE_Str* v577){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((v577))->data))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&(((v577))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&(((v577))->data)), ((char)((u8)0))));
  (__ZH_LOP__minus_minus_i64R(&(((v577))->size)));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v578) {{
  __ZH_TYPE_Str v579;
  ((v579)=(__ZH_LOP_Str_()));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP_ampersand((&((&(v579))->data))));
  while ((((*((char*)(v578))))!=(((char)((u8)0))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((&(v579))->data)), (*((char*)(v578)))));
    ((v578)=((str)((((i64)(v578)))+(((i64)1)))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterP_ampersandchar((&((&(v579))->data)), ((char)((u8)0))));
  (((&(v579))->size)=((((&((&(v579))->data))->size))-(((i64)1))));
  return (v579);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v579))));
};printf("%s", "reached function end without returning anything lop Str Str str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v580) {{
  __ZH_TYPE_Str v581;
  ((v581)=(__ZH_LOP_Str_()));
  (((&(v581))->data)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&((&(*v580))->data))));
  (((&(v581))->size)=((&(*v580))->size));
  return (v581);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v581))));
};printf("%s", "reached function end without returning anything lop Str Str StrR s\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_len_str(str v582) {{
  i64 v583;
  ((v583)=((i64)0));
  while ((((*((char*)(v582))))!=(((char)((u8)0))))) {
    (__ZH_LOP__plus_plus_i64R(&(v583)));
    ((v582)=((str)((((i64)(v582)))+(((i64)1)))));
  }
  return (v583);
};printf("%s", "reached function end without returning anything lop i64 len str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v584){
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&(*v584))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v585){
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP_ampersand((&(*v585))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v586, char v587){
  (__ZH_BOP__dotcall_dotpush_back_StrP_ampersandchar((&(*v586)), (v587)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v588, __ZH_TYPE_Str* v589){
  {
      i64 v593;
      i64 v592;
      i64 v591;
      __ZH_TYPE_Range v590;
      ((v590)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v589))->size))));
      ((v591)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v590)))));
      ((v592)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v590)))));
      ((v593)=(v591));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v593)), (v592)))) {
        char v594;
        ((v594)=((char)((i8)115)));
        ((v594)=(*__ZH_BOP__dotcall_dotat_StrP_ampersandi64((&(*v589)), (v593))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v588), (v594)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v593))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v595, str v596){
  i64 v597;
  ((v597)=(__ZH_LOP_len_str((v596))));
  {
      i64 v601;
      i64 v600;
      i64 v599;
      __ZH_TYPE_Range v598;
      ((v598)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (v597))));
      ((v599)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v598)))));
      ((v600)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v598)))));
      ((v601)=(v599));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v601)), (v600)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v595), (__ZH_BOP__dotcall_dotat_strP_ampersandi64((&(v596)), (v601)))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v601))));
      }
    }
}
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v602, __ZH_TYPE_Str* v603) {{
  __ZH_TYPE_Str v604;
  ((v604)=(__ZH_LOP_Str_StrR(&(*v602))));
  (__ZH_BOP__plus_equal_StrRStrR(&(v604), &(*v603)));
  return (v604);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v604))));
};printf("%s", "reached function end without returning anything op Str + StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v605, str v606) {{
  __ZH_TYPE_Str v610;
  __ZH_TYPE_Str v608;
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v608))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v610))));
  return (__ZH_BOP__plus_StrRStrR(&(*(((v608)=(__ZH_LOP_Str_str((v605)))), (&(v608)))), &(*(((v610)=(__ZH_LOP_Str_str((v606)))), (&(v610))))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v608))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v610))));
};printf("%s", "reached function end without returning anything op Str + str a str b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v611) {{
  (__ZH_LOP_out_StrR(&(*v611)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v612) {{
  ((__ZH_LOP_put_StrR(&(*v612))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v613, __ZH_TYPE_Str* v614) {{
  ((__ZH_LOP_put_StrR(&(*v614))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o StrR i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v615, __ZH_TYPE_Str* v616) {{
  {
      i64 v620;
      i64 v619;
      i64 v618;
      __ZH_TYPE_Range v617;
      ((v617)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v615))->size), ((&(*v616))->size))))));
      ((v618)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v617)))));
      ((v619)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v617)))));
      ((v620)=(v618));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v620)), (v619)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_StrP_ampersandi64((&(*v615)), (v620))))<((*__ZH_BOP__dotcall_dotsub_StrP_ampersandi64((&(*v616)), (v620)))))) {
          return ((bool)1);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_StrP_ampersandi64((&(*v615)), (v620))))>((*__ZH_BOP__dotcall_dotsub_StrP_ampersandi64((&(*v616)), (v620)))))) {
          return ((bool)0);
        }
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v620))));
      }
    }
  if (((((&(*v615))->size))<(((&(*v616))->size)))) {
    return ((bool)1);
  }
 else if (((((&(*v615))->size))>(((&(*v616))->size)))) {
    return ((bool)0);
  }
  return ((bool)0);
};printf("%s", "reached function end without returning anything op bool < StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v621, i64 v622) {{
  __ZH_TYPE_Str v624;
  __ZH_TYPE_Str v623;
  ((v623)=(__ZH_LOP_Str_()));
  ((v624)=(__ZH_LOP_Str_str((v621))));
  {
      i64 v628;
      i64 v627;
      i64 v626;
      __ZH_TYPE_Range v625;
      ((v625)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (v622))));
      ((v626)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v625)))));
      ((v627)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v625)))));
      ((v628)=(v626));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v628)), (v627)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v623), &(v624)));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v628))));
      }
    }
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v624))));
  return (v623);
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v623))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v624))));
  return (__ZH_LOP_Str_());
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v623))));
  (__ZH_BOP__dotcall_dotdtor_StrP_ampersand((&(v624))));
};printf("%s", "reached function end without returning anything op Str * str s i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v629) {{
  return (__ZH_LOP_Str_str((v629)));
};printf("%s", "reached function end without returning anything lop Str $ str s\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_frog_() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
};printf("%s", "reached function end without returning anything lop str frog\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_sqrt_f64(f64 v630) {{
  f64 v631;
  ((v631)=((f64)1.000000));
  {
      i64 v635;
      i64 v634;
      i64 v633;
      __ZH_TYPE_Range v632;
      ((v632)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((i64)10))));
      ((v633)=(__ZH_BOP__dotcall_dotbegin_RangeP_ampersand((&(v632)))));
      ((v634)=(__ZH_BOP__dotcall_dotend_RangeP_ampersand((&(v632)))));
      ((v635)=(v633));
      while ((__ZH_BOP__dotcall_dotuneq_i64P_ampersandi64((&(v635)), (v634)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v631), (((((((v631))*((v631))))-((v630))))/(((((f64)2.000000))*((v631)))))));
        (__ZH_BOP__dotcall_dotnext_i64P_ampersand((&(v635))));
      }
    }
  return (v631);
};printf("%s", "reached function end without returning anything lop f64 sqrt f64 x\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v636, f64 v637) {{
  __ZH_TYPE_V2 v638;
  (((&(v638))->x)=(v636));
  (((&(v638))->y)=(v637));
  return (v638);
};printf("%s", "reached function end without returning anything lop V2 V2 f64 x f64 y\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v639, __ZH_TYPE_V2 v640) {{
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v639))->x), ((&(v640))->x)));
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v639))->y), ((&(v640))->y)));
  return (v639);
};printf("%s", "reached function end without returning anything op V2 + V2 a V2 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v641, __ZH_TYPE_V2 v642) {{
  __ZH_TYPE_V2 v643;
  (((&(v643))->x)=((((((&(v641))->x))*(((&(v642))->x))))-(((((&(v641))->y))*(((&(v642))->y))))));
  (((&(v643))->y)=((((((&(v641))->x))*(((&(v642))->y))))+(((((&(v641))->y))*(((&(v642))->x))))));
  return (v643);
};printf("%s", "reached function end without returning anything op V2 * V2 a V2 b\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v644) {{
  return (__ZH_LOP_sqrt_f64(((((((&(v644))->x))*(((&(v644))->x))))+(((((&(v644))->y))*(((&(v644))->y)))))));
};printf("%s", "reached function end without returning anything lop f64 abs V2 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v645){
  (printf("%f", ((&(v645))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v645))->y)));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v646){
  (printf("%f", ((&(v646))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v646))->y)));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v647) {{
  (__ZH_LOP_out_V2((v647)));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything rop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v648) {{
  ((__ZH_LOP_put_V2((v648))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything lop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v649, __ZH_TYPE_V2 v650) {{
  ((__ZH_LOP_put_V2((v650))), (printf("%s", ((str)" "))));
  return (__ZH_LOP_Out_());
};printf("%s", "reached function end without returning anything op Out < Out o V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v651) {{
  __ZH_TYPE_Rng v652;
  (((&(v652))->seed)=(v651));
  return (v652);
};printf("%s", "reached function end without returning anything lop Rng Rng i64 seed\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_() {{
  return (__ZH_LOP_Rng_i64(((i64)5323)));
};printf("%s", "reached function end without returning anything lop Rng Rng\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotcall_RngP_ampersand(__ZH_TYPE_Rng* v653) {{
  ((((v653))->seed)=((((((i64)8253729))*((((v653))->seed))))+(((i64)2396403))));
  return (((((v653))->seed))%(((i64)32767)));
};printf("%s", "reached function end without returning anything op i64 .call.call RngP& slf\n"); exit(EXIT_FAILURE);}
int main(int argc, char *argv[]) {
  __ZH_TYPE_Vec_lessi64_greater v654;
  ((v654)=(__ZH_LOP_Vec_lessi64_greater_i64((__ZH_BOP__asterisk_asterisk_i64i64(((i64)2), ((i64)3))))));
  (__ZH_LOP__less_Out((__ZH_ROP__less_Vec_lessi64_greaterR(&(v654)))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP_ampersand((&(v654))));
}
