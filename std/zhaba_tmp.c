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
bool __ZH_BOP__exclamation_percent_i8i8(i8 v121, i8 v122);
void __ZH_BOP__plus_equal_i16Ri16(i16* v126, i16 v127);
void __ZH_BOP__minus_equal_i16Ri16(i16* v128, i16 v129);
void __ZH_BOP__slash_equal_i16Ri16(i16* v130, i16 v131);
void __ZH_BOP__percent_equal_i16Ri16(i16* v132, i16 v133);
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v134, i16 v135);
void __ZH_BOP__caret_equal_i16Ri16(i16* v136, i16 v137);
void __ZH_BOP__ampersand_equal_i16Ri16(i16* v138, i16 v139);
void __ZH_BOP__pipe_equal_i16Ri16(i16* v140, i16 v141);
bool __ZH_BOP__percent_percent_i16i16(i16 v142, i16 v143);
bool __ZH_BOP__exclamation_percent_i16i16(i16 v146, i16 v147);
void __ZH_BOP__plus_equal_i32Ri32(i32* v151, i32 v152);
void __ZH_BOP__minus_equal_i32Ri32(i32* v153, i32 v154);
void __ZH_BOP__slash_equal_i32Ri32(i32* v155, i32 v156);
void __ZH_BOP__percent_equal_i32Ri32(i32* v157, i32 v158);
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v159, i32 v160);
void __ZH_BOP__caret_equal_i32Ri32(i32* v161, i32 v162);
void __ZH_BOP__ampersand_equal_i32Ri32(i32* v163, i32 v164);
void __ZH_BOP__pipe_equal_i32Ri32(i32* v165, i32 v166);
bool __ZH_BOP__percent_percent_i32i32(i32 v167, i32 v168);
bool __ZH_BOP__exclamation_percent_i32i32(i32 v171, i32 v172);
void __ZH_BOP__plus_equal_i64Ri64(i64* v176, i64 v177);
void __ZH_BOP__minus_equal_i64Ri64(i64* v178, i64 v179);
void __ZH_BOP__slash_equal_i64Ri64(i64* v180, i64 v181);
void __ZH_BOP__percent_equal_i64Ri64(i64* v182, i64 v183);
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v184, i64 v185);
void __ZH_BOP__caret_equal_i64Ri64(i64* v186, i64 v187);
void __ZH_BOP__ampersand_equal_i64Ri64(i64* v188, i64 v189);
void __ZH_BOP__pipe_equal_i64Ri64(i64* v190, i64 v191);
bool __ZH_BOP__percent_percent_i64i64(i64 v192, i64 v193);
bool __ZH_BOP__exclamation_percent_i64i64(i64 v196, i64 v197);
void __ZH_BOP__plus_equal_u8Ru8(u8* v201, u8 v202);
void __ZH_BOP__minus_equal_u8Ru8(u8* v203, u8 v204);
void __ZH_BOP__slash_equal_u8Ru8(u8* v205, u8 v206);
void __ZH_BOP__percent_equal_u8Ru8(u8* v207, u8 v208);
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v209, u8 v210);
void __ZH_BOP__caret_equal_u8Ru8(u8* v211, u8 v212);
void __ZH_BOP__ampersand_equal_u8Ru8(u8* v213, u8 v214);
void __ZH_BOP__pipe_equal_u8Ru8(u8* v215, u8 v216);
bool __ZH_BOP__percent_percent_u8u8(u8 v217, u8 v218);
bool __ZH_BOP__exclamation_percent_u8u8(u8 v221, u8 v222);
void __ZH_BOP__plus_equal_u16Ru16(u16* v226, u16 v227);
void __ZH_BOP__minus_equal_u16Ru16(u16* v228, u16 v229);
void __ZH_BOP__slash_equal_u16Ru16(u16* v230, u16 v231);
void __ZH_BOP__percent_equal_u16Ru16(u16* v232, u16 v233);
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v234, u16 v235);
void __ZH_BOP__caret_equal_u16Ru16(u16* v236, u16 v237);
void __ZH_BOP__ampersand_equal_u16Ru16(u16* v238, u16 v239);
void __ZH_BOP__pipe_equal_u16Ru16(u16* v240, u16 v241);
bool __ZH_BOP__percent_percent_u16u16(u16 v242, u16 v243);
bool __ZH_BOP__exclamation_percent_u16u16(u16 v246, u16 v247);
void __ZH_BOP__plus_equal_u32Ru32(u32* v251, u32 v252);
void __ZH_BOP__minus_equal_u32Ru32(u32* v253, u32 v254);
void __ZH_BOP__slash_equal_u32Ru32(u32* v255, u32 v256);
void __ZH_BOP__percent_equal_u32Ru32(u32* v257, u32 v258);
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v259, u32 v260);
void __ZH_BOP__caret_equal_u32Ru32(u32* v261, u32 v262);
void __ZH_BOP__ampersand_equal_u32Ru32(u32* v263, u32 v264);
void __ZH_BOP__pipe_equal_u32Ru32(u32* v265, u32 v266);
bool __ZH_BOP__percent_percent_u32u32(u32 v267, u32 v268);
bool __ZH_BOP__exclamation_percent_u32u32(u32 v271, u32 v272);
void __ZH_BOP__plus_equal_u64Ru64(u64* v276, u64 v277);
void __ZH_BOP__minus_equal_u64Ru64(u64* v278, u64 v279);
void __ZH_BOP__slash_equal_u64Ru64(u64* v280, u64 v281);
void __ZH_BOP__percent_equal_u64Ru64(u64* v282, u64 v283);
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v284, u64 v285);
void __ZH_BOP__caret_equal_u64Ru64(u64* v286, u64 v287);
void __ZH_BOP__ampersand_equal_u64Ru64(u64* v288, u64 v289);
void __ZH_BOP__pipe_equal_u64Ru64(u64* v290, u64 v291);
bool __ZH_BOP__percent_percent_u64u64(u64 v292, u64 v293);
bool __ZH_BOP__exclamation_percent_u64u64(u64 v296, u64 v297);
i64* __ZH_LOP__plus_plus_i64R(i64* v301);
i64* __ZH_LOP__minus_minus_i64R(i64* v304);
i64 __ZH_ROP__plus_plus_i64R(i64* v307);
i64 __ZH_ROP__minus_minus_i64R(i64* v311);
void __ZH_BOP__plus_equal_f32Rf32(f32* v315, f32 v316);
void __ZH_BOP__minus_equal_f32Rf32(f32* v317, f32 v318);
void __ZH_BOP__slash_equal_f32Rf32(f32* v319, f32 v320);
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v321, f32 v322);
void __ZH_BOP__plus_equal_f64Rf64(f64* v323, f64 v324);
void __ZH_BOP__minus_equal_f64Rf64(f64* v325, f64 v326);
void __ZH_BOP__slash_equal_f64Rf64(f64* v327, f64 v328);
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v329, f64 v330);
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v331, i64 v332);
__ZH_TYPE_Out __ZH_LOP_Out_();
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v339, __ZH_TYPE_Out v340);
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v343);
__ZH_TYPE_Out __ZH_ROP__less_str(str v346);
__ZH_TYPE_Out __ZH_LOP__less_str(str v349);
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v352, str v353);
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v356);
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v359, str* v360);
__ZH_TYPE_Out __ZH_ROP__less_char(char v363);
__ZH_TYPE_Out __ZH_LOP__less_char(char v366);
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v369, char v370);
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v373);
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v376, char* v377);
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v380);
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v383);
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v386, i8 v387);
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v390);
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v393, i8* v394);
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v397);
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v400);
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v403, i16 v404);
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v407);
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v410, i16* v411);
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v414);
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v417);
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v420, i32 v421);
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v424);
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v427, i32* v428);
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v431);
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v434);
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v437, i64 v438);
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v441);
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v444, i64* v445);
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v448);
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v451);
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v454, u8 v455);
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v458);
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v461, u8* v462);
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v465);
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v468);
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v471, u16 v472);
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v475);
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v478, u16* v479);
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v482);
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v485);
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v488, u32 v489);
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v492);
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v495, u32* v496);
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v499);
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v502);
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v505, u64 v506);
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v509);
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v512, u64* v513);
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v516);
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v519);
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v522, f32 v523);
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v526);
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v529, f32* v530);
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v533);
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v536);
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v539, f64 v540);
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v543);
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v546, f64* v547);
void __ZH_BOP__dotcall_dotnext_i64P(i64* v550);
bool __ZH_BOP__dotcall_dotuneq_i64Pi64(i64* v551, i64 v552);
i64 __ZH_BOP__dotcall_dotbegin_RangeP(__ZH_TYPE_Range* v555);
i64 __ZH_BOP__dotcall_dotend_RangeP(__ZH_TYPE_Range* v558);
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v561, i64 v562);
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v566, i64 v567);
i64 __ZH_LOP_rangeMin_();
i64 __ZH_LOP_rangeMax_();
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v574);
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v577);
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v580);
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v583);
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v586, i64 v587);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v590);
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v593);
bool __ZH_BOP__equal_equal_i64Range(i64 v596, __ZH_TYPE_Range v597);
i8 __ZH_LOP_i8_();
i16 __ZH_LOP_i16_();
i32 __ZH_LOP_i32_();
i64 __ZH_LOP_i64_();
u8 __ZH_LOP_u8_();
u16 __ZH_LOP_u16_();
u32 __ZH_LOP_u32_();
u64 __ZH_LOP_u64_();
char __ZH_LOP_char_();
i64 __ZH_LOP_max_i64i64(i64 v620, i64 v621);
i64 __ZH_LOP_min_i64i64(i64 v626, i64 v627);
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v660);
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP(__ZH_TYPE_VecIter_lessi64_greater* v664);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterPVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v665, __ZH_TYPE_VecIter_lessi64_greater v666);
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v669);
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v632, i64 v633);
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v636, i64 v637);
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v640);
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v645);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v650);
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v657, i64 v658);
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v659);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v672);
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v675);
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v678);
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v681);
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v684);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v685);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v693, i64 v694);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_();
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v704);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v712, i64 v713);
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v714, __ZH_TYPE_Vec_lessi64_greater* v715);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v720, i64 v721);
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v725, i64 v726);
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v729);
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v730);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v731);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v734);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v737, __ZH_TYPE_Vec_lessi64_greater* v738);
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v741, i64 v742);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64(__ZH_TYPE_Vec_lessi64_greater* v745, i64 v746, i64 v747);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPRange(__ZH_TYPE_Vec_lessi64_greater* v755, __ZH_TYPE_Range v756);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v761);
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v764, __ZH_TYPE_Vec_lessi64_greater* v765);
void __ZH_LOP_swap_i64Pi64P(i64* v768, i64* v769);
i64* __ZH_LOP_partition_i64Pi64P(i64* v771, i64* v772);
void __ZH_LOP_qsort_i64Pi64P(i64* v778, i64* v779);
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v783);
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v788);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v789, i64(*v790)(i64*));
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v798, bool(*v799)(i64*));
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v807, i64 v808);
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP(__ZH_TYPE_Range* v816);
char __ZH_BOP__dotcall_dotsub_strPi64(str* v824, i64 v825);
str __ZH_LOP_str_();
bool __ZH_BOP__equal_equal_charstr(char v831, str v832);
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v863);
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP(__ZH_TYPE_VecIter_lesschar_greater* v867);
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterPVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v868, __ZH_TYPE_VecIter_lesschar_greater v869);
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v872);
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v835, i64 v836);
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v839, i64 v840);
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v843);
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v848);
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v853);
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar(__ZH_TYPE_Vec_lesschar_greater* v860, char v861);
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v862);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v875);
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v878);
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v881);
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v884);
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v887);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v888);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v896, char v897);
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_();
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v907);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v915, char v916);
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v917, __ZH_TYPE_Vec_lesschar_greater* v918);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v923, char v924);
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v928, char v929);
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v932);
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v933);
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v934);
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v937);
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v940, __ZH_TYPE_Vec_lesschar_greater* v941);
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v944, i64 v945);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64(__ZH_TYPE_Vec_lesschar_greater* v948, i64 v949, i64 v950);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPRange(__ZH_TYPE_Vec_lesschar_greater* v958, __ZH_TYPE_Range v959);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v964);
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v967, __ZH_TYPE_Vec_lesschar_greater* v968);
void __ZH_LOP_swap_charPcharP(char* v971, char* v972);
char* __ZH_LOP_partition_charPcharP(char* v974, char* v975);
void __ZH_LOP_qsort_charPcharP(char* v981, char* v982);
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v986);
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v991);
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotmap_Vec_lesschar_greaterPF_lesschar_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v992, char(*v993)(char*));
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotfilter_Vec_lesschar_greaterPF_lessbool_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v1001, bool(*v1002)(char*));
__ZH_TYPE_Str __ZH_LOP_Str_();
void __ZH_BOP__dotcall_dotdtor_StrP(__ZH_TYPE_Str* v1013);
str __ZH_BOP__dotcall_dotcstr_StrP(__ZH_TYPE_Str* v1014);
char* __ZH_BOP__dotcall_dotat_StrPi64(__ZH_TYPE_Str* v1018, i64 v1019);
char* __ZH_BOP__dotcall_dotsub_StrPi64(__ZH_TYPE_Str* v1022, i64 v1023);
char* __ZH_BOP__dotcall_dotatP_StrPi64(__ZH_TYPE_Str* v1026, i64 v1027);
void __ZH_BOP__dotcall_dotpush_back_StrPchar(__ZH_TYPE_Str* v1030, char v1031);
void __ZH_BOP__dotcall_dotpop_back_StrP(__ZH_TYPE_Str* v1032);
__ZH_TYPE_Str __ZH_LOP_Str_str(str v1033);
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v1037);
i64 __ZH_LOP_len_str(str v1041);
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v1045);
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v1046);
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v1047, char v1048);
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v1049, __ZH_TYPE_Str* v1050);
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v1056, str v1057);
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v1063, __ZH_TYPE_Str* v1064);
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v1068, str v1069);
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v1076);
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v1079);
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v1082, __ZH_TYPE_Str* v1083);
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v1086, __ZH_TYPE_Str* v1087);
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v1102, i64 v1103);
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v1114);
str __ZH_LOP_frog_();
f64 __ZH_LOP_sqrt_f64(f64 v1119);
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v1127, f64 v1128);
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v1132, __ZH_TYPE_V2 v1133);
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v1136, __ZH_TYPE_V2 v1137);
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v1141);
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v1144);
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v1145);
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v1146);
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v1149);
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v1152, __ZH_TYPE_V2 v1153);
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v1156);
__ZH_TYPE_Rng __ZH_LOP_Rng_();
i64 __ZH_BOP__dotcall_dotcall_RngP(__ZH_TYPE_Rng* v1162);
bool __ZH_LOP_isPrime_i64R(i64* v1165);
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_filterMap_Vec_lessi64_greaterRF_lessbool_spacei64R_greaterF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v1171, bool(*v1172)(i64*), i64(*v1173)(i64*));
int main(int argc, char *argv[]) ;
bool __ZH_LOP_f1_i64R(i64* v1182);
i64 __ZH_LOP_f2_i64R(i64* v1185);

void __ZH_LOP_intOpMaker_(){
  __ZH_TYPE_IntOpMaker_lessu64_greater v300;
  __ZH_TYPE_IntOpMaker_lessu32_greater v275;
  __ZH_TYPE_IntOpMaker_lessu16_greater v250;
  __ZH_TYPE_IntOpMaker_lessu8_greater v225;
  __ZH_TYPE_IntOpMaker_lessi32_greater v175;
  __ZH_TYPE_IntOpMaker_lessi16_greater v150;
  __ZH_TYPE_IntOpMaker_lessi64_greater v200;
  __ZH_TYPE_IntOpMaker_lessi8_greater v125;
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
  bool v120;
  ((v120)=(!((((v117))%((v118))))));
  return (v120);
};printf("%s", "reached function end without returning anything op bool %% i8 a i8 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i8i8(i8 v121, i8 v122) {{
  bool v124;
  ((v124)=(!((__ZH_BOP__percent_percent_i8i8((v121), (v122))))));
  return (v124);
};printf("%s", "reached function end without returning anything op bool !% i8 a i8 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i16Ri16(i16* v126, i16 v127){
  ((*v126)=(((*v126))+((v127))));
}
void __ZH_BOP__minus_equal_i16Ri16(i16* v128, i16 v129){
  ((*v128)=(((*v128))-((v129))));
}
void __ZH_BOP__slash_equal_i16Ri16(i16* v130, i16 v131){
  ((*v130)=(((*v130))/((v131))));
}
void __ZH_BOP__percent_equal_i16Ri16(i16* v132, i16 v133){
  ((*v132)=(((*v132))%((v133))));
}
void __ZH_BOP__asterisk_equal_i16Ri16(i16* v134, i16 v135){
  ((*v134)=(((*v134))*((v135))));
}
void __ZH_BOP__caret_equal_i16Ri16(i16* v136, i16 v137){
  ((*v136)=(((*v136))^((v137))));
}
void __ZH_BOP__ampersand_equal_i16Ri16(i16* v138, i16 v139){
  ((*v138)=(((*v138))&((v139))));
}
void __ZH_BOP__pipe_equal_i16Ri16(i16* v140, i16 v141){
  ((*v140)=(((*v140))|((v141))));
}
bool __ZH_BOP__percent_percent_i16i16(i16 v142, i16 v143) {{
  bool v145;
  ((v145)=(!((((v142))%((v143))))));
  return (v145);
};printf("%s", "reached function end without returning anything op bool %% i16 a i16 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i16i16(i16 v146, i16 v147) {{
  bool v149;
  ((v149)=(!((__ZH_BOP__percent_percent_i16i16((v146), (v147))))));
  return (v149);
};printf("%s", "reached function end without returning anything op bool !% i16 a i16 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i32Ri32(i32* v151, i32 v152){
  ((*v151)=(((*v151))+((v152))));
}
void __ZH_BOP__minus_equal_i32Ri32(i32* v153, i32 v154){
  ((*v153)=(((*v153))-((v154))));
}
void __ZH_BOP__slash_equal_i32Ri32(i32* v155, i32 v156){
  ((*v155)=(((*v155))/((v156))));
}
void __ZH_BOP__percent_equal_i32Ri32(i32* v157, i32 v158){
  ((*v157)=(((*v157))%((v158))));
}
void __ZH_BOP__asterisk_equal_i32Ri32(i32* v159, i32 v160){
  ((*v159)=(((*v159))*((v160))));
}
void __ZH_BOP__caret_equal_i32Ri32(i32* v161, i32 v162){
  ((*v161)=(((*v161))^((v162))));
}
void __ZH_BOP__ampersand_equal_i32Ri32(i32* v163, i32 v164){
  ((*v163)=(((*v163))&((v164))));
}
void __ZH_BOP__pipe_equal_i32Ri32(i32* v165, i32 v166){
  ((*v165)=(((*v165))|((v166))));
}
bool __ZH_BOP__percent_percent_i32i32(i32 v167, i32 v168) {{
  bool v170;
  ((v170)=(!((((v167))%((v168))))));
  return (v170);
};printf("%s", "reached function end without returning anything op bool %% i32 a i32 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i32i32(i32 v171, i32 v172) {{
  bool v174;
  ((v174)=(!((__ZH_BOP__percent_percent_i32i32((v171), (v172))))));
  return (v174);
};printf("%s", "reached function end without returning anything op bool !% i32 a i32 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_i64Ri64(i64* v176, i64 v177){
  ((*v176)=(((*v176))+((v177))));
}
void __ZH_BOP__minus_equal_i64Ri64(i64* v178, i64 v179){
  ((*v178)=(((*v178))-((v179))));
}
void __ZH_BOP__slash_equal_i64Ri64(i64* v180, i64 v181){
  ((*v180)=(((*v180))/((v181))));
}
void __ZH_BOP__percent_equal_i64Ri64(i64* v182, i64 v183){
  ((*v182)=(((*v182))%((v183))));
}
void __ZH_BOP__asterisk_equal_i64Ri64(i64* v184, i64 v185){
  ((*v184)=(((*v184))*((v185))));
}
void __ZH_BOP__caret_equal_i64Ri64(i64* v186, i64 v187){
  ((*v186)=(((*v186))^((v187))));
}
void __ZH_BOP__ampersand_equal_i64Ri64(i64* v188, i64 v189){
  ((*v188)=(((*v188))&((v189))));
}
void __ZH_BOP__pipe_equal_i64Ri64(i64* v190, i64 v191){
  ((*v190)=(((*v190))|((v191))));
}
bool __ZH_BOP__percent_percent_i64i64(i64 v192, i64 v193) {{
  bool v195;
  ((v195)=(!((((v192))%((v193))))));
  return (v195);
};printf("%s", "reached function end without returning anything op bool %% i64 a i64 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_i64i64(i64 v196, i64 v197) {{
  bool v199;
  ((v199)=(!((__ZH_BOP__percent_percent_i64i64((v196), (v197))))));
  return (v199);
};printf("%s", "reached function end without returning anything op bool !% i64 a i64 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u8Ru8(u8* v201, u8 v202){
  ((*v201)=(((*v201))+((v202))));
}
void __ZH_BOP__minus_equal_u8Ru8(u8* v203, u8 v204){
  ((*v203)=(((*v203))-((v204))));
}
void __ZH_BOP__slash_equal_u8Ru8(u8* v205, u8 v206){
  ((*v205)=(((*v205))/((v206))));
}
void __ZH_BOP__percent_equal_u8Ru8(u8* v207, u8 v208){
  ((*v207)=(((*v207))%((v208))));
}
void __ZH_BOP__asterisk_equal_u8Ru8(u8* v209, u8 v210){
  ((*v209)=(((*v209))*((v210))));
}
void __ZH_BOP__caret_equal_u8Ru8(u8* v211, u8 v212){
  ((*v211)=(((*v211))^((v212))));
}
void __ZH_BOP__ampersand_equal_u8Ru8(u8* v213, u8 v214){
  ((*v213)=(((*v213))&((v214))));
}
void __ZH_BOP__pipe_equal_u8Ru8(u8* v215, u8 v216){
  ((*v215)=(((*v215))|((v216))));
}
bool __ZH_BOP__percent_percent_u8u8(u8 v217, u8 v218) {{
  bool v220;
  ((v220)=(!((((v217))%((v218))))));
  return (v220);
};printf("%s", "reached function end without returning anything op bool %% u8 a u8 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u8u8(u8 v221, u8 v222) {{
  bool v224;
  ((v224)=(!((__ZH_BOP__percent_percent_u8u8((v221), (v222))))));
  return (v224);
};printf("%s", "reached function end without returning anything op bool !% u8 a u8 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u16Ru16(u16* v226, u16 v227){
  ((*v226)=(((*v226))+((v227))));
}
void __ZH_BOP__minus_equal_u16Ru16(u16* v228, u16 v229){
  ((*v228)=(((*v228))-((v229))));
}
void __ZH_BOP__slash_equal_u16Ru16(u16* v230, u16 v231){
  ((*v230)=(((*v230))/((v231))));
}
void __ZH_BOP__percent_equal_u16Ru16(u16* v232, u16 v233){
  ((*v232)=(((*v232))%((v233))));
}
void __ZH_BOP__asterisk_equal_u16Ru16(u16* v234, u16 v235){
  ((*v234)=(((*v234))*((v235))));
}
void __ZH_BOP__caret_equal_u16Ru16(u16* v236, u16 v237){
  ((*v236)=(((*v236))^((v237))));
}
void __ZH_BOP__ampersand_equal_u16Ru16(u16* v238, u16 v239){
  ((*v238)=(((*v238))&((v239))));
}
void __ZH_BOP__pipe_equal_u16Ru16(u16* v240, u16 v241){
  ((*v240)=(((*v240))|((v241))));
}
bool __ZH_BOP__percent_percent_u16u16(u16 v242, u16 v243) {{
  bool v245;
  ((v245)=(!((((v242))%((v243))))));
  return (v245);
};printf("%s", "reached function end without returning anything op bool %% u16 a u16 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u16u16(u16 v246, u16 v247) {{
  bool v249;
  ((v249)=(!((__ZH_BOP__percent_percent_u16u16((v246), (v247))))));
  return (v249);
};printf("%s", "reached function end without returning anything op bool !% u16 a u16 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u32Ru32(u32* v251, u32 v252){
  ((*v251)=(((*v251))+((v252))));
}
void __ZH_BOP__minus_equal_u32Ru32(u32* v253, u32 v254){
  ((*v253)=(((*v253))-((v254))));
}
void __ZH_BOP__slash_equal_u32Ru32(u32* v255, u32 v256){
  ((*v255)=(((*v255))/((v256))));
}
void __ZH_BOP__percent_equal_u32Ru32(u32* v257, u32 v258){
  ((*v257)=(((*v257))%((v258))));
}
void __ZH_BOP__asterisk_equal_u32Ru32(u32* v259, u32 v260){
  ((*v259)=(((*v259))*((v260))));
}
void __ZH_BOP__caret_equal_u32Ru32(u32* v261, u32 v262){
  ((*v261)=(((*v261))^((v262))));
}
void __ZH_BOP__ampersand_equal_u32Ru32(u32* v263, u32 v264){
  ((*v263)=(((*v263))&((v264))));
}
void __ZH_BOP__pipe_equal_u32Ru32(u32* v265, u32 v266){
  ((*v265)=(((*v265))|((v266))));
}
bool __ZH_BOP__percent_percent_u32u32(u32 v267, u32 v268) {{
  bool v270;
  ((v270)=(!((((v267))%((v268))))));
  return (v270);
};printf("%s", "reached function end without returning anything op bool %% u32 a u32 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u32u32(u32 v271, u32 v272) {{
  bool v274;
  ((v274)=(!((__ZH_BOP__percent_percent_u32u32((v271), (v272))))));
  return (v274);
};printf("%s", "reached function end without returning anything op bool !% u32 a u32 b\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_u64Ru64(u64* v276, u64 v277){
  ((*v276)=(((*v276))+((v277))));
}
void __ZH_BOP__minus_equal_u64Ru64(u64* v278, u64 v279){
  ((*v278)=(((*v278))-((v279))));
}
void __ZH_BOP__slash_equal_u64Ru64(u64* v280, u64 v281){
  ((*v280)=(((*v280))/((v281))));
}
void __ZH_BOP__percent_equal_u64Ru64(u64* v282, u64 v283){
  ((*v282)=(((*v282))%((v283))));
}
void __ZH_BOP__asterisk_equal_u64Ru64(u64* v284, u64 v285){
  ((*v284)=(((*v284))*((v285))));
}
void __ZH_BOP__caret_equal_u64Ru64(u64* v286, u64 v287){
  ((*v286)=(((*v286))^((v287))));
}
void __ZH_BOP__ampersand_equal_u64Ru64(u64* v288, u64 v289){
  ((*v288)=(((*v288))&((v289))));
}
void __ZH_BOP__pipe_equal_u64Ru64(u64* v290, u64 v291){
  ((*v290)=(((*v290))|((v291))));
}
bool __ZH_BOP__percent_percent_u64u64(u64 v292, u64 v293) {{
  bool v295;
  ((v295)=(!((((v292))%((v293))))));
  return (v295);
};printf("%s", "reached function end without returning anything op bool %% u64 a u64 b\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__exclamation_percent_u64u64(u64 v296, u64 v297) {{
  bool v299;
  ((v299)=(!((__ZH_BOP__percent_percent_u64u64((v296), (v297))))));
  return (v299);
};printf("%s", "reached function end without returning anything op bool !% u64 a u64 b\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__plus_plus_i64R(i64* v301) {{
  i64 v303;
  (__ZH_BOP__plus_equal_i64Ri64(&(*v301), ((i64)1)));
  ((v303)=(*v301));
  return &(v303);
};printf("%s", "reached function end without returning anything lop i64R ++ i64R x\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__minus_minus_i64R(i64* v304) {{
  i64 v306;
  (__ZH_BOP__minus_equal_i64Ri64(&(*v304), ((i64)1)));
  ((v306)=(*v304));
  return &(v306);
};printf("%s", "reached function end without returning anything lop i64R -- i64R x\n"); exit(EXIT_FAILURE);}
i64 __ZH_ROP__plus_plus_i64R(i64* v307) {{
  i64 v310;
  i64 v308;
  ((v308)=(*v307));
  (__ZH_BOP__plus_equal_i64Ri64(&(*v307), ((i64)1)));
  ((v310)=(v308));
  return (v310);
};printf("%s", "reached function end without returning anything rop i64 ++ i64R x\n"); exit(EXIT_FAILURE);}
i64 __ZH_ROP__minus_minus_i64R(i64* v311) {{
  i64 v314;
  i64 v312;
  ((v312)=(*v311));
  (__ZH_BOP__minus_equal_i64Ri64(&(*v311), ((i64)1)));
  ((v314)=(v312));
  return (v314);
};printf("%s", "reached function end without returning anything rop i64 -- i64R x\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_f32Rf32(f32* v315, f32 v316){
  ((*v315)=(((*v315))+((v316))));
}
void __ZH_BOP__minus_equal_f32Rf32(f32* v317, f32 v318){
  ((*v317)=(((*v317))-((v318))));
}
void __ZH_BOP__slash_equal_f32Rf32(f32* v319, f32 v320){
  ((*v319)=(((*v319))/((v320))));
}
void __ZH_BOP__asterisk_equal_f32Rf32(f32* v321, f32 v322){
  ((*v321)=(((*v321))*((v322))));
}
void __ZH_BOP__plus_equal_f64Rf64(f64* v323, f64 v324){
  ((*v323)=(((*v323))+((v324))));
}
void __ZH_BOP__minus_equal_f64Rf64(f64* v325, f64 v326){
  ((*v325)=(((*v325))-((v326))));
}
void __ZH_BOP__slash_equal_f64Rf64(f64* v327, f64 v328){
  ((*v327)=(((*v327))/((v328))));
}
void __ZH_BOP__asterisk_equal_f64Rf64(f64* v329, f64 v330){
  ((*v329)=(((*v329))*((v330))));
}
i64 __ZH_BOP__asterisk_asterisk_i64i64(i64 v331, i64 v332) {{
  i64 v335;
  i64 v333;
  ((v333)=((i64)1));
  while ((((v332))!=(((i64)0)))) {
    if ((__ZH_BOP__exclamation_percent_i64i64((v332), ((i64)2)))) {
      (__ZH_BOP__asterisk_equal_i64Ri64(&(v333), (v331)));
    }
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v331), (v331)));
    (__ZH_BOP__slash_equal_i64Ri64(&(v332), ((i64)2)));
  }
  ((v335)=(v333));
  return (v335);
};printf("%s", "reached function end without returning anything op i64 ** i64 a i64 n\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP_Out_() {{
  __ZH_TYPE_Out v338;
  __ZH_TYPE_Out v336;
  ((v338)=(v336));
  return (v338);
};printf("%s", "reached function end without returning anything lop Out Out\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutOut(__ZH_TYPE_Out v339, __ZH_TYPE_Out v340) {{
  __ZH_TYPE_Out v342;
  ((v342)=(__ZH_LOP_Out_()));
  return (v342);
};printf("%s", "reached function end without returning anything op Out < Out a Out b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Out(__ZH_TYPE_Out v343) {{
  __ZH_TYPE_Out v345;
  ((v345)=(__ZH_LOP_Out_()));
  return (v345);
};printf("%s", "reached function end without returning anything lop Out < Out o\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_str(str v346) {{
  __ZH_TYPE_Out v348;
  (printf("%s\n", (v346)));
  ((v348)=(__ZH_LOP_Out_()));
  return (v348);
};printf("%s", "reached function end without returning anything rop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_str(str v349) {{
  __ZH_TYPE_Out v351;
  ((printf("%s", (v349))), (printf("%s", ((str)" "))));
  ((v351)=(__ZH_LOP_Out_()));
  return (v351);
};printf("%s", "reached function end without returning anything lop Out < str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outstr(__ZH_TYPE_Out v352, str v353) {{
  __ZH_TYPE_Out v355;
  ((printf("%s", (v353))), (printf("%s", ((str)" "))));
  ((v355)=(__ZH_LOP_Out_()));
  return (v355);
};printf("%s", "reached function end without returning anything op Out < Out o str i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_strR(str* v356) {{
  __ZH_TYPE_Out v358;
  ((*v356)=(in_str()));
  ((v358)=(__ZH_LOP_Out_()));
  return (v358);
};printf("%s", "reached function end without returning anything lop Out > strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutstrR(__ZH_TYPE_Out v359, str* v360) {{
  __ZH_TYPE_Out v362;
  ((*v360)=(in_str()));
  ((v362)=(__ZH_LOP_Out_()));
  return (v362);
};printf("%s", "reached function end without returning anything op Out > Out o strR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_char(char v363) {{
  __ZH_TYPE_Out v365;
  (printf("%c\n", (v363)));
  ((v365)=(__ZH_LOP_Out_()));
  return (v365);
};printf("%s", "reached function end without returning anything rop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_char(char v366) {{
  __ZH_TYPE_Out v368;
  ((printf("%c", (v366))), (printf("%s", ((str)" "))));
  ((v368)=(__ZH_LOP_Out_()));
  return (v368);
};printf("%s", "reached function end without returning anything lop Out < char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outchar(__ZH_TYPE_Out v369, char v370) {{
  __ZH_TYPE_Out v372;
  ((printf("%c", (v370))), (printf("%s", ((str)" "))));
  ((v372)=(__ZH_LOP_Out_()));
  return (v372);
};printf("%s", "reached function end without returning anything op Out < Out o char i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_charR(char* v373) {{
  __ZH_TYPE_Out v375;
  ((*v373)=(in_char()));
  ((v375)=(__ZH_LOP_Out_()));
  return (v375);
};printf("%s", "reached function end without returning anything lop Out > charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_OutcharR(__ZH_TYPE_Out v376, char* v377) {{
  __ZH_TYPE_Out v379;
  ((*v377)=(in_char()));
  ((v379)=(__ZH_LOP_Out_()));
  return (v379);
};printf("%s", "reached function end without returning anything op Out > Out o charR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i8(i8 v380) {{
  __ZH_TYPE_Out v382;
  (printf("%d\n", (v380)));
  ((v382)=(__ZH_LOP_Out_()));
  return (v382);
};printf("%s", "reached function end without returning anything rop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i8(i8 v383) {{
  __ZH_TYPE_Out v385;
  ((printf("%d", (v383))), (printf("%s", ((str)" "))));
  ((v385)=(__ZH_LOP_Out_()));
  return (v385);
};printf("%s", "reached function end without returning anything lop Out < i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi8(__ZH_TYPE_Out v386, i8 v387) {{
  __ZH_TYPE_Out v389;
  ((printf("%d", (v387))), (printf("%s", ((str)" "))));
  ((v389)=(__ZH_LOP_Out_()));
  return (v389);
};printf("%s", "reached function end without returning anything op Out < Out o i8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i8R(i8* v390) {{
  __ZH_TYPE_Out v392;
  ((*v390)=(in_i8()));
  ((v392)=(__ZH_LOP_Out_()));
  return (v392);
};printf("%s", "reached function end without returning anything lop Out > i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi8R(__ZH_TYPE_Out v393, i8* v394) {{
  __ZH_TYPE_Out v396;
  ((*v394)=(in_i8()));
  ((v396)=(__ZH_LOP_Out_()));
  return (v396);
};printf("%s", "reached function end without returning anything op Out > Out o i8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i16(i16 v397) {{
  __ZH_TYPE_Out v399;
  (printf("%hd\n", (v397)));
  ((v399)=(__ZH_LOP_Out_()));
  return (v399);
};printf("%s", "reached function end without returning anything rop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i16(i16 v400) {{
  __ZH_TYPE_Out v402;
  ((printf("%hd", (v400))), (printf("%s", ((str)" "))));
  ((v402)=(__ZH_LOP_Out_()));
  return (v402);
};printf("%s", "reached function end without returning anything lop Out < i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi16(__ZH_TYPE_Out v403, i16 v404) {{
  __ZH_TYPE_Out v406;
  ((printf("%hd", (v404))), (printf("%s", ((str)" "))));
  ((v406)=(__ZH_LOP_Out_()));
  return (v406);
};printf("%s", "reached function end without returning anything op Out < Out o i16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i16R(i16* v407) {{
  __ZH_TYPE_Out v409;
  ((*v407)=(in_i16()));
  ((v409)=(__ZH_LOP_Out_()));
  return (v409);
};printf("%s", "reached function end without returning anything lop Out > i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi16R(__ZH_TYPE_Out v410, i16* v411) {{
  __ZH_TYPE_Out v413;
  ((*v411)=(in_i16()));
  ((v413)=(__ZH_LOP_Out_()));
  return (v413);
};printf("%s", "reached function end without returning anything op Out > Out o i16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i32(i32 v414) {{
  __ZH_TYPE_Out v416;
  (printf("%d\n", (v414)));
  ((v416)=(__ZH_LOP_Out_()));
  return (v416);
};printf("%s", "reached function end without returning anything rop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i32(i32 v417) {{
  __ZH_TYPE_Out v419;
  ((printf("%d", (v417))), (printf("%s", ((str)" "))));
  ((v419)=(__ZH_LOP_Out_()));
  return (v419);
};printf("%s", "reached function end without returning anything lop Out < i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi32(__ZH_TYPE_Out v420, i32 v421) {{
  __ZH_TYPE_Out v423;
  ((printf("%d", (v421))), (printf("%s", ((str)" "))));
  ((v423)=(__ZH_LOP_Out_()));
  return (v423);
};printf("%s", "reached function end without returning anything op Out < Out o i32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i32R(i32* v424) {{
  __ZH_TYPE_Out v426;
  ((*v424)=(in_i32()));
  ((v426)=(__ZH_LOP_Out_()));
  return (v426);
};printf("%s", "reached function end without returning anything lop Out > i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi32R(__ZH_TYPE_Out v427, i32* v428) {{
  __ZH_TYPE_Out v430;
  ((*v428)=(in_i32()));
  ((v430)=(__ZH_LOP_Out_()));
  return (v430);
};printf("%s", "reached function end without returning anything op Out > Out o i32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_i64(i64 v431) {{
  __ZH_TYPE_Out v433;
  (printf("%lld\n", (v431)));
  ((v433)=(__ZH_LOP_Out_()));
  return (v433);
};printf("%s", "reached function end without returning anything rop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_i64(i64 v434) {{
  __ZH_TYPE_Out v436;
  ((printf("%lld", (v434))), (printf("%s", ((str)" "))));
  ((v436)=(__ZH_LOP_Out_()));
  return (v436);
};printf("%s", "reached function end without returning anything lop Out < i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outi64(__ZH_TYPE_Out v437, i64 v438) {{
  __ZH_TYPE_Out v440;
  ((printf("%lld", (v438))), (printf("%s", ((str)" "))));
  ((v440)=(__ZH_LOP_Out_()));
  return (v440);
};printf("%s", "reached function end without returning anything op Out < Out o i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_i64R(i64* v441) {{
  __ZH_TYPE_Out v443;
  ((*v441)=(in_i64()));
  ((v443)=(__ZH_LOP_Out_()));
  return (v443);
};printf("%s", "reached function end without returning anything lop Out > i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outi64R(__ZH_TYPE_Out v444, i64* v445) {{
  __ZH_TYPE_Out v447;
  ((*v445)=(in_i64()));
  ((v447)=(__ZH_LOP_Out_()));
  return (v447);
};printf("%s", "reached function end without returning anything op Out > Out o i64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u8(u8 v448) {{
  __ZH_TYPE_Out v450;
  (printf("%d\n", (v448)));
  ((v450)=(__ZH_LOP_Out_()));
  return (v450);
};printf("%s", "reached function end without returning anything rop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u8(u8 v451) {{
  __ZH_TYPE_Out v453;
  ((printf("%d", (v451))), (printf("%s", ((str)" "))));
  ((v453)=(__ZH_LOP_Out_()));
  return (v453);
};printf("%s", "reached function end without returning anything lop Out < u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu8(__ZH_TYPE_Out v454, u8 v455) {{
  __ZH_TYPE_Out v457;
  ((printf("%d", (v455))), (printf("%s", ((str)" "))));
  ((v457)=(__ZH_LOP_Out_()));
  return (v457);
};printf("%s", "reached function end without returning anything op Out < Out o u8 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u8R(u8* v458) {{
  __ZH_TYPE_Out v460;
  ((*v458)=(in_u8()));
  ((v460)=(__ZH_LOP_Out_()));
  return (v460);
};printf("%s", "reached function end without returning anything lop Out > u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu8R(__ZH_TYPE_Out v461, u8* v462) {{
  __ZH_TYPE_Out v464;
  ((*v462)=(in_u8()));
  ((v464)=(__ZH_LOP_Out_()));
  return (v464);
};printf("%s", "reached function end without returning anything op Out > Out o u8R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u16(u16 v465) {{
  __ZH_TYPE_Out v467;
  (printf("%hd\n", (v465)));
  ((v467)=(__ZH_LOP_Out_()));
  return (v467);
};printf("%s", "reached function end without returning anything rop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u16(u16 v468) {{
  __ZH_TYPE_Out v470;
  ((printf("%hd", (v468))), (printf("%s", ((str)" "))));
  ((v470)=(__ZH_LOP_Out_()));
  return (v470);
};printf("%s", "reached function end without returning anything lop Out < u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu16(__ZH_TYPE_Out v471, u16 v472) {{
  __ZH_TYPE_Out v474;
  ((printf("%hd", (v472))), (printf("%s", ((str)" "))));
  ((v474)=(__ZH_LOP_Out_()));
  return (v474);
};printf("%s", "reached function end without returning anything op Out < Out o u16 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u16R(u16* v475) {{
  __ZH_TYPE_Out v477;
  ((*v475)=(in_u16()));
  ((v477)=(__ZH_LOP_Out_()));
  return (v477);
};printf("%s", "reached function end without returning anything lop Out > u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu16R(__ZH_TYPE_Out v478, u16* v479) {{
  __ZH_TYPE_Out v481;
  ((*v479)=(in_u16()));
  ((v481)=(__ZH_LOP_Out_()));
  return (v481);
};printf("%s", "reached function end without returning anything op Out > Out o u16R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u32(u32 v482) {{
  __ZH_TYPE_Out v484;
  (printf("%u\n", (v482)));
  ((v484)=(__ZH_LOP_Out_()));
  return (v484);
};printf("%s", "reached function end without returning anything rop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u32(u32 v485) {{
  __ZH_TYPE_Out v487;
  ((printf("%u", (v485))), (printf("%s", ((str)" "))));
  ((v487)=(__ZH_LOP_Out_()));
  return (v487);
};printf("%s", "reached function end without returning anything lop Out < u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu32(__ZH_TYPE_Out v488, u32 v489) {{
  __ZH_TYPE_Out v491;
  ((printf("%u", (v489))), (printf("%s", ((str)" "))));
  ((v491)=(__ZH_LOP_Out_()));
  return (v491);
};printf("%s", "reached function end without returning anything op Out < Out o u32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u32R(u32* v492) {{
  __ZH_TYPE_Out v494;
  ((*v492)=(in_u32()));
  ((v494)=(__ZH_LOP_Out_()));
  return (v494);
};printf("%s", "reached function end without returning anything lop Out > u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu32R(__ZH_TYPE_Out v495, u32* v496) {{
  __ZH_TYPE_Out v498;
  ((*v496)=(in_u32()));
  ((v498)=(__ZH_LOP_Out_()));
  return (v498);
};printf("%s", "reached function end without returning anything op Out > Out o u32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_u64(u64 v499) {{
  __ZH_TYPE_Out v501;
  (printf("%llu\n", (v499)));
  ((v501)=(__ZH_LOP_Out_()));
  return (v501);
};printf("%s", "reached function end without returning anything rop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_u64(u64 v502) {{
  __ZH_TYPE_Out v504;
  ((printf("%llu", (v502))), (printf("%s", ((str)" "))));
  ((v504)=(__ZH_LOP_Out_()));
  return (v504);
};printf("%s", "reached function end without returning anything lop Out < u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outu64(__ZH_TYPE_Out v505, u64 v506) {{
  __ZH_TYPE_Out v508;
  ((printf("%llu", (v506))), (printf("%s", ((str)" "))));
  ((v508)=(__ZH_LOP_Out_()));
  return (v508);
};printf("%s", "reached function end without returning anything op Out < Out o u64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_u64R(u64* v509) {{
  __ZH_TYPE_Out v511;
  ((*v509)=(in_u64()));
  ((v511)=(__ZH_LOP_Out_()));
  return (v511);
};printf("%s", "reached function end without returning anything lop Out > u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outu64R(__ZH_TYPE_Out v512, u64* v513) {{
  __ZH_TYPE_Out v515;
  ((*v513)=(in_u64()));
  ((v515)=(__ZH_LOP_Out_()));
  return (v515);
};printf("%s", "reached function end without returning anything op Out > Out o u64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f32(f32 v516) {{
  __ZH_TYPE_Out v518;
  (printf("%f\n", (v516)));
  ((v518)=(__ZH_LOP_Out_()));
  return (v518);
};printf("%s", "reached function end without returning anything rop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f32(f32 v519) {{
  __ZH_TYPE_Out v521;
  ((printf("%f", (v519))), (printf("%s", ((str)" "))));
  ((v521)=(__ZH_LOP_Out_()));
  return (v521);
};printf("%s", "reached function end without returning anything lop Out < f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf32(__ZH_TYPE_Out v522, f32 v523) {{
  __ZH_TYPE_Out v525;
  ((printf("%f", (v523))), (printf("%s", ((str)" "))));
  ((v525)=(__ZH_LOP_Out_()));
  return (v525);
};printf("%s", "reached function end without returning anything op Out < Out o f32 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f32R(f32* v526) {{
  __ZH_TYPE_Out v528;
  ((*v526)=(in_f32()));
  ((v528)=(__ZH_LOP_Out_()));
  return (v528);
};printf("%s", "reached function end without returning anything lop Out > f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf32R(__ZH_TYPE_Out v529, f32* v530) {{
  __ZH_TYPE_Out v532;
  ((*v530)=(in_f32()));
  ((v532)=(__ZH_LOP_Out_()));
  return (v532);
};printf("%s", "reached function end without returning anything op Out > Out o f32R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_f64(f64 v533) {{
  __ZH_TYPE_Out v535;
  (printf("%f\n", (v533)));
  ((v535)=(__ZH_LOP_Out_()));
  return (v535);
};printf("%s", "reached function end without returning anything rop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_f64(f64 v536) {{
  __ZH_TYPE_Out v538;
  ((printf("%f", (v536))), (printf("%s", ((str)" "))));
  ((v538)=(__ZH_LOP_Out_()));
  return (v538);
};printf("%s", "reached function end without returning anything lop Out < f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_Outf64(__ZH_TYPE_Out v539, f64 v540) {{
  __ZH_TYPE_Out v542;
  ((printf("%f", (v540))), (printf("%s", ((str)" "))));
  ((v542)=(__ZH_LOP_Out_()));
  return (v542);
};printf("%s", "reached function end without returning anything op Out < Out o f64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__greater_f64R(f64* v543) {{
  __ZH_TYPE_Out v545;
  ((*v543)=(in_f64()));
  ((v545)=(__ZH_LOP_Out_()));
  return (v545);
};printf("%s", "reached function end without returning anything lop Out > f64R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__greater_Outf64R(__ZH_TYPE_Out v546, f64* v547) {{
  __ZH_TYPE_Out v549;
  ((*v547)=(in_f64()));
  ((v549)=(__ZH_LOP_Out_()));
  return (v549);
};printf("%s", "reached function end without returning anything op Out > Out o f64R i\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_i64P(i64* v550){
  ((*(v550))=(((*(v550)))+(((i64)1))));
}
bool __ZH_BOP__dotcall_dotuneq_i64Pi64(i64* v551, i64 v552) {{
  bool v554;
  ((v554)=(((*(v551)))!=((v552))));
  return (v554);
};printf("%s", "reached function end without returning anything op bool .call.uneq i64P slf i64 other\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotbegin_RangeP(__ZH_TYPE_Range* v555) {{
  i64 v557;
  ((v557)=(((v555))->begin));
  return (v557);
};printf("%s", "reached function end without returning anything op i64 .call.begin RangeP slf\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotend_RangeP(__ZH_TYPE_Range* v558) {{
  i64 v560;
  ((v560)=(((v558))->end));
  return (v560);
};printf("%s", "reached function end without returning anything op i64 .call.end RangeP slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_i64i64(i64 v561, i64 v562) {{
  __ZH_TYPE_Range v565;
  __ZH_TYPE_Range v563;
  (((&(v563))->begin)=(v561));
  (((&(v563))->end)=(v562));
  ((v565)=(v563));
  return (v565);
};printf("%s", "reached function end without returning anything op Range .. i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_minus_i64i64(i64 v566, i64 v567) {{
  __ZH_TYPE_Range v569;
  ((v569)=(__ZH_BOP__dot_dot_i64i64((v566), (-((v567))))));
  return (v569);
};printf("%s", "reached function end without returning anything op Range ..- i64 begin i64 end\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMin_() {{
  i64 v571;
  ((v571)=(-(((i64)9223372036854775807))));
  return (v571);
};printf("%s", "reached function end without returning anything lop i64 rangeMin\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_rangeMax_() {{
  i64 v573;
  ((v573)=((i64)9223372036854775807));
  return (v573);
};printf("%s", "reached function end without returning anything lop i64 rangeMax\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_ROP__dot_dot_i64(i64 v574) {{
  __ZH_TYPE_Range v576;
  ((v576)=(__ZH_BOP__dot_dot_i64i64((v574), (__ZH_LOP_rangeMax_()))));
  return (v576);
};printf("%s", "reached function end without returning anything rop Range .. i64 begin\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_i64(i64 v577) {{
  __ZH_TYPE_Range v579;
  ((v579)=(__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (v577))));
  return (v579);
};printf("%s", "reached function end without returning anything lop Range .. i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_minus_i64(i64 v580) {{
  __ZH_TYPE_Range v582;
  ((v582)=(__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (-((v580))))));
  return (v582);
};printf("%s", "reached function end without returning anything lop Range ..- i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__minus_Range(__ZH_TYPE_Range v583) {{
  __ZH_TYPE_Range v585;
  ((v585)=(__ZH_BOP__dot_dot_i64i64((-(((&(v583))->begin))), ((&(v583))->end))));
  return (v585);
};printf("%s", "reached function end without returning anything lop Range - Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_BOP__dot_dot_equal_i64i64(i64 v586, i64 v587) {{
  __ZH_TYPE_Range v589;
  ((v589)=(__ZH_BOP__dot_dot_i64i64((v586), (((v587))+(((i64)1))))));
  return (v589);
};printf("%s", "reached function end without returning anything op Range ..= i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_i64(i64 v590) {{
  __ZH_TYPE_Range v592;
  ((v592)=(__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((v590))+(((i64)1))))));
  return (v592);
};printf("%s", "reached function end without returning anything lop Range ..= i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Range __ZH_LOP__dot_dot_equal_minus_i64(i64 v593) {{
  __ZH_TYPE_Range v595;
  ((v595)=(__ZH_BOP__dot_dot_i64i64((__ZH_LOP_rangeMin_()), (((-((v593))))+(((i64)1))))));
  return (v595);
};printf("%s", "reached function end without returning anything lop Range ..=- i64 end\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_i64Range(i64 v596, __ZH_TYPE_Range v597) {{
  if (((((&(v597))->begin))<(((&(v597))->end)))) {
    bool v599;
    ((v599)=((((((&(v597))->begin))<=((v596))))&&((((v596))<(((&(v597))->end))))));
    return (v599);
  } else {
    bool v601;
    ((v601)=((((((&(v597))->end))<=((v596))))&&((((v596))<(((&(v597))->begin))))));
    return (v601);
  }
};printf("%s", "reached function end without returning anything op bool == i64 i Range r\n"); exit(EXIT_FAILURE);}
i8 __ZH_LOP_i8_() {{
  i8 v603;
  ((v603)=((i8)0));
  return (v603);
};printf("%s", "reached function end without returning anything lop i8 i8\n"); exit(EXIT_FAILURE);}
i16 __ZH_LOP_i16_() {{
  i16 v605;
  ((v605)=((i16)0));
  return (v605);
};printf("%s", "reached function end without returning anything lop i16 i16\n"); exit(EXIT_FAILURE);}
i32 __ZH_LOP_i32_() {{
  i32 v607;
  ((v607)=((i32)0));
  return (v607);
};printf("%s", "reached function end without returning anything lop i32 i32\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_i64_() {{
  i64 v609;
  ((v609)=((i64)0));
  return (v609);
};printf("%s", "reached function end without returning anything lop i64 i64\n"); exit(EXIT_FAILURE);}
u8 __ZH_LOP_u8_() {{
  u8 v611;
  ((v611)=((u8)0));
  return (v611);
};printf("%s", "reached function end without returning anything lop u8 u8\n"); exit(EXIT_FAILURE);}
u16 __ZH_LOP_u16_() {{
  u16 v613;
  ((v613)=((u16)0));
  return (v613);
};printf("%s", "reached function end without returning anything lop u16 u16\n"); exit(EXIT_FAILURE);}
u32 __ZH_LOP_u32_() {{
  u32 v615;
  ((v615)=((u32)0));
  return (v615);
};printf("%s", "reached function end without returning anything lop u32 u32\n"); exit(EXIT_FAILURE);}
u64 __ZH_LOP_u64_() {{
  u64 v617;
  ((v617)=((u64)0));
  return (v617);
};printf("%s", "reached function end without returning anything lop u64 u64\n"); exit(EXIT_FAILURE);}
char __ZH_LOP_char_() {{
  char v619;
  ((v619)=((char)((i8)0)));
  return (v619);
};printf("%s", "reached function end without returning anything lop char char\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_max_i64i64(i64 v620, i64 v621) {{
  if ((((v620))>((v621)))) {
    i64 v623;
    ((v623)=(v620));
    return (v623);
  } else {
    i64 v625;
    ((v625)=(v621));
    return (v625);
  }
};printf("%s", "reached function end without returning anything lop i64 max i64 a i64 b\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_min_i64i64(i64 v626, i64 v627) {{
  if ((((v626))<((v627)))) {
    i64 v629;
    ((v629)=(v626));
    return (v629);
  } else {
    i64 v631;
    ((v631)=(v627));
    return (v631);
  }
};printf("%s", "reached function end without returning anything lop i64 min i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_LOP_VecIter_lessi64_greater_i64P(i64* v660) {{
  __ZH_TYPE_VecIter_lessi64_greater v663;
  __ZH_TYPE_VecIter_lessi64_greater v661;
  (((&(v661))->ptr)=(v660));
  ((v663)=(v661));
  return (v663);
};printf("%s", "reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP(__ZH_TYPE_VecIter_lessi64_greater* v664){
  ((((v664))->ptr)=((i64*)((((i64)(((v664))->ptr)))+(((((i64)1))*(((i64)8)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterPVecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater* v665, __ZH_TYPE_VecIter_lessi64_greater v666) {{
  bool v668;
  ((v668)=((((i64)(((v665))->ptr)))!=(((i64)((&(v666))->ptr)))));
  return (v668);
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<i64>P slf VecIter<i64> other\n"); exit(EXIT_FAILURE);}
i64* __ZH_LOP__asterisk_VecIter_lessi64_greater(__ZH_TYPE_VecIter_lessi64_greater v669) {{
  i64 v671;
  ((v671)=(*((&(v669))->ptr)));
  return &(v671);
};printf("%s", "reached function end without returning anything lop i64R * VecIter<i64> slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v632, i64 v633) {{
  i64* v635;
  ((v635)=((i64*)((i64*)((((i64)(((v632))->head)))+((((v633))*(((i64)8))))))));
  return (v635);
};printf("%s", "reached function end without returning anything op i64P .call.atP Vec<i64>P slf i64 pos\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v636, i64 v637) {{
  i64 v639;
  ((v639)=(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v636), (v637)))));
  return &(v639);
};printf("%s", "reached function end without returning anything op i64R .call.at Vec<i64>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v640){
  (printf("%s", ((str)"[")));
  {
      i64 v644;
      i64 v643;
      i64 v642;
      __ZH_TYPE_Range v641;
      ((v641)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v640))->size))));
      ((v642)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v641)))));
      ((v643)=(__ZH_BOP__dotcall_dotend_RangeP((&(v641)))));
      ((v644)=(v642));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v644)), (v643)))) {
        if ((!((!((v644)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v640), (v644))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v644))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v645){
  {
      i64 v649;
      i64 v648;
      i64 v647;
      __ZH_TYPE_Range v646;
      ((v646)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v645))->size))));
      ((v647)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v646)))));
      ((v648)=(__ZH_BOP__dotcall_dotend_RangeP((&(v646)))));
      ((v649)=(v647));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v649)), (v648)))) {
        (printf("%lld\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v645), (v649))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v649))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v650){
  i64 v651;
  ((v651)=(((v650))->cap));
  if ((((v651))==(((i64)0)))) {
    ((v651)=((i64)1));
    ((((v650))->head)=((i64*)(alloc(((i64)8)))));
    ((((v650))->cap)=(v651));
  } else {
    i64* v652;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v651), ((i64)2)));
    ((v652)=((i64*)(alloc((((v651))*(((i64)8)))))));
    {
        i64 v656;
        i64 v655;
        i64 v654;
        __ZH_TYPE_Range v653;
        ((v653)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v650))->size))));
        ((v654)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v653)))));
        ((v655)=(__ZH_BOP__dotcall_dotend_RangeP((&(v653)))));
        ((v656)=(v654));
        while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v656)), (v655)))) {
          ((*((i64*)((((i64)(v652)))+((((v656))*(((i64)8)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v650), (v656))));
          (__ZH_BOP__dotcall_dotnext_i64P((&(v656))));
        }
      }
    (free((void*) ((i64)(((v650))->head))));
    ((((v650))->head)=(v652));
  }
  ((((v650))->cap)=(v651));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v657, i64 v658){
  if ((((((v657))->size))==((((v657))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP((v657)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v657), (((v657))->size)))=(v658));
  (*__ZH_LOP__plus_plus_i64R(&(((v657))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v659){
  (*__ZH_LOP__minus_minus_i64R(&(((v659))->size)));
}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v672) {{
  __ZH_TYPE_VecIter_lessi64_greater v674;
  ((v674)=(__ZH_LOP_VecIter_lessi64_greater_i64P((((v672))->head))));
  return (v674);
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lessi64_greater __ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v675) {{
  __ZH_TYPE_VecIter_lessi64_greater v677;
  ((v677)=(__ZH_LOP_VecIter_lessi64_greater_i64P((__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v675), (((v675))->size))))));
  return (v677);
};printf("%s", "reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotfront_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v678) {{
  i64 v680;
  ((v680)=(*(((v678))->head)));
  return &(v680);
};printf("%s", "reached function end without returning anything op i64R .call.front Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotback_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v681) {{
  i64 v683;
  ((v683)=(*(__ZH_BOP__dotcall_dotatP_Vec_lessi64_greaterPi64((v681), (((((v681))->size))-(((i64)1)))))));
  return &(v683);
};printf("%s", "reached function end without returning anything op i64R .call.back Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v684){
  if ((!((!(((i64)(((v684))->head))))))) {
    (free((void*) ((i64)(((v684))->head))));
    ((((v684))->size)=((i64)0));
    ((((v684))->cap)=((i64)0));
    ((((v684))->head)=((i64*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64(i64 v685) {{
  __ZH_TYPE_Vec_lessi64_greater v692;
  __ZH_TYPE_Vec_lessi64_greater v686;
  (((&(v686))->head)=((i64*)((i64)0)));
  (((&(v686))->size)=((i64)0));
  (((&(v686))->cap)=((i64)0));
  while (((((&(v686))->cap))<((v685)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lessi64_greaterP((&(v686))));
  }
  (((&(v686))->size)=(v685));
  (((&(v686))->cap)=(v685));
  {
      i64 v690;
      i64 v689;
      i64 v688;
      __ZH_TYPE_Range v687;
      ((v687)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v686))->size))));
      ((v688)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v687)))));
      ((v689)=(__ZH_BOP__dotcall_dotend_RangeP((&(v687)))));
      ((v690)=(v688));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v690)), (v689)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v686)), (v690)))=(__ZH_LOP_i64_()));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v690))));
      }
    }
  ((v692)=(v686));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v686))));
  return (v692);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v686))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v692))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_i64i64(i64 v693, i64 v694) {{
  __ZH_TYPE_Vec_lessi64_greater v701;
  __ZH_TYPE_Vec_lessi64_greater v695;
  ((v695)=(__ZH_LOP_Vec_lessi64_greater_i64((v693))));
  {
      i64 v699;
      i64 v698;
      i64 v697;
      __ZH_TYPE_Range v696;
      ((v696)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v695))->size))));
      ((v697)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v696)))));
      ((v698)=(__ZH_BOP__dotcall_dotend_RangeP((&(v696)))));
      ((v699)=(v697));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v699)), (v698)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v695)), (v699)))=(v694));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v699))));
      }
    }
  ((v701)=(v695));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v695))));
  return (v701);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v695))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v701))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_() {{
  __ZH_TYPE_Vec_lessi64_greater v703;
  ((v703)=(__ZH_LOP_Vec_lessi64_greater_i64(((i64)0))));
  return (v703);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v703))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v704) {{
  __ZH_TYPE_Vec_lessi64_greater v711;
  __ZH_TYPE_Vec_lessi64_greater v705;
  ((v705)=(__ZH_LOP_Vec_lessi64_greater_i64(((&(*v704))->size))));
  {
      i64 v709;
      i64 v708;
      i64 v707;
      __ZH_TYPE_Range v706;
      ((v706)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v704))->size))));
      ((v707)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v706)))));
      ((v708)=(__ZH_BOP__dotcall_dotend_RangeP((&(v706)))));
      ((v709)=(v707));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v709)), (v708)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v705)), (v709)))=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(*v704)), (v709))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v709))));
      }
    }
  ((v711)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(v705))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v705))));
  return (v711);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v705))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v711))));
};printf("%s", "reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v712, i64 v713){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(*v712)), (v713)));
}
void __ZH_BOP__plus_equal_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v714, __ZH_TYPE_Vec_lessi64_greater* v715){
  {
      __ZH_TYPE_VecIter_lessi64_greater v719;
      __ZH_TYPE_VecIter_lessi64_greater v718;
      __ZH_TYPE_VecIter_lessi64_greater v717;
      __ZH_TYPE_Vec_lessi64_greater v716;
      ((v716)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v715))));
      ((v717)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((&(v716)))));
      ((v718)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((&(v716)))));
      ((v719)=(v717));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lessi64_greaterPVecIter_lessi64_greater((&(v719)), (v718)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(*v714)), (*__ZH_LOP__asterisk_VecIter_lessi64_greater((v719)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lessi64_greaterP((&(v719))));
      }
    }
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__comma_comma_i64i64(i64 v720, i64 v721) {{
  __ZH_TYPE_Vec_lessi64_greater v724;
  __ZH_TYPE_Vec_lessi64_greater v722;
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v722), (v720)));
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v722), (v721)));
  ((v724)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(v722))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v722))));
  return (v724);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v722))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v724))));
};printf("%s", "reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater* __ZH_BOP__comma_comma_Vec_lessi64_greaterRi64(__ZH_TYPE_Vec_lessi64_greater* v725, i64 v726) {{
  __ZH_TYPE_Vec_lessi64_greater v728;
  (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(*v725), (v726)));
  ((v728)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(*v725))));
  return &(v728);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v728))));
};printf("%s", "reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v729){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP((&(*v729))));
}
void __ZH_LOP_out_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v730){
  (__ZH_BOP__dotcall_dotprint_Vec_lessi64_greaterP((&(*v730))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v731) {{
  __ZH_TYPE_Out v733;
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*v731)));
  ((v733)=(__ZH_LOP_Out_()));
  return (v733);
};printf("%s", "reached function end without returning anything rop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v734) {{
  __ZH_TYPE_Out v736;
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v734))), (printf("%s", ((str)" "))));
  ((v736)=(__ZH_LOP_Out_()));
  return (v736);
};printf("%s", "reached function end without returning anything lop Out < Vec<i64>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lessi64_greaterR(__ZH_TYPE_Out v737, __ZH_TYPE_Vec_lessi64_greater* v738) {{
  __ZH_TYPE_Out v740;
  ((__ZH_LOP_put_Vec_lessi64_greaterR(&(*v738))), (printf("%s", ((str)" "))));
  ((v740)=(__ZH_LOP_Out_()));
  return (v740);
};printf("%s", "reached function end without returning anything op Out < Out o Vec<i64>R i\n"); exit(EXIT_FAILURE);}
i64* __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64(__ZH_TYPE_Vec_lessi64_greater* v741, i64 v742) {{
  i64 v744;
  if ((((v742))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v742), (((v741))->size)));
  }
  ((v744)=(*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v741), (v742))));
  return &(v744);
};printf("%s", "reached function end without returning anything op i64R .call.sub Vec<i64>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64(__ZH_TYPE_Vec_lessi64_greater* v745, i64 v746, i64 v747) {{
  __ZH_TYPE_Vec_lessi64_greater v754;
  __ZH_TYPE_Vec_lessi64_greater v748;
  ((v748)=(__ZH_LOP_Vec_lessi64_greater_i64(((i64)0))));
  {
      i64 v752;
      i64 v751;
      i64 v750;
      __ZH_TYPE_Range v749;
      ((v749)=(__ZH_BOP__dot_dot_i64i64((v746), (v747))));
      ((v750)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v749)))));
      ((v751)=(__ZH_BOP__dotcall_dotend_RangeP((&(v749)))));
      ((v752)=(v750));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v752)), (v751)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lessi64_greaterPi64((&(v748)), (*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((v745), (v752)))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v752))));
      }
    }
  ((v754)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(v748))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v748))));
  return (v754);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v748))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v754))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPRange(__ZH_TYPE_Vec_lessi64_greater* v755, __ZH_TYPE_Range v756) {{
  __ZH_TYPE_Vec_lessi64_greater v760;
  i64 v758;
  i64 v757;
  (((v757)=((&(v756))->begin)), ((v758)=((&(v756))->end)));
  if ((((v757))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v757), (((v755))->size)));
  }
  if ((((v757))<(((i64)0)))) {
    ((v757)=((i64)0));
  }
  if ((((v758))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v758), (((v755))->size)));
  }
  if ((((v758))>((((v755))->size)))) {
    ((v758)=(((v755))->size));
  }
  ((v760)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64((v755), (v757), (v758))));
  return (v760);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v760))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v761) {{
  __ZH_TYPE_Vec_lessi64_greater v763;
  ((v763)=(__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64i64((v761), ((i64)0), (((v761))->size))));
  return (v763);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v763))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lessi64_greaterRVec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v764, __ZH_TYPE_Vec_lessi64_greater* v765) {{
  bool v767;
  ((v767)=((bool)0));
  return (v767);
};printf("%s", "reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_i64Pi64P(i64* v768, i64* v769){
  i64 v770;
  ((v770)=(*(v768)));
  ((*(v768))=(*(v769)));
  ((*(v769))=(v770));
}
i64* __ZH_LOP_partition_i64Pi64P(i64* v771, i64* v772) {{
  i64* v777;
  i64* v775;
  i64* v774;
  i64* v773;
  (((v773)=((i64*)((((i64)(v772)))-(((((i64)1))*(((i64)8))))))), ((v774)=(v771)), ((v775)=(v771)));
  ((v775)=(v771));
  while (((((i64)(v775)))!=(((i64)(v773))))) {
    if ((((*(v775)))<((*(v773))))) {
      (__ZH_LOP_swap_i64Pi64P((v774), (v775)));
      ((v774)=((i64*)((((i64)(v774)))+(((((i64)1))*(((i64)8)))))));
    }
    ((v775)=((i64*)((((i64)(v775)))+(((((i64)1))*(((i64)8)))))));
  }
  (__ZH_LOP_swap_i64Pi64P((v774), (v773)));
  ((v777)=(v774));
  return (v777);
};printf("%s", "reached function end without returning anything lop i64P partition i64P low i64P high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_i64Pi64P(i64* v778, i64* v779){
  i64 v781;
  i64 v780;
  ((v780)=((((i64)(v779)))-(((i64)(v778)))));
  ((v781)=((i64)8));
  if ((((v780))>((v781)))) {
    i64* v782;
    ((v782)=(__ZH_LOP_partition_i64Pi64P((v778), (v779))));
    (__ZH_LOP_qsort_i64Pi64P((v778), (v782)));
    ((v782)=((i64*)((((i64)(v782)))+(((((i64)1))*(((i64)8)))))));
    (__ZH_LOP_qsort_i64Pi64P((v782), (v779)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP(__ZH_TYPE_Vec_lessi64_greater* v783){
  __ZH_TYPE_VecIter_lessi64_greater v787;
  __ZH_TYPE_VecIter_lessi64_greater v785;
  (__ZH_LOP_qsort_i64Pi64P(((&(*(((v785)=(__ZH_BOP__dotcall_dotbegin_Vec_lessi64_greaterP((v783)))), (&(v785)))))->ptr), ((&(*(((v787)=(__ZH_BOP__dotcall_dotend_Vec_lessi64_greaterP((v783)))), (&(v787)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lessi64_greaterR(__ZH_TYPE_Vec_lessi64_greater* v788){
  (__ZH_BOP__dotcall_dotsort_Vec_lessi64_greaterP((&(*v788))));
}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v789, i64(*v790)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v797;
  __ZH_TYPE_Vec_lessi64_greater v791;
  ((v791)=(__ZH_LOP_Vec_lessi64_greater_i64((((v789))->size))));
  {
      i64 v795;
      i64 v794;
      i64 v793;
      __ZH_TYPE_Range v792;
      ((v792)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v789))->size))));
      ((v793)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v792)))));
      ((v794)=(__ZH_BOP__dotcall_dotend_RangeP((&(v792)))));
      ((v795)=(v793));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v795)), (v794)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((&(v791)), (v795)))=((*(v790))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v789), (v795))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v795))));
      }
    }
  ((v797)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(v791))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v791))));
  return (v797);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v791))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v797))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v798, bool(*v799)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v806;
  __ZH_TYPE_Vec_lessi64_greater v800;
  ((v800)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      i64 v804;
      i64 v803;
      i64 v802;
      __ZH_TYPE_Range v801;
      ((v801)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v798))->size))));
      ((v802)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v801)))));
      ((v803)=(__ZH_BOP__dotcall_dotend_RangeP((&(v801)))));
      ((v804)=(v802));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v804)), (v803)))) {
        if (((*(v799))(&(*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v798), (v804)))))) {
          (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v800), (*__ZH_BOP__dotcall_dotsub_Vec_lessi64_greaterPi64((v798), (v804)))));
        }
        (__ZH_BOP__dotcall_dotnext_i64P((&(v804))));
      }
    }
  ((v806)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(v800))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v800))));
  return (v806);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v800))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v806))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_iota_i64i64(i64 v807, i64 v808) {{
  __ZH_TYPE_Vec_lessi64_greater v815;
  __ZH_TYPE_Vec_lessi64_greater v809;
  ((v809)=(__ZH_LOP_Vec_lessi64_greater_i64((((v808))-((v807))))));
  {
      i64 v813;
      i64 v812;
      i64 v811;
      __ZH_TYPE_Range v810;
      ((v810)=(__ZH_BOP__dot_dot_i64i64((v807), (v808))));
      ((v811)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v810)))));
      ((v812)=(__ZH_BOP__dotcall_dotend_RangeP((&(v810)))));
      ((v813)=(v811));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v813)), (v812)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lessi64_greaterPi64((&(v809)), (((v813))-((v807)))))=(v813));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v813))));
      }
    }
  ((v815)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(v809))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v809))));
  return (v815);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v809))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v815))));
};printf("%s", "reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_BOP__dotcall_dotcall_RangeP(__ZH_TYPE_Range* v816) {{
  __ZH_TYPE_Vec_lessi64_greater v823;
  __ZH_TYPE_Vec_lessi64_greater v817;
  ((v817)=(__ZH_LOP_Vec_lessi64_greater_()));
  {
      i64 v821;
      i64 v820;
      i64 v819;
      __ZH_TYPE_Range v818;
      ((v818)=(*(v816)));
      ((v819)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v818)))));
      ((v820)=(__ZH_BOP__dotcall_dotend_RangeP((&(v818)))));
      ((v821)=(v819));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v821)), (v820)))) {
        (__ZH_BOP__plus_equal_Vec_lessi64_greaterRi64(&(v817), (v821)));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v821))));
      }
    }
  ((v823)=(__ZH_LOP_Vec_lessi64_greater_Vec_lessi64_greaterR(&(v817))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v817))));
  return (v823);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v817))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v823))));
};printf("%s", "reached function end without returning anything op Vec<i64> .call.call RangeP slf\n"); exit(EXIT_FAILURE);}
char __ZH_BOP__dotcall_dotsub_strPi64(str* v824, i64 v825) {{
  char v827;
  ((v827)=(*((char*)((((i64)(*(v824))))+((v825))))));
  return (v827);
};printf("%s", "reached function end without returning anything op char .call.sub strP slf i64 pos\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_str_() {{
  str v830;
  u8* v828;
  ((v828)=((u8*)(alloc(((i64)1)))));
  ((*(v828))=((u8)0));
  ((v830)=((str)(v828)));
  return (v830);
};printf("%s", "reached function end without returning anything lop str str\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__equal_equal_charstr(char v831, str v832) {{
  bool v834;
  ((v834)=(((v831))==((__ZH_BOP__dotcall_dotsub_strPi64((&(v832)), ((i64)0))))));
  return (v834);
};printf("%s", "reached function end without returning anything op bool == char ch str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_LOP_VecIter_lesschar_greater_charP(char* v863) {{
  __ZH_TYPE_VecIter_lesschar_greater v866;
  __ZH_TYPE_VecIter_lesschar_greater v864;
  (((&(v864))->ptr)=(v863));
  ((v866)=(v864));
  return (v866);
};printf("%s", "reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP(__ZH_TYPE_VecIter_lesschar_greater* v867){
  ((((v867))->ptr)=((char*)((((i64)(((v867))->ptr)))+(((((i64)1))*(((i64)1)))))));
}
bool __ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterPVecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater* v868, __ZH_TYPE_VecIter_lesschar_greater v869) {{
  bool v871;
  ((v871)=((((i64)(((v868))->ptr)))!=(((i64)((&(v869))->ptr)))));
  return (v871);
};printf("%s", "reached function end without returning anything op bool .call.uneq VecIter<char>P slf VecIter<char> other\n"); exit(EXIT_FAILURE);}
char* __ZH_LOP__asterisk_VecIter_lesschar_greater(__ZH_TYPE_VecIter_lesschar_greater v872) {{
  char v874;
  ((v874)=(*((&(v872))->ptr)));
  return &(v874);
};printf("%s", "reached function end without returning anything lop charR * VecIter<char> slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v835, i64 v836) {{
  char* v838;
  ((v838)=((char*)((char*)((((i64)(((v835))->head)))+((((v836))*(((i64)1))))))));
  return (v838);
};printf("%s", "reached function end without returning anything op charP .call.atP Vec<char>P slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v839, i64 v840) {{
  char v842;
  ((v842)=(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v839), (v840)))));
  return &(v842);
};printf("%s", "reached function end without returning anything op charR .call.at Vec<char>P slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v843){
  (printf("%s", ((str)"[")));
  {
      i64 v847;
      i64 v846;
      i64 v845;
      __ZH_TYPE_Range v844;
      ((v844)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v843))->size))));
      ((v845)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v844)))));
      ((v846)=(__ZH_BOP__dotcall_dotend_RangeP((&(v844)))));
      ((v847)=(v845));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v847)), (v846)))) {
        if ((!((!((v847)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v843), (v847))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v847))));
      }
    }
  (printf("%s", ((str)"]")));
}
void __ZH_BOP__dotcall_dotprintln_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v848){
  {
      i64 v852;
      i64 v851;
      i64 v850;
      __ZH_TYPE_Range v849;
      ((v849)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v848))->size))));
      ((v850)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v849)))));
      ((v851)=(__ZH_BOP__dotcall_dotend_RangeP((&(v849)))));
      ((v852)=(v850));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v852)), (v851)))) {
        (printf("%c\n", (*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v848), (v852))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v852))));
      }
    }
}
void __ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v853){
  i64 v854;
  ((v854)=(((v853))->cap));
  if ((((v854))==(((i64)0)))) {
    ((v854)=((i64)1));
    ((((v853))->head)=((char*)(alloc(((i64)1)))));
    ((((v853))->cap)=(v854));
  } else {
    char* v855;
    (__ZH_BOP__asterisk_equal_i64Ri64(&(v854), ((i64)2)));
    ((v855)=((char*)(alloc((((v854))*(((i64)1)))))));
    {
        i64 v859;
        i64 v858;
        i64 v857;
        __ZH_TYPE_Range v856;
        ((v856)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v853))->size))));
        ((v857)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v856)))));
        ((v858)=(__ZH_BOP__dotcall_dotend_RangeP((&(v856)))));
        ((v859)=(v857));
        while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v859)), (v858)))) {
          ((*((char*)((((i64)(v855)))+((((v859))*(((i64)1)))))))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v853), (v859))));
          (__ZH_BOP__dotcall_dotnext_i64P((&(v859))));
        }
      }
    (free((void*) ((i64)(((v853))->head))));
    ((((v853))->head)=(v855));
  }
  ((((v853))->cap)=(v854));
}
void __ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar(__ZH_TYPE_Vec_lesschar_greater* v860, char v861){
  if ((((((v860))->size))==((((v860))->cap)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP((v860)));
  }
  ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v860), (((v860))->size)))=(v861));
  (*__ZH_LOP__plus_plus_i64R(&(((v860))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v862){
  (*__ZH_LOP__minus_minus_i64R(&(((v862))->size)));
}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v875) {{
  __ZH_TYPE_VecIter_lesschar_greater v877;
  ((v877)=(__ZH_LOP_VecIter_lesschar_greater_charP((((v875))->head))));
  return (v877);
};printf("%s", "reached function end without returning anything op VecIter<char> .call.begin Vec<char>P slf\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_VecIter_lesschar_greater __ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v878) {{
  __ZH_TYPE_VecIter_lesschar_greater v880;
  ((v880)=(__ZH_LOP_VecIter_lesschar_greater_charP((__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v878), (((v878))->size))))));
  return (v880);
};printf("%s", "reached function end without returning anything op VecIter<char> .call.end Vec<char>P slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotfront_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v881) {{
  char v883;
  ((v883)=(*(((v881))->head)));
  return &(v883);
};printf("%s", "reached function end without returning anything op charR .call.front Vec<char>P slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotback_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v884) {{
  char v886;
  ((v886)=(*(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((v884), (((((v884))->size))-(((i64)1)))))));
  return &(v886);
};printf("%s", "reached function end without returning anything op charR .call.back Vec<char>P slf\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v887){
  if ((!((!(((i64)(((v887))->head))))))) {
    (free((void*) ((i64)(((v887))->head))));
    ((((v887))->size)=((i64)0));
    ((((v887))->cap)=((i64)0));
    ((((v887))->head)=((char*)((i64)0)));
  }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64(i64 v888) {{
  __ZH_TYPE_Vec_lesschar_greater v895;
  __ZH_TYPE_Vec_lesschar_greater v889;
  (((&(v889))->head)=((char*)((i64)0)));
  (((&(v889))->size)=((i64)0));
  (((&(v889))->cap)=((i64)0));
  while (((((&(v889))->cap))<((v888)))) {
    (__ZH_BOP__dotcall_dotdouble_cap_Vec_lesschar_greaterP((&(v889))));
  }
  (((&(v889))->size)=(v888));
  (((&(v889))->cap)=(v888));
  {
      i64 v893;
      i64 v892;
      i64 v891;
      __ZH_TYPE_Range v890;
      ((v890)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v889))->size))));
      ((v891)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v890)))));
      ((v892)=(__ZH_BOP__dotcall_dotend_RangeP((&(v890)))));
      ((v893)=(v891));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v893)), (v892)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v889)), (v893)))=(__ZH_LOP_char_()));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v893))));
      }
    }
  ((v895)=(v889));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v889))));
  return (v895);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v889))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v895))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_i64char(i64 v896, char v897) {{
  __ZH_TYPE_Vec_lesschar_greater v904;
  __ZH_TYPE_Vec_lesschar_greater v898;
  ((v898)=(__ZH_LOP_Vec_lesschar_greater_i64((v896))));
  {
      i64 v902;
      i64 v901;
      i64 v900;
      __ZH_TYPE_Range v899;
      ((v899)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(v898))->size))));
      ((v900)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v899)))));
      ((v901)=(__ZH_BOP__dotcall_dotend_RangeP((&(v899)))));
      ((v902)=(v900));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v902)), (v901)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v898)), (v902)))=(v897));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v902))));
      }
    }
  ((v904)=(v898));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v898))));
  return (v904);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v898))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v904))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_() {{
  __ZH_TYPE_Vec_lesschar_greater v906;
  ((v906)=(__ZH_LOP_Vec_lesschar_greater_i64(((i64)0))));
  return (v906);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v906))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char>\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v907) {{
  __ZH_TYPE_Vec_lesschar_greater v914;
  __ZH_TYPE_Vec_lesschar_greater v908;
  ((v908)=(__ZH_LOP_Vec_lesschar_greater_i64(((&(*v907))->size))));
  {
      i64 v912;
      i64 v911;
      i64 v910;
      __ZH_TYPE_Range v909;
      ((v909)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v907))->size))));
      ((v910)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v909)))));
      ((v911)=(__ZH_BOP__dotcall_dotend_RangeP((&(v909)))));
      ((v912)=(v910));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v912)), (v911)))) {
        ((*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(v908)), (v912)))=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(*v907)), (v912))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v912))));
      }
    }
  ((v914)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(v908))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v908))));
  return (v914);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v908))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v914))));
};printf("%s", "reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v915, char v916){
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(*v915)), (v916)));
}
void __ZH_BOP__plus_equal_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v917, __ZH_TYPE_Vec_lesschar_greater* v918){
  {
      __ZH_TYPE_VecIter_lesschar_greater v922;
      __ZH_TYPE_VecIter_lesschar_greater v921;
      __ZH_TYPE_VecIter_lesschar_greater v920;
      __ZH_TYPE_Vec_lesschar_greater v919;
      ((v919)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v918))));
      ((v920)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&(v919)))));
      ((v921)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP((&(v919)))));
      ((v922)=(v920));
      while ((__ZH_BOP__dotcall_dotuneq_VecIter_lesschar_greaterPVecIter_lesschar_greater((&(v922)), (v921)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(*v917)), (*__ZH_LOP__asterisk_VecIter_lesschar_greater((v922)))));
        (__ZH_BOP__dotcall_dotnext_VecIter_lesschar_greaterP((&(v922))));
      }
    }
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__comma_comma_charchar(char v923, char v924) {{
  __ZH_TYPE_Vec_lesschar_greater v927;
  __ZH_TYPE_Vec_lesschar_greater v925;
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v925), (v923)));
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v925), (v924)));
  ((v927)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(v925))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v925))));
  return (v927);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v925))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v927))));
};printf("%s", "reached function end without returning anything op Vec<char> ,, char a char b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater* __ZH_BOP__comma_comma_Vec_lesschar_greaterRchar(__ZH_TYPE_Vec_lesschar_greater* v928, char v929) {{
  __ZH_TYPE_Vec_lesschar_greater v931;
  (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(*v928), (v929)));
  ((v931)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(*v928))));
  return &(v931);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v931))));
};printf("%s", "reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v932){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP((&(*v932))));
}
void __ZH_LOP_out_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v933){
  (__ZH_BOP__dotcall_dotprint_Vec_lesschar_greaterP((&(*v933))));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v934) {{
  __ZH_TYPE_Out v936;
  (__ZH_LOP_out_Vec_lesschar_greaterR(&(*v934)));
  ((v936)=(__ZH_LOP_Out_()));
  return (v936);
};printf("%s", "reached function end without returning anything rop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v937) {{
  __ZH_TYPE_Out v939;
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v937))), (printf("%s", ((str)" "))));
  ((v939)=(__ZH_LOP_Out_()));
  return (v939);
};printf("%s", "reached function end without returning anything lop Out < Vec<char>R i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutVec_lesschar_greaterR(__ZH_TYPE_Out v940, __ZH_TYPE_Vec_lesschar_greater* v941) {{
  __ZH_TYPE_Out v943;
  ((__ZH_LOP_put_Vec_lesschar_greaterR(&(*v941))), (printf("%s", ((str)" "))));
  ((v943)=(__ZH_LOP_Out_()));
  return (v943);
};printf("%s", "reached function end without returning anything op Out < Out o Vec<char>R i\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64(__ZH_TYPE_Vec_lesschar_greater* v944, i64 v945) {{
  char v947;
  if ((((v945))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v945), (((v944))->size)));
  }
  ((v947)=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v944), (v945))));
  return &(v947);
};printf("%s", "reached function end without returning anything op charR .call.sub Vec<char>P slf i64 id\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64(__ZH_TYPE_Vec_lesschar_greater* v948, i64 v949, i64 v950) {{
  __ZH_TYPE_Vec_lesschar_greater v957;
  __ZH_TYPE_Vec_lesschar_greater v951;
  ((v951)=(__ZH_LOP_Vec_lesschar_greater_i64(((i64)0))));
  {
      i64 v955;
      i64 v954;
      i64 v953;
      __ZH_TYPE_Range v952;
      ((v952)=(__ZH_BOP__dot_dot_i64i64((v949), (v950))));
      ((v953)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v952)))));
      ((v954)=(__ZH_BOP__dotcall_dotend_RangeP((&(v952)))));
      ((v955)=(v953));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v955)), (v954)))) {
        (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(v951)), (*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((v948), (v955)))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v955))));
      }
    }
  ((v957)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(v951))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v951))));
  return (v957);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v951))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v957))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPRange(__ZH_TYPE_Vec_lesschar_greater* v958, __ZH_TYPE_Range v959) {{
  __ZH_TYPE_Vec_lesschar_greater v963;
  i64 v961;
  i64 v960;
  (((v960)=((&(v959))->begin)), ((v961)=((&(v959))->end)));
  if ((((v960))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v960), (((v958))->size)));
  }
  if ((((v960))<(((i64)0)))) {
    ((v960)=((i64)0));
  }
  if ((((v961))<(((i64)0)))) {
    (__ZH_BOP__plus_equal_i64Ri64(&(v961), (((v958))->size)));
  }
  if ((((v961))>((((v958))->size)))) {
    ((v961)=(((v958))->size));
  }
  ((v963)=(__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64((v958), (v960), (v961))));
  return (v963);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v963))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf Range r\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v964) {{
  __ZH_TYPE_Vec_lesschar_greater v966;
  ((v966)=(__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64i64((v964), ((i64)0), (((v964))->size))));
  return (v966);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v966))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_Vec_lesschar_greaterRVec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v967, __ZH_TYPE_Vec_lesschar_greater* v968) {{
  bool v970;
  ((v970)=((bool)0));
  return (v970);
};printf("%s", "reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_swap_charPcharP(char* v971, char* v972){
  char v973;
  ((v973)=(*(v971)));
  ((*(v971))=(*(v972)));
  ((*(v972))=(v973));
}
char* __ZH_LOP_partition_charPcharP(char* v974, char* v975) {{
  char* v980;
  char* v978;
  char* v977;
  char* v976;
  (((v976)=((char*)((((i64)(v975)))-(((((i64)1))*(((i64)1))))))), ((v977)=(v974)), ((v978)=(v974)));
  ((v978)=(v974));
  while (((((i64)(v978)))!=(((i64)(v976))))) {
    if ((((*(v978)))<((*(v976))))) {
      (__ZH_LOP_swap_charPcharP((v977), (v978)));
      ((v977)=((char*)((((i64)(v977)))+(((((i64)1))*(((i64)1)))))));
    }
    ((v978)=((char*)((((i64)(v978)))+(((((i64)1))*(((i64)1)))))));
  }
  (__ZH_LOP_swap_charPcharP((v977), (v976)));
  ((v980)=(v977));
  return (v980);
};printf("%s", "reached function end without returning anything lop charP partition charP low charP high\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_qsort_charPcharP(char* v981, char* v982){
  i64 v984;
  i64 v983;
  ((v983)=((((i64)(v982)))-(((i64)(v981)))));
  ((v984)=((i64)1));
  if ((((v983))>((v984)))) {
    char* v985;
    ((v985)=(__ZH_LOP_partition_charPcharP((v981), (v982))));
    (__ZH_LOP_qsort_charPcharP((v981), (v985)));
    ((v985)=((char*)((((i64)(v985)))+(((((i64)1))*(((i64)1)))))));
    (__ZH_LOP_qsort_charPcharP((v985), (v982)));
  }
}
void __ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP(__ZH_TYPE_Vec_lesschar_greater* v986){
  __ZH_TYPE_VecIter_lesschar_greater v990;
  __ZH_TYPE_VecIter_lesschar_greater v988;
  (__ZH_LOP_qsort_charPcharP(((&(*(((v988)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((v986)))), (&(v988)))))->ptr), ((&(*(((v990)=(__ZH_BOP__dotcall_dotend_Vec_lesschar_greaterP((v986)))), (&(v990)))))->ptr)));
}
void __ZH_LOP_sort_Vec_lesschar_greaterR(__ZH_TYPE_Vec_lesschar_greater* v991){
  (__ZH_BOP__dotcall_dotsort_Vec_lesschar_greaterP((&(*v991))));
}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotmap_Vec_lesschar_greaterPF_lesschar_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v992, char(*v993)(char*)) {{
  __ZH_TYPE_Vec_lesschar_greater v1000;
  __ZH_TYPE_Vec_lesschar_greater v994;
  ((v994)=(__ZH_LOP_Vec_lesschar_greater_i64((((v992))->size))));
  {
      i64 v998;
      i64 v997;
      i64 v996;
      __ZH_TYPE_Range v995;
      ((v995)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v992))->size))));
      ((v996)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v995)))));
      ((v997)=(__ZH_BOP__dotcall_dotend_RangeP((&(v995)))));
      ((v998)=(v996));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v998)), (v997)))) {
        ((*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((&(v994)), (v998)))=((*(v993))(&(*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v992), (v998))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v998))));
      }
    }
  ((v1000)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(v994))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v994))));
  return (v1000);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v994))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v1000))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.map Vec<char>P slf F<char charR> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lesschar_greater __ZH_BOP__dotcall_dotfilter_Vec_lesschar_greaterPF_lessbool_spacecharR_greater(__ZH_TYPE_Vec_lesschar_greater* v1001, bool(*v1002)(char*)) {{
  __ZH_TYPE_Vec_lesschar_greater v1009;
  __ZH_TYPE_Vec_lesschar_greater v1003;
  ((v1003)=(__ZH_LOP_Vec_lesschar_greater_()));
  {
      i64 v1007;
      i64 v1006;
      i64 v1005;
      __ZH_TYPE_Range v1004;
      ((v1004)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (((v1001))->size))));
      ((v1005)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v1004)))));
      ((v1006)=(__ZH_BOP__dotcall_dotend_RangeP((&(v1004)))));
      ((v1007)=(v1005));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v1007)), (v1006)))) {
        if (((*(v1002))(&(*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v1001), (v1007)))))) {
          (__ZH_BOP__plus_equal_Vec_lesschar_greaterRchar(&(v1003), (*__ZH_BOP__dotcall_dotsub_Vec_lesschar_greaterPi64((v1001), (v1007)))));
        }
        (__ZH_BOP__dotcall_dotnext_i64P((&(v1007))));
      }
    }
  ((v1009)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&(v1003))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v1003))));
  return (v1009);
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v1003))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(v1009))));
};printf("%s", "reached function end without returning anything op Vec<char> .call.filter Vec<char>P slf F<bool charR> f\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_() {{
  __ZH_TYPE_Str v1012;
  __ZH_TYPE_Str v1010;
  (((&(v1010))->data)=(__ZH_LOP_Vec_lesschar_greater_()));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v1010))->data)), ((char)((u8)0))));
  (((&(v1010))->size)=((i64)0));
  ((v1012)=(v1010));
  return (v1012);
};printf("%s", "reached function end without returning anything lop Str Str\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotdtor_StrP(__ZH_TYPE_Str* v1013){
  (__ZH_BOP__dotcall_dotdtor_Vec_lesschar_greaterP((&(((v1013))->data))));
}
str __ZH_BOP__dotcall_dotcstr_StrP(__ZH_TYPE_Str* v1014) {{
  str v1017;
  __ZH_TYPE_VecIter_lesschar_greater v1015;
  ((v1015)=(__ZH_BOP__dotcall_dotbegin_Vec_lesschar_greaterP((&(((v1014))->data)))));
  ((v1017)=((str)((&(v1015))->ptr)));
  return (v1017);
};printf("%s", "reached function end without returning anything op str .call.cstr StrP slf\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotat_StrPi64(__ZH_TYPE_Str* v1018, i64 v1019) {{
  char v1021;
  ((v1021)=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(((v1018))->data)), (v1019))));
  return &(v1021);
};printf("%s", "reached function end without returning anything op charR .call.at StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotsub_StrPi64(__ZH_TYPE_Str* v1022, i64 v1023) {{
  char v1025;
  ((v1025)=(*__ZH_BOP__dotcall_dotat_Vec_lesschar_greaterPi64((&(((v1022))->data)), (v1023))));
  return &(v1025);
};printf("%s", "reached function end without returning anything op charR .call.sub StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
char* __ZH_BOP__dotcall_dotatP_StrPi64(__ZH_TYPE_Str* v1026, i64 v1027) {{
  char* v1029;
  ((v1029)=(__ZH_BOP__dotcall_dotatP_Vec_lesschar_greaterPi64((&(((v1026))->data)), (v1027))));
  return (v1029);
};printf("%s", "reached function end without returning anything op charP .call.atP StrP slf i64 pos\n"); exit(EXIT_FAILURE);}
void __ZH_BOP__dotcall_dotpush_back_StrPchar(__ZH_TYPE_Str* v1030, char v1031){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v1030))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v1030))->data)), (v1031)));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v1030))->data)), ((char)((u8)0))));
  (*__ZH_LOP__plus_plus_i64R(&(((v1030))->size)));
}
void __ZH_BOP__dotcall_dotpop_back_StrP(__ZH_TYPE_Str* v1032){
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v1032))->data))));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&(((v1032))->data))));
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&(((v1032))->data)), ((char)((u8)0))));
  (*__ZH_LOP__minus_minus_i64R(&(((v1032))->size)));
}
__ZH_TYPE_Str __ZH_LOP_Str_str(str v1033) {{
  __ZH_TYPE_Str v1036;
  __ZH_TYPE_Str v1034;
  ((v1034)=(__ZH_LOP_Str_()));
  (__ZH_BOP__dotcall_dotpop_back_Vec_lesschar_greaterP((&((&(v1034))->data))));
  while ((((*((char*)(v1033))))!=(((char)((u8)0))))) {
    (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v1034))->data)), (*((char*)(v1033)))));
    ((v1033)=((str)((((i64)(v1033)))+(((i64)1)))));
  }
  (__ZH_BOP__dotcall_dotpush_back_Vec_lesschar_greaterPchar((&((&(v1034))->data)), ((char)((u8)0))));
  (((&(v1034))->size)=((((&((&(v1034))->data))->size))-(((i64)1))));
  ((v1036)=(v1034));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1034))));
  return (v1036);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1034))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1036))));
};printf("%s", "reached function end without returning anything lop Str Str str s\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP_Str_StrR(__ZH_TYPE_Str* v1037) {{
  __ZH_TYPE_Str v1040;
  __ZH_TYPE_Str v1038;
  ((v1038)=(__ZH_LOP_Str_()));
  (((&(v1038))->data)=(__ZH_LOP_Vec_lesschar_greater_Vec_lesschar_greaterR(&((&(*v1037))->data))));
  (((&(v1038))->size)=((&(*v1037))->size));
  ((v1040)=(__ZH_LOP_Str_StrR(&(v1038))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1038))));
  return (v1040);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1038))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1040))));
};printf("%s", "reached function end without returning anything lop Str Str StrR s\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_len_str(str v1041) {{
  i64 v1044;
  i64 v1042;
  ((v1042)=((i64)0));
  while ((((*((char*)(v1041))))!=(((char)((u8)0))))) {
    (*__ZH_LOP__plus_plus_i64R(&(v1042)));
    ((v1041)=((str)((((i64)(v1041)))+(((i64)1)))));
  }
  ((v1044)=(v1042));
  return (v1044);
};printf("%s", "reached function end without returning anything lop i64 len str s\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_out_StrR(__ZH_TYPE_Str* v1045){
  (printf("%s\n", (__ZH_BOP__dotcall_dotcstr_StrP((&(*v1045))))));
}
void __ZH_LOP_put_StrR(__ZH_TYPE_Str* v1046){
  (printf("%s", (__ZH_BOP__dotcall_dotcstr_StrP((&(*v1046))))));
}
void __ZH_BOP__plus_equal_StrRchar(__ZH_TYPE_Str* v1047, char v1048){
  (__ZH_BOP__dotcall_dotpush_back_StrPchar((&(*v1047)), (v1048)));
}
void __ZH_BOP__plus_equal_StrRStrR(__ZH_TYPE_Str* v1049, __ZH_TYPE_Str* v1050){
  {
      i64 v1054;
      i64 v1053;
      i64 v1052;
      __ZH_TYPE_Range v1051;
      ((v1051)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((&(*v1050))->size))));
      ((v1052)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v1051)))));
      ((v1053)=(__ZH_BOP__dotcall_dotend_RangeP((&(v1051)))));
      ((v1054)=(v1052));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v1054)), (v1053)))) {
        char v1055;
        ((v1055)=((char)((i8)115)));
        ((v1055)=(*__ZH_BOP__dotcall_dotat_StrPi64((&(*v1050)), (v1054))));
        (__ZH_BOP__plus_equal_StrRchar(&(*v1049), (v1055)));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v1054))));
      }
    }
}
void __ZH_BOP__plus_equal_StrRstr(__ZH_TYPE_Str* v1056, str v1057){
  i64 v1058;
  ((v1058)=(__ZH_LOP_len_str((v1057))));
  {
      i64 v1062;
      i64 v1061;
      i64 v1060;
      __ZH_TYPE_Range v1059;
      ((v1059)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (v1058))));
      ((v1060)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v1059)))));
      ((v1061)=(__ZH_BOP__dotcall_dotend_RangeP((&(v1059)))));
      ((v1062)=(v1060));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v1062)), (v1061)))) {
        (__ZH_BOP__plus_equal_StrRchar(&(*v1056), (__ZH_BOP__dotcall_dotsub_strPi64((&(v1057)), (v1062)))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v1062))));
      }
    }
}
__ZH_TYPE_Str __ZH_BOP__plus_StrRStrR(__ZH_TYPE_Str* v1063, __ZH_TYPE_Str* v1064) {{
  __ZH_TYPE_Str v1067;
  __ZH_TYPE_Str v1065;
  ((v1065)=(__ZH_LOP_Str_StrR(&(*v1063))));
  (__ZH_BOP__plus_equal_StrRStrR(&(v1065), &(*v1064)));
  ((v1067)=(__ZH_LOP_Str_StrR(&(v1065))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1065))));
  return (v1067);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1065))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1067))));
};printf("%s", "reached function end without returning anything op Str + StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__plus_strstr(str v1068, str v1069) {{
  __ZH_TYPE_Str v1075;
  __ZH_TYPE_Str v1074;
  __ZH_TYPE_Str v1072;
  ((v1075)=(__ZH_BOP__plus_StrRStrR(&(*(((v1072)=(__ZH_LOP_Str_str((v1068)))), (&(v1072)))), &(*(((v1074)=(__ZH_LOP_Str_str((v1069)))), (&(v1074)))))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1072))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1074))));
  return (v1075);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1072))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1074))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1075))));
};printf("%s", "reached function end without returning anything op Str + str a str b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_ROP__less_StrR(__ZH_TYPE_Str* v1076) {{
  __ZH_TYPE_Out v1078;
  (__ZH_LOP_out_StrR(&(*v1076)));
  ((v1078)=(__ZH_LOP_Out_()));
  return (v1078);
};printf("%s", "reached function end without returning anything rop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_StrR(__ZH_TYPE_Str* v1079) {{
  __ZH_TYPE_Out v1081;
  ((__ZH_LOP_put_StrR(&(*v1079))), (printf("%s", ((str)" "))));
  ((v1081)=(__ZH_LOP_Out_()));
  return (v1081);
};printf("%s", "reached function end without returning anything lop Out < StrR i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutStrR(__ZH_TYPE_Out v1082, __ZH_TYPE_Str* v1083) {{
  __ZH_TYPE_Out v1085;
  ((__ZH_LOP_put_StrR(&(*v1083))), (printf("%s", ((str)" "))));
  ((v1085)=(__ZH_LOP_Out_()));
  return (v1085);
};printf("%s", "reached function end without returning anything op Out < Out o StrR i\n"); exit(EXIT_FAILURE);}
bool __ZH_BOP__less_StrRStrR(__ZH_TYPE_Str* v1086, __ZH_TYPE_Str* v1087) {{
  bool v1101;
  {
      i64 v1091;
      i64 v1090;
      i64 v1089;
      __ZH_TYPE_Range v1088;
      ((v1088)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (__ZH_LOP_min_i64i64(((&(*v1086))->size), ((&(*v1087))->size))))));
      ((v1089)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v1088)))));
      ((v1090)=(__ZH_BOP__dotcall_dotend_RangeP((&(v1088)))));
      ((v1091)=(v1089));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v1091)), (v1090)))) {
        if ((((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v1086)), (v1091))))<((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v1087)), (v1091)))))) {
          bool v1093;
          ((v1093)=((bool)1));
          return (v1093);
        }
 else if ((((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v1086)), (v1091))))>((*__ZH_BOP__dotcall_dotsub_StrPi64((&(*v1087)), (v1091)))))) {
          bool v1095;
          ((v1095)=((bool)0));
          return (v1095);
        }
        (__ZH_BOP__dotcall_dotnext_i64P((&(v1091))));
      }
    }
  if (((((&(*v1086))->size))<(((&(*v1087))->size)))) {
    bool v1097;
    ((v1097)=((bool)1));
    return (v1097);
  }
 else if (((((&(*v1086))->size))>(((&(*v1087))->size)))) {
    bool v1099;
    ((v1099)=((bool)0));
    return (v1099);
  }
  ((v1101)=((bool)0));
  return (v1101);
};printf("%s", "reached function end without returning anything op bool < StrR a StrR b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_BOP__asterisk_stri64(str v1102, i64 v1103) {{
  __ZH_TYPE_Str v1111;
  __ZH_TYPE_Str v1105;
  __ZH_TYPE_Str v1113;
  __ZH_TYPE_Str v1104;
  ((v1104)=(__ZH_LOP_Str_()));
  ((v1105)=(__ZH_LOP_Str_str((v1102))));
  {
      i64 v1109;
      i64 v1108;
      i64 v1107;
      __ZH_TYPE_Range v1106;
      ((v1106)=(__ZH_BOP__dot_dot_i64i64(((i64)0), (v1103))));
      ((v1107)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v1106)))));
      ((v1108)=(__ZH_BOP__dotcall_dotend_RangeP((&(v1106)))));
      ((v1109)=(v1107));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v1109)), (v1108)))) {
        (__ZH_BOP__plus_equal_StrRStrR(&(v1104), &(v1105)));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v1109))));
      }
    }
  ((v1111)=(__ZH_LOP_Str_StrR(&(v1104))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1104))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1105))));
  return (v1111);
  ((v1113)=(__ZH_LOP_Str_()));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1104))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1105))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1111))));
  return (v1113);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1104))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1105))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1111))));
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1113))));
};printf("%s", "reached function end without returning anything op Str * str s i64 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Str __ZH_LOP__dollar_str(str v1114) {{
  __ZH_TYPE_Str v1116;
  ((v1116)=(__ZH_LOP_Str_str((v1114))));
  return (v1116);
  (__ZH_BOP__dotcall_dotdtor_StrP((&(v1116))));
};printf("%s", "reached function end without returning anything lop Str $ str s\n"); exit(EXIT_FAILURE);}
str __ZH_LOP_frog_() {{
  str v1118;
  ((v1118)=((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ "));
  return (v1118);
};printf("%s", "reached function end without returning anything lop str frog\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_sqrt_f64(f64 v1119) {{
  f64 v1126;
  f64 v1120;
  ((v1120)=((f64)1.000000));
  {
      i64 v1124;
      i64 v1123;
      i64 v1122;
      __ZH_TYPE_Range v1121;
      ((v1121)=(__ZH_BOP__dot_dot_i64i64(((i64)0), ((i64)10))));
      ((v1122)=(__ZH_BOP__dotcall_dotbegin_RangeP((&(v1121)))));
      ((v1123)=(__ZH_BOP__dotcall_dotend_RangeP((&(v1121)))));
      ((v1124)=(v1122));
      while ((__ZH_BOP__dotcall_dotuneq_i64Pi64((&(v1124)), (v1123)))) {
        (__ZH_BOP__minus_equal_f64Rf64(&(v1120), (((((((v1120))*((v1120))))-((v1119))))/(((((f64)2.000000))*((v1120)))))));
        (__ZH_BOP__dotcall_dotnext_i64P((&(v1124))));
      }
    }
  ((v1126)=(v1120));
  return (v1126);
};printf("%s", "reached function end without returning anything lop f64 sqrt f64 x\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_LOP_V2_f64f64(f64 v1127, f64 v1128) {{
  __ZH_TYPE_V2 v1131;
  __ZH_TYPE_V2 v1129;
  (((&(v1129))->x)=(v1127));
  (((&(v1129))->y)=(v1128));
  ((v1131)=(v1129));
  return (v1131);
};printf("%s", "reached function end without returning anything lop V2 V2 f64 x f64 y\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__plus_V2V2(__ZH_TYPE_V2 v1132, __ZH_TYPE_V2 v1133) {{
  __ZH_TYPE_V2 v1135;
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v1132))->x), ((&(v1133))->x)));
  (__ZH_BOP__plus_equal_f64Rf64(&((&(v1132))->y), ((&(v1133))->y)));
  ((v1135)=(v1132));
  return (v1135);
};printf("%s", "reached function end without returning anything op V2 + V2 a V2 b\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_V2 __ZH_BOP__asterisk_V2V2(__ZH_TYPE_V2 v1136, __ZH_TYPE_V2 v1137) {{
  __ZH_TYPE_V2 v1140;
  __ZH_TYPE_V2 v1138;
  (((&(v1138))->x)=((((((&(v1136))->x))*(((&(v1137))->x))))-(((((&(v1136))->y))*(((&(v1137))->y))))));
  (((&(v1138))->y)=((((((&(v1136))->x))*(((&(v1137))->y))))+(((((&(v1136))->y))*(((&(v1137))->x))))));
  ((v1140)=(v1138));
  return (v1140);
};printf("%s", "reached function end without returning anything op V2 * V2 a V2 b\n"); exit(EXIT_FAILURE);}
f64 __ZH_LOP_abs_V2(__ZH_TYPE_V2 v1141) {{
  f64 v1143;
  ((v1143)=(__ZH_LOP_sqrt_f64(((((((&(v1141))->x))*(((&(v1141))->x))))+(((((&(v1141))->y))*(((&(v1141))->y))))))));
  return (v1143);
};printf("%s", "reached function end without returning anything lop f64 abs V2 a\n"); exit(EXIT_FAILURE);}
void __ZH_LOP_put_V2(__ZH_TYPE_V2 v1144){
  (printf("%f", ((&(v1144))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1144))->y)));
}
void __ZH_LOP_out_V2(__ZH_TYPE_V2 v1145){
  (printf("%f", ((&(v1145))->x)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1145))->y)));
  (printf("%s\n", ((str)"")));
}
__ZH_TYPE_Out __ZH_ROP__less_V2(__ZH_TYPE_V2 v1146) {{
  __ZH_TYPE_Out v1148;
  (__ZH_LOP_out_V2((v1146)));
  ((v1148)=(__ZH_LOP_Out_()));
  return (v1148);
};printf("%s", "reached function end without returning anything rop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_LOP__less_V2(__ZH_TYPE_V2 v1149) {{
  __ZH_TYPE_Out v1151;
  ((__ZH_LOP_put_V2((v1149))), (printf("%s", ((str)" "))));
  ((v1151)=(__ZH_LOP_Out_()));
  return (v1151);
};printf("%s", "reached function end without returning anything lop Out < V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Out __ZH_BOP__less_OutV2(__ZH_TYPE_Out v1152, __ZH_TYPE_V2 v1153) {{
  __ZH_TYPE_Out v1155;
  ((__ZH_LOP_put_V2((v1153))), (printf("%s", ((str)" "))));
  ((v1155)=(__ZH_LOP_Out_()));
  return (v1155);
};printf("%s", "reached function end without returning anything op Out < Out o V2 i\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_i64(i64 v1156) {{
  __ZH_TYPE_Rng v1159;
  __ZH_TYPE_Rng v1157;
  (((&(v1157))->seed)=(v1156));
  ((v1159)=(v1157));
  return (v1159);
};printf("%s", "reached function end without returning anything lop Rng Rng i64 seed\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Rng __ZH_LOP_Rng_() {{
  __ZH_TYPE_Rng v1161;
  ((v1161)=(__ZH_LOP_Rng_i64(((i64)5323))));
  return (v1161);
};printf("%s", "reached function end without returning anything lop Rng Rng\n"); exit(EXIT_FAILURE);}
i64 __ZH_BOP__dotcall_dotcall_RngP(__ZH_TYPE_Rng* v1162) {{
  i64 v1164;
  ((((v1162))->seed)=((((((i64)8253729))*((((v1162))->seed))))+(((i64)2396403))));
  ((v1164)=(((((v1162))->seed))%(((i64)32767))));
  return (v1164);
};printf("%s", "reached function end without returning anything op i64 .call.call RngP slf\n"); exit(EXIT_FAILURE);}
bool __ZH_LOP_isPrime_i64R(i64* v1165) {{
  bool v1170;
  i64 v1166;
  ((v1166)=((i64)2));
  while ((((*v1165))>((v1166)))) {
    if ((__ZH_BOP__percent_percent_i64i64((*v1165), (v1166)))) {
      bool v1168;
      ((v1168)=((bool)0));
      return (v1168);
    }
    (__ZH_ROP__plus_plus_i64R(&(v1166)));
  }
  ((v1170)=(((*v1165))>(((i64)1))));
  return (v1170);
};printf("%s", "reached function end without returning anything lop bool isPrime i64R num\n"); exit(EXIT_FAILURE);}
__ZH_TYPE_Vec_lessi64_greater __ZH_LOP_filterMap_Vec_lessi64_greaterRF_lessbool_spacei64R_greaterF_lessi64_spacei64R_greater(__ZH_TYPE_Vec_lessi64_greater* v1171, bool(*v1172)(i64*), i64(*v1173)(i64*)) {{
  __ZH_TYPE_Vec_lessi64_greater v1177;
  __ZH_TYPE_Vec_lessi64_greater v1176;
  ((v1177)=(__ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater((&(*(((v1176)=(__ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater((&(*v1171)), (v1172)))), (&(v1176))))), (v1173))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1176))));
  return (v1177);
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1176))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1177))));
};printf("%s", "reached function end without returning anything lop Vec<i64> filterMap Vec<i64>R v F<bool i64R> f1 F<i64 i64R> f2\n"); exit(EXIT_FAILURE);}
int main(int argc, char *argv[]) {
  __ZH_TYPE_Vec_lessi64_greater v1197;
  __ZH_TYPE_Vec_lessi64_greater v1193;
  __ZH_TYPE_Vec_lessi64_greater v1191;
  __ZH_TYPE_Vec_lessi64_greater v1195;
  __ZH_TYPE_Vec_lessi64_greater v1189;
  __ZH_TYPE_Vec_lessi64_greater v1181;
  __ZH_TYPE_Vec_lessi64_greater v1179;
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*(((v1181)=(__ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater((&(*(((v1179)=(__ZH_LOP_iota_i64i64(((i64)0), ((i64)50)))), (&(v1179))))), (__ZH_LOP_isPrime_i64R)))), (&(v1181))))));
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*(((v1193)=(__ZH_BOP__dotcall_dotmap_Vec_lessi64_greaterPF_lessi64_spacei64R_greater((&(*(((v1191)=(__ZH_BOP__dotcall_dotfilter_Vec_lessi64_greaterPF_lessbool_spacei64R_greater((&(*(((v1189)=(__ZH_LOP_iota_i64i64(((i64)0), ((i64)20)))), (&(v1189))))), (__ZH_LOP_f1_i64R)))), (&(v1191))))), (__ZH_LOP_f2_i64R)))), (&(v1193))))));
  (__ZH_LOP_out_Vec_lessi64_greaterR(&(*(((v1197)=(__ZH_LOP_filterMap_Vec_lessi64_greaterRF_lessbool_spacei64R_greaterF_lessi64_spacei64R_greater(&(*(((v1195)=(__ZH_LOP_iota_i64i64(((i64)0), ((i64)20)))), (&(v1195)))), (__ZH_LOP_f1_i64R), (__ZH_LOP_f2_i64R)))), (&(v1197))))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1179))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1181))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1189))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1191))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1193))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1195))));
  (__ZH_BOP__dotcall_dotdtor_Vec_lessi64_greaterP((&(v1197))));
}
bool __ZH_LOP_f1_i64R(i64* v1182) {{
  bool v1184;
  ((v1184)=(__ZH_BOP__percent_percent_i64i64((*v1182), ((i64)2))));
  return (v1184);
};printf("%s", "reached function end without returning anything lop bool f1 i64R i\n"); exit(EXIT_FAILURE);}
i64 __ZH_LOP_f2_i64R(i64* v1185) {{
  i64 v1187;
  ((v1187)=(((*v1185))*((*v1185))));
  return (v1187);
};printf("%s", "reached function end without returning anything lop i64 f2 i64R i\n"); exit(EXIT_FAILURE);}
