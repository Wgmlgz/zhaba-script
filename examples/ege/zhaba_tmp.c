#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\valist.c"
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\keyboard.c"
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\math.c"
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\screen.c"
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\stdio.c"
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\time.c"
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\stdlib.c"
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\preprocessor.c"
#include "C:\Users\wgmlgz\code\Zhaba-script\std\c\panic.c"

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
void panic(const char* str) {
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
struct PROT_id_1844;
typedef struct PROT_id_1844/*IntOpMaker<i8>*/ id_1844/*IntOpMaker<i8>*/;
struct PROT_id_1845;
typedef struct PROT_id_1845/*IntOpMaker<i16>*/ id_1845/*IntOpMaker<i16>*/;
struct PROT_id_1846;
typedef struct PROT_id_1846/*IntOpMaker<i32>*/ id_1846/*IntOpMaker<i32>*/;
struct PROT_id_1847;
typedef struct PROT_id_1847/*IntOpMaker<i64>*/ id_1847/*IntOpMaker<i64>*/;
struct PROT_id_1848;
typedef struct PROT_id_1848/*IntOpMaker<u8>*/ id_1848/*IntOpMaker<u8>*/;
struct PROT_id_1849;
typedef struct PROT_id_1849/*IntOpMaker<u16>*/ id_1849/*IntOpMaker<u16>*/;
struct PROT_id_1850;
typedef struct PROT_id_1850/*IntOpMaker<u32>*/ id_1850/*IntOpMaker<u32>*/;
struct PROT_id_1851;
typedef struct PROT_id_1851/*IntOpMaker<u64>*/ id_1851/*IntOpMaker<u64>*/;
struct PROT_id_1852;
typedef struct PROT_id_1852/*IntOpMaker<char>*/ id_1852/*IntOpMaker<char>*/;
struct PROT_id_1853;
typedef struct PROT_id_1853/*Out*/ id_1853/*Out*/;
struct PROT_id_1854;
typedef struct PROT_id_1854/*Range<i8>*/ id_1854/*Range<i8>*/;
struct PROT_id_1855;
typedef struct PROT_id_1855/*RangeIter<i8>*/ id_1855/*RangeIter<i8>*/;
struct PROT_id_1856;
typedef struct PROT_id_1856/*RangeIterRange<i8>*/ id_1856/*RangeIterRange<i8>*/;
struct PROT_id_1857;
typedef struct PROT_id_1857/*Range<i16>*/ id_1857/*Range<i16>*/;
struct PROT_id_1858;
typedef struct PROT_id_1858/*RangeIter<i16>*/ id_1858/*RangeIter<i16>*/;
struct PROT_id_1859;
typedef struct PROT_id_1859/*RangeIterRange<i16>*/ id_1859/*RangeIterRange<i16>*/;
struct PROT_id_1860;
typedef struct PROT_id_1860/*Range<i32>*/ id_1860/*Range<i32>*/;
struct PROT_id_1861;
typedef struct PROT_id_1861/*RangeIter<i32>*/ id_1861/*RangeIter<i32>*/;
struct PROT_id_1862;
typedef struct PROT_id_1862/*RangeIterRange<i32>*/ id_1862/*RangeIterRange<i32>*/;
struct PROT_id_1863;
typedef struct PROT_id_1863/*Range<i64>*/ id_1863/*Range<i64>*/;
struct PROT_id_1864;
typedef struct PROT_id_1864/*RangeIter<i64>*/ id_1864/*RangeIter<i64>*/;
struct PROT_id_1865;
typedef struct PROT_id_1865/*RangeIterRange<i64>*/ id_1865/*RangeIterRange<i64>*/;
struct PROT_id_1866;
typedef struct PROT_id_1866/*Range<char>*/ id_1866/*Range<char>*/;
struct PROT_id_1867;
typedef struct PROT_id_1867/*RangeIter<char>*/ id_1867/*RangeIter<char>*/;
struct PROT_id_1868;
typedef struct PROT_id_1868/*RangeIterRange<char>*/ id_1868/*RangeIterRange<char>*/;
struct PROT_id_1869;
typedef struct PROT_id_1869/*Vec<i64>*/ id_1869/*Vec<i64>*/;
struct PROT_id_1870;
typedef struct PROT_id_1870/*VecIter<i64>*/ id_1870/*VecIter<i64>*/;
struct PROT_id_1871;
typedef struct PROT_id_1871/*VecIterRange<i64>*/ id_1871/*VecIterRange<i64>*/;
struct PROT_id_1872;
typedef struct PROT_id_1872/*Vec<bool>*/ id_1872/*Vec<bool>*/;
struct PROT_id_1873;
typedef struct PROT_id_1873/*VecIter<bool>*/ id_1873/*VecIter<bool>*/;
struct PROT_id_1874;
typedef struct PROT_id_1874/*VecIterRange<bool>*/ id_1874/*VecIterRange<bool>*/;
struct PROT_id_1875;
typedef struct PROT_id_1875/*Vec<char>*/ id_1875/*Vec<char>*/;
struct PROT_id_1876;
typedef struct PROT_id_1876/*VecIter<char>*/ id_1876/*VecIter<char>*/;
struct PROT_id_1877;
typedef struct PROT_id_1877/*VecIterRange<char>*/ id_1877/*VecIterRange<char>*/;
struct PROT_id_1878;
typedef struct PROT_id_1878/*Str*/ id_1878/*Str*/;
struct PROT_id_1879;
typedef struct PROT_id_1879/*Vec<Str>*/ id_1879/*Vec<Str>*/;
struct PROT_id_1880;
typedef struct PROT_id_1880/*VecIter<Str>*/ id_1880/*VecIter<Str>*/;
struct PROT_id_1881;
typedef struct PROT_id_1881/*VecIterRange<Str>*/ id_1881/*VecIterRange<Str>*/;
struct PROT_id_1882;
typedef struct PROT_id_1882/*V2*/ id_1882/*V2*/;
struct PROT_id_1883;
typedef struct PROT_id_1883/*Rng*/ id_1883/*Rng*/;
struct PROT_id_1884;
typedef struct PROT_id_1884/*Err*/ id_1884/*Err*/;
struct PROT_id_1885;
typedef struct PROT_id_1885/*File*/ id_1885/*File*/;
struct PROT_id_1886;
typedef struct PROT_id_1886/*Result<File Err>*/ id_1886/*Result<File Err>*/;
struct PROT_id_1887;
typedef struct PROT_id_1887/*mp<Str i64>*/ id_1887/*mp<Str i64>*/;

struct PROT_id_1844/*IntOpMaker<i8>*/ {
  bool id_1888;
};
struct PROT_id_1845/*IntOpMaker<i16>*/ {
  bool id_1888/*unused*/;
};
struct PROT_id_1846/*IntOpMaker<i32>*/ {
  bool id_1888/*unused*/;
};
struct PROT_id_1847/*IntOpMaker<i64>*/ {
  bool id_1888/*unused*/;
};
struct PROT_id_1848/*IntOpMaker<u8>*/ {
  bool id_1888/*unused*/;
};
struct PROT_id_1849/*IntOpMaker<u16>*/ {
  bool id_1888/*unused*/;
};
struct PROT_id_1850/*IntOpMaker<u32>*/ {
  bool id_1888/*unused*/;
};
struct PROT_id_1851/*IntOpMaker<u64>*/ {
  bool id_1888/*unused*/;
};
struct PROT_id_1852/*IntOpMaker<char>*/ {
  bool id_1888/*unused*/;
};
struct PROT_id_1853/*Out*/ {
  bool id_1889;
};
struct PROT_id_1854/*Range<i8>*/ {
  i8 id_1890;
  i8 id_1891;
};
struct PROT_id_1855/*RangeIter<i8>*/ {
  i8 id_1892;
};
struct PROT_id_1856/*RangeIterRange<i8>*/ {
  id_1855/*RangeIter<i8>*/ id_1890/*begin*/;
  id_1855/*RangeIter<i8>*/ id_1891/*end*/;
};
struct PROT_id_1857/*Range<i16>*/ {
  i16 id_1890/*begin*/;
  i16 id_1891/*end*/;
};
struct PROT_id_1858/*RangeIter<i16>*/ {
  i16 id_1892/*val*/;
};
struct PROT_id_1859/*RangeIterRange<i16>*/ {
  id_1858/*RangeIter<i16>*/ id_1890/*begin*/;
  id_1858/*RangeIter<i16>*/ id_1891/*end*/;
};
struct PROT_id_1860/*Range<i32>*/ {
  i32 id_1890/*begin*/;
  i32 id_1891/*end*/;
};
struct PROT_id_1861/*RangeIter<i32>*/ {
  i32 id_1892/*val*/;
};
struct PROT_id_1862/*RangeIterRange<i32>*/ {
  id_1861/*RangeIter<i32>*/ id_1890/*begin*/;
  id_1861/*RangeIter<i32>*/ id_1891/*end*/;
};
struct PROT_id_1863/*Range<i64>*/ {
  i64 id_1890/*begin*/;
  i64 id_1891/*end*/;
};
struct PROT_id_1864/*RangeIter<i64>*/ {
  i64 id_1892/*val*/;
};
struct PROT_id_1865/*RangeIterRange<i64>*/ {
  id_1864/*RangeIter<i64>*/ id_1890/*begin*/;
  id_1864/*RangeIter<i64>*/ id_1891/*end*/;
};
struct PROT_id_1866/*Range<char>*/ {
  char id_1890/*begin*/;
  char id_1891/*end*/;
};
struct PROT_id_1867/*RangeIter<char>*/ {
  char id_1892/*val*/;
};
struct PROT_id_1868/*RangeIterRange<char>*/ {
  id_1867/*RangeIter<char>*/ id_1890/*begin*/;
  id_1867/*RangeIter<char>*/ id_1891/*end*/;
};
struct PROT_id_1869/*Vec<i64>*/ {
  i64 id_1893;
  i64* id_1894;
  i64 id_1895;
};
struct PROT_id_1870/*VecIter<i64>*/ {
  i64* id_1896;
};
struct PROT_id_1871/*VecIterRange<i64>*/ {
  id_1870/*VecIter<i64>*/ id_1890/*begin*/;
  id_1870/*VecIter<i64>*/ id_1891/*end*/;
};
struct PROT_id_1872/*Vec<bool>*/ {
  i64 id_1893/*cap*/;
  bool* id_1894/*head*/;
  i64 id_1895/*size*/;
};
struct PROT_id_1873/*VecIter<bool>*/ {
  bool* id_1896/*ptr*/;
};
struct PROT_id_1874/*VecIterRange<bool>*/ {
  id_1873/*VecIter<bool>*/ id_1890/*begin*/;
  id_1873/*VecIter<bool>*/ id_1891/*end*/;
};
struct PROT_id_1875/*Vec<char>*/ {
  i64 id_1893/*cap*/;
  char* id_1894/*head*/;
  i64 id_1895/*size*/;
};
struct PROT_id_1876/*VecIter<char>*/ {
  char* id_1896/*ptr*/;
};
struct PROT_id_1877/*VecIterRange<char>*/ {
  id_1876/*VecIter<char>*/ id_1890/*begin*/;
  id_1876/*VecIter<char>*/ id_1891/*end*/;
};
struct PROT_id_1878/*Str*/ {
  id_1875/*Vec<char>*/ id_1897;
  i64 id_1895/*size*/;
};
struct PROT_id_1879/*Vec<Str>*/ {
  i64 id_1893/*cap*/;
  id_1878/*Str*/* id_1894/*head*/;
  i64 id_1895/*size*/;
};
struct PROT_id_1880/*VecIter<Str>*/ {
  id_1878/*Str*/* id_1896/*ptr*/;
};
struct PROT_id_1881/*VecIterRange<Str>*/ {
  id_1880/*VecIter<Str>*/ id_1890/*begin*/;
  id_1880/*VecIter<Str>*/ id_1891/*end*/;
};
struct PROT_id_1882/*V2*/ {
  f64 id_1898;
  f64 id_1899;
};
struct PROT_id_1883/*Rng*/ {
  i64 id_1900;
};
struct PROT_id_1884/*Err*/ {
  id_1878/*Str*/ id_1892/*val*/;
};
struct PROT_id_1885/*File*/ {
  FILE* id_1901;
};
struct PROT_id_1886/*Result<File Err>*/ {
  id_1884/*Err*/ id_1902;
  bool id_1903;
  id_1885/*File*/ id_1892/*val*/;
};
struct PROT_id_1887/*mp<Str i64>*/ {
  bool id_1888/*unused*/;
};
i8 id_1904();
i16 id_1905();
i32 id_1906();
i64 id_1907();
u8 id_1908();
u16 id_1909();
u32 id_1910();
u64 id_1911();
bool id_1912();
char id_1913();
i64 id_1914(i64 v101, i64 v102);
i64 id_1915(i64 v103, i64 v104);
void id_1916();
void id_1917(i8* v105, i8 v106);
void id_1918(i8* v107, i8 v108);
void id_1919(i8* v109, i8 v110);
void id_1920(i8* v111, i8 v112);
void id_1921(i8* v113, i8 v114);
void id_1922(i8* v115, i8 v116);
void id_1923(i8* v117, i8 v118);
void id_1924(i8* v119, i8 v120);
bool id_1925(i8 v121, i8 v122);
bool id_1926(i8 v123, i8 v124);
i8* id_1927(i8* v125);
i8* id_1928(i8* v126);
i8 id_1929(i8* v127);
i8 id_1930(i8* v129);
void id_1931(i16* v132, i16 v133);
void id_1932(i16* v134, i16 v135);
void id_1933(i16* v136, i16 v137);
void id_1934(i16* v138, i16 v139);
void id_1935(i16* v140, i16 v141);
void id_1936(i16* v142, i16 v143);
void id_1937(i16* v144, i16 v145);
void id_1938(i16* v146, i16 v147);
bool id_1939(i16 v148, i16 v149);
bool id_1940(i16 v150, i16 v151);
i16* id_1941(i16* v152);
i16* id_1942(i16* v153);
i16 id_1943(i16* v154);
i16 id_1944(i16* v156);
void id_1945(i32* v159, i32 v160);
void id_1946(i32* v161, i32 v162);
void id_1947(i32* v163, i32 v164);
void id_1948(i32* v165, i32 v166);
void id_1949(i32* v167, i32 v168);
void id_1950(i32* v169, i32 v170);
void id_1951(i32* v171, i32 v172);
void id_1952(i32* v173, i32 v174);
bool id_1953(i32 v175, i32 v176);
bool id_1954(i32 v177, i32 v178);
i32* id_1955(i32* v179);
i32* id_1956(i32* v180);
i32 id_1957(i32* v181);
i32 id_1958(i32* v183);
void id_1959(i64* v186, i64 v187);
void id_1960(i64* v188, i64 v189);
void id_1961(i64* v190, i64 v191);
void id_1962(i64* v192, i64 v193);
void id_1963(i64* v194, i64 v195);
void id_1964(i64* v196, i64 v197);
void id_1965(i64* v198, i64 v199);
void id_1966(i64* v200, i64 v201);
bool id_1967(i64 v202, i64 v203);
bool id_1968(i64 v204, i64 v205);
i64* id_1969(i64* v206);
i64* id_1970(i64* v207);
i64 id_1971(i64* v208);
i64 id_1972(i64* v210);
void id_1973(u8* v213, u8 v214);
void id_1974(u8* v215, u8 v216);
void id_1975(u8* v217, u8 v218);
void id_1976(u8* v219, u8 v220);
void id_1977(u8* v221, u8 v222);
void id_1978(u8* v223, u8 v224);
void id_1979(u8* v225, u8 v226);
void id_1980(u8* v227, u8 v228);
bool id_1981(u8 v229, u8 v230);
bool id_1982(u8 v231, u8 v232);
u8* id_1983(u8* v233);
u8* id_1984(u8* v234);
u8 id_1985(u8* v235);
u8 id_1986(u8* v237);
void id_1987(u16* v240, u16 v241);
void id_1988(u16* v242, u16 v243);
void id_1989(u16* v244, u16 v245);
void id_1990(u16* v246, u16 v247);
void id_1991(u16* v248, u16 v249);
void id_1992(u16* v250, u16 v251);
void id_1993(u16* v252, u16 v253);
void id_1994(u16* v254, u16 v255);
bool id_1995(u16 v256, u16 v257);
bool id_1996(u16 v258, u16 v259);
u16* id_1997(u16* v260);
u16* id_1998(u16* v261);
u16 id_1999(u16* v262);
u16 id_2000(u16* v264);
void id_2001(u32* v267, u32 v268);
void id_2002(u32* v269, u32 v270);
void id_2003(u32* v271, u32 v272);
void id_2004(u32* v273, u32 v274);
void id_2005(u32* v275, u32 v276);
void id_2006(u32* v277, u32 v278);
void id_2007(u32* v279, u32 v280);
void id_2008(u32* v281, u32 v282);
bool id_2009(u32 v283, u32 v284);
bool id_2010(u32 v285, u32 v286);
u32* id_2011(u32* v287);
u32* id_2012(u32* v288);
u32 id_2013(u32* v289);
u32 id_2014(u32* v291);
void id_2015(u64* v294, u64 v295);
void id_2016(u64* v296, u64 v297);
void id_2017(u64* v298, u64 v299);
void id_2018(u64* v300, u64 v301);
void id_2019(u64* v302, u64 v303);
void id_2020(u64* v304, u64 v305);
void id_2021(u64* v306, u64 v307);
void id_2022(u64* v308, u64 v309);
bool id_2023(u64 v310, u64 v311);
bool id_2024(u64 v312, u64 v313);
u64* id_2025(u64* v314);
u64* id_2026(u64* v315);
u64 id_2027(u64* v316);
u64 id_2028(u64* v318);
void id_2029(char* v321, char v322);
void id_2030(char* v323, char v324);
void id_2031(char* v325, char v326);
void id_2032(char* v327, char v328);
void id_2033(char* v329, char v330);
void id_2034(char* v331, char v332);
void id_2035(char* v333, char v334);
void id_2036(char* v335, char v336);
bool id_2037(char v337, char v338);
bool id_2038(char v339, char v340);
char* id_2039(char* v341);
char* id_2040(char* v342);
char id_2041(char* v343);
char id_2042(char* v345);
void id_2043(f32* v348, f32 v349);
void id_2044(f32* v350, f32 v351);
void id_2045(f32* v352, f32 v353);
void id_2046(f32* v354, f32 v355);
void id_2047(f64* v356, f64 v357);
void id_2048(f64* v358, f64 v359);
void id_2049(f64* v360, f64 v361);
void id_2050(f64* v362, f64 v363);
bool id_2051(bool v364, bool v365);
i64 id_2052(i64 v366, i64 v367);
id_1853/*Out*/ id_2053();
id_1853/*Out*/ id_2054(id_1853/*Out*/ v370, id_1853/*Out*/ v371);
id_1853/*Out*/ id_2055(id_1853/*Out*/ v372);
id_1853/*Out*/ id_2056(str v373);
id_1853/*Out*/ id_2057(str v374);
id_1853/*Out*/ id_2058(id_1853/*Out*/ v375, str v376);
id_1853/*Out*/ id_2059(str* v377);
id_1853/*Out*/ id_2060(id_1853/*Out*/ v378, str* v379);
id_1853/*Out*/ id_2061(char v380);
id_1853/*Out*/ id_2062(char v381);
id_1853/*Out*/ id_2063(id_1853/*Out*/ v382, char v383);
id_1853/*Out*/ id_2064(char* v384);
id_1853/*Out*/ id_2065(id_1853/*Out*/ v385, char* v386);
id_1853/*Out*/ id_2066(i8 v387);
id_1853/*Out*/ id_2067(i8 v388);
id_1853/*Out*/ id_2068(id_1853/*Out*/ v389, i8 v390);
id_1853/*Out*/ id_2069(i8* v391);
id_1853/*Out*/ id_2070(id_1853/*Out*/ v392, i8* v393);
id_1853/*Out*/ id_2071(i16 v394);
id_1853/*Out*/ id_2072(i16 v395);
id_1853/*Out*/ id_2073(id_1853/*Out*/ v396, i16 v397);
id_1853/*Out*/ id_2074(i16* v398);
id_1853/*Out*/ id_2075(id_1853/*Out*/ v399, i16* v400);
id_1853/*Out*/ id_2076(i32 v401);
id_1853/*Out*/ id_2077(i32 v402);
id_1853/*Out*/ id_2078(id_1853/*Out*/ v403, i32 v404);
id_1853/*Out*/ id_2079(i32* v405);
id_1853/*Out*/ id_2080(id_1853/*Out*/ v406, i32* v407);
id_1853/*Out*/ id_2081(i64 v408);
id_1853/*Out*/ id_2082(i64 v409);
id_1853/*Out*/ id_2083(id_1853/*Out*/ v410, i64 v411);
id_1853/*Out*/ id_2084(i64* v412);
id_1853/*Out*/ id_2085(id_1853/*Out*/ v413, i64* v414);
id_1853/*Out*/ id_2086(u8 v415);
id_1853/*Out*/ id_2087(u8 v416);
id_1853/*Out*/ id_2088(id_1853/*Out*/ v417, u8 v418);
id_1853/*Out*/ id_2089(u8* v419);
id_1853/*Out*/ id_2090(id_1853/*Out*/ v420, u8* v421);
id_1853/*Out*/ id_2091(u16 v422);
id_1853/*Out*/ id_2092(u16 v423);
id_1853/*Out*/ id_2093(id_1853/*Out*/ v424, u16 v425);
id_1853/*Out*/ id_2094(u16* v426);
id_1853/*Out*/ id_2095(id_1853/*Out*/ v427, u16* v428);
id_1853/*Out*/ id_2096(u32 v429);
id_1853/*Out*/ id_2097(u32 v430);
id_1853/*Out*/ id_2098(id_1853/*Out*/ v431, u32 v432);
id_1853/*Out*/ id_2099(u32* v433);
id_1853/*Out*/ id_2100(id_1853/*Out*/ v434, u32* v435);
id_1853/*Out*/ id_2101(u64 v436);
id_1853/*Out*/ id_2102(u64 v437);
id_1853/*Out*/ id_2103(id_1853/*Out*/ v438, u64 v439);
id_1853/*Out*/ id_2104(u64* v440);
id_1853/*Out*/ id_2105(id_1853/*Out*/ v441, u64* v442);
id_1853/*Out*/ id_2106(f32 v443);
id_1853/*Out*/ id_2107(f32 v444);
id_1853/*Out*/ id_2108(id_1853/*Out*/ v445, f32 v446);
id_1853/*Out*/ id_2109(f32* v447);
id_1853/*Out*/ id_2110(id_1853/*Out*/ v448, f32* v449);
id_1853/*Out*/ id_2111(f64 v450);
id_1853/*Out*/ id_2112(f64 v451);
id_1853/*Out*/ id_2113(id_1853/*Out*/ v452, f64 v453);
id_1853/*Out*/ id_2114(f64* v454);
id_1853/*Out*/ id_2115(id_1853/*Out*/ v455, f64* v456);
void id_2116();
id_1855/*RangeIter<i8>*/ id_2117(i8 v490);
void id_2118(id_1855/*RangeIter<i8>*/* v492);
i8 id_2119(id_1855/*RangeIter<i8>*/ v493);
bool id_2120(id_1855/*RangeIter<i8>*/ v494, id_1855/*RangeIter<i8>*/ v495);
id_1855/*RangeIter<i8>*/ id_2121(id_1856/*RangeIterRange<i8>*/* v496);
id_1855/*RangeIter<i8>*/ id_2122(id_1856/*RangeIterRange<i8>*/* v497);
id_1856/*RangeIterRange<i8>*/ id_2123(id_1855/*RangeIter<i8>*/ v498, id_1855/*RangeIter<i8>*/ v499);
i8 id_2124(id_1854/*Range<i8>*/* v457);
i8 id_2125(id_1854/*Range<i8>*/* v458);
id_1854/*Range<i8>*/ id_2126(i8 v459, i8 v460);
id_1854/*Range<i8>*/ id_2127(i8 v462, i8 v463);
id_1854/*Range<i8>*/ id_2128(i8 v464, i8 v465);
id_1854/*Range<i8>*/ id_2129(i8 v466);
id_1854/*Range<i8>*/ id_2130(i8 v467);
id_1854/*Range<i8>*/ id_2131(i8 v470);
id_1854/*Range<i8>*/ id_2132(id_1854/*Range<i8>*/ v473);
id_1854/*Range<i8>*/ id_2133(i8 v474, i8 v475);
id_1854/*Range<i8>*/ id_2134(i8 v478);
id_1854/*Range<i8>*/ id_2135(i8 v483);
bool id_2136(i8 v488, id_1854/*Range<i8>*/ v489);
id_1856/*RangeIterRange<i8>*/ id_2137(id_1854/*Range<i8>*/ v501);
id_1858/*RangeIter<i16>*/ id_2138(i16 v536);
void id_2139(id_1858/*RangeIter<i16>*/* v538);
i16 id_2140(id_1858/*RangeIter<i16>*/ v539);
bool id_2141(id_1858/*RangeIter<i16>*/ v540, id_1858/*RangeIter<i16>*/ v541);
id_1858/*RangeIter<i16>*/ id_2142(id_1859/*RangeIterRange<i16>*/* v542);
id_1858/*RangeIter<i16>*/ id_2143(id_1859/*RangeIterRange<i16>*/* v543);
id_1859/*RangeIterRange<i16>*/ id_2144(id_1858/*RangeIter<i16>*/ v544, id_1858/*RangeIter<i16>*/ v545);
i16 id_2145(id_1857/*Range<i16>*/* v503);
i16 id_2146(id_1857/*Range<i16>*/* v504);
id_1857/*Range<i16>*/ id_2147(i16 v505, i16 v506);
id_1857/*Range<i16>*/ id_2148(i16 v508, i16 v509);
id_1857/*Range<i16>*/ id_2149(i16 v510, i16 v511);
id_1857/*Range<i16>*/ id_2150(i16 v512);
id_1857/*Range<i16>*/ id_2151(i16 v513);
id_1857/*Range<i16>*/ id_2152(i16 v516);
id_1857/*Range<i16>*/ id_2153(id_1857/*Range<i16>*/ v519);
id_1857/*Range<i16>*/ id_2154(i16 v520, i16 v521);
id_1857/*Range<i16>*/ id_2155(i16 v524);
id_1857/*Range<i16>*/ id_2156(i16 v529);
bool id_2157(i16 v534, id_1857/*Range<i16>*/ v535);
id_1859/*RangeIterRange<i16>*/ id_2158(id_1857/*Range<i16>*/ v547);
id_1861/*RangeIter<i32>*/ id_2159(i32 v582);
void id_2160(id_1861/*RangeIter<i32>*/* v584);
i32 id_2161(id_1861/*RangeIter<i32>*/ v585);
bool id_2162(id_1861/*RangeIter<i32>*/ v586, id_1861/*RangeIter<i32>*/ v587);
id_1861/*RangeIter<i32>*/ id_2163(id_1862/*RangeIterRange<i32>*/* v588);
id_1861/*RangeIter<i32>*/ id_2164(id_1862/*RangeIterRange<i32>*/* v589);
id_1862/*RangeIterRange<i32>*/ id_2165(id_1861/*RangeIter<i32>*/ v590, id_1861/*RangeIter<i32>*/ v591);
i32 id_2166(id_1860/*Range<i32>*/* v549);
i32 id_2167(id_1860/*Range<i32>*/* v550);
id_1860/*Range<i32>*/ id_2168(i32 v551, i32 v552);
id_1860/*Range<i32>*/ id_2169(i32 v554, i32 v555);
id_1860/*Range<i32>*/ id_2170(i32 v556, i32 v557);
id_1860/*Range<i32>*/ id_2171(i32 v558);
id_1860/*Range<i32>*/ id_2172(i32 v559);
id_1860/*Range<i32>*/ id_2173(i32 v562);
id_1860/*Range<i32>*/ id_2174(id_1860/*Range<i32>*/ v565);
id_1860/*Range<i32>*/ id_2175(i32 v566, i32 v567);
id_1860/*Range<i32>*/ id_2176(i32 v570);
id_1860/*Range<i32>*/ id_2177(i32 v575);
bool id_2178(i32 v580, id_1860/*Range<i32>*/ v581);
id_1862/*RangeIterRange<i32>*/ id_2179(id_1860/*Range<i32>*/ v593);
id_1864/*RangeIter<i64>*/ id_2180(i64 v628);
void id_2181(id_1864/*RangeIter<i64>*/* v630);
i64 id_2182(id_1864/*RangeIter<i64>*/ v631);
bool id_2183(id_1864/*RangeIter<i64>*/ v632, id_1864/*RangeIter<i64>*/ v633);
id_1864/*RangeIter<i64>*/ id_2184(id_1865/*RangeIterRange<i64>*/* v634);
id_1864/*RangeIter<i64>*/ id_2185(id_1865/*RangeIterRange<i64>*/* v635);
id_1865/*RangeIterRange<i64>*/ id_2186(id_1864/*RangeIter<i64>*/ v636, id_1864/*RangeIter<i64>*/ v637);
i64 id_2187(id_1863/*Range<i64>*/* v595);
i64 id_2188(id_1863/*Range<i64>*/* v596);
id_1863/*Range<i64>*/ id_2189(i64 v597, i64 v598);
id_1863/*Range<i64>*/ id_2190(i64 v600, i64 v601);
id_1863/*Range<i64>*/ id_2191(i64 v602, i64 v603);
id_1863/*Range<i64>*/ id_2192(i64 v604);
id_1863/*Range<i64>*/ id_2193(i64 v605);
id_1863/*Range<i64>*/ id_2194(i64 v608);
id_1863/*Range<i64>*/ id_2195(id_1863/*Range<i64>*/ v611);
id_1863/*Range<i64>*/ id_2196(i64 v612, i64 v613);
id_1863/*Range<i64>*/ id_2197(i64 v616);
id_1863/*Range<i64>*/ id_2198(i64 v621);
bool id_2199(i64 v626, id_1863/*Range<i64>*/ v627);
id_1865/*RangeIterRange<i64>*/ id_2200(id_1863/*Range<i64>*/ v639);
id_1867/*RangeIter<char>*/ id_2201(char v674);
void id_2202(id_1867/*RangeIter<char>*/* v676);
char id_2203(id_1867/*RangeIter<char>*/ v677);
bool id_2204(id_1867/*RangeIter<char>*/ v678, id_1867/*RangeIter<char>*/ v679);
id_1867/*RangeIter<char>*/ id_2205(id_1868/*RangeIterRange<char>*/* v680);
id_1867/*RangeIter<char>*/ id_2206(id_1868/*RangeIterRange<char>*/* v681);
id_1868/*RangeIterRange<char>*/ id_2207(id_1867/*RangeIter<char>*/ v682, id_1867/*RangeIter<char>*/ v683);
char id_2208(id_1866/*Range<char>*/* v641);
char id_2209(id_1866/*Range<char>*/* v642);
id_1866/*Range<char>*/ id_2210(char v643, char v644);
id_1866/*Range<char>*/ id_2211(char v646, char v647);
id_1866/*Range<char>*/ id_2212(char v648, char v649);
id_1866/*Range<char>*/ id_2213(char v650);
id_1866/*Range<char>*/ id_2214(char v651);
id_1866/*Range<char>*/ id_2215(char v654);
id_1866/*Range<char>*/ id_2216(id_1866/*Range<char>*/ v657);
id_1866/*Range<char>*/ id_2217(char v658, char v659);
id_1866/*Range<char>*/ id_2218(char v662);
id_1866/*Range<char>*/ id_2219(char v667);
bool id_2220(char v672, id_1866/*Range<char>*/ v673);
id_1868/*RangeIterRange<char>*/ id_2221(id_1866/*Range<char>*/ v685);
id_1870/*VecIter<i64>*/ id_2222(i64* v738);
void id_2223(id_1870/*VecIter<i64>*/* v740);
id_1870/*VecIter<i64>*/ id_2224(id_1870/*VecIter<i64>*/ v741, i64 v742);
bool id_2225(id_1870/*VecIter<i64>*/ v743, id_1870/*VecIter<i64>*/ v744);
i64* id_2226(id_1870/*VecIter<i64>*/ v745);
id_1870/*VecIter<i64>*/ id_2227(id_1871/*VecIterRange<i64>*/* v748);
id_1870/*VecIter<i64>*/ id_2228(id_1871/*VecIterRange<i64>*/* v749);
id_1871/*VecIterRange<i64>*/ id_2229(id_1870/*VecIter<i64>*/ v750, id_1870/*VecIter<i64>*/ v751);
i64* id_2230(id_1869/*Vec<i64>*/* v692, i64 v693);
i64* id_2231(id_1869/*Vec<i64>*/* v694, i64 v695);
void id_2232(id_1869/*Vec<i64>*/* v696);
void id_2233(id_1869/*Vec<i64>*/* v705);
void id_2234(id_1869/*Vec<i64>*/* v714);
void id_2235(id_1869/*Vec<i64>*/* v725, i64 v726);
void id_2236(id_1869/*Vec<i64>*/* v727);
void id_2237(id_1869/*Vec<i64>*/* v728, i64 v729);
id_1870/*VecIter<i64>*/ id_2238(id_1869/*Vec<i64>*/* v746);
id_1870/*VecIter<i64>*/ id_2239(id_1869/*Vec<i64>*/* v747);
id_1871/*VecIterRange<i64>*/ id_2240(id_1869/*Vec<i64>*/* v753);
i64* id_2241(id_1869/*Vec<i64>*/* v755);
i64* id_2242(id_1869/*Vec<i64>*/* v756);
void id_2243(id_1869/*Vec<i64>*/* v757);
id_1869/*Vec<i64>*/ id_2244(i64 v758);
id_1869/*Vec<i64>*/ id_2245(i64 v768, i64 v769);
id_1869/*Vec<i64>*/ id_2246();
id_1869/*Vec<i64>*/ id_2247(id_1869/*Vec<i64>*/* v779);
void id_2248(id_1869/*Vec<i64>*/* v789, i64 v790);
void id_2249(id_1869/*Vec<i64>*/* v791, id_1869/*Vec<i64>*/* v792);
id_1869/*Vec<i64>*/ id_2250(i64 v801, i64 v802);
id_1869/*Vec<i64>*/* id_2251(id_1869/*Vec<i64>*/* v804, i64 v805);
void id_2252(id_1869/*Vec<i64>*/* v806);
void id_2253(id_1869/*Vec<i64>*/* v807);
id_1853/*Out*/ id_2254(id_1869/*Vec<i64>*/* v808);
id_1853/*Out*/ id_2255(id_1869/*Vec<i64>*/* v809);
id_1853/*Out*/ id_2256(id_1853/*Out*/ v810, id_1869/*Vec<i64>*/* v811);
i64* id_2257(id_1869/*Vec<i64>*/* v812, i64 v813);
id_1869/*Vec<i64>*/ id_2258(id_1869/*Vec<i64>*/* v814, i64 v815, i64 v816);
id_1869/*Vec<i64>*/ id_2259(id_1869/*Vec<i64>*/* v826, id_1863/*Range<i64>*/ v827);
id_1869/*Vec<i64>*/ id_2260(id_1869/*Vec<i64>*/* v830);
bool id_2261(id_1869/*Vec<i64>*/* v831, id_1869/*Vec<i64>*/* v832);
void id_2262(i64* v841, i64* v842);
i64* id_2263(i64* v844, i64* v845);
void id_2264(i64* v849, i64* v850);
void id_2265(id_1869/*Vec<i64>*/* v854);
void id_2266(id_1869/*Vec<i64>*/* v859);
i64 id_2267(id_1869/*Vec<i64>*/* v860);
i64 id_2268(id_1869/*Vec<i64>*/* v870);
id_1869/*Vec<i64>*/ id_2269(id_1869/*Vec<i64>*/* v880, i64(*v881)(i64*));
id_1869/*Vec<i64>*/ id_2270(id_1869/*Vec<i64>*/* v891, bool(*v892)(i64*));
id_1869/*Vec<i64>*/ id_2271(i64 v902, i64 v903);
id_1873/*VecIter<bool>*/ id_2272(bool* v959);
void id_2273(id_1873/*VecIter<bool>*/* v961);
id_1873/*VecIter<bool>*/ id_2274(id_1873/*VecIter<bool>*/ v962, i64 v963);
bool id_2275(id_1873/*VecIter<bool>*/ v964, id_1873/*VecIter<bool>*/ v965);
bool* id_2276(id_1873/*VecIter<bool>*/ v966);
id_1873/*VecIter<bool>*/ id_2277(id_1874/*VecIterRange<bool>*/* v969);
id_1873/*VecIter<bool>*/ id_2278(id_1874/*VecIterRange<bool>*/* v970);
id_1874/*VecIterRange<bool>*/ id_2279(id_1873/*VecIter<bool>*/ v971, id_1873/*VecIter<bool>*/ v972);
bool* id_2280(id_1872/*Vec<bool>*/* v913, i64 v914);
bool* id_2281(id_1872/*Vec<bool>*/* v915, i64 v916);
void id_2282(id_1872/*Vec<bool>*/* v917);
void id_2283(id_1872/*Vec<bool>*/* v926);
void id_2284(id_1872/*Vec<bool>*/* v935);
void id_2285(id_1872/*Vec<bool>*/* v946, bool v947);
void id_2286(id_1872/*Vec<bool>*/* v948);
void id_2287(id_1872/*Vec<bool>*/* v949, i64 v950);
id_1873/*VecIter<bool>*/ id_2288(id_1872/*Vec<bool>*/* v967);
id_1873/*VecIter<bool>*/ id_2289(id_1872/*Vec<bool>*/* v968);
id_1874/*VecIterRange<bool>*/ id_2290(id_1872/*Vec<bool>*/* v974);
bool* id_2291(id_1872/*Vec<bool>*/* v976);
bool* id_2292(id_1872/*Vec<bool>*/* v977);
void id_2293(id_1872/*Vec<bool>*/* v978);
id_1872/*Vec<bool>*/ id_2294(i64 v979);
id_1872/*Vec<bool>*/ id_2295(i64 v989, bool v990);
id_1872/*Vec<bool>*/ id_2296();
id_1872/*Vec<bool>*/ id_2297(id_1872/*Vec<bool>*/* v1000);
void id_2298(id_1872/*Vec<bool>*/* v1010, bool v1011);
void id_2299(id_1872/*Vec<bool>*/* v1012, id_1872/*Vec<bool>*/* v1013);
id_1872/*Vec<bool>*/ id_2300(bool v1022, bool v1023);
id_1872/*Vec<bool>*/* id_2301(id_1872/*Vec<bool>*/* v1025, bool v1026);
void id_2302(id_1872/*Vec<bool>*/* v1027);
void id_2303(id_1872/*Vec<bool>*/* v1028);
id_1853/*Out*/ id_2304(id_1872/*Vec<bool>*/* v1029);
id_1853/*Out*/ id_2305(id_1872/*Vec<bool>*/* v1030);
id_1853/*Out*/ id_2306(id_1853/*Out*/ v1031, id_1872/*Vec<bool>*/* v1032);
bool* id_2307(id_1872/*Vec<bool>*/* v1033, i64 v1034);
id_1872/*Vec<bool>*/ id_2308(id_1872/*Vec<bool>*/* v1035, i64 v1036, i64 v1037);
id_1872/*Vec<bool>*/ id_2309(id_1872/*Vec<bool>*/* v1047, id_1863/*Range<i64>*/ v1048);
id_1872/*Vec<bool>*/ id_2310(id_1872/*Vec<bool>*/* v1051);
bool id_2311(id_1872/*Vec<bool>*/* v1052, id_1872/*Vec<bool>*/* v1053);
void id_2312(bool* v1062, bool* v1063);
bool* id_2313(bool* v1065, bool* v1066);
void id_2314(bool* v1070, bool* v1071);
void id_2315(id_1872/*Vec<bool>*/* v1075);
void id_2316(id_1872/*Vec<bool>*/* v1080);
bool id_2317(id_1872/*Vec<bool>*/* v1081);
bool id_2318(id_1872/*Vec<bool>*/* v1091);
id_1872/*Vec<bool>*/ id_2319(id_1872/*Vec<bool>*/* v1101, bool(*v1102)(bool*));
id_1872/*Vec<bool>*/ id_2320(id_1872/*Vec<bool>*/* v1112, bool(*v1113)(bool*));
bool id_2321(id_1872/*Vec<bool>*/* v1123);
bool id_2322(id_1872/*Vec<bool>*/* v1132);
i64 id_2323(id_1869/*Vec<i64>*/* v1141);
char id_2324(str* v1151, i64 v1152);
str id_2325();
bool id_2326(char v1154, str v1155);
char id_2327(str v1156);
id_1876/*VecIter<char>*/ id_2328(char* v1203);
void id_2329(id_1876/*VecIter<char>*/* v1205);
id_1876/*VecIter<char>*/ id_2330(id_1876/*VecIter<char>*/ v1206, i64 v1207);
bool id_2331(id_1876/*VecIter<char>*/ v1208, id_1876/*VecIter<char>*/ v1209);
char* id_2332(id_1876/*VecIter<char>*/ v1210);
id_1876/*VecIter<char>*/ id_2333(id_1877/*VecIterRange<char>*/* v1213);
id_1876/*VecIter<char>*/ id_2334(id_1877/*VecIterRange<char>*/* v1214);
id_1877/*VecIterRange<char>*/ id_2335(id_1876/*VecIter<char>*/ v1215, id_1876/*VecIter<char>*/ v1216);
char* id_2336(id_1875/*Vec<char>*/* v1157, i64 v1158);
char* id_2337(id_1875/*Vec<char>*/* v1159, i64 v1160);
void id_2338(id_1875/*Vec<char>*/* v1161);
void id_2339(id_1875/*Vec<char>*/* v1170);
void id_2340(id_1875/*Vec<char>*/* v1179);
void id_2341(id_1875/*Vec<char>*/* v1190, char v1191);
void id_2342(id_1875/*Vec<char>*/* v1192);
void id_2343(id_1875/*Vec<char>*/* v1193, i64 v1194);
id_1876/*VecIter<char>*/ id_2344(id_1875/*Vec<char>*/* v1211);
id_1876/*VecIter<char>*/ id_2345(id_1875/*Vec<char>*/* v1212);
id_1877/*VecIterRange<char>*/ id_2346(id_1875/*Vec<char>*/* v1218);
char* id_2347(id_1875/*Vec<char>*/* v1220);
char* id_2348(id_1875/*Vec<char>*/* v1221);
void id_2349(id_1875/*Vec<char>*/* v1222);
id_1875/*Vec<char>*/ id_2350(i64 v1223);
id_1875/*Vec<char>*/ id_2351(i64 v1233, char v1234);
id_1875/*Vec<char>*/ id_2352();
id_1875/*Vec<char>*/ id_2353(id_1875/*Vec<char>*/* v1244);
void id_2354(id_1875/*Vec<char>*/* v1254, char v1255);
void id_2355(id_1875/*Vec<char>*/* v1256, id_1875/*Vec<char>*/* v1257);
id_1875/*Vec<char>*/ id_2356(char v1266, char v1267);
id_1875/*Vec<char>*/* id_2357(id_1875/*Vec<char>*/* v1269, char v1270);
void id_2358(id_1875/*Vec<char>*/* v1271);
void id_2359(id_1875/*Vec<char>*/* v1272);
id_1853/*Out*/ id_2360(id_1875/*Vec<char>*/* v1273);
id_1853/*Out*/ id_2361(id_1875/*Vec<char>*/* v1274);
id_1853/*Out*/ id_2362(id_1853/*Out*/ v1275, id_1875/*Vec<char>*/* v1276);
char* id_2363(id_1875/*Vec<char>*/* v1277, i64 v1278);
id_1875/*Vec<char>*/ id_2364(id_1875/*Vec<char>*/* v1279, i64 v1280, i64 v1281);
id_1875/*Vec<char>*/ id_2365(id_1875/*Vec<char>*/* v1291, id_1863/*Range<i64>*/ v1292);
id_1875/*Vec<char>*/ id_2366(id_1875/*Vec<char>*/* v1295);
bool id_2367(id_1875/*Vec<char>*/* v1296, id_1875/*Vec<char>*/* v1297);
void id_2368(char* v1306, char* v1307);
char* id_2369(char* v1309, char* v1310);
void id_2370(char* v1314, char* v1315);
void id_2371(id_1875/*Vec<char>*/* v1319);
void id_2372(id_1875/*Vec<char>*/* v1324);
char id_2373(id_1875/*Vec<char>*/* v1325);
char id_2374(id_1875/*Vec<char>*/* v1335);
id_1875/*Vec<char>*/ id_2375(id_1875/*Vec<char>*/* v1345, char(*v1346)(char*));
id_1875/*Vec<char>*/ id_2376(id_1875/*Vec<char>*/* v1356, bool(*v1357)(char*));
id_1878/*Str*/ id_2377();
str id_2378(id_1878/*Str*/* v1368);
id_1877/*VecIterRange<char>*/ id_2379(id_1878/*Str*/* v1370);
char* id_2380(id_1878/*Str*/* v1371, i64 v1372);
char* id_2381(id_1878/*Str*/* v1373, i64 v1374);
char* id_2382(id_1878/*Str*/* v1375, i64 v1376);
id_1878/*Str*/ id_2383(id_1878/*Str*/* v1377, i64 v1378, i64 v1379);
void id_2384(id_1878/*Str*/* v1381, char v1382);
void id_2385(id_1878/*Str*/* v1383);
id_1878/*Str*/ id_2386(str v1384);
id_1878/*Str*/ id_2387(id_1878/*Str*/* v1386);
i64 id_2388(str v1388);
void id_2389(id_1878/*Str*/* v1390);
void id_2390(id_1878/*Str*/* v1391);
void id_2391(id_1878/*Str*/* v1392, char v1393);
void id_2392(id_1878/*Str*/* v1394, id_1878/*Str*/* v1395);
void id_2393(id_1878/*Str*/* v1405, str v1406);
id_1878/*Str*/ id_2394(id_1878/*Str*/* v1416, id_1878/*Str*/* v1417);
id_1878/*Str*/ id_2395(str v1419, str v1420);
id_1878/*Str*/ id_2396(id_1878/*Str*/* v1425, str v1426);
id_1878/*Str*/ id_2397(str v1429, id_1878/*Str*/* v1430);
id_1853/*Out*/ id_2398(id_1878/*Str*/* v1433);
id_1853/*Out*/ id_2399(id_1878/*Str*/* v1434);
id_1853/*Out*/ id_2400(id_1853/*Out*/ v1435, id_1878/*Str*/* v1436);
bool id_2401(id_1878/*Str*/* v1437, id_1878/*Str*/* v1438);
bool id_2402(char v1447, id_1878/*Str*/* v1448);
id_1878/*Str*/ id_2403(str v1457, i64 v1458);
id_1878/*Str*/ id_2404(str v1469);
id_1877/*VecIterRange<char>*/ id_2405(str v1470);
bool id_2406(id_1878/*Str*/* v1473, id_1878/*Str*/* v1474);
bool id_2407(id_1878/*Str*/* v1483, id_1878/*Str*/* v1484);
id_1878/*Str*/ id_2408(id_1878/*Str*/* v1494);
i64 id_2409(id_1878/*Str*/* v1497, id_1878/*Str*/* v1498, i64 v1499);
i64 id_2410(id_1878/*Str*/* v1510, id_1878/*Str*/* v1511);
bool id_2411(id_1878/*Str*/* v1512, id_1878/*Str*/* v1513);
id_1880/*VecIter<Str>*/ id_2412(id_1878/*Str*/* v1560);
void id_2413(id_1880/*VecIter<Str>*/* v1562);
id_1880/*VecIter<Str>*/ id_2414(id_1880/*VecIter<Str>*/ v1563, i64 v1564);
bool id_2415(id_1880/*VecIter<Str>*/ v1565, id_1880/*VecIter<Str>*/ v1566);
id_1878/*Str*/* id_2416(id_1880/*VecIter<Str>*/ v1567);
id_1880/*VecIter<Str>*/ id_2417(id_1881/*VecIterRange<Str>*/* v1570);
id_1880/*VecIter<Str>*/ id_2418(id_1881/*VecIterRange<Str>*/* v1571);
id_1881/*VecIterRange<Str>*/ id_2419(id_1880/*VecIter<Str>*/ v1572, id_1880/*VecIter<Str>*/ v1573);
id_1878/*Str*/* id_2420(id_1879/*Vec<Str>*/* v1514, i64 v1515);
id_1878/*Str*/* id_2421(id_1879/*Vec<Str>*/* v1516, i64 v1517);
void id_2422(id_1879/*Vec<Str>*/* v1518);
void id_2423(id_1879/*Vec<Str>*/* v1527);
void id_2424(id_1879/*Vec<Str>*/* v1536);
void id_2425(id_1879/*Vec<Str>*/* v1547, id_1878/*Str*/ v1548);
void id_2426(id_1879/*Vec<Str>*/* v1549);
void id_2427(id_1879/*Vec<Str>*/* v1550, i64 v1551);
id_1880/*VecIter<Str>*/ id_2428(id_1879/*Vec<Str>*/* v1568);
id_1880/*VecIter<Str>*/ id_2429(id_1879/*Vec<Str>*/* v1569);
id_1881/*VecIterRange<Str>*/ id_2430(id_1879/*Vec<Str>*/* v1575);
id_1878/*Str*/* id_2431(id_1879/*Vec<Str>*/* v1577);
id_1878/*Str*/* id_2432(id_1879/*Vec<Str>*/* v1578);
void id_2433(id_1879/*Vec<Str>*/* v1579);
id_1879/*Vec<Str>*/ id_2434(i64 v1580);
id_1879/*Vec<Str>*/ id_2435(i64 v1590, id_1878/*Str*/ v1591);
id_1879/*Vec<Str>*/ id_2436();
id_1879/*Vec<Str>*/ id_2437(id_1879/*Vec<Str>*/* v1601);
void id_2438(id_1879/*Vec<Str>*/* v1611, id_1878/*Str*/ v1612);
void id_2439(id_1879/*Vec<Str>*/* v1613, id_1879/*Vec<Str>*/* v1614);
id_1879/*Vec<Str>*/ id_2440(id_1878/*Str*/ v1623, id_1878/*Str*/ v1624);
id_1879/*Vec<Str>*/* id_2441(id_1879/*Vec<Str>*/* v1626, id_1878/*Str*/ v1627);
void id_2442(id_1879/*Vec<Str>*/* v1628);
void id_2443(id_1879/*Vec<Str>*/* v1629);
id_1853/*Out*/ id_2444(id_1879/*Vec<Str>*/* v1630);
id_1853/*Out*/ id_2445(id_1879/*Vec<Str>*/* v1631);
id_1853/*Out*/ id_2446(id_1853/*Out*/ v1632, id_1879/*Vec<Str>*/* v1633);
id_1878/*Str*/* id_2447(id_1879/*Vec<Str>*/* v1634, i64 v1635);
id_1879/*Vec<Str>*/ id_2448(id_1879/*Vec<Str>*/* v1636, i64 v1637, i64 v1638);
id_1879/*Vec<Str>*/ id_2449(id_1879/*Vec<Str>*/* v1648, id_1863/*Range<i64>*/ v1649);
id_1879/*Vec<Str>*/ id_2450(id_1879/*Vec<Str>*/* v1652);
bool id_2451(id_1879/*Vec<Str>*/* v1653, id_1879/*Vec<Str>*/* v1654);
void id_2452(id_1878/*Str*/* v1663, id_1878/*Str*/* v1664);
id_1878/*Str*/* id_2453(id_1878/*Str*/* v1666, id_1878/*Str*/* v1667);
void id_2454(id_1878/*Str*/* v1671, id_1878/*Str*/* v1672);
void id_2455(id_1879/*Vec<Str>*/* v1676);
void id_2456(id_1879/*Vec<Str>*/* v1681);
id_1878/*Str*/ id_2457(id_1879/*Vec<Str>*/* v1682);
id_1878/*Str*/ id_2458(id_1879/*Vec<Str>*/* v1692);
id_1879/*Vec<Str>*/ id_2459(id_1879/*Vec<Str>*/* v1702, id_1878/*Str*/(*v1703)(id_1878/*Str*/*));
id_1879/*Vec<Str>*/ id_2460(id_1879/*Vec<Str>*/* v1713, bool(*v1714)(id_1878/*Str*/*));
id_1879/*Vec<Str>*/ id_2461(id_1878/*Str*/* v1724, id_1878/*Str*/* v1725);
id_1879/*Vec<Str>*/ id_2462(id_1878/*Str*/* v1729, str v1730);
i64 id_2463(id_1878/*Str*/* v1733);
str id_2464();
f64 id_2465(f64 v1746);
id_1882/*V2*/ id_2466(f64 v1756, f64 v1757);
id_1882/*V2*/ id_2467(id_1882/*V2*/ v1759, id_1882/*V2*/ v1760);
id_1882/*V2*/ id_2468(id_1882/*V2*/ v1761, id_1882/*V2*/ v1762);
f64 id_2469(id_1882/*V2*/ v1764);
void id_2470(id_1882/*V2*/ v1765);
void id_2471(id_1882/*V2*/ v1766);
id_1853/*Out*/ id_2472(id_1882/*V2*/ v1767);
id_1853/*Out*/ id_2473(id_1882/*V2*/ v1768);
id_1853/*Out*/ id_2474(id_1853/*Out*/ v1769, id_1882/*V2*/ v1770);
id_1883/*Rng*/ id_2475(i64 v1771);
id_1883/*Rng*/ id_2476();
i64 id_2477(id_1883/*Rng*/* v1773);
id_1884/*Err*/ id_2478(id_1878/*Str*/ v1774);
str id_2479(id_1884/*Err*/* v1776);
id_1885/*File*/ id_2480(FILE* v1777);
id_1878/*Str*/ id_2481(id_1885/*File*/* v1779);
id_1886/*Result<File Err>*/ id_2482(id_1885/*File*/ v1790);
id_1886/*Result<File Err>*/ id_2483(id_1884/*Err*/ v1792);
id_1885/*File*/ id_2484(id_1886/*Result<File Err>*/* v1794);
id_1886/*Result<File Err>*/ id_2485(id_1878/*Str*/ v1795, id_1878/*Str*/ v1796);
id_1886/*Result<File Err>*/ id_2486(id_1878/*Str*/ v1798, str v1799);
id_1886/*Result<File Err>*/ id_2487(id_1878/*Str*/ v1800);
id_1886/*Result<File Err>*/ id_2488(str v1801);
id_1886/*Result<File Err>*/ id_2489(str v1802, str v1803);
int main(int argc, char *argv[]) ;
id_1869/*Vec<i64>*/ id_2490(id_1879/*Vec<Str>*/* v1804, i64(*v1805)(id_1878/*Str*/*));
i64 id_2491(id_1878/*Str*/* v1822);

i8 id_1904/*lop i8 i8*/() {{
  return ((i8)0);
} panic("reached function end without returning anything lop i8 i8\n");}

i16 id_1905/*lop i16 i16*/() {{
  return ((i16)0);
} panic("reached function end without returning anything lop i16 i16\n");}

i32 id_1906/*lop i32 i32*/() {{
  return ((i32)0);
} panic("reached function end without returning anything lop i32 i32\n");}

i64 id_1907/*lop i64 i64*/() {{
  return ((i64)0);
} panic("reached function end without returning anything lop i64 i64\n");}

u8 id_1908/*lop u8 u8*/() {{
  return ((u8)0);
} panic("reached function end without returning anything lop u8 u8\n");}

u16 id_1909/*lop u16 u16*/() {{
  return ((u16)0);
} panic("reached function end without returning anything lop u16 u16\n");}

u32 id_1910/*lop u32 u32*/() {{
  return ((u32)0);
} panic("reached function end without returning anything lop u32 u32\n");}

u64 id_1911/*lop u64 u64*/() {{
  return ((u64)0);
} panic("reached function end without returning anything lop u64 u64\n");}

bool id_1912/*lop bool bool*/() {{
  return ((bool)0);
} panic("reached function end without returning anything lop bool bool\n");}

char id_1913/*lop char char*/() {{
  return ((char)((i8)0));
} panic("reached function end without returning anything lop char char\n");}

i64 id_1914/*lop i64 max i64 a i64 b*/(i64 v101, i64 v102) {{
  if ((((v101))>((v102)))) {
    return (v101);
  } else {
    return (v102);
  }
} panic("reached function end without returning anything lop i64 max i64 a i64 b\n");}

i64 id_1915/*lop i64 min i64 a i64 b*/(i64 v103, i64 v104) {{
  if ((((v103))<((v104)))) {
    return (v103);
  } else {
    return (v104);
  }
} panic("reached function end without returning anything lop i64 min i64 a i64 b\n");}

void id_1916/*lop void intOpMaker*/(){
  id_1851/*IntOpMaker<u64>*/ v320; /*d1*/
  id_1850/*IntOpMaker<u32>*/ v293; /*c1*/
  id_1849/*IntOpMaker<u16>*/ v266; /*b1*/
  id_1848/*IntOpMaker<u8>*/ v239; /*a1*/
  id_1852/*IntOpMaker<char>*/ v347; /*aboba*/
  id_1846/*IntOpMaker<i32>*/ v185; /*c*/
  id_1845/*IntOpMaker<i16>*/ v158; /*b*/
  id_1847/*IntOpMaker<i64>*/ v212; /*d*/
  id_1844/*IntOpMaker<i8>*/ v131; /*a*/
}

void id_1917/*op void += i8R a i8 b*/(i8* v105, i8 v106){
  ((*v105)=(((*v105))+((v106))));
}

void id_1918/*op void -= i8R a i8 b*/(i8* v107, i8 v108){
  ((*v107)=(((*v107))-((v108))));
}

void id_1919/*op void /= i8R a i8 b*/(i8* v109, i8 v110){
  ((*v109)=(((*v109))/((v110))));
}

void id_1920/*op void %= i8R a i8 b*/(i8* v111, i8 v112){
  ((*v111)=(((*v111))%((v112))));
}

void id_1921/*op void *= i8R a i8 b*/(i8* v113, i8 v114){
  ((*v113)=(((*v113))*((v114))));
}

void id_1922/*op void ^= i8R a i8 b*/(i8* v115, i8 v116){
  ((*v115)=(((*v115))^((v116))));
}

void id_1923/*op void &= i8R a i8 b*/(i8* v117, i8 v118){
  ((*v117)=(((*v117))&((v118))));
}

void id_1924/*op void |= i8R a i8 b*/(i8* v119, i8 v120){
  ((*v119)=(((*v119))|((v120))));
}

bool id_1925/*op bool %% i8 a i8 b*/(i8 v121, i8 v122) {{
  return (!((((v121))%((v122)))));
} panic("reached function end without returning anything op bool %% i8 a i8 b\n");}

bool id_1926/*op bool !% i8 a i8 b*/(i8 v123, i8 v124) {{
  return (!(id_1925/*op bool %% i8 a i8 b*/((v123), (v124))));
} panic("reached function end without returning anything op bool !% i8 a i8 b\n");}

i8* id_1927/*lop i8R ++ i8R x*/(i8* v125) {{
  id_1917/*op void += i8R a i8 b*/(&(*v125), ((id_1904/*lop i8 i8*/())-((~(id_1904/*lop i8 i8*/())))));
  return &(*v125);
} panic("reached function end without returning anything lop i8R ++ i8R x\n");}

i8* id_1928/*lop i8R -- i8R x*/(i8* v126) {{
  id_1918/*op void -= i8R a i8 b*/(&(*v126), ((id_1904/*lop i8 i8*/())-((~(id_1904/*lop i8 i8*/())))));
  return &(*v126);
} panic("reached function end without returning anything lop i8R -- i8R x\n");}

i8 id_1929/*rop i8 ++ i8R x*/(i8* v127) {{
  i8 v128; /*t*/
  ((v128)=(*v127));
  id_1917/*op void += i8R a i8 b*/(&(*v127), ((id_1904/*lop i8 i8*/())-((~(id_1904/*lop i8 i8*/())))));
  return (v128);
} panic("reached function end without returning anything rop i8 ++ i8R x\n");}

i8 id_1930/*rop i8 -- i8R x*/(i8* v129) {{
  i8 v130; /*t*/
  ((v130)=(*v129));
  id_1918/*op void -= i8R a i8 b*/(&(*v129), ((id_1904/*lop i8 i8*/())-((~(id_1904/*lop i8 i8*/())))));
  return (v130);
} panic("reached function end without returning anything rop i8 -- i8R x\n");}

void id_1931/*op void += i16R a i16 b*/(i16* v132, i16 v133){
  ((*v132)=(((*v132))+((v133))));
}

void id_1932/*op void -= i16R a i16 b*/(i16* v134, i16 v135){
  ((*v134)=(((*v134))-((v135))));
}

void id_1933/*op void /= i16R a i16 b*/(i16* v136, i16 v137){
  ((*v136)=(((*v136))/((v137))));
}

void id_1934/*op void %= i16R a i16 b*/(i16* v138, i16 v139){
  ((*v138)=(((*v138))%((v139))));
}

void id_1935/*op void *= i16R a i16 b*/(i16* v140, i16 v141){
  ((*v140)=(((*v140))*((v141))));
}

void id_1936/*op void ^= i16R a i16 b*/(i16* v142, i16 v143){
  ((*v142)=(((*v142))^((v143))));
}

void id_1937/*op void &= i16R a i16 b*/(i16* v144, i16 v145){
  ((*v144)=(((*v144))&((v145))));
}

void id_1938/*op void |= i16R a i16 b*/(i16* v146, i16 v147){
  ((*v146)=(((*v146))|((v147))));
}

bool id_1939/*op bool %% i16 a i16 b*/(i16 v148, i16 v149) {{
  return (!((((v148))%((v149)))));
} panic("reached function end without returning anything op bool %% i16 a i16 b\n");}

bool id_1940/*op bool !% i16 a i16 b*/(i16 v150, i16 v151) {{
  return (!(id_1939/*op bool %% i16 a i16 b*/((v150), (v151))));
} panic("reached function end without returning anything op bool !% i16 a i16 b\n");}

i16* id_1941/*lop i16R ++ i16R x*/(i16* v152) {{
  id_1931/*op void += i16R a i16 b*/(&(*v152), ((id_1905/*lop i16 i16*/())-((~(id_1905/*lop i16 i16*/())))));
  return &(*v152);
} panic("reached function end without returning anything lop i16R ++ i16R x\n");}

i16* id_1942/*lop i16R -- i16R x*/(i16* v153) {{
  id_1932/*op void -= i16R a i16 b*/(&(*v153), ((id_1905/*lop i16 i16*/())-((~(id_1905/*lop i16 i16*/())))));
  return &(*v153);
} panic("reached function end without returning anything lop i16R -- i16R x\n");}

i16 id_1943/*rop i16 ++ i16R x*/(i16* v154) {{
  i16 v155; /*t*/
  ((v155)=(*v154));
  id_1931/*op void += i16R a i16 b*/(&(*v154), ((id_1905/*lop i16 i16*/())-((~(id_1905/*lop i16 i16*/())))));
  return (v155);
} panic("reached function end without returning anything rop i16 ++ i16R x\n");}

i16 id_1944/*rop i16 -- i16R x*/(i16* v156) {{
  i16 v157; /*t*/
  ((v157)=(*v156));
  id_1932/*op void -= i16R a i16 b*/(&(*v156), ((id_1905/*lop i16 i16*/())-((~(id_1905/*lop i16 i16*/())))));
  return (v157);
} panic("reached function end without returning anything rop i16 -- i16R x\n");}

void id_1945/*op void += i32R a i32 b*/(i32* v159, i32 v160){
  ((*v159)=(((*v159))+((v160))));
}

void id_1946/*op void -= i32R a i32 b*/(i32* v161, i32 v162){
  ((*v161)=(((*v161))-((v162))));
}

void id_1947/*op void /= i32R a i32 b*/(i32* v163, i32 v164){
  ((*v163)=(((*v163))/((v164))));
}

void id_1948/*op void %= i32R a i32 b*/(i32* v165, i32 v166){
  ((*v165)=(((*v165))%((v166))));
}

void id_1949/*op void *= i32R a i32 b*/(i32* v167, i32 v168){
  ((*v167)=(((*v167))*((v168))));
}

void id_1950/*op void ^= i32R a i32 b*/(i32* v169, i32 v170){
  ((*v169)=(((*v169))^((v170))));
}

void id_1951/*op void &= i32R a i32 b*/(i32* v171, i32 v172){
  ((*v171)=(((*v171))&((v172))));
}

void id_1952/*op void |= i32R a i32 b*/(i32* v173, i32 v174){
  ((*v173)=(((*v173))|((v174))));
}

bool id_1953/*op bool %% i32 a i32 b*/(i32 v175, i32 v176) {{
  return (!((((v175))%((v176)))));
} panic("reached function end without returning anything op bool %% i32 a i32 b\n");}

bool id_1954/*op bool !% i32 a i32 b*/(i32 v177, i32 v178) {{
  return (!(id_1953/*op bool %% i32 a i32 b*/((v177), (v178))));
} panic("reached function end without returning anything op bool !% i32 a i32 b\n");}

i32* id_1955/*lop i32R ++ i32R x*/(i32* v179) {{
  id_1945/*op void += i32R a i32 b*/(&(*v179), ((id_1906/*lop i32 i32*/())-((~(id_1906/*lop i32 i32*/())))));
  return &(*v179);
} panic("reached function end without returning anything lop i32R ++ i32R x\n");}

i32* id_1956/*lop i32R -- i32R x*/(i32* v180) {{
  id_1946/*op void -= i32R a i32 b*/(&(*v180), ((id_1906/*lop i32 i32*/())-((~(id_1906/*lop i32 i32*/())))));
  return &(*v180);
} panic("reached function end without returning anything lop i32R -- i32R x\n");}

i32 id_1957/*rop i32 ++ i32R x*/(i32* v181) {{
  i32 v182; /*t*/
  ((v182)=(*v181));
  id_1945/*op void += i32R a i32 b*/(&(*v181), ((id_1906/*lop i32 i32*/())-((~(id_1906/*lop i32 i32*/())))));
  return (v182);
} panic("reached function end without returning anything rop i32 ++ i32R x\n");}

i32 id_1958/*rop i32 -- i32R x*/(i32* v183) {{
  i32 v184; /*t*/
  ((v184)=(*v183));
  id_1946/*op void -= i32R a i32 b*/(&(*v183), ((id_1906/*lop i32 i32*/())-((~(id_1906/*lop i32 i32*/())))));
  return (v184);
} panic("reached function end without returning anything rop i32 -- i32R x\n");}

void id_1959/*op void += i64R a i64 b*/(i64* v186, i64 v187){
  ((*v186)=(((*v186))+((v187))));
}

void id_1960/*op void -= i64R a i64 b*/(i64* v188, i64 v189){
  ((*v188)=(((*v188))-((v189))));
}

void id_1961/*op void /= i64R a i64 b*/(i64* v190, i64 v191){
  ((*v190)=(((*v190))/((v191))));
}

void id_1962/*op void %= i64R a i64 b*/(i64* v192, i64 v193){
  ((*v192)=(((*v192))%((v193))));
}

void id_1963/*op void *= i64R a i64 b*/(i64* v194, i64 v195){
  ((*v194)=(((*v194))*((v195))));
}

void id_1964/*op void ^= i64R a i64 b*/(i64* v196, i64 v197){
  ((*v196)=(((*v196))^((v197))));
}

void id_1965/*op void &= i64R a i64 b*/(i64* v198, i64 v199){
  ((*v198)=(((*v198))&((v199))));
}

void id_1966/*op void |= i64R a i64 b*/(i64* v200, i64 v201){
  ((*v200)=(((*v200))|((v201))));
}

bool id_1967/*op bool %% i64 a i64 b*/(i64 v202, i64 v203) {{
  return (!((((v202))%((v203)))));
} panic("reached function end without returning anything op bool %% i64 a i64 b\n");}

bool id_1968/*op bool !% i64 a i64 b*/(i64 v204, i64 v205) {{
  return (!(id_1967/*op bool %% i64 a i64 b*/((v204), (v205))));
} panic("reached function end without returning anything op bool !% i64 a i64 b\n");}

i64* id_1969/*lop i64R ++ i64R x*/(i64* v206) {{
  id_1959/*op void += i64R a i64 b*/(&(*v206), ((id_1907/*lop i64 i64*/())-((~(id_1907/*lop i64 i64*/())))));
  return &(*v206);
} panic("reached function end without returning anything lop i64R ++ i64R x\n");}

i64* id_1970/*lop i64R -- i64R x*/(i64* v207) {{
  id_1960/*op void -= i64R a i64 b*/(&(*v207), ((id_1907/*lop i64 i64*/())-((~(id_1907/*lop i64 i64*/())))));
  return &(*v207);
} panic("reached function end without returning anything lop i64R -- i64R x\n");}

i64 id_1971/*rop i64 ++ i64R x*/(i64* v208) {{
  i64 v209; /*t*/
  ((v209)=(*v208));
  id_1959/*op void += i64R a i64 b*/(&(*v208), ((id_1907/*lop i64 i64*/())-((~(id_1907/*lop i64 i64*/())))));
  return (v209);
} panic("reached function end without returning anything rop i64 ++ i64R x\n");}

i64 id_1972/*rop i64 -- i64R x*/(i64* v210) {{
  i64 v211; /*t*/
  ((v211)=(*v210));
  id_1960/*op void -= i64R a i64 b*/(&(*v210), ((id_1907/*lop i64 i64*/())-((~(id_1907/*lop i64 i64*/())))));
  return (v211);
} panic("reached function end without returning anything rop i64 -- i64R x\n");}

void id_1973/*op void += u8R a u8 b*/(u8* v213, u8 v214){
  ((*v213)=(((*v213))+((v214))));
}

void id_1974/*op void -= u8R a u8 b*/(u8* v215, u8 v216){
  ((*v215)=(((*v215))-((v216))));
}

void id_1975/*op void /= u8R a u8 b*/(u8* v217, u8 v218){
  ((*v217)=(((*v217))/((v218))));
}

void id_1976/*op void %= u8R a u8 b*/(u8* v219, u8 v220){
  ((*v219)=(((*v219))%((v220))));
}

void id_1977/*op void *= u8R a u8 b*/(u8* v221, u8 v222){
  ((*v221)=(((*v221))*((v222))));
}

void id_1978/*op void ^= u8R a u8 b*/(u8* v223, u8 v224){
  ((*v223)=(((*v223))^((v224))));
}

void id_1979/*op void &= u8R a u8 b*/(u8* v225, u8 v226){
  ((*v225)=(((*v225))&((v226))));
}

void id_1980/*op void |= u8R a u8 b*/(u8* v227, u8 v228){
  ((*v227)=(((*v227))|((v228))));
}

bool id_1981/*op bool %% u8 a u8 b*/(u8 v229, u8 v230) {{
  return (!((((v229))%((v230)))));
} panic("reached function end without returning anything op bool %% u8 a u8 b\n");}

bool id_1982/*op bool !% u8 a u8 b*/(u8 v231, u8 v232) {{
  return (!(id_1981/*op bool %% u8 a u8 b*/((v231), (v232))));
} panic("reached function end without returning anything op bool !% u8 a u8 b\n");}

u8* id_1983/*lop u8R ++ u8R x*/(u8* v233) {{
  id_1973/*op void += u8R a u8 b*/(&(*v233), ((id_1908/*lop u8 u8*/())-((~(id_1908/*lop u8 u8*/())))));
  return &(*v233);
} panic("reached function end without returning anything lop u8R ++ u8R x\n");}

u8* id_1984/*lop u8R -- u8R x*/(u8* v234) {{
  id_1974/*op void -= u8R a u8 b*/(&(*v234), ((id_1908/*lop u8 u8*/())-((~(id_1908/*lop u8 u8*/())))));
  return &(*v234);
} panic("reached function end without returning anything lop u8R -- u8R x\n");}

u8 id_1985/*rop u8 ++ u8R x*/(u8* v235) {{
  u8 v236; /*t*/
  ((v236)=(*v235));
  id_1973/*op void += u8R a u8 b*/(&(*v235), ((id_1908/*lop u8 u8*/())-((~(id_1908/*lop u8 u8*/())))));
  return (v236);
} panic("reached function end without returning anything rop u8 ++ u8R x\n");}

u8 id_1986/*rop u8 -- u8R x*/(u8* v237) {{
  u8 v238; /*t*/
  ((v238)=(*v237));
  id_1974/*op void -= u8R a u8 b*/(&(*v237), ((id_1908/*lop u8 u8*/())-((~(id_1908/*lop u8 u8*/())))));
  return (v238);
} panic("reached function end without returning anything rop u8 -- u8R x\n");}

void id_1987/*op void += u16R a u16 b*/(u16* v240, u16 v241){
  ((*v240)=(((*v240))+((v241))));
}

void id_1988/*op void -= u16R a u16 b*/(u16* v242, u16 v243){
  ((*v242)=(((*v242))-((v243))));
}

void id_1989/*op void /= u16R a u16 b*/(u16* v244, u16 v245){
  ((*v244)=(((*v244))/((v245))));
}

void id_1990/*op void %= u16R a u16 b*/(u16* v246, u16 v247){
  ((*v246)=(((*v246))%((v247))));
}

void id_1991/*op void *= u16R a u16 b*/(u16* v248, u16 v249){
  ((*v248)=(((*v248))*((v249))));
}

void id_1992/*op void ^= u16R a u16 b*/(u16* v250, u16 v251){
  ((*v250)=(((*v250))^((v251))));
}

void id_1993/*op void &= u16R a u16 b*/(u16* v252, u16 v253){
  ((*v252)=(((*v252))&((v253))));
}

void id_1994/*op void |= u16R a u16 b*/(u16* v254, u16 v255){
  ((*v254)=(((*v254))|((v255))));
}

bool id_1995/*op bool %% u16 a u16 b*/(u16 v256, u16 v257) {{
  return (!((((v256))%((v257)))));
} panic("reached function end without returning anything op bool %% u16 a u16 b\n");}

bool id_1996/*op bool !% u16 a u16 b*/(u16 v258, u16 v259) {{
  return (!(id_1995/*op bool %% u16 a u16 b*/((v258), (v259))));
} panic("reached function end without returning anything op bool !% u16 a u16 b\n");}

u16* id_1997/*lop u16R ++ u16R x*/(u16* v260) {{
  id_1987/*op void += u16R a u16 b*/(&(*v260), ((id_1909/*lop u16 u16*/())-((~(id_1909/*lop u16 u16*/())))));
  return &(*v260);
} panic("reached function end without returning anything lop u16R ++ u16R x\n");}

u16* id_1998/*lop u16R -- u16R x*/(u16* v261) {{
  id_1988/*op void -= u16R a u16 b*/(&(*v261), ((id_1909/*lop u16 u16*/())-((~(id_1909/*lop u16 u16*/())))));
  return &(*v261);
} panic("reached function end without returning anything lop u16R -- u16R x\n");}

u16 id_1999/*rop u16 ++ u16R x*/(u16* v262) {{
  u16 v263; /*t*/
  ((v263)=(*v262));
  id_1987/*op void += u16R a u16 b*/(&(*v262), ((id_1909/*lop u16 u16*/())-((~(id_1909/*lop u16 u16*/())))));
  return (v263);
} panic("reached function end without returning anything rop u16 ++ u16R x\n");}

u16 id_2000/*rop u16 -- u16R x*/(u16* v264) {{
  u16 v265; /*t*/
  ((v265)=(*v264));
  id_1988/*op void -= u16R a u16 b*/(&(*v264), ((id_1909/*lop u16 u16*/())-((~(id_1909/*lop u16 u16*/())))));
  return (v265);
} panic("reached function end without returning anything rop u16 -- u16R x\n");}

void id_2001/*op void += u32R a u32 b*/(u32* v267, u32 v268){
  ((*v267)=(((*v267))+((v268))));
}

void id_2002/*op void -= u32R a u32 b*/(u32* v269, u32 v270){
  ((*v269)=(((*v269))-((v270))));
}

void id_2003/*op void /= u32R a u32 b*/(u32* v271, u32 v272){
  ((*v271)=(((*v271))/((v272))));
}

void id_2004/*op void %= u32R a u32 b*/(u32* v273, u32 v274){
  ((*v273)=(((*v273))%((v274))));
}

void id_2005/*op void *= u32R a u32 b*/(u32* v275, u32 v276){
  ((*v275)=(((*v275))*((v276))));
}

void id_2006/*op void ^= u32R a u32 b*/(u32* v277, u32 v278){
  ((*v277)=(((*v277))^((v278))));
}

void id_2007/*op void &= u32R a u32 b*/(u32* v279, u32 v280){
  ((*v279)=(((*v279))&((v280))));
}

void id_2008/*op void |= u32R a u32 b*/(u32* v281, u32 v282){
  ((*v281)=(((*v281))|((v282))));
}

bool id_2009/*op bool %% u32 a u32 b*/(u32 v283, u32 v284) {{
  return (!((((v283))%((v284)))));
} panic("reached function end without returning anything op bool %% u32 a u32 b\n");}

bool id_2010/*op bool !% u32 a u32 b*/(u32 v285, u32 v286) {{
  return (!(id_2009/*op bool %% u32 a u32 b*/((v285), (v286))));
} panic("reached function end without returning anything op bool !% u32 a u32 b\n");}

u32* id_2011/*lop u32R ++ u32R x*/(u32* v287) {{
  id_2001/*op void += u32R a u32 b*/(&(*v287), ((id_1910/*lop u32 u32*/())-((~(id_1910/*lop u32 u32*/())))));
  return &(*v287);
} panic("reached function end without returning anything lop u32R ++ u32R x\n");}

u32* id_2012/*lop u32R -- u32R x*/(u32* v288) {{
  id_2002/*op void -= u32R a u32 b*/(&(*v288), ((id_1910/*lop u32 u32*/())-((~(id_1910/*lop u32 u32*/())))));
  return &(*v288);
} panic("reached function end without returning anything lop u32R -- u32R x\n");}

u32 id_2013/*rop u32 ++ u32R x*/(u32* v289) {{
  u32 v290; /*t*/
  ((v290)=(*v289));
  id_2001/*op void += u32R a u32 b*/(&(*v289), ((id_1910/*lop u32 u32*/())-((~(id_1910/*lop u32 u32*/())))));
  return (v290);
} panic("reached function end without returning anything rop u32 ++ u32R x\n");}

u32 id_2014/*rop u32 -- u32R x*/(u32* v291) {{
  u32 v292; /*t*/
  ((v292)=(*v291));
  id_2002/*op void -= u32R a u32 b*/(&(*v291), ((id_1910/*lop u32 u32*/())-((~(id_1910/*lop u32 u32*/())))));
  return (v292);
} panic("reached function end without returning anything rop u32 -- u32R x\n");}

void id_2015/*op void += u64R a u64 b*/(u64* v294, u64 v295){
  ((*v294)=(((*v294))+((v295))));
}

void id_2016/*op void -= u64R a u64 b*/(u64* v296, u64 v297){
  ((*v296)=(((*v296))-((v297))));
}

void id_2017/*op void /= u64R a u64 b*/(u64* v298, u64 v299){
  ((*v298)=(((*v298))/((v299))));
}

void id_2018/*op void %= u64R a u64 b*/(u64* v300, u64 v301){
  ((*v300)=(((*v300))%((v301))));
}

void id_2019/*op void *= u64R a u64 b*/(u64* v302, u64 v303){
  ((*v302)=(((*v302))*((v303))));
}

void id_2020/*op void ^= u64R a u64 b*/(u64* v304, u64 v305){
  ((*v304)=(((*v304))^((v305))));
}

void id_2021/*op void &= u64R a u64 b*/(u64* v306, u64 v307){
  ((*v306)=(((*v306))&((v307))));
}

void id_2022/*op void |= u64R a u64 b*/(u64* v308, u64 v309){
  ((*v308)=(((*v308))|((v309))));
}

bool id_2023/*op bool %% u64 a u64 b*/(u64 v310, u64 v311) {{
  return (!((((v310))%((v311)))));
} panic("reached function end without returning anything op bool %% u64 a u64 b\n");}

bool id_2024/*op bool !% u64 a u64 b*/(u64 v312, u64 v313) {{
  return (!(id_2023/*op bool %% u64 a u64 b*/((v312), (v313))));
} panic("reached function end without returning anything op bool !% u64 a u64 b\n");}

u64* id_2025/*lop u64R ++ u64R x*/(u64* v314) {{
  id_2015/*op void += u64R a u64 b*/(&(*v314), ((id_1911/*lop u64 u64*/())-((~(id_1911/*lop u64 u64*/())))));
  return &(*v314);
} panic("reached function end without returning anything lop u64R ++ u64R x\n");}

u64* id_2026/*lop u64R -- u64R x*/(u64* v315) {{
  id_2016/*op void -= u64R a u64 b*/(&(*v315), ((id_1911/*lop u64 u64*/())-((~(id_1911/*lop u64 u64*/())))));
  return &(*v315);
} panic("reached function end without returning anything lop u64R -- u64R x\n");}

u64 id_2027/*rop u64 ++ u64R x*/(u64* v316) {{
  u64 v317; /*t*/
  ((v317)=(*v316));
  id_2015/*op void += u64R a u64 b*/(&(*v316), ((id_1911/*lop u64 u64*/())-((~(id_1911/*lop u64 u64*/())))));
  return (v317);
} panic("reached function end without returning anything rop u64 ++ u64R x\n");}

u64 id_2028/*rop u64 -- u64R x*/(u64* v318) {{
  u64 v319; /*t*/
  ((v319)=(*v318));
  id_2016/*op void -= u64R a u64 b*/(&(*v318), ((id_1911/*lop u64 u64*/())-((~(id_1911/*lop u64 u64*/())))));
  return (v319);
} panic("reached function end without returning anything rop u64 -- u64R x\n");}

void id_2029/*op void += charR a char b*/(char* v321, char v322){
  ((*v321)=(((*v321))+((v322))));
}

void id_2030/*op void -= charR a char b*/(char* v323, char v324){
  ((*v323)=(((*v323))-((v324))));
}

void id_2031/*op void /= charR a char b*/(char* v325, char v326){
  ((*v325)=(((*v325))/((v326))));
}

void id_2032/*op void %= charR a char b*/(char* v327, char v328){
  ((*v327)=(((*v327))%((v328))));
}

void id_2033/*op void *= charR a char b*/(char* v329, char v330){
  ((*v329)=(((*v329))*((v330))));
}

void id_2034/*op void ^= charR a char b*/(char* v331, char v332){
  ((*v331)=(((*v331))^((v332))));
}

void id_2035/*op void &= charR a char b*/(char* v333, char v334){
  ((*v333)=(((*v333))&((v334))));
}

void id_2036/*op void |= charR a char b*/(char* v335, char v336){
  ((*v335)=(((*v335))|((v336))));
}

bool id_2037/*op bool %% char a char b*/(char v337, char v338) {{
  return (!((((v337))%((v338)))));
} panic("reached function end without returning anything op bool %% char a char b\n");}

bool id_2038/*op bool !% char a char b*/(char v339, char v340) {{
  return (!(id_2037/*op bool %% char a char b*/((v339), (v340))));
} panic("reached function end without returning anything op bool !% char a char b\n");}

char* id_2039/*lop charR ++ charR x*/(char* v341) {{
  id_2029/*op void += charR a char b*/(&(*v341), ((id_1913/*lop char char*/())-((~(id_1913/*lop char char*/())))));
  return &(*v341);
} panic("reached function end without returning anything lop charR ++ charR x\n");}

char* id_2040/*lop charR -- charR x*/(char* v342) {{
  id_2030/*op void -= charR a char b*/(&(*v342), ((id_1913/*lop char char*/())-((~(id_1913/*lop char char*/())))));
  return &(*v342);
} panic("reached function end without returning anything lop charR -- charR x\n");}

char id_2041/*rop char ++ charR x*/(char* v343) {{
  char v344; /*t*/
  ((v344)=(*v343));
  id_2029/*op void += charR a char b*/(&(*v343), ((id_1913/*lop char char*/())-((~(id_1913/*lop char char*/())))));
  return (v344);
} panic("reached function end without returning anything rop char ++ charR x\n");}

char id_2042/*rop char -- charR x*/(char* v345) {{
  char v346; /*t*/
  ((v346)=(*v345));
  id_2030/*op void -= charR a char b*/(&(*v345), ((id_1913/*lop char char*/())-((~(id_1913/*lop char char*/())))));
  return (v346);
} panic("reached function end without returning anything rop char -- charR x\n");}

void id_2043/*op void += f32R a f32 b*/(f32* v348, f32 v349){
  ((*v348)=(((*v348))+((v349))));
}

void id_2044/*op void -= f32R a f32 b*/(f32* v350, f32 v351){
  ((*v350)=(((*v350))-((v351))));
}

void id_2045/*op void /= f32R a f32 b*/(f32* v352, f32 v353){
  ((*v352)=(((*v352))/((v353))));
}

void id_2046/*op void *= f32R a f32 b*/(f32* v354, f32 v355){
  ((*v354)=(((*v354))*((v355))));
}

void id_2047/*op void += f64R a f64 b*/(f64* v356, f64 v357){
  ((*v356)=(((*v356))+((v357))));
}

void id_2048/*op void -= f64R a f64 b*/(f64* v358, f64 v359){
  ((*v358)=(((*v358))-((v359))));
}

void id_2049/*op void /= f64R a f64 b*/(f64* v360, f64 v361){
  ((*v360)=(((*v360))/((v361))));
}

void id_2050/*op void *= f64R a f64 b*/(f64* v362, f64 v363){
  ((*v362)=(((*v362))*((v363))));
}

bool id_2051/*op bool < bool a bool b*/(bool v364, bool v365) {{
  return (((!((v364))))&&((v365)));
} panic("reached function end without returning anything op bool < bool a bool b\n");}

i64 id_2052/*op i64 ** i64 a i64 n*/(i64 v366, i64 v367) {{
  i64 v368; /*res*/
  ((v368)=((i64)1));
  while ((((v367))!=(((i64)0)))) {
    if (id_1968/*op bool !% i64 a i64 b*/((v367), ((i64)2))) {
      id_1963/*op void *= i64R a i64 b*/(&(v368), (v366));
    }
    id_1963/*op void *= i64R a i64 b*/(&(v366), (v366));
    id_1961/*op void /= i64R a i64 b*/(&(v367), ((i64)2));
  }
  return (v368);
} panic("reached function end without returning anything op i64 ** i64 a i64 n\n");}

id_1853/*Out*/ id_2053/*lop Out Out*/() {{
  id_1853/*Out*/ v369; /*o*/
  return (v369);
} panic("reached function end without returning anything lop Out Out\n");}

id_1853/*Out*/ id_2054/*op Out < Out a Out b*/(id_1853/*Out*/ v370, id_1853/*Out*/ v371) {{
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out a Out b\n");}

id_1853/*Out*/ id_2055/*lop Out < Out o*/(id_1853/*Out*/ v372) {{
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < Out o\n");}

id_1853/*Out*/ id_2056/*rop Out < str i*/(str v373) {{
  (printf("%s\n", (v373)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < str i\n");}

id_1853/*Out*/ id_2057/*lop Out < str i*/(str v374) {{
  ((printf("%s", (v374))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < str i\n");}

id_1853/*Out*/ id_2058/*op Out < Out o str i*/(id_1853/*Out*/ v375, str v376) {{
  ((printf("%s", (v376))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o str i\n");}

id_1853/*Out*/ id_2059/*lop Out > strR i*/(str* v377) {{
  ((*v377)=(in_str()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > strR i\n");}

id_1853/*Out*/ id_2060/*op Out > Out o strR i*/(id_1853/*Out*/ v378, str* v379) {{
  ((*v379)=(in_str()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o strR i\n");}

id_1853/*Out*/ id_2061/*rop Out < char i*/(char v380) {{
  (printf("%c\n", (v380)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < char i\n");}

id_1853/*Out*/ id_2062/*lop Out < char i*/(char v381) {{
  ((printf("%c", (v381))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < char i\n");}

id_1853/*Out*/ id_2063/*op Out < Out o char i*/(id_1853/*Out*/ v382, char v383) {{
  ((printf("%c", (v383))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o char i\n");}

id_1853/*Out*/ id_2064/*lop Out > charR i*/(char* v384) {{
  ((*v384)=(in_char()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > charR i\n");}

id_1853/*Out*/ id_2065/*op Out > Out o charR i*/(id_1853/*Out*/ v385, char* v386) {{
  ((*v386)=(in_char()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o charR i\n");}

id_1853/*Out*/ id_2066/*rop Out < i8 i*/(i8 v387) {{
  (printf("%d\n", (v387)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < i8 i\n");}

id_1853/*Out*/ id_2067/*lop Out < i8 i*/(i8 v388) {{
  ((printf("%d", (v388))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < i8 i\n");}

id_1853/*Out*/ id_2068/*op Out < Out o i8 i*/(id_1853/*Out*/ v389, i8 v390) {{
  ((printf("%d", (v390))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o i8 i\n");}

id_1853/*Out*/ id_2069/*lop Out > i8R i*/(i8* v391) {{
  ((*v391)=(in_i8()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > i8R i\n");}

id_1853/*Out*/ id_2070/*op Out > Out o i8R i*/(id_1853/*Out*/ v392, i8* v393) {{
  ((*v393)=(in_i8()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o i8R i\n");}

id_1853/*Out*/ id_2071/*rop Out < i16 i*/(i16 v394) {{
  (printf("%hd\n", (v394)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < i16 i\n");}

id_1853/*Out*/ id_2072/*lop Out < i16 i*/(i16 v395) {{
  ((printf("%hd", (v395))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < i16 i\n");}

id_1853/*Out*/ id_2073/*op Out < Out o i16 i*/(id_1853/*Out*/ v396, i16 v397) {{
  ((printf("%hd", (v397))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o i16 i\n");}

id_1853/*Out*/ id_2074/*lop Out > i16R i*/(i16* v398) {{
  ((*v398)=(in_i16()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > i16R i\n");}

id_1853/*Out*/ id_2075/*op Out > Out o i16R i*/(id_1853/*Out*/ v399, i16* v400) {{
  ((*v400)=(in_i16()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o i16R i\n");}

id_1853/*Out*/ id_2076/*rop Out < i32 i*/(i32 v401) {{
  (printf("%d\n", (v401)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < i32 i\n");}

id_1853/*Out*/ id_2077/*lop Out < i32 i*/(i32 v402) {{
  ((printf("%d", (v402))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < i32 i\n");}

id_1853/*Out*/ id_2078/*op Out < Out o i32 i*/(id_1853/*Out*/ v403, i32 v404) {{
  ((printf("%d", (v404))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o i32 i\n");}

id_1853/*Out*/ id_2079/*lop Out > i32R i*/(i32* v405) {{
  ((*v405)=(in_i32()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > i32R i\n");}

id_1853/*Out*/ id_2080/*op Out > Out o i32R i*/(id_1853/*Out*/ v406, i32* v407) {{
  ((*v407)=(in_i32()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o i32R i\n");}

id_1853/*Out*/ id_2081/*rop Out < i64 i*/(i64 v408) {{
  (printf("%lld\n", (v408)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < i64 i\n");}

id_1853/*Out*/ id_2082/*lop Out < i64 i*/(i64 v409) {{
  ((printf("%lld", (v409))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < i64 i\n");}

id_1853/*Out*/ id_2083/*op Out < Out o i64 i*/(id_1853/*Out*/ v410, i64 v411) {{
  ((printf("%lld", (v411))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o i64 i\n");}

id_1853/*Out*/ id_2084/*lop Out > i64R i*/(i64* v412) {{
  ((*v412)=(in_i64()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > i64R i\n");}

id_1853/*Out*/ id_2085/*op Out > Out o i64R i*/(id_1853/*Out*/ v413, i64* v414) {{
  ((*v414)=(in_i64()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o i64R i\n");}

id_1853/*Out*/ id_2086/*rop Out < u8 i*/(u8 v415) {{
  (printf("%d\n", (v415)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < u8 i\n");}

id_1853/*Out*/ id_2087/*lop Out < u8 i*/(u8 v416) {{
  ((printf("%d", (v416))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < u8 i\n");}

id_1853/*Out*/ id_2088/*op Out < Out o u8 i*/(id_1853/*Out*/ v417, u8 v418) {{
  ((printf("%d", (v418))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o u8 i\n");}

id_1853/*Out*/ id_2089/*lop Out > u8R i*/(u8* v419) {{
  ((*v419)=(in_u8()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > u8R i\n");}

id_1853/*Out*/ id_2090/*op Out > Out o u8R i*/(id_1853/*Out*/ v420, u8* v421) {{
  ((*v421)=(in_u8()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o u8R i\n");}

id_1853/*Out*/ id_2091/*rop Out < u16 i*/(u16 v422) {{
  (printf("%hd\n", (v422)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < u16 i\n");}

id_1853/*Out*/ id_2092/*lop Out < u16 i*/(u16 v423) {{
  ((printf("%hd", (v423))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < u16 i\n");}

id_1853/*Out*/ id_2093/*op Out < Out o u16 i*/(id_1853/*Out*/ v424, u16 v425) {{
  ((printf("%hd", (v425))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o u16 i\n");}

id_1853/*Out*/ id_2094/*lop Out > u16R i*/(u16* v426) {{
  ((*v426)=(in_u16()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > u16R i\n");}

id_1853/*Out*/ id_2095/*op Out > Out o u16R i*/(id_1853/*Out*/ v427, u16* v428) {{
  ((*v428)=(in_u16()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o u16R i\n");}

id_1853/*Out*/ id_2096/*rop Out < u32 i*/(u32 v429) {{
  (printf("%u\n", (v429)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < u32 i\n");}

id_1853/*Out*/ id_2097/*lop Out < u32 i*/(u32 v430) {{
  ((printf("%u", (v430))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < u32 i\n");}

id_1853/*Out*/ id_2098/*op Out < Out o u32 i*/(id_1853/*Out*/ v431, u32 v432) {{
  ((printf("%u", (v432))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o u32 i\n");}

id_1853/*Out*/ id_2099/*lop Out > u32R i*/(u32* v433) {{
  ((*v433)=(in_u32()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > u32R i\n");}

id_1853/*Out*/ id_2100/*op Out > Out o u32R i*/(id_1853/*Out*/ v434, u32* v435) {{
  ((*v435)=(in_u32()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o u32R i\n");}

id_1853/*Out*/ id_2101/*rop Out < u64 i*/(u64 v436) {{
  (printf("%llu\n", (v436)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < u64 i\n");}

id_1853/*Out*/ id_2102/*lop Out < u64 i*/(u64 v437) {{
  ((printf("%llu", (v437))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < u64 i\n");}

id_1853/*Out*/ id_2103/*op Out < Out o u64 i*/(id_1853/*Out*/ v438, u64 v439) {{
  ((printf("%llu", (v439))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o u64 i\n");}

id_1853/*Out*/ id_2104/*lop Out > u64R i*/(u64* v440) {{
  ((*v440)=(in_u64()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > u64R i\n");}

id_1853/*Out*/ id_2105/*op Out > Out o u64R i*/(id_1853/*Out*/ v441, u64* v442) {{
  ((*v442)=(in_u64()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o u64R i\n");}

id_1853/*Out*/ id_2106/*rop Out < f32 i*/(f32 v443) {{
  (printf("%f\n", (v443)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < f32 i\n");}

id_1853/*Out*/ id_2107/*lop Out < f32 i*/(f32 v444) {{
  ((printf("%f", (v444))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < f32 i\n");}

id_1853/*Out*/ id_2108/*op Out < Out o f32 i*/(id_1853/*Out*/ v445, f32 v446) {{
  ((printf("%f", (v446))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o f32 i\n");}

id_1853/*Out*/ id_2109/*lop Out > f32R i*/(f32* v447) {{
  ((*v447)=(in_f32()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > f32R i\n");}

id_1853/*Out*/ id_2110/*op Out > Out o f32R i*/(id_1853/*Out*/ v448, f32* v449) {{
  ((*v449)=(in_f32()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o f32R i\n");}

id_1853/*Out*/ id_2111/*rop Out < f64 i*/(f64 v450) {{
  (printf("%f\n", (v450)));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < f64 i\n");}

id_1853/*Out*/ id_2112/*lop Out < f64 i*/(f64 v451) {{
  ((printf("%f", (v451))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < f64 i\n");}

id_1853/*Out*/ id_2113/*op Out < Out o f64 i*/(id_1853/*Out*/ v452, f64 v453) {{
  ((printf("%f", (v453))), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o f64 i\n");}

id_1853/*Out*/ id_2114/*lop Out > f64R i*/(f64* v454) {{
  ((*v454)=(in_f64()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out > f64R i\n");}

id_1853/*Out*/ id_2115/*op Out > Out o f64R i*/(id_1853/*Out*/ v455, f64* v456) {{
  ((*v456)=(in_f64()));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out > Out o f64R i\n");}

void id_2116/*lop void rangeMaker*/(){
  id_1865/*RangeIterRange<i64>*/ v690; /*d1*/
  id_1862/*RangeIterRange<i32>*/ v689; /*c1*/
  id_1859/*RangeIterRange<i16>*/ v688; /*b1*/
  id_1856/*RangeIterRange<i8>*/ v687; /*a1*/
  id_1866/*Range<char>*/ v686; /*e*/
  id_1860/*Range<i32>*/ v594; /*c*/
  id_1868/*RangeIterRange<char>*/ v691; /*e1*/
  id_1857/*Range<i16>*/ v548; /*b*/
  id_1863/*Range<i64>*/ v640; /*d*/
  id_1854/*Range<i8>*/ v502; /*a*/
}

id_1855/*RangeIter<i8>*/ id_2117/*lop RangeIter<i8> RangeIter<i8> i8 val*/(i8 v490) {{
  id_1855/*RangeIter<i8>*/ v491; /*slf*/
  (((&(v491))->id_1892/*val*/)=(v490));
  return (v491);
} panic("reached function end without returning anything lop RangeIter<i8> RangeIter<i8> i8 val\n");}

void id_2118/*lop void ++ RangeIter<i8>R slf*/(id_1855/*RangeIter<i8>*/* v492){
  *id_1927/*lop i8R ++ i8R x*/(&((&(*v492))->id_1892/*val*/));
}

i8 id_2119/*lop i8 * RangeIter<i8> slf*/(id_1855/*RangeIter<i8>*/ v493) {{
  return ((&(v493))->id_1892/*val*/);
} panic("reached function end without returning anything lop i8 * RangeIter<i8> slf\n");}

bool id_2120/*op bool != RangeIter<i8> a RangeIter<i8> b*/(id_1855/*RangeIter<i8>*/ v494, id_1855/*RangeIter<i8>*/ v495) {{
  return ((((&(v494))->id_1892/*val*/))!=(((&(v495))->id_1892/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i8> a RangeIter<i8> b\n");}

id_1855/*RangeIter<i8>*/ id_2121/*op RangeIter<i8> .call.begin RangeIterRange<i8>P slf*/(id_1856/*RangeIterRange<i8>*/* v496) {{
  return (((v496))->id_1890/*begin*/);
} panic("reached function end without returning anything op RangeIter<i8> .call.begin RangeIterRange<i8>P slf\n");}

id_1855/*RangeIter<i8>*/ id_2122/*op RangeIter<i8> .call.end RangeIterRange<i8>P slf*/(id_1856/*RangeIterRange<i8>*/* v497) {{
  return (((v497))->id_1891/*end*/);
} panic("reached function end without returning anything op RangeIter<i8> .call.end RangeIterRange<i8>P slf\n");}

id_1856/*RangeIterRange<i8>*/ id_2123/*lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end*/(id_1855/*RangeIter<i8>*/ v498, id_1855/*RangeIter<i8>*/ v499) {{
  id_1856/*RangeIterRange<i8>*/ v500; /*slf*/
  (((&(v500))->id_1890/*begin*/)=(v498));
  (((&(v500))->id_1891/*end*/)=(v499));
  return (v500);
} panic("reached function end without returning anything lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end\n");}

i8 id_2124/*op i8 .call.begin Range<i8>P slf*/(id_1854/*Range<i8>*/* v457) {{
  return (((v457))->id_1890/*begin*/);
} panic("reached function end without returning anything op i8 .call.begin Range<i8>P slf\n");}

i8 id_2125/*op i8 .call.end Range<i8>P slf*/(id_1854/*Range<i8>*/* v458) {{
  return (((v458))->id_1891/*end*/);
} panic("reached function end without returning anything op i8 .call.end Range<i8>P slf\n");}

id_1854/*Range<i8>*/ id_2126/*lop Range<i8> Range<i8> i8 begin i8 end*/(i8 v459, i8 v460) {{
  id_1854/*Range<i8>*/ v461; /*slf*/
  (((&(v461))->id_1890/*begin*/)=(v459));
  (((&(v461))->id_1891/*end*/)=(v460));
  return (v461);
} panic("reached function end without returning anything lop Range<i8> Range<i8> i8 begin i8 end\n");}

id_1854/*Range<i8>*/ id_2127/*op Range<i8> .. i8 begin i8 end*/(i8 v462, i8 v463) {{
  return id_2126/*lop Range<i8> Range<i8> i8 begin i8 end*/((v462), (v463));
} panic("reached function end without returning anything op Range<i8> .. i8 begin i8 end\n");}

id_1854/*Range<i8>*/ id_2128/*op Range<i8> ..- i8 begin i8 end*/(i8 v464, i8 v465) {{
  return id_2127/*op Range<i8> .. i8 begin i8 end*/((v464), (-((v465))));
} panic("reached function end without returning anything op Range<i8> ..- i8 begin i8 end\n");}

id_1854/*Range<i8>*/ id_2129/*rop Range<i8> .. i8 begin*/(i8 v466) {{
  return id_2127/*op Range<i8> .. i8 begin i8 end*/((v466), (~(id_1904/*lop i8 i8*/())));
} panic("reached function end without returning anything rop Range<i8> .. i8 begin\n");}

id_1854/*Range<i8>*/ id_2130/*lop Range<i8> .. i8 end*/(i8 v467) {{
  i8 v469; /*tmp_rval_468*/
  return id_2127/*op Range<i8> .. i8 begin i8 end*/(*id_1927/*lop i8R ++ i8R x*/(&(*(((v469)=(~(id_1904/*lop i8 i8*/()))), (&(v469))))), (v467));
} panic("reached function end without returning anything lop Range<i8> .. i8 end\n");}

id_1854/*Range<i8>*/ id_2131/*lop Range<i8> ..- i8 end*/(i8 v470) {{
  i8 v472; /*tmp_rval_471*/
  return id_2127/*op Range<i8> .. i8 begin i8 end*/(*id_1927/*lop i8R ++ i8R x*/(&(*(((v472)=(~(id_1904/*lop i8 i8*/()))), (&(v472))))), (-((v470))));
} panic("reached function end without returning anything lop Range<i8> ..- i8 end\n");}

id_1854/*Range<i8>*/ id_2132/*lop Range<i8> - Range<i8> r*/(id_1854/*Range<i8>*/ v473) {{
  return id_2127/*op Range<i8> .. i8 begin i8 end*/((-(((&(v473))->id_1890/*begin*/))), ((&(v473))->id_1891/*end*/));
} panic("reached function end without returning anything lop Range<i8> - Range<i8> r\n");}

id_1854/*Range<i8>*/ id_2133/*op Range<i8> ..= i8 begin i8 end*/(i8 v474, i8 v475) {{
  i8 v477; /*tmp_rval_476*/
  return id_2127/*op Range<i8> .. i8 begin i8 end*/((v474), (((v475))+(*id_1927/*lop i8R ++ i8R x*/(&(*(((v477)=id_1904/*lop i8 i8*/()), (&(v477))))))));
} panic("reached function end without returning anything op Range<i8> ..= i8 begin i8 end\n");}

id_1854/*Range<i8>*/ id_2134/*lop Range<i8> ..= i8 end*/(i8 v478) {{
  i8 v482; /*tmp_rval_481*/
  i8 v480; /*tmp_rval_479*/
  return id_2127/*op Range<i8> .. i8 begin i8 end*/(*id_1927/*lop i8R ++ i8R x*/(&(*(((v480)=(~(id_1904/*lop i8 i8*/()))), (&(v480))))), (((v478))+(*id_1927/*lop i8R ++ i8R x*/(&(*(((v482)=(~(id_1904/*lop i8 i8*/()))), (&(v482))))))));
} panic("reached function end without returning anything lop Range<i8> ..= i8 end\n");}

id_1854/*Range<i8>*/ id_2135/*lop Range<i8> ..=- i8 end*/(i8 v483) {{
  i8 v487; /*tmp_rval_486*/
  i8 v485; /*tmp_rval_484*/
  return id_2127/*op Range<i8> .. i8 begin i8 end*/(*id_1927/*lop i8R ++ i8R x*/(&(*(((v485)=(~(id_1904/*lop i8 i8*/()))), (&(v485))))), (((-((v483))))+(*id_1927/*lop i8R ++ i8R x*/(&(*(((v487)=(~(id_1904/*lop i8 i8*/()))), (&(v487))))))));
} panic("reached function end without returning anything lop Range<i8> ..=- i8 end\n");}

bool id_2136/*op bool == i8 i Range<i8> r*/(i8 v488, id_1854/*Range<i8>*/ v489) {{
  if (((((&(v489))->id_1890/*begin*/))<(((&(v489))->id_1891/*end*/)))) {
    return ((((((&(v489))->id_1890/*begin*/))<=((v488))))&&((((v488))<(((&(v489))->id_1891/*end*/)))));
  } else {
    return ((((((&(v489))->id_1891/*end*/))<=((v488))))&&((((v488))<(((&(v489))->id_1890/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i8 i Range<i8> r\n");}

id_1856/*RangeIterRange<i8>*/ id_2137/*lop RangeIterRange<i8> iter Range<i8> r*/(id_1854/*Range<i8>*/ v501) {{
  return id_2123/*lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end*/(id_2117/*lop RangeIter<i8> RangeIter<i8> i8 val*/(((&(v501))->id_1890/*begin*/)), id_2117/*lop RangeIter<i8> RangeIter<i8> i8 val*/(((&(v501))->id_1891/*end*/)));
} panic("reached function end without returning anything lop RangeIterRange<i8> iter Range<i8> r\n");}

id_1858/*RangeIter<i16>*/ id_2138/*lop RangeIter<i16> RangeIter<i16> i16 val*/(i16 v536) {{
  id_1858/*RangeIter<i16>*/ v537; /*slf*/
  (((&(v537))->id_1892/*val*/)=(v536));
  return (v537);
} panic("reached function end without returning anything lop RangeIter<i16> RangeIter<i16> i16 val\n");}

void id_2139/*lop void ++ RangeIter<i16>R slf*/(id_1858/*RangeIter<i16>*/* v538){
  *id_1941/*lop i16R ++ i16R x*/(&((&(*v538))->id_1892/*val*/));
}

i16 id_2140/*lop i16 * RangeIter<i16> slf*/(id_1858/*RangeIter<i16>*/ v539) {{
  return ((&(v539))->id_1892/*val*/);
} panic("reached function end without returning anything lop i16 * RangeIter<i16> slf\n");}

bool id_2141/*op bool != RangeIter<i16> a RangeIter<i16> b*/(id_1858/*RangeIter<i16>*/ v540, id_1858/*RangeIter<i16>*/ v541) {{
  return ((((&(v540))->id_1892/*val*/))!=(((&(v541))->id_1892/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i16> a RangeIter<i16> b\n");}

id_1858/*RangeIter<i16>*/ id_2142/*op RangeIter<i16> .call.begin RangeIterRange<i16>P slf*/(id_1859/*RangeIterRange<i16>*/* v542) {{
  return (((v542))->id_1890/*begin*/);
} panic("reached function end without returning anything op RangeIter<i16> .call.begin RangeIterRange<i16>P slf\n");}

id_1858/*RangeIter<i16>*/ id_2143/*op RangeIter<i16> .call.end RangeIterRange<i16>P slf*/(id_1859/*RangeIterRange<i16>*/* v543) {{
  return (((v543))->id_1891/*end*/);
} panic("reached function end without returning anything op RangeIter<i16> .call.end RangeIterRange<i16>P slf\n");}

id_1859/*RangeIterRange<i16>*/ id_2144/*lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end*/(id_1858/*RangeIter<i16>*/ v544, id_1858/*RangeIter<i16>*/ v545) {{
  id_1859/*RangeIterRange<i16>*/ v546; /*slf*/
  (((&(v546))->id_1890/*begin*/)=(v544));
  (((&(v546))->id_1891/*end*/)=(v545));
  return (v546);
} panic("reached function end without returning anything lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end\n");}

i16 id_2145/*op i16 .call.begin Range<i16>P slf*/(id_1857/*Range<i16>*/* v503) {{
  return (((v503))->id_1890/*begin*/);
} panic("reached function end without returning anything op i16 .call.begin Range<i16>P slf\n");}

i16 id_2146/*op i16 .call.end Range<i16>P slf*/(id_1857/*Range<i16>*/* v504) {{
  return (((v504))->id_1891/*end*/);
} panic("reached function end without returning anything op i16 .call.end Range<i16>P slf\n");}

id_1857/*Range<i16>*/ id_2147/*lop Range<i16> Range<i16> i16 begin i16 end*/(i16 v505, i16 v506) {{
  id_1857/*Range<i16>*/ v507; /*slf*/
  (((&(v507))->id_1890/*begin*/)=(v505));
  (((&(v507))->id_1891/*end*/)=(v506));
  return (v507);
} panic("reached function end without returning anything lop Range<i16> Range<i16> i16 begin i16 end\n");}

id_1857/*Range<i16>*/ id_2148/*op Range<i16> .. i16 begin i16 end*/(i16 v508, i16 v509) {{
  return id_2147/*lop Range<i16> Range<i16> i16 begin i16 end*/((v508), (v509));
} panic("reached function end without returning anything op Range<i16> .. i16 begin i16 end\n");}

id_1857/*Range<i16>*/ id_2149/*op Range<i16> ..- i16 begin i16 end*/(i16 v510, i16 v511) {{
  return id_2148/*op Range<i16> .. i16 begin i16 end*/((v510), (-((v511))));
} panic("reached function end without returning anything op Range<i16> ..- i16 begin i16 end\n");}

id_1857/*Range<i16>*/ id_2150/*rop Range<i16> .. i16 begin*/(i16 v512) {{
  return id_2148/*op Range<i16> .. i16 begin i16 end*/((v512), (~(id_1905/*lop i16 i16*/())));
} panic("reached function end without returning anything rop Range<i16> .. i16 begin\n");}

id_1857/*Range<i16>*/ id_2151/*lop Range<i16> .. i16 end*/(i16 v513) {{
  i16 v515; /*tmp_rval_514*/
  return id_2148/*op Range<i16> .. i16 begin i16 end*/(*id_1941/*lop i16R ++ i16R x*/(&(*(((v515)=(~(id_1905/*lop i16 i16*/()))), (&(v515))))), (v513));
} panic("reached function end without returning anything lop Range<i16> .. i16 end\n");}

id_1857/*Range<i16>*/ id_2152/*lop Range<i16> ..- i16 end*/(i16 v516) {{
  i16 v518; /*tmp_rval_517*/
  return id_2148/*op Range<i16> .. i16 begin i16 end*/(*id_1941/*lop i16R ++ i16R x*/(&(*(((v518)=(~(id_1905/*lop i16 i16*/()))), (&(v518))))), (-((v516))));
} panic("reached function end without returning anything lop Range<i16> ..- i16 end\n");}

id_1857/*Range<i16>*/ id_2153/*lop Range<i16> - Range<i16> r*/(id_1857/*Range<i16>*/ v519) {{
  return id_2148/*op Range<i16> .. i16 begin i16 end*/((-(((&(v519))->id_1890/*begin*/))), ((&(v519))->id_1891/*end*/));
} panic("reached function end without returning anything lop Range<i16> - Range<i16> r\n");}

id_1857/*Range<i16>*/ id_2154/*op Range<i16> ..= i16 begin i16 end*/(i16 v520, i16 v521) {{
  i16 v523; /*tmp_rval_522*/
  return id_2148/*op Range<i16> .. i16 begin i16 end*/((v520), (((v521))+(*id_1941/*lop i16R ++ i16R x*/(&(*(((v523)=id_1905/*lop i16 i16*/()), (&(v523))))))));
} panic("reached function end without returning anything op Range<i16> ..= i16 begin i16 end\n");}

id_1857/*Range<i16>*/ id_2155/*lop Range<i16> ..= i16 end*/(i16 v524) {{
  i16 v528; /*tmp_rval_527*/
  i16 v526; /*tmp_rval_525*/
  return id_2148/*op Range<i16> .. i16 begin i16 end*/(*id_1941/*lop i16R ++ i16R x*/(&(*(((v526)=(~(id_1905/*lop i16 i16*/()))), (&(v526))))), (((v524))+(*id_1941/*lop i16R ++ i16R x*/(&(*(((v528)=(~(id_1905/*lop i16 i16*/()))), (&(v528))))))));
} panic("reached function end without returning anything lop Range<i16> ..= i16 end\n");}

id_1857/*Range<i16>*/ id_2156/*lop Range<i16> ..=- i16 end*/(i16 v529) {{
  i16 v533; /*tmp_rval_532*/
  i16 v531; /*tmp_rval_530*/
  return id_2148/*op Range<i16> .. i16 begin i16 end*/(*id_1941/*lop i16R ++ i16R x*/(&(*(((v531)=(~(id_1905/*lop i16 i16*/()))), (&(v531))))), (((-((v529))))+(*id_1941/*lop i16R ++ i16R x*/(&(*(((v533)=(~(id_1905/*lop i16 i16*/()))), (&(v533))))))));
} panic("reached function end without returning anything lop Range<i16> ..=- i16 end\n");}

bool id_2157/*op bool == i16 i Range<i16> r*/(i16 v534, id_1857/*Range<i16>*/ v535) {{
  if (((((&(v535))->id_1890/*begin*/))<(((&(v535))->id_1891/*end*/)))) {
    return ((((((&(v535))->id_1890/*begin*/))<=((v534))))&&((((v534))<(((&(v535))->id_1891/*end*/)))));
  } else {
    return ((((((&(v535))->id_1891/*end*/))<=((v534))))&&((((v534))<(((&(v535))->id_1890/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i16 i Range<i16> r\n");}

id_1859/*RangeIterRange<i16>*/ id_2158/*lop RangeIterRange<i16> iter Range<i16> r*/(id_1857/*Range<i16>*/ v547) {{
  return id_2144/*lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end*/(id_2138/*lop RangeIter<i16> RangeIter<i16> i16 val*/(((&(v547))->id_1890/*begin*/)), id_2138/*lop RangeIter<i16> RangeIter<i16> i16 val*/(((&(v547))->id_1891/*end*/)));
} panic("reached function end without returning anything lop RangeIterRange<i16> iter Range<i16> r\n");}

id_1861/*RangeIter<i32>*/ id_2159/*lop RangeIter<i32> RangeIter<i32> i32 val*/(i32 v582) {{
  id_1861/*RangeIter<i32>*/ v583; /*slf*/
  (((&(v583))->id_1892/*val*/)=(v582));
  return (v583);
} panic("reached function end without returning anything lop RangeIter<i32> RangeIter<i32> i32 val\n");}

void id_2160/*lop void ++ RangeIter<i32>R slf*/(id_1861/*RangeIter<i32>*/* v584){
  *id_1955/*lop i32R ++ i32R x*/(&((&(*v584))->id_1892/*val*/));
}

i32 id_2161/*lop i32 * RangeIter<i32> slf*/(id_1861/*RangeIter<i32>*/ v585) {{
  return ((&(v585))->id_1892/*val*/);
} panic("reached function end without returning anything lop i32 * RangeIter<i32> slf\n");}

bool id_2162/*op bool != RangeIter<i32> a RangeIter<i32> b*/(id_1861/*RangeIter<i32>*/ v586, id_1861/*RangeIter<i32>*/ v587) {{
  return ((((&(v586))->id_1892/*val*/))!=(((&(v587))->id_1892/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i32> a RangeIter<i32> b\n");}

id_1861/*RangeIter<i32>*/ id_2163/*op RangeIter<i32> .call.begin RangeIterRange<i32>P slf*/(id_1862/*RangeIterRange<i32>*/* v588) {{
  return (((v588))->id_1890/*begin*/);
} panic("reached function end without returning anything op RangeIter<i32> .call.begin RangeIterRange<i32>P slf\n");}

id_1861/*RangeIter<i32>*/ id_2164/*op RangeIter<i32> .call.end RangeIterRange<i32>P slf*/(id_1862/*RangeIterRange<i32>*/* v589) {{
  return (((v589))->id_1891/*end*/);
} panic("reached function end without returning anything op RangeIter<i32> .call.end RangeIterRange<i32>P slf\n");}

id_1862/*RangeIterRange<i32>*/ id_2165/*lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end*/(id_1861/*RangeIter<i32>*/ v590, id_1861/*RangeIter<i32>*/ v591) {{
  id_1862/*RangeIterRange<i32>*/ v592; /*slf*/
  (((&(v592))->id_1890/*begin*/)=(v590));
  (((&(v592))->id_1891/*end*/)=(v591));
  return (v592);
} panic("reached function end without returning anything lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end\n");}

i32 id_2166/*op i32 .call.begin Range<i32>P slf*/(id_1860/*Range<i32>*/* v549) {{
  return (((v549))->id_1890/*begin*/);
} panic("reached function end without returning anything op i32 .call.begin Range<i32>P slf\n");}

i32 id_2167/*op i32 .call.end Range<i32>P slf*/(id_1860/*Range<i32>*/* v550) {{
  return (((v550))->id_1891/*end*/);
} panic("reached function end without returning anything op i32 .call.end Range<i32>P slf\n");}

id_1860/*Range<i32>*/ id_2168/*lop Range<i32> Range<i32> i32 begin i32 end*/(i32 v551, i32 v552) {{
  id_1860/*Range<i32>*/ v553; /*slf*/
  (((&(v553))->id_1890/*begin*/)=(v551));
  (((&(v553))->id_1891/*end*/)=(v552));
  return (v553);
} panic("reached function end without returning anything lop Range<i32> Range<i32> i32 begin i32 end\n");}

id_1860/*Range<i32>*/ id_2169/*op Range<i32> .. i32 begin i32 end*/(i32 v554, i32 v555) {{
  return id_2168/*lop Range<i32> Range<i32> i32 begin i32 end*/((v554), (v555));
} panic("reached function end without returning anything op Range<i32> .. i32 begin i32 end\n");}

id_1860/*Range<i32>*/ id_2170/*op Range<i32> ..- i32 begin i32 end*/(i32 v556, i32 v557) {{
  return id_2169/*op Range<i32> .. i32 begin i32 end*/((v556), (-((v557))));
} panic("reached function end without returning anything op Range<i32> ..- i32 begin i32 end\n");}

id_1860/*Range<i32>*/ id_2171/*rop Range<i32> .. i32 begin*/(i32 v558) {{
  return id_2169/*op Range<i32> .. i32 begin i32 end*/((v558), (~(id_1906/*lop i32 i32*/())));
} panic("reached function end without returning anything rop Range<i32> .. i32 begin\n");}

id_1860/*Range<i32>*/ id_2172/*lop Range<i32> .. i32 end*/(i32 v559) {{
  i32 v561; /*tmp_rval_560*/
  return id_2169/*op Range<i32> .. i32 begin i32 end*/(*id_1955/*lop i32R ++ i32R x*/(&(*(((v561)=(~(id_1906/*lop i32 i32*/()))), (&(v561))))), (v559));
} panic("reached function end without returning anything lop Range<i32> .. i32 end\n");}

id_1860/*Range<i32>*/ id_2173/*lop Range<i32> ..- i32 end*/(i32 v562) {{
  i32 v564; /*tmp_rval_563*/
  return id_2169/*op Range<i32> .. i32 begin i32 end*/(*id_1955/*lop i32R ++ i32R x*/(&(*(((v564)=(~(id_1906/*lop i32 i32*/()))), (&(v564))))), (-((v562))));
} panic("reached function end without returning anything lop Range<i32> ..- i32 end\n");}

id_1860/*Range<i32>*/ id_2174/*lop Range<i32> - Range<i32> r*/(id_1860/*Range<i32>*/ v565) {{
  return id_2169/*op Range<i32> .. i32 begin i32 end*/((-(((&(v565))->id_1890/*begin*/))), ((&(v565))->id_1891/*end*/));
} panic("reached function end without returning anything lop Range<i32> - Range<i32> r\n");}

id_1860/*Range<i32>*/ id_2175/*op Range<i32> ..= i32 begin i32 end*/(i32 v566, i32 v567) {{
  i32 v569; /*tmp_rval_568*/
  return id_2169/*op Range<i32> .. i32 begin i32 end*/((v566), (((v567))+(*id_1955/*lop i32R ++ i32R x*/(&(*(((v569)=id_1906/*lop i32 i32*/()), (&(v569))))))));
} panic("reached function end without returning anything op Range<i32> ..= i32 begin i32 end\n");}

id_1860/*Range<i32>*/ id_2176/*lop Range<i32> ..= i32 end*/(i32 v570) {{
  i32 v574; /*tmp_rval_573*/
  i32 v572; /*tmp_rval_571*/
  return id_2169/*op Range<i32> .. i32 begin i32 end*/(*id_1955/*lop i32R ++ i32R x*/(&(*(((v572)=(~(id_1906/*lop i32 i32*/()))), (&(v572))))), (((v570))+(*id_1955/*lop i32R ++ i32R x*/(&(*(((v574)=(~(id_1906/*lop i32 i32*/()))), (&(v574))))))));
} panic("reached function end without returning anything lop Range<i32> ..= i32 end\n");}

id_1860/*Range<i32>*/ id_2177/*lop Range<i32> ..=- i32 end*/(i32 v575) {{
  i32 v579; /*tmp_rval_578*/
  i32 v577; /*tmp_rval_576*/
  return id_2169/*op Range<i32> .. i32 begin i32 end*/(*id_1955/*lop i32R ++ i32R x*/(&(*(((v577)=(~(id_1906/*lop i32 i32*/()))), (&(v577))))), (((-((v575))))+(*id_1955/*lop i32R ++ i32R x*/(&(*(((v579)=(~(id_1906/*lop i32 i32*/()))), (&(v579))))))));
} panic("reached function end without returning anything lop Range<i32> ..=- i32 end\n");}

bool id_2178/*op bool == i32 i Range<i32> r*/(i32 v580, id_1860/*Range<i32>*/ v581) {{
  if (((((&(v581))->id_1890/*begin*/))<(((&(v581))->id_1891/*end*/)))) {
    return ((((((&(v581))->id_1890/*begin*/))<=((v580))))&&((((v580))<(((&(v581))->id_1891/*end*/)))));
  } else {
    return ((((((&(v581))->id_1891/*end*/))<=((v580))))&&((((v580))<(((&(v581))->id_1890/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i32 i Range<i32> r\n");}

id_1862/*RangeIterRange<i32>*/ id_2179/*lop RangeIterRange<i32> iter Range<i32> r*/(id_1860/*Range<i32>*/ v593) {{
  return id_2165/*lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end*/(id_2159/*lop RangeIter<i32> RangeIter<i32> i32 val*/(((&(v593))->id_1890/*begin*/)), id_2159/*lop RangeIter<i32> RangeIter<i32> i32 val*/(((&(v593))->id_1891/*end*/)));
} panic("reached function end without returning anything lop RangeIterRange<i32> iter Range<i32> r\n");}

id_1864/*RangeIter<i64>*/ id_2180/*lop RangeIter<i64> RangeIter<i64> i64 val*/(i64 v628) {{
  id_1864/*RangeIter<i64>*/ v629; /*slf*/
  (((&(v629))->id_1892/*val*/)=(v628));
  return (v629);
} panic("reached function end without returning anything lop RangeIter<i64> RangeIter<i64> i64 val\n");}

void id_2181/*lop void ++ RangeIter<i64>R slf*/(id_1864/*RangeIter<i64>*/* v630){
  *id_1969/*lop i64R ++ i64R x*/(&((&(*v630))->id_1892/*val*/));
}

i64 id_2182/*lop i64 * RangeIter<i64> slf*/(id_1864/*RangeIter<i64>*/ v631) {{
  return ((&(v631))->id_1892/*val*/);
} panic("reached function end without returning anything lop i64 * RangeIter<i64> slf\n");}

bool id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/(id_1864/*RangeIter<i64>*/ v632, id_1864/*RangeIter<i64>*/ v633) {{
  return ((((&(v632))->id_1892/*val*/))!=(((&(v633))->id_1892/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i64> a RangeIter<i64> b\n");}

id_1864/*RangeIter<i64>*/ id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/(id_1865/*RangeIterRange<i64>*/* v634) {{
  return (((v634))->id_1890/*begin*/);
} panic("reached function end without returning anything op RangeIter<i64> .call.begin RangeIterRange<i64>P slf\n");}

id_1864/*RangeIter<i64>*/ id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/(id_1865/*RangeIterRange<i64>*/* v635) {{
  return (((v635))->id_1891/*end*/);
} panic("reached function end without returning anything op RangeIter<i64> .call.end RangeIterRange<i64>P slf\n");}

id_1865/*RangeIterRange<i64>*/ id_2186/*lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end*/(id_1864/*RangeIter<i64>*/ v636, id_1864/*RangeIter<i64>*/ v637) {{
  id_1865/*RangeIterRange<i64>*/ v638; /*slf*/
  (((&(v638))->id_1890/*begin*/)=(v636));
  (((&(v638))->id_1891/*end*/)=(v637));
  return (v638);
} panic("reached function end without returning anything lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end\n");}

i64 id_2187/*op i64 .call.begin Range<i64>P slf*/(id_1863/*Range<i64>*/* v595) {{
  return (((v595))->id_1890/*begin*/);
} panic("reached function end without returning anything op i64 .call.begin Range<i64>P slf\n");}

i64 id_2188/*op i64 .call.end Range<i64>P slf*/(id_1863/*Range<i64>*/* v596) {{
  return (((v596))->id_1891/*end*/);
} panic("reached function end without returning anything op i64 .call.end Range<i64>P slf\n");}

id_1863/*Range<i64>*/ id_2189/*lop Range<i64> Range<i64> i64 begin i64 end*/(i64 v597, i64 v598) {{
  id_1863/*Range<i64>*/ v599; /*slf*/
  (((&(v599))->id_1890/*begin*/)=(v597));
  (((&(v599))->id_1891/*end*/)=(v598));
  return (v599);
} panic("reached function end without returning anything lop Range<i64> Range<i64> i64 begin i64 end\n");}

id_1863/*Range<i64>*/ id_2190/*op Range<i64> .. i64 begin i64 end*/(i64 v600, i64 v601) {{
  return id_2189/*lop Range<i64> Range<i64> i64 begin i64 end*/((v600), (v601));
} panic("reached function end without returning anything op Range<i64> .. i64 begin i64 end\n");}

id_1863/*Range<i64>*/ id_2191/*op Range<i64> ..- i64 begin i64 end*/(i64 v602, i64 v603) {{
  return id_2190/*op Range<i64> .. i64 begin i64 end*/((v602), (-((v603))));
} panic("reached function end without returning anything op Range<i64> ..- i64 begin i64 end\n");}

id_1863/*Range<i64>*/ id_2192/*rop Range<i64> .. i64 begin*/(i64 v604) {{
  return id_2190/*op Range<i64> .. i64 begin i64 end*/((v604), (~(id_1907/*lop i64 i64*/())));
} panic("reached function end without returning anything rop Range<i64> .. i64 begin\n");}

id_1863/*Range<i64>*/ id_2193/*lop Range<i64> .. i64 end*/(i64 v605) {{
  i64 v607; /*tmp_rval_606*/
  return id_2190/*op Range<i64> .. i64 begin i64 end*/(*id_1969/*lop i64R ++ i64R x*/(&(*(((v607)=(~(id_1907/*lop i64 i64*/()))), (&(v607))))), (v605));
} panic("reached function end without returning anything lop Range<i64> .. i64 end\n");}

id_1863/*Range<i64>*/ id_2194/*lop Range<i64> ..- i64 end*/(i64 v608) {{
  i64 v610; /*tmp_rval_609*/
  return id_2190/*op Range<i64> .. i64 begin i64 end*/(*id_1969/*lop i64R ++ i64R x*/(&(*(((v610)=(~(id_1907/*lop i64 i64*/()))), (&(v610))))), (-((v608))));
} panic("reached function end without returning anything lop Range<i64> ..- i64 end\n");}

id_1863/*Range<i64>*/ id_2195/*lop Range<i64> - Range<i64> r*/(id_1863/*Range<i64>*/ v611) {{
  return id_2190/*op Range<i64> .. i64 begin i64 end*/((-(((&(v611))->id_1890/*begin*/))), ((&(v611))->id_1891/*end*/));
} panic("reached function end without returning anything lop Range<i64> - Range<i64> r\n");}

id_1863/*Range<i64>*/ id_2196/*op Range<i64> ..= i64 begin i64 end*/(i64 v612, i64 v613) {{
  i64 v615; /*tmp_rval_614*/
  return id_2190/*op Range<i64> .. i64 begin i64 end*/((v612), (((v613))+(*id_1969/*lop i64R ++ i64R x*/(&(*(((v615)=id_1907/*lop i64 i64*/()), (&(v615))))))));
} panic("reached function end without returning anything op Range<i64> ..= i64 begin i64 end\n");}

id_1863/*Range<i64>*/ id_2197/*lop Range<i64> ..= i64 end*/(i64 v616) {{
  i64 v620; /*tmp_rval_619*/
  i64 v618; /*tmp_rval_617*/
  return id_2190/*op Range<i64> .. i64 begin i64 end*/(*id_1969/*lop i64R ++ i64R x*/(&(*(((v618)=(~(id_1907/*lop i64 i64*/()))), (&(v618))))), (((v616))+(*id_1969/*lop i64R ++ i64R x*/(&(*(((v620)=(~(id_1907/*lop i64 i64*/()))), (&(v620))))))));
} panic("reached function end without returning anything lop Range<i64> ..= i64 end\n");}

id_1863/*Range<i64>*/ id_2198/*lop Range<i64> ..=- i64 end*/(i64 v621) {{
  i64 v625; /*tmp_rval_624*/
  i64 v623; /*tmp_rval_622*/
  return id_2190/*op Range<i64> .. i64 begin i64 end*/(*id_1969/*lop i64R ++ i64R x*/(&(*(((v623)=(~(id_1907/*lop i64 i64*/()))), (&(v623))))), (((-((v621))))+(*id_1969/*lop i64R ++ i64R x*/(&(*(((v625)=(~(id_1907/*lop i64 i64*/()))), (&(v625))))))));
} panic("reached function end without returning anything lop Range<i64> ..=- i64 end\n");}

bool id_2199/*op bool == i64 i Range<i64> r*/(i64 v626, id_1863/*Range<i64>*/ v627) {{
  if (((((&(v627))->id_1890/*begin*/))<(((&(v627))->id_1891/*end*/)))) {
    return ((((((&(v627))->id_1890/*begin*/))<=((v626))))&&((((v626))<(((&(v627))->id_1891/*end*/)))));
  } else {
    return ((((((&(v627))->id_1891/*end*/))<=((v626))))&&((((v626))<(((&(v627))->id_1890/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i64 i Range<i64> r\n");}

id_1865/*RangeIterRange<i64>*/ id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_1863/*Range<i64>*/ v639) {{
  return id_2186/*lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end*/(id_2180/*lop RangeIter<i64> RangeIter<i64> i64 val*/(((&(v639))->id_1890/*begin*/)), id_2180/*lop RangeIter<i64> RangeIter<i64> i64 val*/(((&(v639))->id_1891/*end*/)));
} panic("reached function end without returning anything lop RangeIterRange<i64> iter Range<i64> r\n");}

id_1867/*RangeIter<char>*/ id_2201/*lop RangeIter<char> RangeIter<char> char val*/(char v674) {{
  id_1867/*RangeIter<char>*/ v675; /*slf*/
  (((&(v675))->id_1892/*val*/)=(v674));
  return (v675);
} panic("reached function end without returning anything lop RangeIter<char> RangeIter<char> char val\n");}

void id_2202/*lop void ++ RangeIter<char>R slf*/(id_1867/*RangeIter<char>*/* v676){
  *id_2039/*lop charR ++ charR x*/(&((&(*v676))->id_1892/*val*/));
}

char id_2203/*lop char * RangeIter<char> slf*/(id_1867/*RangeIter<char>*/ v677) {{
  return ((&(v677))->id_1892/*val*/);
} panic("reached function end without returning anything lop char * RangeIter<char> slf\n");}

bool id_2204/*op bool != RangeIter<char> a RangeIter<char> b*/(id_1867/*RangeIter<char>*/ v678, id_1867/*RangeIter<char>*/ v679) {{
  return ((((&(v678))->id_1892/*val*/))!=(((&(v679))->id_1892/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<char> a RangeIter<char> b\n");}

id_1867/*RangeIter<char>*/ id_2205/*op RangeIter<char> .call.begin RangeIterRange<char>P slf*/(id_1868/*RangeIterRange<char>*/* v680) {{
  return (((v680))->id_1890/*begin*/);
} panic("reached function end without returning anything op RangeIter<char> .call.begin RangeIterRange<char>P slf\n");}

id_1867/*RangeIter<char>*/ id_2206/*op RangeIter<char> .call.end RangeIterRange<char>P slf*/(id_1868/*RangeIterRange<char>*/* v681) {{
  return (((v681))->id_1891/*end*/);
} panic("reached function end without returning anything op RangeIter<char> .call.end RangeIterRange<char>P slf\n");}

id_1868/*RangeIterRange<char>*/ id_2207/*lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end*/(id_1867/*RangeIter<char>*/ v682, id_1867/*RangeIter<char>*/ v683) {{
  id_1868/*RangeIterRange<char>*/ v684; /*slf*/
  (((&(v684))->id_1890/*begin*/)=(v682));
  (((&(v684))->id_1891/*end*/)=(v683));
  return (v684);
} panic("reached function end without returning anything lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end\n");}

char id_2208/*op char .call.begin Range<char>P slf*/(id_1866/*Range<char>*/* v641) {{
  return (((v641))->id_1890/*begin*/);
} panic("reached function end without returning anything op char .call.begin Range<char>P slf\n");}

char id_2209/*op char .call.end Range<char>P slf*/(id_1866/*Range<char>*/* v642) {{
  return (((v642))->id_1891/*end*/);
} panic("reached function end without returning anything op char .call.end Range<char>P slf\n");}

id_1866/*Range<char>*/ id_2210/*lop Range<char> Range<char> char begin char end*/(char v643, char v644) {{
  id_1866/*Range<char>*/ v645; /*slf*/
  (((&(v645))->id_1890/*begin*/)=(v643));
  (((&(v645))->id_1891/*end*/)=(v644));
  return (v645);
} panic("reached function end without returning anything lop Range<char> Range<char> char begin char end\n");}

id_1866/*Range<char>*/ id_2211/*op Range<char> .. char begin char end*/(char v646, char v647) {{
  return id_2210/*lop Range<char> Range<char> char begin char end*/((v646), (v647));
} panic("reached function end without returning anything op Range<char> .. char begin char end\n");}

id_1866/*Range<char>*/ id_2212/*op Range<char> ..- char begin char end*/(char v648, char v649) {{
  return id_2211/*op Range<char> .. char begin char end*/((v648), (-((v649))));
} panic("reached function end without returning anything op Range<char> ..- char begin char end\n");}

id_1866/*Range<char>*/ id_2213/*rop Range<char> .. char begin*/(char v650) {{
  return id_2211/*op Range<char> .. char begin char end*/((v650), (~(id_1913/*lop char char*/())));
} panic("reached function end without returning anything rop Range<char> .. char begin\n");}

id_1866/*Range<char>*/ id_2214/*lop Range<char> .. char end*/(char v651) {{
  char v653; /*tmp_rval_652*/
  return id_2211/*op Range<char> .. char begin char end*/(*id_2039/*lop charR ++ charR x*/(&(*(((v653)=(~(id_1913/*lop char char*/()))), (&(v653))))), (v651));
} panic("reached function end without returning anything lop Range<char> .. char end\n");}

id_1866/*Range<char>*/ id_2215/*lop Range<char> ..- char end*/(char v654) {{
  char v656; /*tmp_rval_655*/
  return id_2211/*op Range<char> .. char begin char end*/(*id_2039/*lop charR ++ charR x*/(&(*(((v656)=(~(id_1913/*lop char char*/()))), (&(v656))))), (-((v654))));
} panic("reached function end without returning anything lop Range<char> ..- char end\n");}

id_1866/*Range<char>*/ id_2216/*lop Range<char> - Range<char> r*/(id_1866/*Range<char>*/ v657) {{
  return id_2211/*op Range<char> .. char begin char end*/((-(((&(v657))->id_1890/*begin*/))), ((&(v657))->id_1891/*end*/));
} panic("reached function end without returning anything lop Range<char> - Range<char> r\n");}

id_1866/*Range<char>*/ id_2217/*op Range<char> ..= char begin char end*/(char v658, char v659) {{
  char v661; /*tmp_rval_660*/
  return id_2211/*op Range<char> .. char begin char end*/((v658), (((v659))+(*id_2039/*lop charR ++ charR x*/(&(*(((v661)=id_1913/*lop char char*/()), (&(v661))))))));
} panic("reached function end without returning anything op Range<char> ..= char begin char end\n");}

id_1866/*Range<char>*/ id_2218/*lop Range<char> ..= char end*/(char v662) {{
  char v666; /*tmp_rval_665*/
  char v664; /*tmp_rval_663*/
  return id_2211/*op Range<char> .. char begin char end*/(*id_2039/*lop charR ++ charR x*/(&(*(((v664)=(~(id_1913/*lop char char*/()))), (&(v664))))), (((v662))+(*id_2039/*lop charR ++ charR x*/(&(*(((v666)=(~(id_1913/*lop char char*/()))), (&(v666))))))));
} panic("reached function end without returning anything lop Range<char> ..= char end\n");}

id_1866/*Range<char>*/ id_2219/*lop Range<char> ..=- char end*/(char v667) {{
  char v671; /*tmp_rval_670*/
  char v669; /*tmp_rval_668*/
  return id_2211/*op Range<char> .. char begin char end*/(*id_2039/*lop charR ++ charR x*/(&(*(((v669)=(~(id_1913/*lop char char*/()))), (&(v669))))), (((-((v667))))+(*id_2039/*lop charR ++ charR x*/(&(*(((v671)=(~(id_1913/*lop char char*/()))), (&(v671))))))));
} panic("reached function end without returning anything lop Range<char> ..=- char end\n");}

bool id_2220/*op bool == char i Range<char> r*/(char v672, id_1866/*Range<char>*/ v673) {{
  if (((((&(v673))->id_1890/*begin*/))<(((&(v673))->id_1891/*end*/)))) {
    return ((((((&(v673))->id_1890/*begin*/))<=((v672))))&&((((v672))<(((&(v673))->id_1891/*end*/)))));
  } else {
    return ((((((&(v673))->id_1891/*end*/))<=((v672))))&&((((v672))<(((&(v673))->id_1890/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == char i Range<char> r\n");}

id_1868/*RangeIterRange<char>*/ id_2221/*lop RangeIterRange<char> iter Range<char> r*/(id_1866/*Range<char>*/ v685) {{
  return id_2207/*lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end*/(id_2201/*lop RangeIter<char> RangeIter<char> char val*/(((&(v685))->id_1890/*begin*/)), id_2201/*lop RangeIter<char> RangeIter<char> char val*/(((&(v685))->id_1891/*end*/)));
} panic("reached function end without returning anything lop RangeIterRange<char> iter Range<char> r\n");}

id_1870/*VecIter<i64>*/ id_2222/*lop VecIter<i64> VecIter<i64> i64P ptr*/(i64* v738) {{
  id_1870/*VecIter<i64>*/ v739; /*slf*/
  (((&(v739))->id_1896/*ptr*/)=(v738));
  return (v739);
} panic("reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n");}

void id_2223/*lop void ++ VecIter<i64>R slf*/(id_1870/*VecIter<i64>*/* v740){
  (((&(*v740))->id_1896/*ptr*/)=((i64*)((((i64)((&(*v740))->id_1896/*ptr*/)))+(((((i64)1))*((sizeof(i64))))))));
}

id_1870/*VecIter<i64>*/ id_2224/*op VecIter<i64> + VecIter<i64> slf i64 i*/(id_1870/*VecIter<i64>*/ v741, i64 v742) {{
  (((&(v741))->id_1896/*ptr*/)=((i64*)((((i64)((&(v741))->id_1896/*ptr*/)))+((((v742))*((sizeof(i64))))))));
  return (v741);
} panic("reached function end without returning anything op VecIter<i64> + VecIter<i64> slf i64 i\n");}

bool id_2225/*op bool != VecIter<i64> a VecIter<i64> b*/(id_1870/*VecIter<i64>*/ v743, id_1870/*VecIter<i64>*/ v744) {{
  return ((((i64)((&(v743))->id_1896/*ptr*/)))!=(((i64)((&(v744))->id_1896/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<i64> a VecIter<i64> b\n");}

i64* id_2226/*lop i64R * VecIter<i64> slf*/(id_1870/*VecIter<i64>*/ v745) {{
  return &(*((&(v745))->id_1896/*ptr*/));
} panic("reached function end without returning anything lop i64R * VecIter<i64> slf\n");}

id_1870/*VecIter<i64>*/ id_2227/*op VecIter<i64> .call.begin VecIterRange<i64>P slf*/(id_1871/*VecIterRange<i64>*/* v748) {{
  return (((v748))->id_1890/*begin*/);
} panic("reached function end without returning anything op VecIter<i64> .call.begin VecIterRange<i64>P slf\n");}

id_1870/*VecIter<i64>*/ id_2228/*op VecIter<i64> .call.end VecIterRange<i64>P slf*/(id_1871/*VecIterRange<i64>*/* v749) {{
  return (((v749))->id_1891/*end*/);
} panic("reached function end without returning anything op VecIter<i64> .call.end VecIterRange<i64>P slf\n");}

id_1871/*VecIterRange<i64>*/ id_2229/*lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end*/(id_1870/*VecIter<i64>*/ v750, id_1870/*VecIter<i64>*/ v751) {{
  id_1871/*VecIterRange<i64>*/ v752; /*slf*/
  (((&(v752))->id_1890/*begin*/)=(v750));
  (((&(v752))->id_1891/*end*/)=(v751));
  return (v752);
} panic("reached function end without returning anything lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end\n");}

i64* id_2230/*op i64P .call.atP Vec<i64>P slf i64 pos*/(id_1869/*Vec<i64>*/* v692, i64 v693) {{
  return ((i64*)((i64*)((((i64)(((v692))->id_1894/*head*/)))+((((v693))*((sizeof(i64))))))));
} panic("reached function end without returning anything op i64P .call.atP Vec<i64>P slf i64 pos\n");}

i64* id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/(id_1869/*Vec<i64>*/* v694, i64 v695) {{
  return &(*id_2230/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v694), (v695)));
} panic("reached function end without returning anything op i64R .call.at Vec<i64>P slf i64 pos\n");}

void id_2232/*op void .call.print Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v696){
  (printf("%s", ((str)"[")));
  {
      i64 v704; /*i*/
      id_1864/*RangeIter<i64>*/ v703; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v702; /*tmp_rval_701*/
      id_1864/*RangeIter<i64>*/ v700; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v699; /*tmp_rval_698*/
      id_1865/*RangeIterRange<i64>*/ v697; /*__range*/
      ((v697)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v696))->id_1895/*size*/))));
      ((v703)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v702)=(v697)), (&(v702)))))));
      ((v700)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v699)=(v697)), (&(v699)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v700), (v703))) {
        ((v704)=id_2182/*lop i64 * RangeIter<i64> slf*/((v700)));
        if ((!((!((v704)))))) {
          (printf("%s", ((str)", ")));
        }
        (printf("%lld", (*id_2230/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v696), (v704)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v700));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2233/*op void .call.println Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v705){
  {
      i64 v713; /*i*/
      id_1864/*RangeIter<i64>*/ v712; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v711; /*tmp_rval_710*/
      id_1864/*RangeIter<i64>*/ v709; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v708; /*tmp_rval_707*/
      id_1865/*RangeIterRange<i64>*/ v706; /*__range*/
      ((v706)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v705))->id_1895/*size*/))));
      ((v712)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v711)=(v706)), (&(v711)))))));
      ((v709)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v708)=(v706)), (&(v708)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v709), (v712))) {
        ((v713)=id_2182/*lop i64 * RangeIter<i64> slf*/((v709)));
        (printf("%lld\n", (*id_2230/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v705), (v713)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v709));
      }
    }
}

void id_2234/*op void .call.double_cap Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v714){
  i64 v715; /*ncap*/
  ((v715)=(((v714))->id_1893/*cap*/));
  if ((((v715))==(((i64)0)))) {
    ((v715)=((i64)1));
    ((((v714))->id_1894/*head*/)=((i64*)(alloc((sizeof(i64))))));
    ((((v714))->id_1893/*cap*/)=(v715));
  } else {
    i64* v716; /*new_head*/
    id_1963/*op void *= i64R a i64 b*/(&(v715), ((i64)2));
    ((v716)=((i64*)(alloc((((v715))*((sizeof(i64))))))));
    {
        i64 v724; /*i*/
        id_1864/*RangeIter<i64>*/ v723; /*__end*/
        id_1865/*RangeIterRange<i64>*/ v722; /*tmp_rval_721*/
        id_1864/*RangeIter<i64>*/ v720; /*__cur*/
        id_1865/*RangeIterRange<i64>*/ v719; /*tmp_rval_718*/
        id_1865/*RangeIterRange<i64>*/ v717; /*__range*/
        ((v717)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v714))->id_1895/*size*/))));
        ((v723)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v722)=(v717)), (&(v722)))))));
        ((v720)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v719)=(v717)), (&(v719)))))));
        while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v720), (v723))) {
          ((v724)=id_2182/*lop i64 * RangeIter<i64> slf*/((v720)));
          ((*((i64*)((((i64)(v716)))+((((v724))*((sizeof(i64))))))))=*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((v714), (v724)));
          id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v720));
        }
      }
    (free((void*) ((i64)(((v714))->id_1894/*head*/))));
    ((((v714))->id_1894/*head*/)=(v716));
  }
  ((((v714))->id_1893/*cap*/)=(v715));
}

void id_2235/*op void .call.push_back Vec<i64>P slf i64 val*/(id_1869/*Vec<i64>*/* v725, i64 v726){
  if ((((((v725))->id_1895/*size*/))==((((v725))->id_1893/*cap*/)))) {
    id_2234/*op void .call.double_cap Vec<i64>P slf*/((v725));
  }
  (*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((v725), (((v725))->id_1895/*size*/))=(v726));
  *id_1969/*lop i64R ++ i64R x*/(&(((v725))->id_1895/*size*/));
}

void id_2236/*op void .call.pop_back Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v727){
  *id_1970/*lop i64R -- i64R x*/(&(((v727))->id_1895/*size*/));
}

void id_2237/*op void .call.erase Vec<i64>P slf i64 pos*/(id_1869/*Vec<i64>*/* v728, i64 v729){
  {
      i64 v737; /*i*/
      id_1864/*RangeIter<i64>*/ v736; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v735; /*tmp_rval_734*/
      id_1864/*RangeIter<i64>*/ v733; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v732; /*tmp_rval_731*/
      id_1865/*RangeIterRange<i64>*/ v730; /*__range*/
      ((v730)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((((v729))+(((i64)1))), (((v728))->id_1895/*size*/))));
      ((v736)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v735)=(v730)), (&(v735)))))));
      ((v733)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v732)=(v730)), (&(v732)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v733), (v736))) {
        ((v737)=id_2182/*lop i64 * RangeIter<i64> slf*/((v733)));
        (*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((v728), (((v737))-(((i64)1))))=*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((v728), (v737)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v733));
      }
    }
  id_2236/*op void .call.pop_back Vec<i64>P slf*/((v728));
}

id_1870/*VecIter<i64>*/ id_2238/*op VecIter<i64> .call.begin Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v746) {{
  return id_2222/*lop VecIter<i64> VecIter<i64> i64P ptr*/((((v746))->id_1894/*head*/));
} panic("reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P slf\n");}

id_1870/*VecIter<i64>*/ id_2239/*op VecIter<i64> .call.end Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v747) {{
  return id_2222/*lop VecIter<i64> VecIter<i64> i64P ptr*/(id_2230/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v747), (((v747))->id_1895/*size*/)));
} panic("reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P slf\n");}

id_1871/*VecIterRange<i64>*/ id_2240/*lop VecIterRange<i64> iter Vec<i64>R slf*/(id_1869/*Vec<i64>*/* v753) {{
  id_1871/*VecIterRange<i64>*/ v754; /*it*/
  (((&(v754))->id_1890/*begin*/)=id_2238/*op VecIter<i64> .call.begin Vec<i64>P slf*/((&(*v753))));
  (((&(v754))->id_1891/*end*/)=id_2239/*op VecIter<i64> .call.end Vec<i64>P slf*/((&(*v753))));
  return (v754);
} panic("reached function end without returning anything lop VecIterRange<i64> iter Vec<i64>R slf\n");}

i64* id_2241/*op i64R .call.front Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v755) {{
  return &(*(((v755))->id_1894/*head*/));
} panic("reached function end without returning anything op i64R .call.front Vec<i64>P slf\n");}

i64* id_2242/*op i64R .call.back Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v756) {{
  return &(*id_2230/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v756), (((((v756))->id_1895/*size*/))-(((i64)1)))));
} panic("reached function end without returning anything op i64R .call.back Vec<i64>P slf\n");}

void id_2243/*op void .call.dtor Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v757){
  ((i64)0);
}

id_1869/*Vec<i64>*/ id_2244/*lop Vec<i64> Vec<i64> i64 size*/(i64 v758) {{
  id_1869/*Vec<i64>*/ v759; /*slf*/
  (((&(v759))->id_1894/*head*/)=((i64*)((i64)0)));
  (((&(v759))->id_1895/*size*/)=((i64)0));
  (((&(v759))->id_1893/*cap*/)=((i64)0));
  while (((((&(v759))->id_1893/*cap*/))<((v758)))) {
    id_2234/*op void .call.double_cap Vec<i64>P slf*/((&(v759)));
  }
  (((&(v759))->id_1895/*size*/)=(v758));
  (((&(v759))->id_1893/*cap*/)=(v758));
  {
      i64 v767; /*i*/
      id_1864/*RangeIter<i64>*/ v766; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v765; /*tmp_rval_764*/
      id_1864/*RangeIter<i64>*/ v763; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v762; /*tmp_rval_761*/
      id_1865/*RangeIterRange<i64>*/ v760; /*__range*/
      ((v760)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v759))->id_1895/*size*/))));
      ((v766)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v765)=(v760)), (&(v765)))))));
      ((v763)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v762)=(v760)), (&(v762)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v763), (v766))) {
        ((v767)=id_2182/*lop i64 * RangeIter<i64> slf*/((v763)));
        (*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v759)), (v767))=id_1907/*lop i64 i64*/());
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v763));
      }
    }
  return (v759);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v759)));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n");}

id_1869/*Vec<i64>*/ id_2245/*lop Vec<i64> Vec<i64> i64 size i64 default*/(i64 v768, i64 v769) {{
  id_1869/*Vec<i64>*/ v770; /*slf*/
  ((v770)=id_2244/*lop Vec<i64> Vec<i64> i64 size*/((v768)));
  {
      i64 v778; /*i*/
      id_1865/*RangeIterRange<i64>*/ v776; /*tmp_rval_775*/
      id_1864/*RangeIter<i64>*/ v774; /*__cur*/
      id_1864/*RangeIter<i64>*/ v777; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v773; /*tmp_rval_772*/
      id_1865/*RangeIterRange<i64>*/ v771; /*__range*/
      ((v771)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v770))->id_1895/*size*/))));
      ((v777)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v776)=(v771)), (&(v776)))))));
      ((v774)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v773)=(v771)), (&(v773)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v774), (v777))) {
        ((v778)=id_2182/*lop i64 * RangeIter<i64> slf*/((v774)));
        (*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v770)), (v778))=(v769));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v774));
      }
    }
  return (v770);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v770)));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n");}

id_1869/*Vec<i64>*/ id_2246/*lop Vec<i64> Vec<i64>*/() {{
  return id_2244/*lop Vec<i64> Vec<i64> i64 size*/(((i64)0));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64>\n");}

id_1869/*Vec<i64>*/ id_2247/*lop Vec<i64> Vec<i64> Vec<i64>R other*/(id_1869/*Vec<i64>*/* v779) {{
  id_1869/*Vec<i64>*/ v780; /*slf*/
  ((v780)=id_2244/*lop Vec<i64> Vec<i64> i64 size*/(((&(*v779))->id_1895/*size*/)));
  {
      i64 v788; /*i*/
      id_1864/*RangeIter<i64>*/ v787; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v786; /*tmp_rval_785*/
      id_1864/*RangeIter<i64>*/ v784; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v783; /*tmp_rval_782*/
      id_1865/*RangeIterRange<i64>*/ v781; /*__range*/
      ((v781)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v779))->id_1895/*size*/))));
      ((v787)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v786)=(v781)), (&(v786)))))));
      ((v784)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v783)=(v781)), (&(v783)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v784), (v787))) {
        ((v788)=id_2182/*lop i64 * RangeIter<i64> slf*/((v784)));
        (*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v780)), (v788))=*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(*v779)), (v788)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v784));
      }
    }
  return (v780);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v780)));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n");}

void id_2248/*op void += Vec<i64>R slf i64 val*/(id_1869/*Vec<i64>*/* v789, i64 v790){
  id_2235/*op void .call.push_back Vec<i64>P slf i64 val*/((&(*v789)), (v790));
}

void id_2249/*op void += Vec<i64>R slf Vec<i64>R other*/(id_1869/*Vec<i64>*/* v791, id_1869/*Vec<i64>*/* v792){
  {
      i64 v800; /*i*/
      id_1864/*RangeIter<i64>*/ v799; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v798; /*tmp_rval_797*/
      id_1864/*RangeIter<i64>*/ v796; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v795; /*tmp_rval_794*/
      id_1865/*RangeIterRange<i64>*/ v793; /*__range*/
      ((v793)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v792))->id_1895/*size*/))));
      ((v799)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v798)=(v793)), (&(v798)))))));
      ((v796)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v795)=(v793)), (&(v795)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v796), (v799))) {
        ((v800)=id_2182/*lop i64 * RangeIter<i64> slf*/((v796)));
        id_2235/*op void .call.push_back Vec<i64>P slf i64 val*/((&(*v791)), *id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(*v792)), (v800)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v796));
      }
    }
}

id_1869/*Vec<i64>*/ id_2250/*op Vec<i64> ,, i64 a i64 b*/(i64 v801, i64 v802) {{
  id_1869/*Vec<i64>*/ v803; /*slf*/
  ((v803)=id_2246/*lop Vec<i64> Vec<i64>*/());
  id_2248/*op void += Vec<i64>R slf i64 val*/(&(v803), (v801));
  id_2248/*op void += Vec<i64>R slf i64 val*/(&(v803), (v802));
  return (v803);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v803)));
} panic("reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n");}

id_1869/*Vec<i64>*/* id_2251/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(id_1869/*Vec<i64>*/* v804, i64 v805) {{
  id_2248/*op void += Vec<i64>R slf i64 val*/(&(*v804), (v805));
  return &(*v804);
} panic("reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n");}

void id_2252/*lop void put Vec<i64>R slf*/(id_1869/*Vec<i64>*/* v806){
  id_2232/*op void .call.print Vec<i64>P slf*/((&(*v806)));
}

void id_2253/*lop void out Vec<i64>R slf*/(id_1869/*Vec<i64>*/* v807){
  id_2232/*op void .call.print Vec<i64>P slf*/((&(*v807)));
  (printf("%s\n", ((str)"")));
}

id_1853/*Out*/ id_2254/*rop Out < Vec<i64>R i*/(id_1869/*Vec<i64>*/* v808) {{
  id_2253/*lop void out Vec<i64>R slf*/(&(*v808));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < Vec<i64>R i\n");}

id_1853/*Out*/ id_2255/*lop Out < Vec<i64>R i*/(id_1869/*Vec<i64>*/* v809) {{
  (id_2252/*lop void put Vec<i64>R slf*/(&(*v809)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < Vec<i64>R i\n");}

id_1853/*Out*/ id_2256/*op Out < Out o Vec<i64>R i*/(id_1853/*Out*/ v810, id_1869/*Vec<i64>*/* v811) {{
  (id_2252/*lop void put Vec<i64>R slf*/(&(*v811)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o Vec<i64>R i\n");}

i64* id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/(id_1869/*Vec<i64>*/* v812, i64 v813) {{
  if ((((v813))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v813), (((v812))->id_1895/*size*/));
  }
  return &*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((v812), (v813));
} panic("reached function end without returning anything op i64R .call.sub Vec<i64>P slf i64 id\n");}

id_1869/*Vec<i64>*/ id_2258/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/(id_1869/*Vec<i64>*/* v814, i64 v815, i64 v816) {{
  id_1869/*Vec<i64>*/ v817; /*res*/
  ((v817)=id_2244/*lop Vec<i64> Vec<i64> i64 size*/(((i64)0)));
  {
      i64 v825; /*i*/
      id_1864/*RangeIter<i64>*/ v824; /*__end*/
      id_1864/*RangeIter<i64>*/ v821; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v820; /*tmp_rval_819*/
      id_1865/*RangeIterRange<i64>*/ v823; /*tmp_rval_822*/
      id_1865/*RangeIterRange<i64>*/ v818; /*__range*/
      ((v818)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((v815), (v816))));
      ((v824)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v823)=(v818)), (&(v823)))))));
      ((v821)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v820)=(v818)), (&(v820)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v821), (v824))) {
        ((v825)=id_2182/*lop i64 * RangeIter<i64> slf*/((v821)));
        id_2235/*op void .call.push_back Vec<i64>P slf i64 val*/((&(v817)), *id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((v814), (v825)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v821));
      }
    }
  return (v817);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v817)));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end\n");}

id_1869/*Vec<i64>*/ id_2259/*op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r*/(id_1869/*Vec<i64>*/* v826, id_1863/*Range<i64>*/ v827) {{
  i64 v829; /*end*/
  i64 v828; /*begin*/
  (((v828)=((&(v827))->id_1890/*begin*/)), ((v829)=((&(v827))->id_1891/*end*/)));
  if ((((v828))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v828), (((v826))->id_1895/*size*/));
  }
  if ((((v828))<(((i64)0)))) {
    ((v828)=((i64)0));
  }
  if ((((v829))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v829), (((v826))->id_1895/*size*/));
  }
  if ((((v829))>((((v826))->id_1895/*size*/)))) {
    ((v829)=(((v826))->id_1895/*size*/));
  }
  return id_2258/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((v826), (v828), (v829));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r\n");}

id_1869/*Vec<i64>*/ id_2260/*op Vec<i64> .call.sub Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v830) {{
  return id_2258/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((v830), ((i64)0), (((v830))->id_1895/*size*/));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf\n");}

bool id_2261/*op bool < Vec<i64>R a Vec<i64>R b*/(id_1869/*Vec<i64>*/* v831, id_1869/*Vec<i64>*/* v832) {{
  {
      i64 v840; /*i*/
      id_1864/*RangeIter<i64>*/ v839; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v838; /*tmp_rval_837*/
      id_1864/*RangeIter<i64>*/ v836; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v835; /*tmp_rval_834*/
      id_1865/*RangeIterRange<i64>*/ v833; /*__range*/
      ((v833)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), id_1915/*lop i64 min i64 a i64 b*/(((&(*v831))->id_1895/*size*/), ((&(*v832))->id_1895/*size*/)))));
      ((v839)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v838)=(v833)), (&(v838)))))));
      ((v836)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v835)=(v833)), (&(v835)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v836), (v839))) {
        ((v840)=id_2182/*lop i64 * RangeIter<i64> slf*/((v836)));
        if (((*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v831)), (v840)))<(*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v832)), (v840))))) {
          return ((bool)1);
        }
 else if (((*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v832)), (v840)))<(*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v831)), (v840))))) {
          return ((bool)0);
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v836));
      }
    }
  if (((((&(*v831))->id_1895/*size*/))<(((&(*v832))->id_1895/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v831))->id_1895/*size*/))>(((&(*v832))->id_1895/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n");}

void id_2262/*lop void swap i64P a i64P b*/(i64* v841, i64* v842){
  i64 v843; /*t*/
  ((v843)=(*(v841)));
  ((*(v841))=(*(v842)));
  ((*(v842))=(v843));
}

i64* id_2263/*lop i64P partition i64P lo i64P hi*/(i64* v844, i64* v845) {{
  i64* v848; /*j*/
  i64* v847; /*i*/
  i64* v846; /*pivot*/
  (((v846)=((i64*)((((i64)(v845)))-(((((i64)1))*((sizeof(i64)))))))), ((v847)=(v844)), ((v848)=(v844)));
  ((v848)=(v844));
  while (((((i64)(v848)))!=(((i64)(v846))))) {
    if ((((*(v848)))<((*(v846))))) {
      id_2262/*lop void swap i64P a i64P b*/((v847), (v848));
      ((v847)=((i64*)((((i64)(v847)))+(((((i64)1))*((sizeof(i64))))))));
    }
    ((v848)=((i64*)((((i64)(v848)))+(((((i64)1))*((sizeof(i64))))))));
  }
  id_2262/*lop void swap i64P a i64P b*/((v847), (v846));
  return (v847);
} panic("reached function end without returning anything lop i64P partition i64P lo i64P hi\n");}

void id_2264/*lop void qsort i64P lhs i64P rhs*/(i64* v849, i64* v850){
  i64 v852; /*b*/
  i64 v851; /*a*/
  ((v851)=((((i64)(v850)))-(((i64)(v849)))));
  ((v852)=(sizeof(i64)));
  if ((((v851))>((v852)))) {
    i64* v853; /*pi*/
    ((v853)=id_2263/*lop i64P partition i64P lo i64P hi*/((v849), (v850)));
    id_2264/*lop void qsort i64P lhs i64P rhs*/((v849), (v853));
    ((v853)=((i64*)((((i64)(v853)))+(((((i64)1))*((sizeof(i64))))))));
    id_2264/*lop void qsort i64P lhs i64P rhs*/((v853), (v850));
  }
}

void id_2265/*op void .call.sort Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v854){
  id_1870/*VecIter<i64>*/ v858; /*tmp_rval_857*/
  id_1870/*VecIter<i64>*/ v856; /*tmp_rval_855*/
  id_2264/*lop void qsort i64P lhs i64P rhs*/(((&(*(((v856)=id_2238/*op VecIter<i64> .call.begin Vec<i64>P slf*/((v854))), (&(v856)))))->id_1896/*ptr*/), ((&(*(((v858)=id_2239/*op VecIter<i64> .call.end Vec<i64>P slf*/((v854))), (&(v858)))))->id_1896/*ptr*/));
}

void id_2266/*lop void sort Vec<i64>R slf*/(id_1869/*Vec<i64>*/* v859){
  id_2265/*op void .call.sort Vec<i64>P slf*/((&(*v859)));
}

i64 id_2267/*op i64 .call.max Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v860) {{
  i64 v861; /*tmp*/
  ((v861)=*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((v860), ((i64)0)));
  {
      id_1870/*VecIter<i64>*/ v868; /*__end*/
      id_1871/*VecIterRange<i64>*/ v867; /*tmp_rval_866*/
      id_1870/*VecIter<i64>*/ v865; /*__cur*/
      i64 v869; /*i*/
      id_1871/*VecIterRange<i64>*/ v864; /*tmp_rval_863*/
      id_1871/*VecIterRange<i64>*/ v862; /*__range*/
      ((v862)=id_2240/*lop VecIterRange<i64> iter Vec<i64>R slf*/(&(*(v860))));
      ((v868)=id_2228/*op VecIter<i64> .call.end VecIterRange<i64>P slf*/((&(*(((v867)=(v862)), (&(v867)))))));
      ((v865)=id_2227/*op VecIter<i64> .call.begin VecIterRange<i64>P slf*/((&(*(((v864)=(v862)), (&(v864)))))));
      while (id_2225/*op bool != VecIter<i64> a VecIter<i64> b*/((v865), (v868))) {
        ((v869)=*id_2226/*lop i64R * VecIter<i64> slf*/((v865)));
        if ((((v861))<((v869)))) {
          ((v861)=(v869));
        }
        id_2223/*lop void ++ VecIter<i64>R slf*/(&(v865));
      }
    }
  return (v861);
} panic("reached function end without returning anything op i64 .call.max Vec<i64>P slf\n");}

i64 id_2268/*op i64 .call.min Vec<i64>P slf*/(id_1869/*Vec<i64>*/* v870) {{
  i64 v871; /*tmp*/
  ((v871)=*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((v870), ((i64)0)));
  {
      i64 v879; /*i*/
      id_1870/*VecIter<i64>*/ v878; /*__end*/
      id_1871/*VecIterRange<i64>*/ v877; /*tmp_rval_876*/
      id_1870/*VecIter<i64>*/ v875; /*__cur*/
      id_1871/*VecIterRange<i64>*/ v874; /*tmp_rval_873*/
      id_1871/*VecIterRange<i64>*/ v872; /*__range*/
      ((v872)=id_2240/*lop VecIterRange<i64> iter Vec<i64>R slf*/(&(*(v870))));
      ((v878)=id_2228/*op VecIter<i64> .call.end VecIterRange<i64>P slf*/((&(*(((v877)=(v872)), (&(v877)))))));
      ((v875)=id_2227/*op VecIter<i64> .call.begin VecIterRange<i64>P slf*/((&(*(((v874)=(v872)), (&(v874)))))));
      while (id_2225/*op bool != VecIter<i64> a VecIter<i64> b*/((v875), (v878))) {
        ((v879)=*id_2226/*lop i64R * VecIter<i64> slf*/((v875)));
        if ((((v879))<((v871)))) {
          ((v871)=(v879));
        }
        id_2223/*lop void ++ VecIter<i64>R slf*/(&(v875));
      }
    }
  return (v871);
} panic("reached function end without returning anything op i64 .call.min Vec<i64>P slf\n");}

id_1869/*Vec<i64>*/ id_2269/*op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f*/(id_1869/*Vec<i64>*/* v880, i64(*v881)(i64*)) {{
  id_1869/*Vec<i64>*/ v882; /*r*/
  ((v882)=id_2244/*lop Vec<i64> Vec<i64> i64 size*/((((v880))->id_1895/*size*/)));
  {
      i64 v890; /*i*/
      id_1864/*RangeIter<i64>*/ v889; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v888; /*tmp_rval_887*/
      id_1864/*RangeIter<i64>*/ v886; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v885; /*tmp_rval_884*/
      id_1865/*RangeIterRange<i64>*/ v883; /*__range*/
      ((v883)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v880))->id_1895/*size*/))));
      ((v889)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v888)=(v883)), (&(v888)))))));
      ((v886)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v885)=(v883)), (&(v885)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v886), (v889))) {
        ((v890)=id_2182/*lop i64 * RangeIter<i64> slf*/((v886)));
        (*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v882)), (v890))=((*(v881))(&*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((v880), (v890)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v886));
      }
    }
  return (v882);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v882)));
} panic("reached function end without returning anything op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f\n");}

id_1869/*Vec<i64>*/ id_2270/*op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f*/(id_1869/*Vec<i64>*/* v891, bool(*v892)(i64*)) {{
  id_1869/*Vec<i64>*/ v893; /*r*/
  ((v893)=id_2246/*lop Vec<i64> Vec<i64>*/());
  {
      i64 v901; /*i*/
      id_1864/*RangeIter<i64>*/ v900; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v899; /*tmp_rval_898*/
      id_1864/*RangeIter<i64>*/ v897; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v896; /*tmp_rval_895*/
      id_1865/*RangeIterRange<i64>*/ v894; /*__range*/
      ((v894)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v891))->id_1895/*size*/))));
      ((v900)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v899)=(v894)), (&(v899)))))));
      ((v897)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v896)=(v894)), (&(v896)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v897), (v900))) {
        ((v901)=id_2182/*lop i64 * RangeIter<i64> slf*/((v897)));
        if (((*(v892))(&*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((v891), (v901))))) {
          id_2248/*op void += Vec<i64>R slf i64 val*/(&(v893), *id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((v891), (v901)));
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v897));
      }
    }
  return (v893);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v893)));
} panic("reached function end without returning anything op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f\n");}

id_1869/*Vec<i64>*/ id_2271/*lop Vec<i64> iota i64 begin i64 end*/(i64 v902, i64 v903) {{
  id_1869/*Vec<i64>*/ v904; /*v*/
  ((v904)=id_2244/*lop Vec<i64> Vec<i64> i64 size*/((((v903))-((v902)))));
  {
      i64 v912; /*i*/
      id_1864/*RangeIter<i64>*/ v911; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v910; /*tmp_rval_909*/
      id_1864/*RangeIter<i64>*/ v908; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v907; /*tmp_rval_906*/
      id_1865/*RangeIterRange<i64>*/ v905; /*__range*/
      ((v905)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((v902), (v903))));
      ((v911)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v910)=(v905)), (&(v910)))))));
      ((v908)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v907)=(v905)), (&(v907)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v908), (v911))) {
        ((v912)=id_2182/*lop i64 * RangeIter<i64> slf*/((v908)));
        (*id_2231/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v904)), (((v912))-((v902))))=(v912));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v908));
      }
    }
  return (v904);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v904)));
} panic("reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n");}

id_1873/*VecIter<bool>*/ id_2272/*lop VecIter<bool> VecIter<bool> boolP ptr*/(bool* v959) {{
  id_1873/*VecIter<bool>*/ v960; /*slf*/
  (((&(v960))->id_1896/*ptr*/)=(v959));
  return (v960);
} panic("reached function end without returning anything lop VecIter<bool> VecIter<bool> boolP ptr\n");}

void id_2273/*lop void ++ VecIter<bool>R slf*/(id_1873/*VecIter<bool>*/* v961){
  (((&(*v961))->id_1896/*ptr*/)=((bool*)((((i64)((&(*v961))->id_1896/*ptr*/)))+(((((i64)1))*((sizeof(bool))))))));
}

id_1873/*VecIter<bool>*/ id_2274/*op VecIter<bool> + VecIter<bool> slf i64 i*/(id_1873/*VecIter<bool>*/ v962, i64 v963) {{
  (((&(v962))->id_1896/*ptr*/)=((bool*)((((i64)((&(v962))->id_1896/*ptr*/)))+((((v963))*((sizeof(bool))))))));
  return (v962);
} panic("reached function end without returning anything op VecIter<bool> + VecIter<bool> slf i64 i\n");}

bool id_2275/*op bool != VecIter<bool> a VecIter<bool> b*/(id_1873/*VecIter<bool>*/ v964, id_1873/*VecIter<bool>*/ v965) {{
  return ((((i64)((&(v964))->id_1896/*ptr*/)))!=(((i64)((&(v965))->id_1896/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<bool> a VecIter<bool> b\n");}

bool* id_2276/*lop boolR * VecIter<bool> slf*/(id_1873/*VecIter<bool>*/ v966) {{
  return &(*((&(v966))->id_1896/*ptr*/));
} panic("reached function end without returning anything lop boolR * VecIter<bool> slf\n");}

id_1873/*VecIter<bool>*/ id_2277/*op VecIter<bool> .call.begin VecIterRange<bool>P slf*/(id_1874/*VecIterRange<bool>*/* v969) {{
  return (((v969))->id_1890/*begin*/);
} panic("reached function end without returning anything op VecIter<bool> .call.begin VecIterRange<bool>P slf\n");}

id_1873/*VecIter<bool>*/ id_2278/*op VecIter<bool> .call.end VecIterRange<bool>P slf*/(id_1874/*VecIterRange<bool>*/* v970) {{
  return (((v970))->id_1891/*end*/);
} panic("reached function end without returning anything op VecIter<bool> .call.end VecIterRange<bool>P slf\n");}

id_1874/*VecIterRange<bool>*/ id_2279/*lop VecIterRange<bool> VecIterRange<bool> VecIter<bool> begin VecIter<bool> end*/(id_1873/*VecIter<bool>*/ v971, id_1873/*VecIter<bool>*/ v972) {{
  id_1874/*VecIterRange<bool>*/ v973; /*slf*/
  (((&(v973))->id_1890/*begin*/)=(v971));
  (((&(v973))->id_1891/*end*/)=(v972));
  return (v973);
} panic("reached function end without returning anything lop VecIterRange<bool> VecIterRange<bool> VecIter<bool> begin VecIter<bool> end\n");}

bool* id_2280/*op boolP .call.atP Vec<bool>P slf i64 pos*/(id_1872/*Vec<bool>*/* v913, i64 v914) {{
  return ((bool*)((bool*)((((i64)(((v913))->id_1894/*head*/)))+((((v914))*((sizeof(bool))))))));
} panic("reached function end without returning anything op boolP .call.atP Vec<bool>P slf i64 pos\n");}

bool* id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/(id_1872/*Vec<bool>*/* v915, i64 v916) {{
  return &(*id_2280/*op boolP .call.atP Vec<bool>P slf i64 pos*/((v915), (v916)));
} panic("reached function end without returning anything op boolR .call.at Vec<bool>P slf i64 pos\n");}

void id_2282/*op void .call.print Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v917){
  (printf("%s", ((str)"[")));
  {
      i64 v925; /*i*/
      id_1864/*RangeIter<i64>*/ v924; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v923; /*tmp_rval_922*/
      id_1864/*RangeIter<i64>*/ v921; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v920; /*tmp_rval_919*/
      id_1865/*RangeIterRange<i64>*/ v918; /*__range*/
      ((v918)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v917))->id_1895/*size*/))));
      ((v924)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v923)=(v918)), (&(v923)))))));
      ((v921)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v920)=(v918)), (&(v920)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v921), (v924))) {
        ((v925)=id_2182/*lop i64 * RangeIter<i64> slf*/((v921)));
        if ((!((!((v925)))))) {
          (printf("%s", ((str)", ")));
        }
        (printf("%d", (*id_2280/*op boolP .call.atP Vec<bool>P slf i64 pos*/((v917), (v925)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v921));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2283/*op void .call.println Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v926){
  {
      i64 v934; /*i*/
      id_1864/*RangeIter<i64>*/ v933; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v932; /*tmp_rval_931*/
      id_1864/*RangeIter<i64>*/ v930; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v929; /*tmp_rval_928*/
      id_1865/*RangeIterRange<i64>*/ v927; /*__range*/
      ((v927)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v926))->id_1895/*size*/))));
      ((v933)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v932)=(v927)), (&(v932)))))));
      ((v930)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v929)=(v927)), (&(v929)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v930), (v933))) {
        ((v934)=id_2182/*lop i64 * RangeIter<i64> slf*/((v930)));
        (printf("%d\n", (*id_2280/*op boolP .call.atP Vec<bool>P slf i64 pos*/((v926), (v934)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v930));
      }
    }
}

void id_2284/*op void .call.double_cap Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v935){
  i64 v936; /*ncap*/
  ((v936)=(((v935))->id_1893/*cap*/));
  if ((((v936))==(((i64)0)))) {
    ((v936)=((i64)1));
    ((((v935))->id_1894/*head*/)=((bool*)(alloc((sizeof(bool))))));
    ((((v935))->id_1893/*cap*/)=(v936));
  } else {
    bool* v937; /*new_head*/
    id_1963/*op void *= i64R a i64 b*/(&(v936), ((i64)2));
    ((v937)=((bool*)(alloc((((v936))*((sizeof(bool))))))));
    {
        i64 v945; /*i*/
        id_1864/*RangeIter<i64>*/ v944; /*__end*/
        id_1865/*RangeIterRange<i64>*/ v943; /*tmp_rval_942*/
        id_1864/*RangeIter<i64>*/ v941; /*__cur*/
        id_1865/*RangeIterRange<i64>*/ v940; /*tmp_rval_939*/
        id_1865/*RangeIterRange<i64>*/ v938; /*__range*/
        ((v938)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v935))->id_1895/*size*/))));
        ((v944)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v943)=(v938)), (&(v943)))))));
        ((v941)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v940)=(v938)), (&(v940)))))));
        while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v941), (v944))) {
          ((v945)=id_2182/*lop i64 * RangeIter<i64> slf*/((v941)));
          ((*((bool*)((((i64)(v937)))+((((v945))*((sizeof(bool))))))))=*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((v935), (v945)));
          id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v941));
        }
      }
    (free((void*) ((i64)(((v935))->id_1894/*head*/))));
    ((((v935))->id_1894/*head*/)=(v937));
  }
  ((((v935))->id_1893/*cap*/)=(v936));
}

void id_2285/*op void .call.push_back Vec<bool>P slf bool val*/(id_1872/*Vec<bool>*/* v946, bool v947){
  if ((((((v946))->id_1895/*size*/))==((((v946))->id_1893/*cap*/)))) {
    id_2284/*op void .call.double_cap Vec<bool>P slf*/((v946));
  }
  (*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((v946), (((v946))->id_1895/*size*/))=(v947));
  *id_1969/*lop i64R ++ i64R x*/(&(((v946))->id_1895/*size*/));
}

void id_2286/*op void .call.pop_back Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v948){
  *id_1970/*lop i64R -- i64R x*/(&(((v948))->id_1895/*size*/));
}

void id_2287/*op void .call.erase Vec<bool>P slf i64 pos*/(id_1872/*Vec<bool>*/* v949, i64 v950){
  {
      i64 v958; /*i*/
      id_1864/*RangeIter<i64>*/ v957; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v956; /*tmp_rval_955*/
      id_1864/*RangeIter<i64>*/ v954; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v953; /*tmp_rval_952*/
      id_1865/*RangeIterRange<i64>*/ v951; /*__range*/
      ((v951)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((((v950))+(((i64)1))), (((v949))->id_1895/*size*/))));
      ((v957)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v956)=(v951)), (&(v956)))))));
      ((v954)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v953)=(v951)), (&(v953)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v954), (v957))) {
        ((v958)=id_2182/*lop i64 * RangeIter<i64> slf*/((v954)));
        (*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((v949), (((v958))-(((i64)1))))=*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((v949), (v958)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v954));
      }
    }
  id_2286/*op void .call.pop_back Vec<bool>P slf*/((v949));
}

id_1873/*VecIter<bool>*/ id_2288/*op VecIter<bool> .call.begin Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v967) {{
  return id_2272/*lop VecIter<bool> VecIter<bool> boolP ptr*/((((v967))->id_1894/*head*/));
} panic("reached function end without returning anything op VecIter<bool> .call.begin Vec<bool>P slf\n");}

id_1873/*VecIter<bool>*/ id_2289/*op VecIter<bool> .call.end Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v968) {{
  return id_2272/*lop VecIter<bool> VecIter<bool> boolP ptr*/(id_2280/*op boolP .call.atP Vec<bool>P slf i64 pos*/((v968), (((v968))->id_1895/*size*/)));
} panic("reached function end without returning anything op VecIter<bool> .call.end Vec<bool>P slf\n");}

id_1874/*VecIterRange<bool>*/ id_2290/*lop VecIterRange<bool> iter Vec<bool>R slf*/(id_1872/*Vec<bool>*/* v974) {{
  id_1874/*VecIterRange<bool>*/ v975; /*it*/
  (((&(v975))->id_1890/*begin*/)=id_2288/*op VecIter<bool> .call.begin Vec<bool>P slf*/((&(*v974))));
  (((&(v975))->id_1891/*end*/)=id_2289/*op VecIter<bool> .call.end Vec<bool>P slf*/((&(*v974))));
  return (v975);
} panic("reached function end without returning anything lop VecIterRange<bool> iter Vec<bool>R slf\n");}

bool* id_2291/*op boolR .call.front Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v976) {{
  return &(*(((v976))->id_1894/*head*/));
} panic("reached function end without returning anything op boolR .call.front Vec<bool>P slf\n");}

bool* id_2292/*op boolR .call.back Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v977) {{
  return &(*id_2280/*op boolP .call.atP Vec<bool>P slf i64 pos*/((v977), (((((v977))->id_1895/*size*/))-(((i64)1)))));
} panic("reached function end without returning anything op boolR .call.back Vec<bool>P slf\n");}

void id_2293/*op void .call.dtor Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v978){
  ((i64)0);
}

id_1872/*Vec<bool>*/ id_2294/*lop Vec<bool> Vec<bool> i64 size*/(i64 v979) {{
  id_1872/*Vec<bool>*/ v980; /*slf*/
  (((&(v980))->id_1894/*head*/)=((bool*)((i64)0)));
  (((&(v980))->id_1895/*size*/)=((i64)0));
  (((&(v980))->id_1893/*cap*/)=((i64)0));
  while (((((&(v980))->id_1893/*cap*/))<((v979)))) {
    id_2284/*op void .call.double_cap Vec<bool>P slf*/((&(v980)));
  }
  (((&(v980))->id_1895/*size*/)=(v979));
  (((&(v980))->id_1893/*cap*/)=(v979));
  {
      i64 v988; /*i*/
      id_1864/*RangeIter<i64>*/ v987; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v986; /*tmp_rval_985*/
      id_1864/*RangeIter<i64>*/ v984; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v983; /*tmp_rval_982*/
      id_1865/*RangeIterRange<i64>*/ v981; /*__range*/
      ((v981)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v980))->id_1895/*size*/))));
      ((v987)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v986)=(v981)), (&(v986)))))));
      ((v984)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v983)=(v981)), (&(v983)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v984), (v987))) {
        ((v988)=id_2182/*lop i64 * RangeIter<i64> slf*/((v984)));
        (*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((&(v980)), (v988))=id_1912/*lop bool bool*/());
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v984));
      }
    }
  return (v980);
  id_2293/*op void .call.dtor Vec<bool>P slf*/((&(v980)));
} panic("reached function end without returning anything lop Vec<bool> Vec<bool> i64 size\n");}

id_1872/*Vec<bool>*/ id_2295/*lop Vec<bool> Vec<bool> i64 size bool default*/(i64 v989, bool v990) {{
  id_1872/*Vec<bool>*/ v991; /*slf*/
  ((v991)=id_2294/*lop Vec<bool> Vec<bool> i64 size*/((v989)));
  {
      i64 v999; /*i*/
      id_1864/*RangeIter<i64>*/ v998; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v997; /*tmp_rval_996*/
      id_1864/*RangeIter<i64>*/ v995; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v994; /*tmp_rval_993*/
      id_1865/*RangeIterRange<i64>*/ v992; /*__range*/
      ((v992)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v991))->id_1895/*size*/))));
      ((v998)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v997)=(v992)), (&(v997)))))));
      ((v995)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v994)=(v992)), (&(v994)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v995), (v998))) {
        ((v999)=id_2182/*lop i64 * RangeIter<i64> slf*/((v995)));
        (*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((&(v991)), (v999))=(v990));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v995));
      }
    }
  return (v991);
  id_2293/*op void .call.dtor Vec<bool>P slf*/((&(v991)));
} panic("reached function end without returning anything lop Vec<bool> Vec<bool> i64 size bool default\n");}

id_1872/*Vec<bool>*/ id_2296/*lop Vec<bool> Vec<bool>*/() {{
  return id_2294/*lop Vec<bool> Vec<bool> i64 size*/(((i64)0));
} panic("reached function end without returning anything lop Vec<bool> Vec<bool>\n");}

id_1872/*Vec<bool>*/ id_2297/*lop Vec<bool> Vec<bool> Vec<bool>R other*/(id_1872/*Vec<bool>*/* v1000) {{
  id_1872/*Vec<bool>*/ v1001; /*slf*/
  ((v1001)=id_2294/*lop Vec<bool> Vec<bool> i64 size*/(((&(*v1000))->id_1895/*size*/)));
  {
      i64 v1009; /*i*/
      id_1864/*RangeIter<i64>*/ v1008; /*__end*/
      id_1864/*RangeIter<i64>*/ v1005; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1007; /*tmp_rval_1006*/
      id_1865/*RangeIterRange<i64>*/ v1004; /*tmp_rval_1003*/
      id_1865/*RangeIterRange<i64>*/ v1002; /*__range*/
      ((v1002)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1000))->id_1895/*size*/))));
      ((v1008)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1007)=(v1002)), (&(v1007)))))));
      ((v1005)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1004)=(v1002)), (&(v1004)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1005), (v1008))) {
        ((v1009)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1005)));
        (*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((&(v1001)), (v1009))=*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((&(*v1000)), (v1009)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1005));
      }
    }
  return (v1001);
  id_2293/*op void .call.dtor Vec<bool>P slf*/((&(v1001)));
} panic("reached function end without returning anything lop Vec<bool> Vec<bool> Vec<bool>R other\n");}

void id_2298/*op void += Vec<bool>R slf bool val*/(id_1872/*Vec<bool>*/* v1010, bool v1011){
  id_2285/*op void .call.push_back Vec<bool>P slf bool val*/((&(*v1010)), (v1011));
}

void id_2299/*op void += Vec<bool>R slf Vec<bool>R other*/(id_1872/*Vec<bool>*/* v1012, id_1872/*Vec<bool>*/* v1013){
  {
      i64 v1021; /*i*/
      id_1864/*RangeIter<i64>*/ v1020; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1019; /*tmp_rval_1018*/
      id_1864/*RangeIter<i64>*/ v1017; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1016; /*tmp_rval_1015*/
      id_1865/*RangeIterRange<i64>*/ v1014; /*__range*/
      ((v1014)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1013))->id_1895/*size*/))));
      ((v1020)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1019)=(v1014)), (&(v1019)))))));
      ((v1017)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1016)=(v1014)), (&(v1016)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1017), (v1020))) {
        ((v1021)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1017)));
        id_2285/*op void .call.push_back Vec<bool>P slf bool val*/((&(*v1012)), *id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((&(*v1013)), (v1021)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1017));
      }
    }
}

id_1872/*Vec<bool>*/ id_2300/*op Vec<bool> ,, bool a bool b*/(bool v1022, bool v1023) {{
  id_1872/*Vec<bool>*/ v1024; /*slf*/
  ((v1024)=id_2296/*lop Vec<bool> Vec<bool>*/());
  id_2298/*op void += Vec<bool>R slf bool val*/(&(v1024), (v1022));
  id_2298/*op void += Vec<bool>R slf bool val*/(&(v1024), (v1023));
  return (v1024);
  id_2293/*op void .call.dtor Vec<bool>P slf*/((&(v1024)));
} panic("reached function end without returning anything op Vec<bool> ,, bool a bool b\n");}

id_1872/*Vec<bool>*/* id_2301/*op Vec<bool>R ,, Vec<bool>R v bool a*/(id_1872/*Vec<bool>*/* v1025, bool v1026) {{
  id_2298/*op void += Vec<bool>R slf bool val*/(&(*v1025), (v1026));
  return &(*v1025);
} panic("reached function end without returning anything op Vec<bool>R ,, Vec<bool>R v bool a\n");}

void id_2302/*lop void put Vec<bool>R slf*/(id_1872/*Vec<bool>*/* v1027){
  id_2282/*op void .call.print Vec<bool>P slf*/((&(*v1027)));
}

void id_2303/*lop void out Vec<bool>R slf*/(id_1872/*Vec<bool>*/* v1028){
  id_2282/*op void .call.print Vec<bool>P slf*/((&(*v1028)));
  (printf("%s\n", ((str)"")));
}

id_1853/*Out*/ id_2304/*rop Out < Vec<bool>R i*/(id_1872/*Vec<bool>*/* v1029) {{
  id_2303/*lop void out Vec<bool>R slf*/(&(*v1029));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < Vec<bool>R i\n");}

id_1853/*Out*/ id_2305/*lop Out < Vec<bool>R i*/(id_1872/*Vec<bool>*/* v1030) {{
  (id_2302/*lop void put Vec<bool>R slf*/(&(*v1030)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < Vec<bool>R i\n");}

id_1853/*Out*/ id_2306/*op Out < Out o Vec<bool>R i*/(id_1853/*Out*/ v1031, id_1872/*Vec<bool>*/* v1032) {{
  (id_2302/*lop void put Vec<bool>R slf*/(&(*v1032)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o Vec<bool>R i\n");}

bool* id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/(id_1872/*Vec<bool>*/* v1033, i64 v1034) {{
  if ((((v1034))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1034), (((v1033))->id_1895/*size*/));
  }
  return &*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((v1033), (v1034));
} panic("reached function end without returning anything op boolR .call.sub Vec<bool>P slf i64 id\n");}

id_1872/*Vec<bool>*/ id_2308/*op Vec<bool> .call.sub Vec<bool>P slf i64 begin i64 end*/(id_1872/*Vec<bool>*/* v1035, i64 v1036, i64 v1037) {{
  id_1872/*Vec<bool>*/ v1038; /*res*/
  ((v1038)=id_2294/*lop Vec<bool> Vec<bool> i64 size*/(((i64)0)));
  {
      i64 v1046; /*i*/
      id_1864/*RangeIter<i64>*/ v1045; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1044; /*tmp_rval_1043*/
      id_1864/*RangeIter<i64>*/ v1042; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1041; /*tmp_rval_1040*/
      id_1865/*RangeIterRange<i64>*/ v1039; /*__range*/
      ((v1039)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((v1036), (v1037))));
      ((v1045)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1044)=(v1039)), (&(v1044)))))));
      ((v1042)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1041)=(v1039)), (&(v1041)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1042), (v1045))) {
        ((v1046)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1042)));
        id_2285/*op void .call.push_back Vec<bool>P slf bool val*/((&(v1038)), *id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((v1035), (v1046)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1042));
      }
    }
  return (v1038);
  id_2293/*op void .call.dtor Vec<bool>P slf*/((&(v1038)));
} panic("reached function end without returning anything op Vec<bool> .call.sub Vec<bool>P slf i64 begin i64 end\n");}

id_1872/*Vec<bool>*/ id_2309/*op Vec<bool> .call.sub Vec<bool>P slf Range<i64> r*/(id_1872/*Vec<bool>*/* v1047, id_1863/*Range<i64>*/ v1048) {{
  i64 v1050; /*end*/
  i64 v1049; /*begin*/
  (((v1049)=((&(v1048))->id_1890/*begin*/)), ((v1050)=((&(v1048))->id_1891/*end*/)));
  if ((((v1049))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1049), (((v1047))->id_1895/*size*/));
  }
  if ((((v1049))<(((i64)0)))) {
    ((v1049)=((i64)0));
  }
  if ((((v1050))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1050), (((v1047))->id_1895/*size*/));
  }
  if ((((v1050))>((((v1047))->id_1895/*size*/)))) {
    ((v1050)=(((v1047))->id_1895/*size*/));
  }
  return id_2308/*op Vec<bool> .call.sub Vec<bool>P slf i64 begin i64 end*/((v1047), (v1049), (v1050));
} panic("reached function end without returning anything op Vec<bool> .call.sub Vec<bool>P slf Range<i64> r\n");}

id_1872/*Vec<bool>*/ id_2310/*op Vec<bool> .call.sub Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v1051) {{
  return id_2308/*op Vec<bool> .call.sub Vec<bool>P slf i64 begin i64 end*/((v1051), ((i64)0), (((v1051))->id_1895/*size*/));
} panic("reached function end without returning anything op Vec<bool> .call.sub Vec<bool>P slf\n");}

bool id_2311/*op bool < Vec<bool>R a Vec<bool>R b*/(id_1872/*Vec<bool>*/* v1052, id_1872/*Vec<bool>*/* v1053) {{
  {
      i64 v1061; /*i*/
      id_1864/*RangeIter<i64>*/ v1060; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1059; /*tmp_rval_1058*/
      id_1864/*RangeIter<i64>*/ v1057; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1056; /*tmp_rval_1055*/
      id_1865/*RangeIterRange<i64>*/ v1054; /*__range*/
      ((v1054)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), id_1915/*lop i64 min i64 a i64 b*/(((&(*v1052))->id_1895/*size*/), ((&(*v1053))->id_1895/*size*/)))));
      ((v1060)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1059)=(v1054)), (&(v1059)))))));
      ((v1057)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1056)=(v1054)), (&(v1056)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1057), (v1060))) {
        ((v1061)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1057)));
        if (id_2051/*op bool < bool a bool b*/(*id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/((&(*v1052)), (v1061)), *id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/((&(*v1053)), (v1061)))) {
          return ((bool)1);
        }
 else if (id_2051/*op bool < bool a bool b*/(*id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/((&(*v1053)), (v1061)), *id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/((&(*v1052)), (v1061)))) {
          return ((bool)0);
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1057));
      }
    }
  if (((((&(*v1052))->id_1895/*size*/))<(((&(*v1053))->id_1895/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1052))->id_1895/*size*/))>(((&(*v1053))->id_1895/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<bool>R a Vec<bool>R b\n");}

void id_2312/*lop void swap boolP a boolP b*/(bool* v1062, bool* v1063){
  bool v1064; /*t*/
  ((v1064)=(*(v1062)));
  ((*(v1062))=(*(v1063)));
  ((*(v1063))=(v1064));
}

bool* id_2313/*lop boolP partition boolP lo boolP hi*/(bool* v1065, bool* v1066) {{
  bool* v1069; /*j*/
  bool* v1068; /*i*/
  bool* v1067; /*pivot*/
  (((v1067)=((bool*)((((i64)(v1066)))-(((((i64)1))*((sizeof(bool)))))))), ((v1068)=(v1065)), ((v1069)=(v1065)));
  ((v1069)=(v1065));
  while (((((i64)(v1069)))!=(((i64)(v1067))))) {
    if (id_2051/*op bool < bool a bool b*/((*(v1069)), (*(v1067)))) {
      id_2312/*lop void swap boolP a boolP b*/((v1068), (v1069));
      ((v1068)=((bool*)((((i64)(v1068)))+(((((i64)1))*((sizeof(bool))))))));
    }
    ((v1069)=((bool*)((((i64)(v1069)))+(((((i64)1))*((sizeof(bool))))))));
  }
  id_2312/*lop void swap boolP a boolP b*/((v1068), (v1067));
  return (v1068);
} panic("reached function end without returning anything lop boolP partition boolP lo boolP hi\n");}

void id_2314/*lop void qsort boolP lhs boolP rhs*/(bool* v1070, bool* v1071){
  i64 v1073; /*b*/
  i64 v1072; /*a*/
  ((v1072)=((((i64)(v1071)))-(((i64)(v1070)))));
  ((v1073)=(sizeof(bool)));
  if ((((v1072))>((v1073)))) {
    bool* v1074; /*pi*/
    ((v1074)=id_2313/*lop boolP partition boolP lo boolP hi*/((v1070), (v1071)));
    id_2314/*lop void qsort boolP lhs boolP rhs*/((v1070), (v1074));
    ((v1074)=((bool*)((((i64)(v1074)))+(((((i64)1))*((sizeof(bool))))))));
    id_2314/*lop void qsort boolP lhs boolP rhs*/((v1074), (v1071));
  }
}

void id_2315/*op void .call.sort Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v1075){
  id_1873/*VecIter<bool>*/ v1079; /*tmp_rval_1078*/
  id_1873/*VecIter<bool>*/ v1077; /*tmp_rval_1076*/
  id_2314/*lop void qsort boolP lhs boolP rhs*/(((&(*(((v1077)=id_2288/*op VecIter<bool> .call.begin Vec<bool>P slf*/((v1075))), (&(v1077)))))->id_1896/*ptr*/), ((&(*(((v1079)=id_2289/*op VecIter<bool> .call.end Vec<bool>P slf*/((v1075))), (&(v1079)))))->id_1896/*ptr*/));
}

void id_2316/*lop void sort Vec<bool>R slf*/(id_1872/*Vec<bool>*/* v1080){
  id_2315/*op void .call.sort Vec<bool>P slf*/((&(*v1080)));
}

bool id_2317/*op bool .call.max Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v1081) {{
  bool v1082; /*tmp*/
  ((v1082)=*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((v1081), ((i64)0)));
  {
      bool v1090; /*i*/
      id_1873/*VecIter<bool>*/ v1089; /*__end*/
      id_1874/*VecIterRange<bool>*/ v1088; /*tmp_rval_1087*/
      id_1873/*VecIter<bool>*/ v1086; /*__cur*/
      id_1874/*VecIterRange<bool>*/ v1085; /*tmp_rval_1084*/
      id_1874/*VecIterRange<bool>*/ v1083; /*__range*/
      ((v1083)=id_2290/*lop VecIterRange<bool> iter Vec<bool>R slf*/(&(*(v1081))));
      ((v1089)=id_2278/*op VecIter<bool> .call.end VecIterRange<bool>P slf*/((&(*(((v1088)=(v1083)), (&(v1088)))))));
      ((v1086)=id_2277/*op VecIter<bool> .call.begin VecIterRange<bool>P slf*/((&(*(((v1085)=(v1083)), (&(v1085)))))));
      while (id_2275/*op bool != VecIter<bool> a VecIter<bool> b*/((v1086), (v1089))) {
        ((v1090)=*id_2276/*lop boolR * VecIter<bool> slf*/((v1086)));
        if (id_2051/*op bool < bool a bool b*/((v1082), (v1090))) {
          ((v1082)=(v1090));
        }
        id_2273/*lop void ++ VecIter<bool>R slf*/(&(v1086));
      }
    }
  return (v1082);
} panic("reached function end without returning anything op bool .call.max Vec<bool>P slf\n");}

bool id_2318/*op bool .call.min Vec<bool>P slf*/(id_1872/*Vec<bool>*/* v1091) {{
  bool v1092; /*tmp*/
  ((v1092)=*id_2281/*op boolR .call.at Vec<bool>P slf i64 pos*/((v1091), ((i64)0)));
  {
      bool v1100; /*i*/
      id_1873/*VecIter<bool>*/ v1099; /*__end*/
      id_1874/*VecIterRange<bool>*/ v1098; /*tmp_rval_1097*/
      id_1873/*VecIter<bool>*/ v1096; /*__cur*/
      id_1874/*VecIterRange<bool>*/ v1095; /*tmp_rval_1094*/
      id_1874/*VecIterRange<bool>*/ v1093; /*__range*/
      ((v1093)=id_2290/*lop VecIterRange<bool> iter Vec<bool>R slf*/(&(*(v1091))));
      ((v1099)=id_2278/*op VecIter<bool> .call.end VecIterRange<bool>P slf*/((&(*(((v1098)=(v1093)), (&(v1098)))))));
      ((v1096)=id_2277/*op VecIter<bool> .call.begin VecIterRange<bool>P slf*/((&(*(((v1095)=(v1093)), (&(v1095)))))));
      while (id_2275/*op bool != VecIter<bool> a VecIter<bool> b*/((v1096), (v1099))) {
        ((v1100)=*id_2276/*lop boolR * VecIter<bool> slf*/((v1096)));
        if (id_2051/*op bool < bool a bool b*/((v1100), (v1092))) {
          ((v1092)=(v1100));
        }
        id_2273/*lop void ++ VecIter<bool>R slf*/(&(v1096));
      }
    }
  return (v1092);
} panic("reached function end without returning anything op bool .call.min Vec<bool>P slf\n");}

id_1872/*Vec<bool>*/ id_2319/*op Vec<bool> .call.map Vec<bool>P slf F<bool boolR> f*/(id_1872/*Vec<bool>*/* v1101, bool(*v1102)(bool*)) {{
  id_1872/*Vec<bool>*/ v1103; /*r*/
  ((v1103)=id_2294/*lop Vec<bool> Vec<bool> i64 size*/((((v1101))->id_1895/*size*/)));
  {
      i64 v1111; /*i*/
      id_1864/*RangeIter<i64>*/ v1110; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1109; /*tmp_rval_1108*/
      id_1864/*RangeIter<i64>*/ v1107; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1106; /*tmp_rval_1105*/
      id_1865/*RangeIterRange<i64>*/ v1104; /*__range*/
      ((v1104)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1101))->id_1895/*size*/))));
      ((v1110)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1109)=(v1104)), (&(v1109)))))));
      ((v1107)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1106)=(v1104)), (&(v1106)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1107), (v1110))) {
        ((v1111)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1107)));
        (*id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/((&(v1103)), (v1111))=((*(v1102))(&*id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/((v1101), (v1111)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1107));
      }
    }
  return (v1103);
  id_2293/*op void .call.dtor Vec<bool>P slf*/((&(v1103)));
} panic("reached function end without returning anything op Vec<bool> .call.map Vec<bool>P slf F<bool boolR> f\n");}

id_1872/*Vec<bool>*/ id_2320/*op Vec<bool> .call.filter Vec<bool>P slf F<bool boolR> f*/(id_1872/*Vec<bool>*/* v1112, bool(*v1113)(bool*)) {{
  id_1872/*Vec<bool>*/ v1114; /*r*/
  ((v1114)=id_2296/*lop Vec<bool> Vec<bool>*/());
  {
      i64 v1122; /*i*/
      id_1864/*RangeIter<i64>*/ v1121; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1120; /*tmp_rval_1119*/
      id_1864/*RangeIter<i64>*/ v1118; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1117; /*tmp_rval_1116*/
      id_1865/*RangeIterRange<i64>*/ v1115; /*__range*/
      ((v1115)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1112))->id_1895/*size*/))));
      ((v1121)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1120)=(v1115)), (&(v1120)))))));
      ((v1118)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1117)=(v1115)), (&(v1117)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1118), (v1121))) {
        ((v1122)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1118)));
        if (((*(v1113))(&*id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/((v1112), (v1122))))) {
          id_2298/*op void += Vec<bool>R slf bool val*/(&(v1114), *id_2307/*op boolR .call.sub Vec<bool>P slf i64 id*/((v1112), (v1122)));
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1118));
      }
    }
  return (v1114);
  id_2293/*op void .call.dtor Vec<bool>P slf*/((&(v1114)));
} panic("reached function end without returning anything op Vec<bool> .call.filter Vec<bool>P slf F<bool boolR> f\n");}

bool id_2321/*lop bool all Vec<bool>R v*/(id_1872/*Vec<bool>*/* v1123) {{
  {
      bool v1131; /*i*/
      id_1873/*VecIter<bool>*/ v1130; /*__end*/
      id_1873/*VecIter<bool>*/ v1127; /*__cur*/
      id_1874/*VecIterRange<bool>*/ v1129; /*tmp_rval_1128*/
      id_1874/*VecIterRange<bool>*/ v1126; /*tmp_rval_1125*/
      id_1874/*VecIterRange<bool>*/ v1124; /*__range*/
      ((v1124)=id_2290/*lop VecIterRange<bool> iter Vec<bool>R slf*/(&(*v1123)));
      ((v1130)=id_2278/*op VecIter<bool> .call.end VecIterRange<bool>P slf*/((&(*(((v1129)=(v1124)), (&(v1129)))))));
      ((v1127)=id_2277/*op VecIter<bool> .call.begin VecIterRange<bool>P slf*/((&(*(((v1126)=(v1124)), (&(v1126)))))));
      while (id_2275/*op bool != VecIter<bool> a VecIter<bool> b*/((v1127), (v1130))) {
        ((v1131)=*id_2276/*lop boolR * VecIter<bool> slf*/((v1127)));
        if ((!((v1131)))) {
          return ((bool)0);
        }
        id_2273/*lop void ++ VecIter<bool>R slf*/(&(v1127));
      }
    }
  return ((bool)1);
} panic("reached function end without returning anything lop bool all Vec<bool>R v\n");}

bool id_2322/*lop bool any Vec<bool>R v*/(id_1872/*Vec<bool>*/* v1132) {{
  {
      bool v1140; /*i*/
      id_1873/*VecIter<bool>*/ v1139; /*__end*/
      id_1874/*VecIterRange<bool>*/ v1138; /*tmp_rval_1137*/
      id_1873/*VecIter<bool>*/ v1136; /*__cur*/
      id_1874/*VecIterRange<bool>*/ v1135; /*tmp_rval_1134*/
      id_1874/*VecIterRange<bool>*/ v1133; /*__range*/
      ((v1133)=id_2290/*lop VecIterRange<bool> iter Vec<bool>R slf*/(&(*v1132)));
      ((v1139)=id_2278/*op VecIter<bool> .call.end VecIterRange<bool>P slf*/((&(*(((v1138)=(v1133)), (&(v1138)))))));
      ((v1136)=id_2277/*op VecIter<bool> .call.begin VecIterRange<bool>P slf*/((&(*(((v1135)=(v1133)), (&(v1135)))))));
      while (id_2275/*op bool != VecIter<bool> a VecIter<bool> b*/((v1136), (v1139))) {
        ((v1140)=*id_2276/*lop boolR * VecIter<bool> slf*/((v1136)));
        if ((v1140)) {
          return ((bool)1);
        }
        id_2273/*lop void ++ VecIter<bool>R slf*/(&(v1136));
      }
    }
  return ((bool)0);
} panic("reached function end without returning anything lop bool any Vec<bool>R v\n");}

i64 id_2323/*lop i64 sum Vec<i64>R v*/(id_1869/*Vec<i64>*/* v1141) {{
  i64 v1142; /*t*/
  ((v1142)=((i64)0));
  {
      i64 v1150; /*i*/
      id_1870/*VecIter<i64>*/ v1149; /*__end*/
      id_1871/*VecIterRange<i64>*/ v1148; /*tmp_rval_1147*/
      id_1870/*VecIter<i64>*/ v1146; /*__cur*/
      id_1871/*VecIterRange<i64>*/ v1145; /*tmp_rval_1144*/
      id_1871/*VecIterRange<i64>*/ v1143; /*__range*/
      ((v1143)=id_2240/*lop VecIterRange<i64> iter Vec<i64>R slf*/(&(*v1141)));
      ((v1149)=id_2228/*op VecIter<i64> .call.end VecIterRange<i64>P slf*/((&(*(((v1148)=(v1143)), (&(v1148)))))));
      ((v1146)=id_2227/*op VecIter<i64> .call.begin VecIterRange<i64>P slf*/((&(*(((v1145)=(v1143)), (&(v1145)))))));
      while (id_2225/*op bool != VecIter<i64> a VecIter<i64> b*/((v1146), (v1149))) {
        ((v1150)=*id_2226/*lop i64R * VecIter<i64> slf*/((v1146)));
        id_1959/*op void += i64R a i64 b*/(&(v1142), (v1150));
        id_2223/*lop void ++ VecIter<i64>R slf*/(&(v1146));
      }
    }
  return (v1142);
} panic("reached function end without returning anything lop i64 sum Vec<i64>R v\n");}

char id_2324/*op char .call.sub strP slf i64 pos*/(str* v1151, i64 v1152) {{
  return (*((char*)((((i64)(*(v1151))))+((v1152)))));
} panic("reached function end without returning anything op char .call.sub strP slf i64 pos\n");}

str id_2325/*lop str str*/() {{
  u8* v1153; /*ptr*/
  ((v1153)=((u8*)(alloc(((i64)1)))));
  ((*(v1153))=((u8)0));
  return ((str)(v1153));
} panic("reached function end without returning anything lop str str\n");}

bool id_2326/*op bool == char ch str s*/(char v1154, str v1155) {{
  return (((v1154))==(id_2324/*op char .call.sub strP slf i64 pos*/((&(v1155)), ((i64)0))));
} panic("reached function end without returning anything op bool == char ch str s\n");}

char id_2327/*lop char chr str s*/(str v1156) {{
  return id_2324/*op char .call.sub strP slf i64 pos*/((&(v1156)), ((i64)0));
} panic("reached function end without returning anything lop char chr str s\n");}

id_1876/*VecIter<char>*/ id_2328/*lop VecIter<char> VecIter<char> charP ptr*/(char* v1203) {{
  id_1876/*VecIter<char>*/ v1204; /*slf*/
  (((&(v1204))->id_1896/*ptr*/)=(v1203));
  return (v1204);
} panic("reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n");}

void id_2329/*lop void ++ VecIter<char>R slf*/(id_1876/*VecIter<char>*/* v1205){
  (((&(*v1205))->id_1896/*ptr*/)=((char*)((((i64)((&(*v1205))->id_1896/*ptr*/)))+(((((i64)1))*((sizeof(char))))))));
}

id_1876/*VecIter<char>*/ id_2330/*op VecIter<char> + VecIter<char> slf i64 i*/(id_1876/*VecIter<char>*/ v1206, i64 v1207) {{
  (((&(v1206))->id_1896/*ptr*/)=((char*)((((i64)((&(v1206))->id_1896/*ptr*/)))+((((v1207))*((sizeof(char))))))));
  return (v1206);
} panic("reached function end without returning anything op VecIter<char> + VecIter<char> slf i64 i\n");}

bool id_2331/*op bool != VecIter<char> a VecIter<char> b*/(id_1876/*VecIter<char>*/ v1208, id_1876/*VecIter<char>*/ v1209) {{
  return ((((i64)((&(v1208))->id_1896/*ptr*/)))!=(((i64)((&(v1209))->id_1896/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<char> a VecIter<char> b\n");}

char* id_2332/*lop charR * VecIter<char> slf*/(id_1876/*VecIter<char>*/ v1210) {{
  return &(*((&(v1210))->id_1896/*ptr*/));
} panic("reached function end without returning anything lop charR * VecIter<char> slf\n");}

id_1876/*VecIter<char>*/ id_2333/*op VecIter<char> .call.begin VecIterRange<char>P slf*/(id_1877/*VecIterRange<char>*/* v1213) {{
  return (((v1213))->id_1890/*begin*/);
} panic("reached function end without returning anything op VecIter<char> .call.begin VecIterRange<char>P slf\n");}

id_1876/*VecIter<char>*/ id_2334/*op VecIter<char> .call.end VecIterRange<char>P slf*/(id_1877/*VecIterRange<char>*/* v1214) {{
  return (((v1214))->id_1891/*end*/);
} panic("reached function end without returning anything op VecIter<char> .call.end VecIterRange<char>P slf\n");}

id_1877/*VecIterRange<char>*/ id_2335/*lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end*/(id_1876/*VecIter<char>*/ v1215, id_1876/*VecIter<char>*/ v1216) {{
  id_1877/*VecIterRange<char>*/ v1217; /*slf*/
  (((&(v1217))->id_1890/*begin*/)=(v1215));
  (((&(v1217))->id_1891/*end*/)=(v1216));
  return (v1217);
} panic("reached function end without returning anything lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end\n");}

char* id_2336/*op charP .call.atP Vec<char>P slf i64 pos*/(id_1875/*Vec<char>*/* v1157, i64 v1158) {{
  return ((char*)((char*)((((i64)(((v1157))->id_1894/*head*/)))+((((v1158))*((sizeof(char))))))));
} panic("reached function end without returning anything op charP .call.atP Vec<char>P slf i64 pos\n");}

char* id_2337/*op charR .call.at Vec<char>P slf i64 pos*/(id_1875/*Vec<char>*/* v1159, i64 v1160) {{
  return &(*id_2336/*op charP .call.atP Vec<char>P slf i64 pos*/((v1159), (v1160)));
} panic("reached function end without returning anything op charR .call.at Vec<char>P slf i64 pos\n");}

void id_2338/*op void .call.print Vec<char>P slf*/(id_1875/*Vec<char>*/* v1161){
  (printf("%s", ((str)"[")));
  {
      i64 v1169; /*i*/
      id_1864/*RangeIter<i64>*/ v1168; /*__end*/
      id_1864/*RangeIter<i64>*/ v1165; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1164; /*tmp_rval_1163*/
      id_1865/*RangeIterRange<i64>*/ v1167; /*tmp_rval_1166*/
      id_1865/*RangeIterRange<i64>*/ v1162; /*__range*/
      ((v1162)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1161))->id_1895/*size*/))));
      ((v1168)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1167)=(v1162)), (&(v1167)))))));
      ((v1165)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1164)=(v1162)), (&(v1164)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1165), (v1168))) {
        ((v1169)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1165)));
        if ((!((!((v1169)))))) {
          (printf("%s", ((str)", ")));
        }
        (printf("%c", (*id_2336/*op charP .call.atP Vec<char>P slf i64 pos*/((v1161), (v1169)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1165));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2339/*op void .call.println Vec<char>P slf*/(id_1875/*Vec<char>*/* v1170){
  {
      i64 v1178; /*i*/
      id_1864/*RangeIter<i64>*/ v1177; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1176; /*tmp_rval_1175*/
      id_1864/*RangeIter<i64>*/ v1174; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1173; /*tmp_rval_1172*/
      id_1865/*RangeIterRange<i64>*/ v1171; /*__range*/
      ((v1171)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1170))->id_1895/*size*/))));
      ((v1177)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1176)=(v1171)), (&(v1176)))))));
      ((v1174)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1173)=(v1171)), (&(v1173)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1174), (v1177))) {
        ((v1178)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1174)));
        (printf("%c\n", (*id_2336/*op charP .call.atP Vec<char>P slf i64 pos*/((v1170), (v1178)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1174));
      }
    }
}

void id_2340/*op void .call.double_cap Vec<char>P slf*/(id_1875/*Vec<char>*/* v1179){
  i64 v1180; /*ncap*/
  ((v1180)=(((v1179))->id_1893/*cap*/));
  if ((((v1180))==(((i64)0)))) {
    ((v1180)=((i64)1));
    ((((v1179))->id_1894/*head*/)=((char*)(alloc((sizeof(char))))));
    ((((v1179))->id_1893/*cap*/)=(v1180));
  } else {
    char* v1181; /*new_head*/
    id_1963/*op void *= i64R a i64 b*/(&(v1180), ((i64)2));
    ((v1181)=((char*)(alloc((((v1180))*((sizeof(char))))))));
    {
        i64 v1189; /*i*/
        id_1864/*RangeIter<i64>*/ v1188; /*__end*/
        id_1865/*RangeIterRange<i64>*/ v1187; /*tmp_rval_1186*/
        id_1864/*RangeIter<i64>*/ v1185; /*__cur*/
        id_1865/*RangeIterRange<i64>*/ v1184; /*tmp_rval_1183*/
        id_1865/*RangeIterRange<i64>*/ v1182; /*__range*/
        ((v1182)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1179))->id_1895/*size*/))));
        ((v1188)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1187)=(v1182)), (&(v1187)))))));
        ((v1185)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1184)=(v1182)), (&(v1184)))))));
        while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1185), (v1188))) {
          ((v1189)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1185)));
          ((*((char*)((((i64)(v1181)))+((((v1189))*((sizeof(char))))))))=*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((v1179), (v1189)));
          id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1185));
        }
      }
    (free((void*) ((i64)(((v1179))->id_1894/*head*/))));
    ((((v1179))->id_1894/*head*/)=(v1181));
  }
  ((((v1179))->id_1893/*cap*/)=(v1180));
}

void id_2341/*op void .call.push_back Vec<char>P slf char val*/(id_1875/*Vec<char>*/* v1190, char v1191){
  if ((((((v1190))->id_1895/*size*/))==((((v1190))->id_1893/*cap*/)))) {
    id_2340/*op void .call.double_cap Vec<char>P slf*/((v1190));
  }
  (*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((v1190), (((v1190))->id_1895/*size*/))=(v1191));
  *id_1969/*lop i64R ++ i64R x*/(&(((v1190))->id_1895/*size*/));
}

void id_2342/*op void .call.pop_back Vec<char>P slf*/(id_1875/*Vec<char>*/* v1192){
  *id_1970/*lop i64R -- i64R x*/(&(((v1192))->id_1895/*size*/));
}

void id_2343/*op void .call.erase Vec<char>P slf i64 pos*/(id_1875/*Vec<char>*/* v1193, i64 v1194){
  {
      i64 v1202; /*i*/
      id_1864/*RangeIter<i64>*/ v1201; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1200; /*tmp_rval_1199*/
      id_1864/*RangeIter<i64>*/ v1198; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1197; /*tmp_rval_1196*/
      id_1865/*RangeIterRange<i64>*/ v1195; /*__range*/
      ((v1195)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((((v1194))+(((i64)1))), (((v1193))->id_1895/*size*/))));
      ((v1201)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1200)=(v1195)), (&(v1200)))))));
      ((v1198)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1197)=(v1195)), (&(v1197)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1198), (v1201))) {
        ((v1202)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1198)));
        (*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((v1193), (((v1202))-(((i64)1))))=*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((v1193), (v1202)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1198));
      }
    }
  id_2342/*op void .call.pop_back Vec<char>P slf*/((v1193));
}

id_1876/*VecIter<char>*/ id_2344/*op VecIter<char> .call.begin Vec<char>P slf*/(id_1875/*Vec<char>*/* v1211) {{
  return id_2328/*lop VecIter<char> VecIter<char> charP ptr*/((((v1211))->id_1894/*head*/));
} panic("reached function end without returning anything op VecIter<char> .call.begin Vec<char>P slf\n");}

id_1876/*VecIter<char>*/ id_2345/*op VecIter<char> .call.end Vec<char>P slf*/(id_1875/*Vec<char>*/* v1212) {{
  return id_2328/*lop VecIter<char> VecIter<char> charP ptr*/(id_2336/*op charP .call.atP Vec<char>P slf i64 pos*/((v1212), (((v1212))->id_1895/*size*/)));
} panic("reached function end without returning anything op VecIter<char> .call.end Vec<char>P slf\n");}

id_1877/*VecIterRange<char>*/ id_2346/*lop VecIterRange<char> iter Vec<char>R slf*/(id_1875/*Vec<char>*/* v1218) {{
  id_1877/*VecIterRange<char>*/ v1219; /*it*/
  (((&(v1219))->id_1890/*begin*/)=id_2344/*op VecIter<char> .call.begin Vec<char>P slf*/((&(*v1218))));
  (((&(v1219))->id_1891/*end*/)=id_2345/*op VecIter<char> .call.end Vec<char>P slf*/((&(*v1218))));
  return (v1219);
} panic("reached function end without returning anything lop VecIterRange<char> iter Vec<char>R slf\n");}

char* id_2347/*op charR .call.front Vec<char>P slf*/(id_1875/*Vec<char>*/* v1220) {{
  return &(*(((v1220))->id_1894/*head*/));
} panic("reached function end without returning anything op charR .call.front Vec<char>P slf\n");}

char* id_2348/*op charR .call.back Vec<char>P slf*/(id_1875/*Vec<char>*/* v1221) {{
  return &(*id_2336/*op charP .call.atP Vec<char>P slf i64 pos*/((v1221), (((((v1221))->id_1895/*size*/))-(((i64)1)))));
} panic("reached function end without returning anything op charR .call.back Vec<char>P slf\n");}

void id_2349/*op void .call.dtor Vec<char>P slf*/(id_1875/*Vec<char>*/* v1222){
  ((i64)0);
}

id_1875/*Vec<char>*/ id_2350/*lop Vec<char> Vec<char> i64 size*/(i64 v1223) {{
  id_1875/*Vec<char>*/ v1224; /*slf*/
  (((&(v1224))->id_1894/*head*/)=((char*)((i64)0)));
  (((&(v1224))->id_1895/*size*/)=((i64)0));
  (((&(v1224))->id_1893/*cap*/)=((i64)0));
  while (((((&(v1224))->id_1893/*cap*/))<((v1223)))) {
    id_2340/*op void .call.double_cap Vec<char>P slf*/((&(v1224)));
  }
  (((&(v1224))->id_1895/*size*/)=(v1223));
  (((&(v1224))->id_1893/*cap*/)=(v1223));
  {
      i64 v1232; /*i*/
      id_1864/*RangeIter<i64>*/ v1231; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1230; /*tmp_rval_1229*/
      id_1864/*RangeIter<i64>*/ v1228; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1227; /*tmp_rval_1226*/
      id_1865/*RangeIterRange<i64>*/ v1225; /*__range*/
      ((v1225)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1224))->id_1895/*size*/))));
      ((v1231)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1230)=(v1225)), (&(v1230)))))));
      ((v1228)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1227)=(v1225)), (&(v1227)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1228), (v1231))) {
        ((v1232)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1228)));
        (*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((&(v1224)), (v1232))=id_1913/*lop char char*/());
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1228));
      }
    }
  return (v1224);
  id_2349/*op void .call.dtor Vec<char>P slf*/((&(v1224)));
} panic("reached function end without returning anything lop Vec<char> Vec<char> i64 size\n");}

id_1875/*Vec<char>*/ id_2351/*lop Vec<char> Vec<char> i64 size char default*/(i64 v1233, char v1234) {{
  id_1875/*Vec<char>*/ v1235; /*slf*/
  ((v1235)=id_2350/*lop Vec<char> Vec<char> i64 size*/((v1233)));
  {
      i64 v1243; /*i*/
      id_1864/*RangeIter<i64>*/ v1242; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1241; /*tmp_rval_1240*/
      id_1864/*RangeIter<i64>*/ v1239; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1238; /*tmp_rval_1237*/
      id_1865/*RangeIterRange<i64>*/ v1236; /*__range*/
      ((v1236)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1235))->id_1895/*size*/))));
      ((v1242)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1241)=(v1236)), (&(v1241)))))));
      ((v1239)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1238)=(v1236)), (&(v1238)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1239), (v1242))) {
        ((v1243)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1239)));
        (*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((&(v1235)), (v1243))=(v1234));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1239));
      }
    }
  return (v1235);
  id_2349/*op void .call.dtor Vec<char>P slf*/((&(v1235)));
} panic("reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n");}

id_1875/*Vec<char>*/ id_2352/*lop Vec<char> Vec<char>*/() {{
  return id_2350/*lop Vec<char> Vec<char> i64 size*/(((i64)0));
} panic("reached function end without returning anything lop Vec<char> Vec<char>\n");}

id_1875/*Vec<char>*/ id_2353/*lop Vec<char> Vec<char> Vec<char>R other*/(id_1875/*Vec<char>*/* v1244) {{
  id_1875/*Vec<char>*/ v1245; /*slf*/
  ((v1245)=id_2350/*lop Vec<char> Vec<char> i64 size*/(((&(*v1244))->id_1895/*size*/)));
  {
      i64 v1253; /*i*/
      id_1864/*RangeIter<i64>*/ v1252; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1251; /*tmp_rval_1250*/
      id_1864/*RangeIter<i64>*/ v1249; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1248; /*tmp_rval_1247*/
      id_1865/*RangeIterRange<i64>*/ v1246; /*__range*/
      ((v1246)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1244))->id_1895/*size*/))));
      ((v1252)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1251)=(v1246)), (&(v1251)))))));
      ((v1249)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1248)=(v1246)), (&(v1248)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1249), (v1252))) {
        ((v1253)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1249)));
        (*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((&(v1245)), (v1253))=*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((&(*v1244)), (v1253)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1249));
      }
    }
  return (v1245);
  id_2349/*op void .call.dtor Vec<char>P slf*/((&(v1245)));
} panic("reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n");}

void id_2354/*op void += Vec<char>R slf char val*/(id_1875/*Vec<char>*/* v1254, char v1255){
  id_2341/*op void .call.push_back Vec<char>P slf char val*/((&(*v1254)), (v1255));
}

void id_2355/*op void += Vec<char>R slf Vec<char>R other*/(id_1875/*Vec<char>*/* v1256, id_1875/*Vec<char>*/* v1257){
  {
      i64 v1265; /*i*/
      id_1864/*RangeIter<i64>*/ v1264; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1263; /*tmp_rval_1262*/
      id_1864/*RangeIter<i64>*/ v1261; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1260; /*tmp_rval_1259*/
      id_1865/*RangeIterRange<i64>*/ v1258; /*__range*/
      ((v1258)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1257))->id_1895/*size*/))));
      ((v1264)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1263)=(v1258)), (&(v1263)))))));
      ((v1261)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1260)=(v1258)), (&(v1260)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1261), (v1264))) {
        ((v1265)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1261)));
        id_2341/*op void .call.push_back Vec<char>P slf char val*/((&(*v1256)), *id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((&(*v1257)), (v1265)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1261));
      }
    }
}

id_1875/*Vec<char>*/ id_2356/*op Vec<char> ,, char a char b*/(char v1266, char v1267) {{
  id_1875/*Vec<char>*/ v1268; /*slf*/
  ((v1268)=id_2352/*lop Vec<char> Vec<char>*/());
  id_2354/*op void += Vec<char>R slf char val*/(&(v1268), (v1266));
  id_2354/*op void += Vec<char>R slf char val*/(&(v1268), (v1267));
  return (v1268);
  id_2349/*op void .call.dtor Vec<char>P slf*/((&(v1268)));
} panic("reached function end without returning anything op Vec<char> ,, char a char b\n");}

id_1875/*Vec<char>*/* id_2357/*op Vec<char>R ,, Vec<char>R v char a*/(id_1875/*Vec<char>*/* v1269, char v1270) {{
  id_2354/*op void += Vec<char>R slf char val*/(&(*v1269), (v1270));
  return &(*v1269);
} panic("reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n");}

void id_2358/*lop void put Vec<char>R slf*/(id_1875/*Vec<char>*/* v1271){
  id_2338/*op void .call.print Vec<char>P slf*/((&(*v1271)));
}

void id_2359/*lop void out Vec<char>R slf*/(id_1875/*Vec<char>*/* v1272){
  id_2338/*op void .call.print Vec<char>P slf*/((&(*v1272)));
  (printf("%s\n", ((str)"")));
}

id_1853/*Out*/ id_2360/*rop Out < Vec<char>R i*/(id_1875/*Vec<char>*/* v1273) {{
  id_2359/*lop void out Vec<char>R slf*/(&(*v1273));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < Vec<char>R i\n");}

id_1853/*Out*/ id_2361/*lop Out < Vec<char>R i*/(id_1875/*Vec<char>*/* v1274) {{
  (id_2358/*lop void put Vec<char>R slf*/(&(*v1274)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < Vec<char>R i\n");}

id_1853/*Out*/ id_2362/*op Out < Out o Vec<char>R i*/(id_1853/*Out*/ v1275, id_1875/*Vec<char>*/* v1276) {{
  (id_2358/*lop void put Vec<char>R slf*/(&(*v1276)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o Vec<char>R i\n");}

char* id_2363/*op charR .call.sub Vec<char>P slf i64 id*/(id_1875/*Vec<char>*/* v1277, i64 v1278) {{
  if ((((v1278))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1278), (((v1277))->id_1895/*size*/));
  }
  return &*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((v1277), (v1278));
} panic("reached function end without returning anything op charR .call.sub Vec<char>P slf i64 id\n");}

id_1875/*Vec<char>*/ id_2364/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/(id_1875/*Vec<char>*/* v1279, i64 v1280, i64 v1281) {{
  id_1875/*Vec<char>*/ v1282; /*res*/
  ((v1282)=id_2350/*lop Vec<char> Vec<char> i64 size*/(((i64)0)));
  {
      i64 v1290; /*i*/
      id_1864/*RangeIter<i64>*/ v1289; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1288; /*tmp_rval_1287*/
      id_1864/*RangeIter<i64>*/ v1286; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1285; /*tmp_rval_1284*/
      id_1865/*RangeIterRange<i64>*/ v1283; /*__range*/
      ((v1283)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((v1280), (v1281))));
      ((v1289)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1288)=(v1283)), (&(v1288)))))));
      ((v1286)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1285)=(v1283)), (&(v1285)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1286), (v1289))) {
        ((v1290)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1286)));
        id_2341/*op void .call.push_back Vec<char>P slf char val*/((&(v1282)), *id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((v1279), (v1290)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1286));
      }
    }
  return (v1282);
  id_2349/*op void .call.dtor Vec<char>P slf*/((&(v1282)));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end\n");}

id_1875/*Vec<char>*/ id_2365/*op Vec<char> .call.sub Vec<char>P slf Range<i64> r*/(id_1875/*Vec<char>*/* v1291, id_1863/*Range<i64>*/ v1292) {{
  i64 v1294; /*end*/
  i64 v1293; /*begin*/
  (((v1293)=((&(v1292))->id_1890/*begin*/)), ((v1294)=((&(v1292))->id_1891/*end*/)));
  if ((((v1293))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1293), (((v1291))->id_1895/*size*/));
  }
  if ((((v1293))<(((i64)0)))) {
    ((v1293)=((i64)0));
  }
  if ((((v1294))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1294), (((v1291))->id_1895/*size*/));
  }
  if ((((v1294))>((((v1291))->id_1895/*size*/)))) {
    ((v1294)=(((v1291))->id_1895/*size*/));
  }
  return id_2364/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((v1291), (v1293), (v1294));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf Range<i64> r\n");}

id_1875/*Vec<char>*/ id_2366/*op Vec<char> .call.sub Vec<char>P slf*/(id_1875/*Vec<char>*/* v1295) {{
  return id_2364/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((v1295), ((i64)0), (((v1295))->id_1895/*size*/));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf\n");}

bool id_2367/*op bool < Vec<char>R a Vec<char>R b*/(id_1875/*Vec<char>*/* v1296, id_1875/*Vec<char>*/* v1297) {{
  {
      i64 v1305; /*i*/
      id_1864/*RangeIter<i64>*/ v1304; /*__end*/
      id_1864/*RangeIter<i64>*/ v1301; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1300; /*tmp_rval_1299*/
      id_1865/*RangeIterRange<i64>*/ v1303; /*tmp_rval_1302*/
      id_1865/*RangeIterRange<i64>*/ v1298; /*__range*/
      ((v1298)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), id_1915/*lop i64 min i64 a i64 b*/(((&(*v1296))->id_1895/*size*/), ((&(*v1297))->id_1895/*size*/)))));
      ((v1304)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1303)=(v1298)), (&(v1303)))))));
      ((v1301)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1300)=(v1298)), (&(v1300)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1301), (v1304))) {
        ((v1305)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1301)));
        if (((*id_2363/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1296)), (v1305)))<(*id_2363/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1297)), (v1305))))) {
          return ((bool)1);
        }
 else if (((*id_2363/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1297)), (v1305)))<(*id_2363/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1296)), (v1305))))) {
          return ((bool)0);
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1301));
      }
    }
  if (((((&(*v1296))->id_1895/*size*/))<(((&(*v1297))->id_1895/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1296))->id_1895/*size*/))>(((&(*v1297))->id_1895/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n");}

void id_2368/*lop void swap charP a charP b*/(char* v1306, char* v1307){
  char v1308; /*t*/
  ((v1308)=(*(v1306)));
  ((*(v1306))=(*(v1307)));
  ((*(v1307))=(v1308));
}

char* id_2369/*lop charP partition charP lo charP hi*/(char* v1309, char* v1310) {{
  char* v1313; /*j*/
  char* v1312; /*i*/
  char* v1311; /*pivot*/
  (((v1311)=((char*)((((i64)(v1310)))-(((((i64)1))*((sizeof(char)))))))), ((v1312)=(v1309)), ((v1313)=(v1309)));
  ((v1313)=(v1309));
  while (((((i64)(v1313)))!=(((i64)(v1311))))) {
    if ((((*(v1313)))<((*(v1311))))) {
      id_2368/*lop void swap charP a charP b*/((v1312), (v1313));
      ((v1312)=((char*)((((i64)(v1312)))+(((((i64)1))*((sizeof(char))))))));
    }
    ((v1313)=((char*)((((i64)(v1313)))+(((((i64)1))*((sizeof(char))))))));
  }
  id_2368/*lop void swap charP a charP b*/((v1312), (v1311));
  return (v1312);
} panic("reached function end without returning anything lop charP partition charP lo charP hi\n");}

void id_2370/*lop void qsort charP lhs charP rhs*/(char* v1314, char* v1315){
  i64 v1317; /*b*/
  i64 v1316; /*a*/
  ((v1316)=((((i64)(v1315)))-(((i64)(v1314)))));
  ((v1317)=(sizeof(char)));
  if ((((v1316))>((v1317)))) {
    char* v1318; /*pi*/
    ((v1318)=id_2369/*lop charP partition charP lo charP hi*/((v1314), (v1315)));
    id_2370/*lop void qsort charP lhs charP rhs*/((v1314), (v1318));
    ((v1318)=((char*)((((i64)(v1318)))+(((((i64)1))*((sizeof(char))))))));
    id_2370/*lop void qsort charP lhs charP rhs*/((v1318), (v1315));
  }
}

void id_2371/*op void .call.sort Vec<char>P slf*/(id_1875/*Vec<char>*/* v1319){
  id_1876/*VecIter<char>*/ v1323; /*tmp_rval_1322*/
  id_1876/*VecIter<char>*/ v1321; /*tmp_rval_1320*/
  id_2370/*lop void qsort charP lhs charP rhs*/(((&(*(((v1321)=id_2344/*op VecIter<char> .call.begin Vec<char>P slf*/((v1319))), (&(v1321)))))->id_1896/*ptr*/), ((&(*(((v1323)=id_2345/*op VecIter<char> .call.end Vec<char>P slf*/((v1319))), (&(v1323)))))->id_1896/*ptr*/));
}

void id_2372/*lop void sort Vec<char>R slf*/(id_1875/*Vec<char>*/* v1324){
  id_2371/*op void .call.sort Vec<char>P slf*/((&(*v1324)));
}

char id_2373/*op char .call.max Vec<char>P slf*/(id_1875/*Vec<char>*/* v1325) {{
  char v1326; /*tmp*/
  ((v1326)=*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((v1325), ((i64)0)));
  {
      char v1334; /*i*/
      id_1876/*VecIter<char>*/ v1333; /*__end*/
      id_1876/*VecIter<char>*/ v1330; /*__cur*/
      id_1877/*VecIterRange<char>*/ v1329; /*tmp_rval_1328*/
      id_1877/*VecIterRange<char>*/ v1332; /*tmp_rval_1331*/
      id_1877/*VecIterRange<char>*/ v1327; /*__range*/
      ((v1327)=id_2346/*lop VecIterRange<char> iter Vec<char>R slf*/(&(*(v1325))));
      ((v1333)=id_2334/*op VecIter<char> .call.end VecIterRange<char>P slf*/((&(*(((v1332)=(v1327)), (&(v1332)))))));
      ((v1330)=id_2333/*op VecIter<char> .call.begin VecIterRange<char>P slf*/((&(*(((v1329)=(v1327)), (&(v1329)))))));
      while (id_2331/*op bool != VecIter<char> a VecIter<char> b*/((v1330), (v1333))) {
        ((v1334)=*id_2332/*lop charR * VecIter<char> slf*/((v1330)));
        if ((((v1326))<((v1334)))) {
          ((v1326)=(v1334));
        }
        id_2329/*lop void ++ VecIter<char>R slf*/(&(v1330));
      }
    }
  return (v1326);
} panic("reached function end without returning anything op char .call.max Vec<char>P slf\n");}

char id_2374/*op char .call.min Vec<char>P slf*/(id_1875/*Vec<char>*/* v1335) {{
  char v1336; /*tmp*/
  ((v1336)=*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((v1335), ((i64)0)));
  {
      char v1344; /*i*/
      id_1877/*VecIterRange<char>*/ v1342; /*tmp_rval_1341*/
      id_1876/*VecIter<char>*/ v1340; /*__cur*/
      id_1876/*VecIter<char>*/ v1343; /*__end*/
      id_1877/*VecIterRange<char>*/ v1339; /*tmp_rval_1338*/
      id_1877/*VecIterRange<char>*/ v1337; /*__range*/
      ((v1337)=id_2346/*lop VecIterRange<char> iter Vec<char>R slf*/(&(*(v1335))));
      ((v1343)=id_2334/*op VecIter<char> .call.end VecIterRange<char>P slf*/((&(*(((v1342)=(v1337)), (&(v1342)))))));
      ((v1340)=id_2333/*op VecIter<char> .call.begin VecIterRange<char>P slf*/((&(*(((v1339)=(v1337)), (&(v1339)))))));
      while (id_2331/*op bool != VecIter<char> a VecIter<char> b*/((v1340), (v1343))) {
        ((v1344)=*id_2332/*lop charR * VecIter<char> slf*/((v1340)));
        if ((((v1344))<((v1336)))) {
          ((v1336)=(v1344));
        }
        id_2329/*lop void ++ VecIter<char>R slf*/(&(v1340));
      }
    }
  return (v1336);
} panic("reached function end without returning anything op char .call.min Vec<char>P slf\n");}

id_1875/*Vec<char>*/ id_2375/*op Vec<char> .call.map Vec<char>P slf F<char charR> f*/(id_1875/*Vec<char>*/* v1345, char(*v1346)(char*)) {{
  id_1875/*Vec<char>*/ v1347; /*r*/
  ((v1347)=id_2350/*lop Vec<char> Vec<char> i64 size*/((((v1345))->id_1895/*size*/)));
  {
      i64 v1355; /*i*/
      id_1864/*RangeIter<i64>*/ v1354; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1353; /*tmp_rval_1352*/
      id_1864/*RangeIter<i64>*/ v1351; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1350; /*tmp_rval_1349*/
      id_1865/*RangeIterRange<i64>*/ v1348; /*__range*/
      ((v1348)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1345))->id_1895/*size*/))));
      ((v1354)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1353)=(v1348)), (&(v1353)))))));
      ((v1351)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1350)=(v1348)), (&(v1350)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1351), (v1354))) {
        ((v1355)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1351)));
        (*id_2363/*op charR .call.sub Vec<char>P slf i64 id*/((&(v1347)), (v1355))=((*(v1346))(&*id_2363/*op charR .call.sub Vec<char>P slf i64 id*/((v1345), (v1355)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1351));
      }
    }
  return (v1347);
  id_2349/*op void .call.dtor Vec<char>P slf*/((&(v1347)));
} panic("reached function end without returning anything op Vec<char> .call.map Vec<char>P slf F<char charR> f\n");}

id_1875/*Vec<char>*/ id_2376/*op Vec<char> .call.filter Vec<char>P slf F<bool charR> f*/(id_1875/*Vec<char>*/* v1356, bool(*v1357)(char*)) {{
  id_1875/*Vec<char>*/ v1358; /*r*/
  ((v1358)=id_2352/*lop Vec<char> Vec<char>*/());
  {
      i64 v1366; /*i*/
      id_1865/*RangeIterRange<i64>*/ v1364; /*tmp_rval_1363*/
      id_1864/*RangeIter<i64>*/ v1362; /*__cur*/
      id_1864/*RangeIter<i64>*/ v1365; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1361; /*tmp_rval_1360*/
      id_1865/*RangeIterRange<i64>*/ v1359; /*__range*/
      ((v1359)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1356))->id_1895/*size*/))));
      ((v1365)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1364)=(v1359)), (&(v1364)))))));
      ((v1362)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1361)=(v1359)), (&(v1361)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1362), (v1365))) {
        ((v1366)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1362)));
        if (((*(v1357))(&*id_2363/*op charR .call.sub Vec<char>P slf i64 id*/((v1356), (v1366))))) {
          id_2354/*op void += Vec<char>R slf char val*/(&(v1358), *id_2363/*op charR .call.sub Vec<char>P slf i64 id*/((v1356), (v1366)));
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1362));
      }
    }
  return (v1358);
  id_2349/*op void .call.dtor Vec<char>P slf*/((&(v1358)));
} panic("reached function end without returning anything op Vec<char> .call.filter Vec<char>P slf F<bool charR> f\n");}

id_1878/*Str*/ id_2377/*lop Str Str*/() {{
  id_1878/*Str*/ v1367; /*slf*/
  (((&(v1367))->id_1897/*data*/)=id_2352/*lop Vec<char> Vec<char>*/());
  id_2341/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1367))->id_1897/*data*/)), ((char)((u8)0)));
  (((&(v1367))->id_1895/*size*/)=((i64)0));
  return (v1367);
} panic("reached function end without returning anything lop Str Str\n");}

str id_2378/*op str .call.cstr StrP slf*/(id_1878/*Str*/* v1368) {{
  id_1876/*VecIter<char>*/ v1369; /*it*/
  ((v1369)=id_2344/*op VecIter<char> .call.begin Vec<char>P slf*/((&(((v1368))->id_1897/*data*/))));
  return ((str)((&(v1369))->id_1896/*ptr*/));
} panic("reached function end without returning anything op str .call.cstr StrP slf\n");}

id_1877/*VecIterRange<char>*/ id_2379/*lop VecIterRange<char> iter StrR s*/(id_1878/*Str*/* v1370) {{
  return id_2335/*lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end*/(id_2344/*op VecIter<char> .call.begin Vec<char>P slf*/((&((&(*v1370))->id_1897/*data*/))), id_2330/*op VecIter<char> + VecIter<char> slf i64 i*/(id_2344/*op VecIter<char> .call.begin Vec<char>P slf*/((&((&(*v1370))->id_1897/*data*/))), ((&(*v1370))->id_1895/*size*/)));
} panic("reached function end without returning anything lop VecIterRange<char> iter StrR s\n");}

char* id_2380/*op charR .call.at StrP slf i64 pos*/(id_1878/*Str*/* v1371, i64 v1372) {{
  return &*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((&(((v1371))->id_1897/*data*/)), (v1372));
} panic("reached function end without returning anything op charR .call.at StrP slf i64 pos\n");}

char* id_2381/*op charR .call.sub StrP slf i64 pos*/(id_1878/*Str*/* v1373, i64 v1374) {{
  return &*id_2337/*op charR .call.at Vec<char>P slf i64 pos*/((&(((v1373))->id_1897/*data*/)), (v1374));
} panic("reached function end without returning anything op charR .call.sub StrP slf i64 pos\n");}

char* id_2382/*op charP .call.atP StrP slf i64 pos*/(id_1878/*Str*/* v1375, i64 v1376) {{
  return id_2336/*op charP .call.atP Vec<char>P slf i64 pos*/((&(((v1375))->id_1897/*data*/)), (v1376));
} panic("reached function end without returning anything op charP .call.atP StrP slf i64 pos\n");}

id_1878/*Str*/ id_2383/*op Str .call.sub StrP slf i64 begin i64 end*/(id_1878/*Str*/* v1377, i64 v1378, i64 v1379) {{
  id_1878/*Str*/ v1380; /*res*/
  (((&(v1380))->id_1897/*data*/)=id_2364/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((&(((v1377))->id_1897/*data*/)), (v1378), (v1379)));
  (((&(v1380))->id_1895/*size*/)=((&((&(v1380))->id_1897/*data*/))->id_1895/*size*/));
  id_2341/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1380))->id_1897/*data*/)), ((char)((u8)0)));
  return (v1380);
} panic("reached function end without returning anything op Str .call.sub StrP slf i64 begin i64 end\n");}

void id_2384/*op void .call.push_back StrP slf char ch*/(id_1878/*Str*/* v1381, char v1382){
  id_2342/*op void .call.pop_back Vec<char>P slf*/((&(((v1381))->id_1897/*data*/)));
  id_2341/*op void .call.push_back Vec<char>P slf char val*/((&(((v1381))->id_1897/*data*/)), (v1382));
  id_2341/*op void .call.push_back Vec<char>P slf char val*/((&(((v1381))->id_1897/*data*/)), ((char)((u8)0)));
  *id_1969/*lop i64R ++ i64R x*/(&(((v1381))->id_1895/*size*/));
}

void id_2385/*op void .call.pop_back StrP slf*/(id_1878/*Str*/* v1383){
  id_2342/*op void .call.pop_back Vec<char>P slf*/((&(((v1383))->id_1897/*data*/)));
  id_2342/*op void .call.pop_back Vec<char>P slf*/((&(((v1383))->id_1897/*data*/)));
  id_2341/*op void .call.push_back Vec<char>P slf char val*/((&(((v1383))->id_1897/*data*/)), ((char)((u8)0)));
  *id_1970/*lop i64R -- i64R x*/(&(((v1383))->id_1895/*size*/));
}

id_1878/*Str*/ id_2386/*lop Str Str str s*/(str v1384) {{
  id_1878/*Str*/ v1385; /*res*/
  ((v1385)=id_2377/*lop Str Str*/());
  id_2342/*op void .call.pop_back Vec<char>P slf*/((&((&(v1385))->id_1897/*data*/)));
  while ((((*((char*)(v1384))))!=(((char)((u8)0))))) {
    id_2341/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1385))->id_1897/*data*/)), (*((char*)(v1384))));
    ((v1384)=((str)((((i64)(v1384)))+(((i64)1)))));
  }
  id_2341/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1385))->id_1897/*data*/)), ((char)((u8)0)));
  (((&(v1385))->id_1895/*size*/)=((((&((&(v1385))->id_1897/*data*/))->id_1895/*size*/))-(((i64)1))));
  return (v1385);
} panic("reached function end without returning anything lop Str Str str s\n");}

id_1878/*Str*/ id_2387/*lop Str Str StrR s*/(id_1878/*Str*/* v1386) {{
  id_1878/*Str*/ v1387; /*slf*/
  ((v1387)=id_2377/*lop Str Str*/());
  (((&(v1387))->id_1897/*data*/)=id_2353/*lop Vec<char> Vec<char> Vec<char>R other*/(&((&(*v1386))->id_1897/*data*/)));
  (((&(v1387))->id_1895/*size*/)=((&(*v1386))->id_1895/*size*/));
  return (v1387);
} panic("reached function end without returning anything lop Str Str StrR s\n");}

i64 id_2388/*lop i64 len str s*/(str v1388) {{
  i64 v1389; /*res*/
  ((v1389)=((i64)0));
  while ((((*((char*)(v1388))))!=(((char)((u8)0))))) {
    *id_1969/*lop i64R ++ i64R x*/(&(v1389));
    ((v1388)=((str)((((i64)(v1388)))+(((i64)1)))));
  }
  return (v1389);
} panic("reached function end without returning anything lop i64 len str s\n");}

void id_2389/*lop void out StrR s*/(id_1878/*Str*/* v1390){
  (printf("%s\n", id_2378/*op str .call.cstr StrP slf*/((&(*v1390)))));
}

void id_2390/*lop void put StrR s*/(id_1878/*Str*/* v1391){
  (printf("%s", id_2378/*op str .call.cstr StrP slf*/((&(*v1391)))));
}

void id_2391/*op void += StrR a char ch*/(id_1878/*Str*/* v1392, char v1393){
  id_2384/*op void .call.push_back StrP slf char ch*/((&(*v1392)), (v1393));
}

void id_2392/*op void += StrR a StrR b*/(id_1878/*Str*/* v1394, id_1878/*Str*/* v1395){
  {
      i64 v1403; /*i*/
      id_1864/*RangeIter<i64>*/ v1402; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1401; /*tmp_rval_1400*/
      id_1864/*RangeIter<i64>*/ v1399; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1398; /*tmp_rval_1397*/
      id_1865/*RangeIterRange<i64>*/ v1396; /*__range*/
      ((v1396)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1395))->id_1895/*size*/))));
      ((v1402)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1401)=(v1396)), (&(v1401)))))));
      ((v1399)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1398)=(v1396)), (&(v1398)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1399), (v1402))) {
        char v1404; /*ch*/
        ((v1403)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1399)));
        ((v1404)=((char)((i8)115)));
        ((v1404)=*id_2380/*op charR .call.at StrP slf i64 pos*/((&(*v1395)), (v1403)));
        id_2391/*op void += StrR a char ch*/(&(*v1394), (v1404));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1399));
      }
    }
}

void id_2393/*op void += StrR a str b*/(id_1878/*Str*/* v1405, str v1406){
  i64 v1407; /*len*/
  ((v1407)=id_2388/*lop i64 len str s*/((v1406)));
  {
      i64 v1415; /*i*/
      id_1864/*RangeIter<i64>*/ v1414; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1413; /*tmp_rval_1412*/
      id_1864/*RangeIter<i64>*/ v1411; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1410; /*tmp_rval_1409*/
      id_1865/*RangeIterRange<i64>*/ v1408; /*__range*/
      ((v1408)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1407))));
      ((v1414)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1413)=(v1408)), (&(v1413)))))));
      ((v1411)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1410)=(v1408)), (&(v1410)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1411), (v1414))) {
        ((v1415)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1411)));
        id_2391/*op void += StrR a char ch*/(&(*v1405), id_2324/*op char .call.sub strP slf i64 pos*/((&(v1406)), (v1415)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1411));
      }
    }
}

id_1878/*Str*/ id_2394/*op Str + StrR a StrR b*/(id_1878/*Str*/* v1416, id_1878/*Str*/* v1417) {{
  id_1878/*Str*/ v1418; /*s*/
  ((v1418)=id_2387/*lop Str Str StrR s*/(&(*v1416)));
  id_2392/*op void += StrR a StrR b*/(&(v1418), &(*v1417));
  return (v1418);
} panic("reached function end without returning anything op Str + StrR a StrR b\n");}

id_1878/*Str*/ id_2395/*op Str + str a str b*/(str v1419, str v1420) {{
  id_1878/*Str*/ v1424; /*tmp_rval_1423*/
  id_1878/*Str*/ v1422; /*tmp_rval_1421*/
  return id_2394/*op Str + StrR a StrR b*/(&(*(((v1422)=id_2386/*lop Str Str str s*/((v1419))), (&(v1422)))), &(*(((v1424)=id_2386/*lop Str Str str s*/((v1420))), (&(v1424)))));
} panic("reached function end without returning anything op Str + str a str b\n");}

id_1878/*Str*/ id_2396/*op Str + StrR a str b*/(id_1878/*Str*/* v1425, str v1426) {{
  id_1878/*Str*/ v1428; /*tmp_rval_1427*/
  return id_2394/*op Str + StrR a StrR b*/(&(*v1425), &(*(((v1428)=id_2386/*lop Str Str str s*/((v1426))), (&(v1428)))));
} panic("reached function end without returning anything op Str + StrR a str b\n");}

id_1878/*Str*/ id_2397/*op Str + str a StrR b*/(str v1429, id_1878/*Str*/* v1430) {{
  id_1878/*Str*/ v1432; /*tmp_rval_1431*/
  return id_2394/*op Str + StrR a StrR b*/(&(*(((v1432)=id_2386/*lop Str Str str s*/((v1429))), (&(v1432)))), &(*v1430));
} panic("reached function end without returning anything op Str + str a StrR b\n");}

id_1853/*Out*/ id_2398/*rop Out < StrR i*/(id_1878/*Str*/* v1433) {{
  id_2389/*lop void out StrR s*/(&(*v1433));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < StrR i\n");}

id_1853/*Out*/ id_2399/*lop Out < StrR i*/(id_1878/*Str*/* v1434) {{
  (id_2390/*lop void put StrR s*/(&(*v1434)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < StrR i\n");}

id_1853/*Out*/ id_2400/*op Out < Out o StrR i*/(id_1853/*Out*/ v1435, id_1878/*Str*/* v1436) {{
  (id_2390/*lop void put StrR s*/(&(*v1436)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o StrR i\n");}

bool id_2401/*op bool < StrR a StrR b*/(id_1878/*Str*/* v1437, id_1878/*Str*/* v1438) {{
  {
      i64 v1446; /*i*/
      id_1864/*RangeIter<i64>*/ v1445; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1444; /*tmp_rval_1443*/
      id_1864/*RangeIter<i64>*/ v1442; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1441; /*tmp_rval_1440*/
      id_1865/*RangeIterRange<i64>*/ v1439; /*__range*/
      ((v1439)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), id_1915/*lop i64 min i64 a i64 b*/(((&(*v1437))->id_1895/*size*/), ((&(*v1438))->id_1895/*size*/)))));
      ((v1445)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1444)=(v1439)), (&(v1444)))))));
      ((v1442)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1441)=(v1439)), (&(v1441)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1442), (v1445))) {
        ((v1446)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1442)));
        if (((*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1437)), (v1446)))<(*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1438)), (v1446))))) {
          return ((bool)1);
        }
 else if (((*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1438)), (v1446)))<(*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1437)), (v1446))))) {
          return ((bool)0);
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1442));
      }
    }
  if (((((&(*v1437))->id_1895/*size*/))<(((&(*v1438))->id_1895/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1437))->id_1895/*size*/))>(((&(*v1438))->id_1895/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < StrR a StrR b\n");}

bool id_2402/*op bool in char c StrR s*/(char v1447, id_1878/*Str*/* v1448) {{
  {
      char v1456; /*i*/
      id_1876/*VecIter<char>*/ v1455; /*__end*/
      id_1876/*VecIter<char>*/ v1452; /*__cur*/
      id_1877/*VecIterRange<char>*/ v1451; /*tmp_rval_1450*/
      id_1877/*VecIterRange<char>*/ v1454; /*tmp_rval_1453*/
      id_1877/*VecIterRange<char>*/ v1449; /*__range*/
      ((v1449)=id_2379/*lop VecIterRange<char> iter StrR s*/(&(*v1448)));
      ((v1455)=id_2334/*op VecIter<char> .call.end VecIterRange<char>P slf*/((&(*(((v1454)=(v1449)), (&(v1454)))))));
      ((v1452)=id_2333/*op VecIter<char> .call.begin VecIterRange<char>P slf*/((&(*(((v1451)=(v1449)), (&(v1451)))))));
      while (id_2331/*op bool != VecIter<char> a VecIter<char> b*/((v1452), (v1455))) {
        ((v1456)=*id_2332/*lop charR * VecIter<char> slf*/((v1452)));
        if ((((v1456))==((v1447)))) {
          return ((bool)1);
        }
        id_2329/*lop void ++ VecIter<char>R slf*/(&(v1452));
      }
    }
  return ((bool)0);
} panic("reached function end without returning anything op bool in char c StrR s\n");}

id_1878/*Str*/ id_2403/*op Str * str s i64 i*/(str v1457, i64 v1458) {{
  id_1878/*Str*/ v1460; /*t*/
  id_1878/*Str*/ v1459; /*slf*/
  ((v1459)=id_2377/*lop Str Str*/());
  ((v1460)=id_2386/*lop Str Str str s*/((v1457)));
  {
      i64 v1468; /*j*/
      id_1864/*RangeIter<i64>*/ v1467; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1466; /*tmp_rval_1465*/
      id_1864/*RangeIter<i64>*/ v1464; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1463; /*tmp_rval_1462*/
      id_1865/*RangeIterRange<i64>*/ v1461; /*__range*/
      ((v1461)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1458))));
      ((v1467)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1466)=(v1461)), (&(v1466)))))));
      ((v1464)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1463)=(v1461)), (&(v1463)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1464), (v1467))) {
        ((v1468)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1464)));
        id_2392/*op void += StrR a StrR b*/(&(v1459), &(v1460));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1464));
      }
    }
  return (v1459);
  return id_2377/*lop Str Str*/();
} panic("reached function end without returning anything op Str * str s i64 i\n");}

id_1878/*Str*/ id_2404/*lop Str $ str s*/(str v1469) {{
  return id_2386/*lop Str Str str s*/((v1469));
} panic("reached function end without returning anything lop Str $ str s\n");}

id_1877/*VecIterRange<char>*/ id_2405/*lop VecIterRange<char> iter str s*/(str v1470) {{
  id_1878/*Str*/ v1472; /*tmp_rval_1471*/
  return id_2379/*lop VecIterRange<char> iter StrR s*/(&(*(((v1472)=id_2386/*lop Str Str str s*/((v1470))), (&(v1472)))));
} panic("reached function end without returning anything lop VecIterRange<char> iter str s\n");}

bool id_2406/*lop bool starts_with StrR a StrR b*/(id_1878/*Str*/* v1473, id_1878/*Str*/* v1474) {{
  if (((((&(*v1473))->id_1895/*size*/))<(((&(*v1474))->id_1895/*size*/)))) {
    return ((bool)0);
  }
  {
      i64 v1482; /*i*/
      id_1864/*RangeIter<i64>*/ v1481; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1480; /*tmp_rval_1479*/
      id_1864/*RangeIter<i64>*/ v1478; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1477; /*tmp_rval_1476*/
      id_1865/*RangeIterRange<i64>*/ v1475; /*__range*/
      ((v1475)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1474))->id_1895/*size*/))));
      ((v1481)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1480)=(v1475)), (&(v1480)))))));
      ((v1478)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1477)=(v1475)), (&(v1477)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1478), (v1481))) {
        ((v1482)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1478)));
        if (((*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1473)), (v1482)))!=(*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1474)), (v1482))))) {
          return ((bool)0);
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1478));
      }
    }
  return ((bool)1);
} panic("reached function end without returning anything lop bool starts_with StrR a StrR b\n");}

bool id_2407/*lop bool ends_with StrR a StrR b*/(id_1878/*Str*/* v1483, id_1878/*Str*/* v1484) {{
  i64 v1485; /*size*/
  ((v1485)=((((&(*v1483))->id_1895/*size*/))-(((&(*v1484))->id_1895/*size*/))));
  if (((((&(*v1483))->id_1895/*size*/))<((v1485)))) {
    return ((bool)0);
  }
  {
      id_1864/*RangeIter<i64>*/ v1492; /*__end*/
      i64 v1493; /*i*/
      id_1865/*RangeIterRange<i64>*/ v1491; /*tmp_rval_1490*/
      id_1864/*RangeIter<i64>*/ v1489; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1488; /*tmp_rval_1487*/
      id_1865/*RangeIterRange<i64>*/ v1486; /*__range*/
      ((v1486)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1484))->id_1895/*size*/))));
      ((v1492)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1491)=(v1486)), (&(v1491)))))));
      ((v1489)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1488)=(v1486)), (&(v1488)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1489), (v1492))) {
        ((v1493)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1489)));
        if (((*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1483)), (((v1493))+((v1485)))))!=(*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1484)), (v1493))))) {
          return ((bool)0);
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1489));
      }
    }
  return ((bool)1);
} panic("reached function end without returning anything lop bool ends_with StrR a StrR b\n");}

id_1878/*Str*/ id_2408/*lop Str reverse StrR a*/(id_1878/*Str*/* v1494) {{
  i64 v1496; /*i*/
  id_1878/*Str*/ v1495; /*r*/
  ((v1495)=id_2377/*lop Str Str*/());
  ((v1496)=((&(*v1494))->id_1895/*size*/));
  while ((((v1496))>(((i64)0)))) {
    id_2391/*op void += StrR a char ch*/(&(v1495), *id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1494)), (((v1496))-(((i64)1)))));
    id_1960/*op void -= i64R a i64 b*/(&(v1496), ((i64)1));
  }
  return (v1495);
} panic("reached function end without returning anything lop Str reverse StrR a\n");}

i64 id_2409/*lop i64 find StrR a StrR b i64 begin*/(id_1878/*Str*/* v1497, id_1878/*Str*/* v1498, i64 v1499) {{
  if ((((v1499))>(((&(*v1497))->id_1895/*size*/)))) {
    return (-(((i64)1)));
  }
  {
      i64 v1507; /*i*/
      id_1864/*RangeIter<i64>*/ v1506; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1505; /*tmp_rval_1504*/
      id_1864/*RangeIter<i64>*/ v1503; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1502; /*tmp_rval_1501*/
      id_1865/*RangeIterRange<i64>*/ v1500; /*__range*/
      ((v1500)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((v1499), ((&(*v1497))->id_1895/*size*/))));
      ((v1506)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1505)=(v1500)), (&(v1505)))))));
      ((v1503)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1502)=(v1500)), (&(v1502)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1503), (v1506))) {
        i64 v1508; /*j*/
        ((v1507)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1503)));
        ((v1508)=((i64)0));
        if (((*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1497)), (v1507)))==(*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1498)), (v1508))))) {
          i64 v1509; /*temp*/
          ((v1509)=(v1507));
          while (((((((*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1497)), (v1507)))==(*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1498)), (v1508)))))&&((((v1507))<(((&(*v1497))->id_1895/*size*/))))))&&((((v1508))<(((&(*v1498))->id_1895/*size*/)))))) {
            (id_1959/*op void += i64R a i64 b*/(&(v1507), ((i64)1)), id_1959/*op void += i64R a i64 b*/(&(v1508), ((i64)1)));
          }
          if ((((v1508))==(((&(*v1498))->id_1895/*size*/)))) {
            return (v1509);
          } else {
            (((v1507)=(v1509)), ((v1509)=((i64)0)));
          }
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1503));
      }
    }
  return (-(((i64)1)));
} panic("reached function end without returning anything lop i64 find StrR a StrR b i64 begin\n");}

i64 id_2410/*lop i64 find StrR a StrR b*/(id_1878/*Str*/* v1510, id_1878/*Str*/* v1511) {{
  return id_2409/*lop i64 find StrR a StrR b i64 begin*/(&(*v1510), &(*v1511), ((i64)0));
} panic("reached function end without returning anything lop i64 find StrR a StrR b\n");}

bool id_2411/*lop bool contains StrR a StrR b*/(id_1878/*Str*/* v1512, id_1878/*Str*/* v1513) {{
  return ((id_2410/*lop i64 find StrR a StrR b*/(&(*v1512), &(*v1513)))!=((-(((i64)1)))));
} panic("reached function end without returning anything lop bool contains StrR a StrR b\n");}

id_1880/*VecIter<Str>*/ id_2412/*lop VecIter<Str> VecIter<Str> StrP ptr*/(id_1878/*Str*/* v1560) {{
  id_1880/*VecIter<Str>*/ v1561; /*slf*/
  (((&(v1561))->id_1896/*ptr*/)=(v1560));
  return (v1561);
} panic("reached function end without returning anything lop VecIter<Str> VecIter<Str> StrP ptr\n");}

void id_2413/*lop void ++ VecIter<Str>R slf*/(id_1880/*VecIter<Str>*/* v1562){
  (((&(*v1562))->id_1896/*ptr*/)=((id_1878/*Str*/*)((((i64)((&(*v1562))->id_1896/*ptr*/)))+(((((i64)1))*((sizeof(id_1878/*Str*/))))))));
}

id_1880/*VecIter<Str>*/ id_2414/*op VecIter<Str> + VecIter<Str> slf i64 i*/(id_1880/*VecIter<Str>*/ v1563, i64 v1564) {{
  (((&(v1563))->id_1896/*ptr*/)=((id_1878/*Str*/*)((((i64)((&(v1563))->id_1896/*ptr*/)))+((((v1564))*((sizeof(id_1878/*Str*/))))))));
  return (v1563);
} panic("reached function end without returning anything op VecIter<Str> + VecIter<Str> slf i64 i\n");}

bool id_2415/*op bool != VecIter<Str> a VecIter<Str> b*/(id_1880/*VecIter<Str>*/ v1565, id_1880/*VecIter<Str>*/ v1566) {{
  return ((((i64)((&(v1565))->id_1896/*ptr*/)))!=(((i64)((&(v1566))->id_1896/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<Str> a VecIter<Str> b\n");}

id_1878/*Str*/* id_2416/*lop StrR * VecIter<Str> slf*/(id_1880/*VecIter<Str>*/ v1567) {{
  return &(*((&(v1567))->id_1896/*ptr*/));
} panic("reached function end without returning anything lop StrR * VecIter<Str> slf\n");}

id_1880/*VecIter<Str>*/ id_2417/*op VecIter<Str> .call.begin VecIterRange<Str>P slf*/(id_1881/*VecIterRange<Str>*/* v1570) {{
  return (((v1570))->id_1890/*begin*/);
} panic("reached function end without returning anything op VecIter<Str> .call.begin VecIterRange<Str>P slf\n");}

id_1880/*VecIter<Str>*/ id_2418/*op VecIter<Str> .call.end VecIterRange<Str>P slf*/(id_1881/*VecIterRange<Str>*/* v1571) {{
  return (((v1571))->id_1891/*end*/);
} panic("reached function end without returning anything op VecIter<Str> .call.end VecIterRange<Str>P slf\n");}

id_1881/*VecIterRange<Str>*/ id_2419/*lop VecIterRange<Str> VecIterRange<Str> VecIter<Str> begin VecIter<Str> end*/(id_1880/*VecIter<Str>*/ v1572, id_1880/*VecIter<Str>*/ v1573) {{
  id_1881/*VecIterRange<Str>*/ v1574; /*slf*/
  (((&(v1574))->id_1890/*begin*/)=(v1572));
  (((&(v1574))->id_1891/*end*/)=(v1573));
  return (v1574);
} panic("reached function end without returning anything lop VecIterRange<Str> VecIterRange<Str> VecIter<Str> begin VecIter<Str> end\n");}

id_1878/*Str*/* id_2420/*op StrP .call.atP Vec<Str>P slf i64 pos*/(id_1879/*Vec<Str>*/* v1514, i64 v1515) {{
  return ((id_1878/*Str*/*)((id_1878/*Str*/*)((((i64)(((v1514))->id_1894/*head*/)))+((((v1515))*((sizeof(id_1878/*Str*/))))))));
} panic("reached function end without returning anything op StrP .call.atP Vec<Str>P slf i64 pos\n");}

id_1878/*Str*/* id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/(id_1879/*Vec<Str>*/* v1516, i64 v1517) {{
  return &(*id_2420/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1516), (v1517)));
} panic("reached function end without returning anything op StrR .call.at Vec<Str>P slf i64 pos\n");}

void id_2422/*op void .call.print Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1518){
  (printf("%s", ((str)"[")));
  {
      i64 v1526; /*i*/
      id_1864/*RangeIter<i64>*/ v1525; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1524; /*tmp_rval_1523*/
      id_1864/*RangeIter<i64>*/ v1522; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1521; /*tmp_rval_1520*/
      id_1865/*RangeIterRange<i64>*/ v1519; /*__range*/
      ((v1519)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1518))->id_1895/*size*/))));
      ((v1525)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1524)=(v1519)), (&(v1524)))))));
      ((v1522)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1521)=(v1519)), (&(v1521)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1522), (v1525))) {
        ((v1526)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1522)));
        if ((!((!((v1526)))))) {
          (printf("%s", ((str)", ")));
        }
        id_2390/*lop void put StrR s*/(&(*id_2420/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1518), (v1526))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1522));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2423/*op void .call.println Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1527){
  {
      i64 v1535; /*i*/
      id_1864/*RangeIter<i64>*/ v1534; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1533; /*tmp_rval_1532*/
      id_1864/*RangeIter<i64>*/ v1531; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1530; /*tmp_rval_1529*/
      id_1865/*RangeIterRange<i64>*/ v1528; /*__range*/
      ((v1528)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1527))->id_1895/*size*/))));
      ((v1534)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1533)=(v1528)), (&(v1533)))))));
      ((v1531)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1530)=(v1528)), (&(v1530)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1531), (v1534))) {
        ((v1535)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1531)));
        id_2389/*lop void out StrR s*/(&(*id_2420/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1527), (v1535))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1531));
      }
    }
}

void id_2424/*op void .call.double_cap Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1536){
  i64 v1537; /*ncap*/
  ((v1537)=(((v1536))->id_1893/*cap*/));
  if ((((v1537))==(((i64)0)))) {
    ((v1537)=((i64)1));
    ((((v1536))->id_1894/*head*/)=((id_1878/*Str*/*)(alloc((sizeof(id_1878/*Str*/))))));
    ((((v1536))->id_1893/*cap*/)=(v1537));
  } else {
    id_1878/*Str*/* v1538; /*new_head*/
    id_1963/*op void *= i64R a i64 b*/(&(v1537), ((i64)2));
    ((v1538)=((id_1878/*Str*/*)(alloc((((v1537))*((sizeof(id_1878/*Str*/))))))));
    {
        i64 v1546; /*i*/
        id_1865/*RangeIterRange<i64>*/ v1544; /*tmp_rval_1543*/
        id_1864/*RangeIter<i64>*/ v1542; /*__cur*/
        id_1864/*RangeIter<i64>*/ v1545; /*__end*/
        id_1865/*RangeIterRange<i64>*/ v1541; /*tmp_rval_1540*/
        id_1865/*RangeIterRange<i64>*/ v1539; /*__range*/
        ((v1539)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1536))->id_1895/*size*/))));
        ((v1545)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1544)=(v1539)), (&(v1544)))))));
        ((v1542)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1541)=(v1539)), (&(v1541)))))));
        while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1542), (v1545))) {
          ((v1546)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1542)));
          ((*((id_1878/*Str*/*)((((i64)(v1538)))+((((v1546))*((sizeof(id_1878/*Str*/))))))))=id_2387/*lop Str Str StrR s*/(&*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1536), (v1546))));
          id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1542));
        }
      }
    (free((void*) ((i64)(((v1536))->id_1894/*head*/))));
    ((((v1536))->id_1894/*head*/)=(v1538));
  }
  ((((v1536))->id_1893/*cap*/)=(v1537));
}

void id_2425/*op void .call.push_back Vec<Str>P slf Str val*/(id_1879/*Vec<Str>*/* v1547, id_1878/*Str*/ v1548){
  if ((((((v1547))->id_1895/*size*/))==((((v1547))->id_1893/*cap*/)))) {
    id_2424/*op void .call.double_cap Vec<Str>P slf*/((v1547));
  }
  (*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1547), (((v1547))->id_1895/*size*/))=id_2387/*lop Str Str StrR s*/(&(v1548)));
  *id_1969/*lop i64R ++ i64R x*/(&(((v1547))->id_1895/*size*/));
}

void id_2426/*op void .call.pop_back Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1549){
  *id_1970/*lop i64R -- i64R x*/(&(((v1549))->id_1895/*size*/));
}

void id_2427/*op void .call.erase Vec<Str>P slf i64 pos*/(id_1879/*Vec<Str>*/* v1550, i64 v1551){
  {
      i64 v1559; /*i*/
      id_1864/*RangeIter<i64>*/ v1558; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1557; /*tmp_rval_1556*/
      id_1864/*RangeIter<i64>*/ v1555; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1554; /*tmp_rval_1553*/
      id_1865/*RangeIterRange<i64>*/ v1552; /*__range*/
      ((v1552)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((((v1551))+(((i64)1))), (((v1550))->id_1895/*size*/))));
      ((v1558)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1557)=(v1552)), (&(v1557)))))));
      ((v1555)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1554)=(v1552)), (&(v1554)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1555), (v1558))) {
        ((v1559)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1555)));
        (*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1550), (((v1559))-(((i64)1))))=id_2387/*lop Str Str StrR s*/(&*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1550), (v1559))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1555));
      }
    }
  id_2426/*op void .call.pop_back Vec<Str>P slf*/((v1550));
}

id_1880/*VecIter<Str>*/ id_2428/*op VecIter<Str> .call.begin Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1568) {{
  return id_2412/*lop VecIter<Str> VecIter<Str> StrP ptr*/((((v1568))->id_1894/*head*/));
} panic("reached function end without returning anything op VecIter<Str> .call.begin Vec<Str>P slf\n");}

id_1880/*VecIter<Str>*/ id_2429/*op VecIter<Str> .call.end Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1569) {{
  return id_2412/*lop VecIter<Str> VecIter<Str> StrP ptr*/(id_2420/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1569), (((v1569))->id_1895/*size*/)));
} panic("reached function end without returning anything op VecIter<Str> .call.end Vec<Str>P slf\n");}

id_1881/*VecIterRange<Str>*/ id_2430/*lop VecIterRange<Str> iter Vec<Str>R slf*/(id_1879/*Vec<Str>*/* v1575) {{
  id_1881/*VecIterRange<Str>*/ v1576; /*it*/
  (((&(v1576))->id_1890/*begin*/)=id_2428/*op VecIter<Str> .call.begin Vec<Str>P slf*/((&(*v1575))));
  (((&(v1576))->id_1891/*end*/)=id_2429/*op VecIter<Str> .call.end Vec<Str>P slf*/((&(*v1575))));
  return (v1576);
} panic("reached function end without returning anything lop VecIterRange<Str> iter Vec<Str>R slf\n");}

id_1878/*Str*/* id_2431/*op StrR .call.front Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1577) {{
  return &(*(((v1577))->id_1894/*head*/));
} panic("reached function end without returning anything op StrR .call.front Vec<Str>P slf\n");}

id_1878/*Str*/* id_2432/*op StrR .call.back Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1578) {{
  return &(*id_2420/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1578), (((((v1578))->id_1895/*size*/))-(((i64)1)))));
} panic("reached function end without returning anything op StrR .call.back Vec<Str>P slf\n");}

void id_2433/*op void .call.dtor Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1579){
  ((i64)0);
}

id_1879/*Vec<Str>*/ id_2434/*lop Vec<Str> Vec<Str> i64 size*/(i64 v1580) {{
  id_1879/*Vec<Str>*/ v1581; /*slf*/
  (((&(v1581))->id_1894/*head*/)=((id_1878/*Str*/*)((i64)0)));
  (((&(v1581))->id_1895/*size*/)=((i64)0));
  (((&(v1581))->id_1893/*cap*/)=((i64)0));
  while (((((&(v1581))->id_1893/*cap*/))<((v1580)))) {
    id_2424/*op void .call.double_cap Vec<Str>P slf*/((&(v1581)));
  }
  (((&(v1581))->id_1895/*size*/)=(v1580));
  (((&(v1581))->id_1893/*cap*/)=(v1580));
  {
      i64 v1589; /*i*/
      id_1864/*RangeIter<i64>*/ v1588; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1587; /*tmp_rval_1586*/
      id_1864/*RangeIter<i64>*/ v1585; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1584; /*tmp_rval_1583*/
      id_1865/*RangeIterRange<i64>*/ v1582; /*__range*/
      ((v1582)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1581))->id_1895/*size*/))));
      ((v1588)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1587)=(v1582)), (&(v1587)))))));
      ((v1585)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1584)=(v1582)), (&(v1584)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1585), (v1588))) {
        ((v1589)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1585)));
        (*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1581)), (v1589))=id_2377/*lop Str Str*/());
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1585));
      }
    }
  return (v1581);
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1581)));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> i64 size\n");}

id_1879/*Vec<Str>*/ id_2435/*lop Vec<Str> Vec<Str> i64 size Str default*/(i64 v1590, id_1878/*Str*/ v1591) {{
  id_1879/*Vec<Str>*/ v1592; /*slf*/
  ((v1592)=id_2434/*lop Vec<Str> Vec<Str> i64 size*/((v1590)));
  {
      i64 v1600; /*i*/
      id_1864/*RangeIter<i64>*/ v1599; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1598; /*tmp_rval_1597*/
      id_1864/*RangeIter<i64>*/ v1596; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1595; /*tmp_rval_1594*/
      id_1865/*RangeIterRange<i64>*/ v1593; /*__range*/
      ((v1593)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1592))->id_1895/*size*/))));
      ((v1599)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1598)=(v1593)), (&(v1598)))))));
      ((v1596)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1595)=(v1593)), (&(v1595)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1596), (v1599))) {
        ((v1600)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1596)));
        (*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1592)), (v1600))=id_2387/*lop Str Str StrR s*/(&(v1591)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1596));
      }
    }
  return (v1592);
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1592)));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> i64 size Str default\n");}

id_1879/*Vec<Str>*/ id_2436/*lop Vec<Str> Vec<Str>*/() {{
  return id_2434/*lop Vec<Str> Vec<Str> i64 size*/(((i64)0));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str>\n");}

id_1879/*Vec<Str>*/ id_2437/*lop Vec<Str> Vec<Str> Vec<Str>R other*/(id_1879/*Vec<Str>*/* v1601) {{
  id_1879/*Vec<Str>*/ v1602; /*slf*/
  ((v1602)=id_2434/*lop Vec<Str> Vec<Str> i64 size*/(((&(*v1601))->id_1895/*size*/)));
  {
      i64 v1610; /*i*/
      id_1864/*RangeIter<i64>*/ v1609; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1608; /*tmp_rval_1607*/
      id_1864/*RangeIter<i64>*/ v1606; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1605; /*tmp_rval_1604*/
      id_1865/*RangeIterRange<i64>*/ v1603; /*__range*/
      ((v1603)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1601))->id_1895/*size*/))));
      ((v1609)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1608)=(v1603)), (&(v1608)))))));
      ((v1606)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1605)=(v1603)), (&(v1605)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1606), (v1609))) {
        ((v1610)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1606)));
        (*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1602)), (v1610))=id_2387/*lop Str Str StrR s*/(&*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(*v1601)), (v1610))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1606));
      }
    }
  return (v1602);
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1602)));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> Vec<Str>R other\n");}

void id_2438/*op void += Vec<Str>R slf Str val*/(id_1879/*Vec<Str>*/* v1611, id_1878/*Str*/ v1612){
  id_2425/*op void .call.push_back Vec<Str>P slf Str val*/((&(*v1611)), (v1612));
}

void id_2439/*op void += Vec<Str>R slf Vec<Str>R other*/(id_1879/*Vec<Str>*/* v1613, id_1879/*Vec<Str>*/* v1614){
  {
      i64 v1622; /*i*/
      id_1864/*RangeIter<i64>*/ v1621; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1620; /*tmp_rval_1619*/
      id_1864/*RangeIter<i64>*/ v1618; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1617; /*tmp_rval_1616*/
      id_1865/*RangeIterRange<i64>*/ v1615; /*__range*/
      ((v1615)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1614))->id_1895/*size*/))));
      ((v1621)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1620)=(v1615)), (&(v1620)))))));
      ((v1618)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1617)=(v1615)), (&(v1617)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1618), (v1621))) {
        ((v1622)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1618)));
        id_2425/*op void .call.push_back Vec<Str>P slf Str val*/((&(*v1613)), *id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(*v1614)), (v1622)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1618));
      }
    }
}

id_1879/*Vec<Str>*/ id_2440/*op Vec<Str> ,, Str a Str b*/(id_1878/*Str*/ v1623, id_1878/*Str*/ v1624) {{
  id_1879/*Vec<Str>*/ v1625; /*slf*/
  ((v1625)=id_2436/*lop Vec<Str> Vec<Str>*/());
  id_2438/*op void += Vec<Str>R slf Str val*/(&(v1625), (v1623));
  id_2438/*op void += Vec<Str>R slf Str val*/(&(v1625), (v1624));
  return (v1625);
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1625)));
} panic("reached function end without returning anything op Vec<Str> ,, Str a Str b\n");}

id_1879/*Vec<Str>*/* id_2441/*op Vec<Str>R ,, Vec<Str>R v Str a*/(id_1879/*Vec<Str>*/* v1626, id_1878/*Str*/ v1627) {{
  id_2438/*op void += Vec<Str>R slf Str val*/(&(*v1626), (v1627));
  return &(*v1626);
} panic("reached function end without returning anything op Vec<Str>R ,, Vec<Str>R v Str a\n");}

void id_2442/*lop void put Vec<Str>R slf*/(id_1879/*Vec<Str>*/* v1628){
  id_2422/*op void .call.print Vec<Str>P slf*/((&(*v1628)));
}

void id_2443/*lop void out Vec<Str>R slf*/(id_1879/*Vec<Str>*/* v1629){
  id_2422/*op void .call.print Vec<Str>P slf*/((&(*v1629)));
  (printf("%s\n", ((str)"")));
}

id_1853/*Out*/ id_2444/*rop Out < Vec<Str>R i*/(id_1879/*Vec<Str>*/* v1630) {{
  id_2443/*lop void out Vec<Str>R slf*/(&(*v1630));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < Vec<Str>R i\n");}

id_1853/*Out*/ id_2445/*lop Out < Vec<Str>R i*/(id_1879/*Vec<Str>*/* v1631) {{
  (id_2442/*lop void put Vec<Str>R slf*/(&(*v1631)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < Vec<Str>R i\n");}

id_1853/*Out*/ id_2446/*op Out < Out o Vec<Str>R i*/(id_1853/*Out*/ v1632, id_1879/*Vec<Str>*/* v1633) {{
  (id_2442/*lop void put Vec<Str>R slf*/(&(*v1633)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o Vec<Str>R i\n");}

id_1878/*Str*/* id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/(id_1879/*Vec<Str>*/* v1634, i64 v1635) {{
  if ((((v1635))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1635), (((v1634))->id_1895/*size*/));
  }
  return &*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1634), (v1635));
} panic("reached function end without returning anything op StrR .call.sub Vec<Str>P slf i64 id\n");}

id_1879/*Vec<Str>*/ id_2448/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/(id_1879/*Vec<Str>*/* v1636, i64 v1637, i64 v1638) {{
  id_1879/*Vec<Str>*/ v1639; /*res*/
  ((v1639)=id_2434/*lop Vec<Str> Vec<Str> i64 size*/(((i64)0)));
  {
      i64 v1647; /*i*/
      id_1864/*RangeIter<i64>*/ v1646; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1645; /*tmp_rval_1644*/
      id_1864/*RangeIter<i64>*/ v1643; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1642; /*tmp_rval_1641*/
      id_1865/*RangeIterRange<i64>*/ v1640; /*__range*/
      ((v1640)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((v1637), (v1638))));
      ((v1646)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1645)=(v1640)), (&(v1645)))))));
      ((v1643)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1642)=(v1640)), (&(v1642)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1643), (v1646))) {
        ((v1647)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1643)));
        id_2425/*op void .call.push_back Vec<Str>P slf Str val*/((&(v1639)), *id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1636), (v1647)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1643));
      }
    }
  return (v1639);
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1639)));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end\n");}

id_1879/*Vec<Str>*/ id_2449/*op Vec<Str> .call.sub Vec<Str>P slf Range<i64> r*/(id_1879/*Vec<Str>*/* v1648, id_1863/*Range<i64>*/ v1649) {{
  i64 v1651; /*end*/
  i64 v1650; /*begin*/
  (((v1650)=((&(v1649))->id_1890/*begin*/)), ((v1651)=((&(v1649))->id_1891/*end*/)));
  if ((((v1650))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1650), (((v1648))->id_1895/*size*/));
  }
  if ((((v1650))<(((i64)0)))) {
    ((v1650)=((i64)0));
  }
  if ((((v1651))<(((i64)0)))) {
    id_1959/*op void += i64R a i64 b*/(&(v1651), (((v1648))->id_1895/*size*/));
  }
  if ((((v1651))>((((v1648))->id_1895/*size*/)))) {
    ((v1651)=(((v1648))->id_1895/*size*/));
  }
  return id_2448/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/((v1648), (v1650), (v1651));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf Range<i64> r\n");}

id_1879/*Vec<Str>*/ id_2450/*op Vec<Str> .call.sub Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1652) {{
  return id_2448/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/((v1652), ((i64)0), (((v1652))->id_1895/*size*/));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf\n");}

bool id_2451/*op bool < Vec<Str>R a Vec<Str>R b*/(id_1879/*Vec<Str>*/* v1653, id_1879/*Vec<Str>*/* v1654) {{
  {
      id_1864/*RangeIter<i64>*/ v1661; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1660; /*tmp_rval_1659*/
      id_1864/*RangeIter<i64>*/ v1658; /*__cur*/
      i64 v1662; /*i*/
      id_1865/*RangeIterRange<i64>*/ v1657; /*tmp_rval_1656*/
      id_1865/*RangeIterRange<i64>*/ v1655; /*__range*/
      ((v1655)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), id_1915/*lop i64 min i64 a i64 b*/(((&(*v1653))->id_1895/*size*/), ((&(*v1654))->id_1895/*size*/)))));
      ((v1661)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1660)=(v1655)), (&(v1660)))))));
      ((v1658)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1657)=(v1655)), (&(v1657)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1658), (v1661))) {
        ((v1662)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1658)));
        if (id_2401/*op bool < StrR a StrR b*/(&*id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1653)), (v1662)), &*id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1654)), (v1662)))) {
          return ((bool)1);
        }
 else if (id_2401/*op bool < StrR a StrR b*/(&*id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1654)), (v1662)), &*id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1653)), (v1662)))) {
          return ((bool)0);
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1658));
      }
    }
  if (((((&(*v1653))->id_1895/*size*/))<(((&(*v1654))->id_1895/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1653))->id_1895/*size*/))>(((&(*v1654))->id_1895/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<Str>R a Vec<Str>R b\n");}

void id_2452/*lop void swap StrP a StrP b*/(id_1878/*Str*/* v1663, id_1878/*Str*/* v1664){
  id_1878/*Str*/ v1665; /*t*/
  ((v1665)=(*(v1663)));
  ((*(v1663))=id_2387/*lop Str Str StrR s*/(&(*(v1664))));
  ((*(v1664))=id_2387/*lop Str Str StrR s*/(&(v1665)));
}

id_1878/*Str*/* id_2453/*lop StrP partition StrP lo StrP hi*/(id_1878/*Str*/* v1666, id_1878/*Str*/* v1667) {{
  id_1878/*Str*/* v1670; /*j*/
  id_1878/*Str*/* v1669; /*i*/
  id_1878/*Str*/* v1668; /*pivot*/
  (((v1668)=((id_1878/*Str*/*)((((i64)(v1667)))-(((((i64)1))*((sizeof(id_1878/*Str*/)))))))), ((v1669)=(v1666)), ((v1670)=(v1666)));
  ((v1670)=(v1666));
  while (((((i64)(v1670)))!=(((i64)(v1668))))) {
    if (id_2401/*op bool < StrR a StrR b*/(&(*(v1670)), &(*(v1668)))) {
      id_2452/*lop void swap StrP a StrP b*/((v1669), (v1670));
      ((v1669)=((id_1878/*Str*/*)((((i64)(v1669)))+(((((i64)1))*((sizeof(id_1878/*Str*/))))))));
    }
    ((v1670)=((id_1878/*Str*/*)((((i64)(v1670)))+(((((i64)1))*((sizeof(id_1878/*Str*/))))))));
  }
  id_2452/*lop void swap StrP a StrP b*/((v1669), (v1668));
  return (v1669);
} panic("reached function end without returning anything lop StrP partition StrP lo StrP hi\n");}

void id_2454/*lop void qsort StrP lhs StrP rhs*/(id_1878/*Str*/* v1671, id_1878/*Str*/* v1672){
  i64 v1674; /*b*/
  i64 v1673; /*a*/
  ((v1673)=((((i64)(v1672)))-(((i64)(v1671)))));
  ((v1674)=(sizeof(id_1878/*Str*/)));
  if ((((v1673))>((v1674)))) {
    id_1878/*Str*/* v1675; /*pi*/
    ((v1675)=id_2453/*lop StrP partition StrP lo StrP hi*/((v1671), (v1672)));
    id_2454/*lop void qsort StrP lhs StrP rhs*/((v1671), (v1675));
    ((v1675)=((id_1878/*Str*/*)((((i64)(v1675)))+(((((i64)1))*((sizeof(id_1878/*Str*/))))))));
    id_2454/*lop void qsort StrP lhs StrP rhs*/((v1675), (v1672));
  }
}

void id_2455/*op void .call.sort Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1676){
  id_1880/*VecIter<Str>*/ v1680; /*tmp_rval_1679*/
  id_1880/*VecIter<Str>*/ v1678; /*tmp_rval_1677*/
  id_2454/*lop void qsort StrP lhs StrP rhs*/(((&(*(((v1678)=id_2428/*op VecIter<Str> .call.begin Vec<Str>P slf*/((v1676))), (&(v1678)))))->id_1896/*ptr*/), ((&(*(((v1680)=id_2429/*op VecIter<Str> .call.end Vec<Str>P slf*/((v1676))), (&(v1680)))))->id_1896/*ptr*/));
}

void id_2456/*lop void sort Vec<Str>R slf*/(id_1879/*Vec<Str>*/* v1681){
  id_2455/*op void .call.sort Vec<Str>P slf*/((&(*v1681)));
}

id_1878/*Str*/ id_2457/*op Str .call.max Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1682) {{
  id_1878/*Str*/ v1683; /*tmp*/
  ((v1683)=id_2387/*lop Str Str StrR s*/(&*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1682), ((i64)0))));
  {
      id_1878/*Str*/ v1691; /*i*/
      id_1880/*VecIter<Str>*/ v1690; /*__end*/
      id_1881/*VecIterRange<Str>*/ v1689; /*tmp_rval_1688*/
      id_1880/*VecIter<Str>*/ v1687; /*__cur*/
      id_1881/*VecIterRange<Str>*/ v1686; /*tmp_rval_1685*/
      id_1881/*VecIterRange<Str>*/ v1684; /*__range*/
      ((v1684)=id_2430/*lop VecIterRange<Str> iter Vec<Str>R slf*/(&(*(v1682))));
      ((v1690)=id_2418/*op VecIter<Str> .call.end VecIterRange<Str>P slf*/((&(*(((v1689)=(v1684)), (&(v1689)))))));
      ((v1687)=id_2417/*op VecIter<Str> .call.begin VecIterRange<Str>P slf*/((&(*(((v1686)=(v1684)), (&(v1686)))))));
      while (id_2415/*op bool != VecIter<Str> a VecIter<Str> b*/((v1687), (v1690))) {
        ((v1691)=id_2387/*lop Str Str StrR s*/(&*id_2416/*lop StrR * VecIter<Str> slf*/((v1687))));
        if (id_2401/*op bool < StrR a StrR b*/(&(v1683), &(v1691))) {
          ((v1683)=id_2387/*lop Str Str StrR s*/(&(v1691)));
        }
        id_2413/*lop void ++ VecIter<Str>R slf*/(&(v1687));
      }
    }
  return (v1683);
} panic("reached function end without returning anything op Str .call.max Vec<Str>P slf\n");}

id_1878/*Str*/ id_2458/*op Str .call.min Vec<Str>P slf*/(id_1879/*Vec<Str>*/* v1692) {{
  id_1878/*Str*/ v1693; /*tmp*/
  ((v1693)=id_2387/*lop Str Str StrR s*/(&*id_2421/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1692), ((i64)0))));
  {
      id_1878/*Str*/ v1701; /*i*/
      id_1880/*VecIter<Str>*/ v1700; /*__end*/
      id_1881/*VecIterRange<Str>*/ v1699; /*tmp_rval_1698*/
      id_1880/*VecIter<Str>*/ v1697; /*__cur*/
      id_1881/*VecIterRange<Str>*/ v1696; /*tmp_rval_1695*/
      id_1881/*VecIterRange<Str>*/ v1694; /*__range*/
      ((v1694)=id_2430/*lop VecIterRange<Str> iter Vec<Str>R slf*/(&(*(v1692))));
      ((v1700)=id_2418/*op VecIter<Str> .call.end VecIterRange<Str>P slf*/((&(*(((v1699)=(v1694)), (&(v1699)))))));
      ((v1697)=id_2417/*op VecIter<Str> .call.begin VecIterRange<Str>P slf*/((&(*(((v1696)=(v1694)), (&(v1696)))))));
      while (id_2415/*op bool != VecIter<Str> a VecIter<Str> b*/((v1697), (v1700))) {
        ((v1701)=id_2387/*lop Str Str StrR s*/(&*id_2416/*lop StrR * VecIter<Str> slf*/((v1697))));
        if (id_2401/*op bool < StrR a StrR b*/(&(v1701), &(v1693))) {
          ((v1693)=id_2387/*lop Str Str StrR s*/(&(v1701)));
        }
        id_2413/*lop void ++ VecIter<Str>R slf*/(&(v1697));
      }
    }
  return (v1693);
} panic("reached function end without returning anything op Str .call.min Vec<Str>P slf\n");}

id_1879/*Vec<Str>*/ id_2459/*op Vec<Str> .call.map Vec<Str>P slf F<Str StrR> f*/(id_1879/*Vec<Str>*/* v1702, id_1878/*Str*/(*v1703)(id_1878/*Str*/*)) {{
  id_1879/*Vec<Str>*/ v1704; /*r*/
  ((v1704)=id_2434/*lop Vec<Str> Vec<Str> i64 size*/((((v1702))->id_1895/*size*/)));
  {
      id_1864/*RangeIter<i64>*/ v1711; /*__end*/
      i64 v1712; /*i*/
      id_1865/*RangeIterRange<i64>*/ v1710; /*tmp_rval_1709*/
      id_1864/*RangeIter<i64>*/ v1708; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1707; /*tmp_rval_1706*/
      id_1865/*RangeIterRange<i64>*/ v1705; /*__range*/
      ((v1705)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1702))->id_1895/*size*/))));
      ((v1711)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1710)=(v1705)), (&(v1710)))))));
      ((v1708)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1707)=(v1705)), (&(v1707)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1708), (v1711))) {
        ((v1712)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1708)));
        (*id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1704)), (v1712))=((*(v1703))(&*id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1702), (v1712)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1708));
      }
    }
  return (v1704);
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1704)));
} panic("reached function end without returning anything op Vec<Str> .call.map Vec<Str>P slf F<Str StrR> f\n");}

id_1879/*Vec<Str>*/ id_2460/*op Vec<Str> .call.filter Vec<Str>P slf F<bool StrR> f*/(id_1879/*Vec<Str>*/* v1713, bool(*v1714)(id_1878/*Str*/*)) {{
  id_1879/*Vec<Str>*/ v1715; /*r*/
  ((v1715)=id_2436/*lop Vec<Str> Vec<Str>*/());
  {
      i64 v1723; /*i*/
      id_1864/*RangeIter<i64>*/ v1722; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1721; /*tmp_rval_1720*/
      id_1864/*RangeIter<i64>*/ v1719; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1718; /*tmp_rval_1717*/
      id_1865/*RangeIterRange<i64>*/ v1716; /*__range*/
      ((v1716)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1713))->id_1895/*size*/))));
      ((v1722)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1721)=(v1716)), (&(v1721)))))));
      ((v1719)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1718)=(v1716)), (&(v1718)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1719), (v1722))) {
        ((v1723)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1719)));
        if (((*(v1714))(&*id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1713), (v1723))))) {
          id_2438/*op void += Vec<Str>R slf Str val*/(&(v1715), *id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1713), (v1723)));
        }
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1719));
      }
    }
  return (v1715);
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1715)));
} panic("reached function end without returning anything op Vec<Str> .call.filter Vec<Str>P slf F<bool StrR> f\n");}

id_1879/*Vec<Str>*/ id_2461/*op Vec<Str> .call.split StrP slf StrR p*/(id_1878/*Str*/* v1724, id_1878/*Str*/* v1725) {{
  i64 v1728; /*l*/
  i64 v1727; /*t*/
  id_1879/*Vec<Str>*/ v1726; /*v*/
  ((v1726)=id_2436/*lop Vec<Str> Vec<Str>*/());
  ((v1727)=((i64)0));
  ((v1728)=id_2410/*lop i64 find StrR a StrR b*/(&(*(v1724)), &(*v1725)));
  while ((((v1728))!=((-(((i64)1)))))) {
    if ((((v1727))!=((v1728)))) {
      id_2438/*op void += Vec<Str>R slf Str val*/(&(v1726), id_2383/*op Str .call.sub StrP slf i64 begin i64 end*/((v1724), (v1727), (v1728)));
    }
    ((v1727)=(((v1728))+(((&(*v1725))->id_1895/*size*/))));
    ((v1728)=id_2409/*lop i64 find StrR a StrR b i64 begin*/(&(*(v1724)), &(*v1725), (v1727)));
  }
  if ((((v1727))!=((((v1724))->id_1895/*size*/)))) {
    id_2438/*op void += Vec<Str>R slf Str val*/(&(v1726), id_2383/*op Str .call.sub StrP slf i64 begin i64 end*/((v1724), (v1727), (((v1724))->id_1895/*size*/)));
  }
  return (v1726);
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1726)));
} panic("reached function end without returning anything op Vec<Str> .call.split StrP slf StrR p\n");}

id_1879/*Vec<Str>*/ id_2462/*op Vec<Str> .call.split StrP slf str p*/(id_1878/*Str*/* v1729, str v1730) {{
  id_1878/*Str*/ v1732; /*tmp_rval_1731*/
  return id_2461/*op Vec<Str> .call.split StrP slf StrR p*/((v1729), &(*(((v1732)=id_2386/*lop Str Str str s*/((v1730))), (&(v1732)))));
} panic("reached function end without returning anything op Vec<Str> .call.split StrP slf str p\n");}

i64 id_2463/*lop i64 i64 StrR s*/(id_1878/*Str*/* v1733) {{
  i64 v1736; /*begin*/
  i64 v1735; /*sign*/
  i64 v1734; /*val*/
  ((v1734)=((i64)0));
  ((v1735)=((i64)1));
  ((v1736)=((i64)0));
  if (((*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1733)), ((i64)0)))==(id_2327/*lop char chr str s*/(((str)"-"))))) {
    (((v1735)=(-(((i64)1)))), ((v1736)=((i64)1)));
  }
  {
      i64 v1744; /*i*/
      id_1864/*RangeIter<i64>*/ v1743; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1742; /*tmp_rval_1741*/
      id_1864/*RangeIter<i64>*/ v1740; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1739; /*tmp_rval_1738*/
      id_1865/*RangeIterRange<i64>*/ v1737; /*__range*/
      ((v1737)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/((v1736), ((&(*v1733))->id_1895/*size*/))));
      ((v1743)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1742)=(v1737)), (&(v1742)))))));
      ((v1740)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1739)=(v1737)), (&(v1739)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1740), (v1743))) {
        char v1745; /*ch*/
        ((v1744)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1740)));
        ((v1745)=((*id_2381/*op charR .call.sub StrP slf i64 pos*/((&(*v1733)), (v1744)))-(id_2327/*lop char chr str s*/(((str)"0")))));
        ((v1734)=((((((i64)10))*((v1734))))+(((i64)(v1745)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1740));
      }
    }
  id_1963/*op void *= i64R a i64 b*/(&(v1734), (v1735));
  return (v1734);
} panic("reached function end without returning anything lop i64 i64 StrR s\n");}

str id_2464/*lop str frog*/() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
} panic("reached function end without returning anything lop str frog\n");}

f64 id_2465/*lop f64 zh_sqrt f64 x*/(f64 v1746) {{
  f64 v1747; /*z*/
  ((v1747)=((f64)1.000000));
  {
      i64 v1755; /*i*/
      id_1864/*RangeIter<i64>*/ v1754; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1753; /*tmp_rval_1752*/
      id_1864/*RangeIter<i64>*/ v1751; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1750; /*tmp_rval_1749*/
      id_1865/*RangeIterRange<i64>*/ v1748; /*__range*/
      ((v1748)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((i64)10))));
      ((v1754)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1753)=(v1748)), (&(v1753)))))));
      ((v1751)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1750)=(v1748)), (&(v1750)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1751), (v1754))) {
        ((v1755)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1751)));
        id_2048/*op void -= f64R a f64 b*/(&(v1747), (((((((v1747))*((v1747))))-((v1746))))/(((((f64)2.000000))*((v1747))))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1751));
      }
    }
  return (v1747);
} panic("reached function end without returning anything lop f64 zh_sqrt f64 x\n");}

id_1882/*V2*/ id_2466/*lop V2 V2 f64 x f64 y*/(f64 v1756, f64 v1757) {{
  id_1882/*V2*/ v1758; /*slf*/
  (((&(v1758))->id_1898/*x*/)=(v1756));
  (((&(v1758))->id_1899/*y*/)=(v1757));
  return (v1758);
} panic("reached function end without returning anything lop V2 V2 f64 x f64 y\n");}

id_1882/*V2*/ id_2467/*op V2 + V2 a V2 b*/(id_1882/*V2*/ v1759, id_1882/*V2*/ v1760) {{
  id_2047/*op void += f64R a f64 b*/(&((&(v1759))->id_1898/*x*/), ((&(v1760))->id_1898/*x*/));
  id_2047/*op void += f64R a f64 b*/(&((&(v1759))->id_1899/*y*/), ((&(v1760))->id_1899/*y*/));
  return (v1759);
} panic("reached function end without returning anything op V2 + V2 a V2 b\n");}

id_1882/*V2*/ id_2468/*op V2 * V2 a V2 b*/(id_1882/*V2*/ v1761, id_1882/*V2*/ v1762) {{
  id_1882/*V2*/ v1763; /*res*/
  (((&(v1763))->id_1898/*x*/)=((((((&(v1761))->id_1898/*x*/))*(((&(v1762))->id_1898/*x*/))))-(((((&(v1761))->id_1899/*y*/))*(((&(v1762))->id_1899/*y*/))))));
  (((&(v1763))->id_1899/*y*/)=((((((&(v1761))->id_1898/*x*/))*(((&(v1762))->id_1899/*y*/))))+(((((&(v1761))->id_1899/*y*/))*(((&(v1762))->id_1898/*x*/))))));
  return (v1763);
} panic("reached function end without returning anything op V2 * V2 a V2 b\n");}

f64 id_2469/*lop f64 abs V2 a*/(id_1882/*V2*/ v1764) {{
  return id_2465/*lop f64 zh_sqrt f64 x*/(((((((&(v1764))->id_1898/*x*/))*(((&(v1764))->id_1898/*x*/))))+(((((&(v1764))->id_1899/*y*/))*(((&(v1764))->id_1899/*y*/))))));
} panic("reached function end without returning anything lop f64 abs V2 a\n");}

void id_2470/*lop void put V2 a*/(id_1882/*V2*/ v1765){
  (printf("%f", ((&(v1765))->id_1898/*x*/)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1765))->id_1899/*y*/)));
}

void id_2471/*lop void out V2 a*/(id_1882/*V2*/ v1766){
  (printf("%f", ((&(v1766))->id_1898/*x*/)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1766))->id_1899/*y*/)));
  (printf("%s\n", ((str)"")));
}

id_1853/*Out*/ id_2472/*rop Out < V2 i*/(id_1882/*V2*/ v1767) {{
  id_2471/*lop void out V2 a*/((v1767));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything rop Out < V2 i\n");}

id_1853/*Out*/ id_2473/*lop Out < V2 i*/(id_1882/*V2*/ v1768) {{
  (id_2470/*lop void put V2 a*/((v1768)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything lop Out < V2 i\n");}

id_1853/*Out*/ id_2474/*op Out < Out o V2 i*/(id_1853/*Out*/ v1769, id_1882/*V2*/ v1770) {{
  (id_2470/*lop void put V2 a*/((v1770)), (printf("%s", ((str)" "))));
  return id_2053/*lop Out Out*/();
} panic("reached function end without returning anything op Out < Out o V2 i\n");}

id_1883/*Rng*/ id_2475/*lop Rng Rng i64 seed*/(i64 v1771) {{
  id_1883/*Rng*/ v1772; /*slf*/
  (((&(v1772))->id_1900/*seed*/)=(v1771));
  return (v1772);
} panic("reached function end without returning anything lop Rng Rng i64 seed\n");}

id_1883/*Rng*/ id_2476/*lop Rng Rng*/() {{
  return id_2475/*lop Rng Rng i64 seed*/(((i64)5323));
} panic("reached function end without returning anything lop Rng Rng\n");}

i64 id_2477/*op i64 .call.call RngP slf*/(id_1883/*Rng*/* v1773) {{
  ((((v1773))->id_1900/*seed*/)=((((((i64)8253729))*((((v1773))->id_1900/*seed*/))))+(((i64)2396403))));
  return (((((v1773))->id_1900/*seed*/))%(((i64)32767)));
} panic("reached function end without returning anything op i64 .call.call RngP slf\n");}

id_1884/*Err*/ id_2478/*lop Err Err Str s*/(id_1878/*Str*/ v1774) {{
  id_1884/*Err*/ v1775; /*slf*/
  (((&(v1775))->id_1892/*val*/)=id_2387/*lop Str Str StrR s*/(&(v1774)));
  return (v1775);
} panic("reached function end without returning anything lop Err Err Str s\n");}

str id_2479/*op str .call.what ErrP slf*/(id_1884/*Err*/* v1776) {{
  return id_2378/*op str .call.cstr StrP slf*/((&(((v1776))->id_1892/*val*/)));
} panic("reached function end without returning anything op str .call.what ErrP slf\n");}

id_1885/*File*/ id_2480/*lop File File FILEP f*/(FILE* v1777) {{
  id_1885/*File*/ v1778; /*slf*/
  (((&(v1778))->id_1901/*f*/)=(v1777));
  return (v1778);
} panic("reached function end without returning anything lop File File FILEP f\n");}

id_1878/*Str*/ id_2481/*op Str .call.read FileP slf*/(id_1885/*File*/* v1779) {{
  i64 v1781; /*size*/
  id_1878/*Str*/ v1780; /*s*/
  ((v1780)=id_2377/*lop Str Str*/());
  fseek((((v1779))->id_1901/*f*/), ((i64)0), GET_SEEK_END());
  ((v1781)=ftell((((v1779))->id_1901/*f*/)));
  fseek((((v1779))->id_1901/*f*/), ((i64)0), GET_SEEK_SET());
  {
      i64 v1789; /*i*/
      id_1864/*RangeIter<i64>*/ v1788; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1787; /*tmp_rval_1786*/
      id_1864/*RangeIter<i64>*/ v1785; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1784; /*tmp_rval_1783*/
      id_1865/*RangeIterRange<i64>*/ v1782; /*__range*/
      ((v1782)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1781))));
      ((v1788)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1787)=(v1782)), (&(v1787)))))));
      ((v1785)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1784)=(v1782)), (&(v1784)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1785), (v1788))) {
        ((v1789)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1785)));
        id_2391/*op void += StrR a char ch*/(&(v1780), fgetc((((v1779))->id_1901/*f*/)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1785));
      }
    }
  return (v1780);
} panic("reached function end without returning anything op Str .call.read FileP slf\n");}

id_1886/*Result<File Err>*/ id_2482/*lop Result<File Err> Result<File Err> File val*/(id_1885/*File*/ v1790) {{
  id_1886/*Result<File Err>*/ v1791; /*slf*/
  (((&(v1791))->id_1903/*is_err*/)=((bool)0));
  (((&(v1791))->id_1892/*val*/)=(v1790));
  return (v1791);
} panic("reached function end without returning anything lop Result<File Err> Result<File Err> File val\n");}

id_1886/*Result<File Err>*/ id_2483/*lop Result<File Err> Result<File Err> Err err*/(id_1884/*Err*/ v1792) {{
  id_1886/*Result<File Err>*/ v1793; /*slf*/
  (((&(v1793))->id_1903/*is_err*/)=((bool)1));
  (((&(v1793))->id_1902/*err*/)=(v1792));
  return (v1793);
} panic("reached function end without returning anything lop Result<File Err> Result<File Err> Err err\n");}

id_1885/*File*/ id_2484/*op File .call.unwrap Result<File Err>P slf*/(id_1886/*Result<File Err>*/* v1794) {{
  if ((((v1794))->id_1903/*is_err*/)) {
    panic_macro(id_2479/*op str .call.what ErrP slf*/((&(((v1794))->id_1902/*err*/))));
  }
  return (((v1794))->id_1892/*val*/);
} panic("reached function end without returning anything op File .call.unwrap Result<File Err>P slf\n");}

id_1886/*Result<File Err>*/ id_2485/*lop Result<File Err> open Str s Str mode*/(id_1878/*Str*/ v1795, id_1878/*Str*/ v1796) {{
  FILE* v1797; /*f*/
  ((v1797)=fopen(id_2378/*op str .call.cstr StrP slf*/((&(v1795))), id_2378/*op str .call.cstr StrP slf*/((&(v1796)))));
  if (((((i64)(v1797)))!=(((i64)((FILE*)((i64)0)))))) {
    return id_2482/*lop Result<File Err> Result<File Err> File val*/(id_2480/*lop File File FILEP f*/((v1797)));
  }
  return id_2483/*lop Result<File Err> Result<File Err> Err err*/(id_2478/*lop Err Err Str s*/(id_2397/*op Str + str a StrR b*/(((str)"can't open "), &(v1795))));
} panic("reached function end without returning anything lop Result<File Err> open Str s Str mode\n");}

id_1886/*Result<File Err>*/ id_2486/*lop Result<File Err> open Str s str mode*/(id_1878/*Str*/ v1798, str v1799) {{
  return id_2485/*lop Result<File Err> open Str s Str mode*/(id_2387/*lop Str Str StrR s*/(&(v1798)), id_2386/*lop Str Str str s*/((v1799)));
} panic("reached function end without returning anything lop Result<File Err> open Str s str mode\n");}

id_1886/*Result<File Err>*/ id_2487/*lop Result<File Err> open Str s*/(id_1878/*Str*/ v1800) {{
  return id_2486/*lop Result<File Err> open Str s str mode*/(id_2387/*lop Str Str StrR s*/(&(v1800)), ((str)"r"));
} panic("reached function end without returning anything lop Result<File Err> open Str s\n");}

id_1886/*Result<File Err>*/ id_2488/*lop Result<File Err> open str s*/(str v1801) {{
  return id_2487/*lop Result<File Err> open Str s*/(id_2386/*lop Str Str str s*/((v1801)));
} panic("reached function end without returning anything lop Result<File Err> open str s\n");}

id_1886/*Result<File Err>*/ id_2489/*lop Result<File Err> open str s str mode*/(str v1802, str v1803) {{
  return id_2485/*lop Result<File Err> open Str s Str mode*/(id_2386/*lop Str Str str s*/((v1802)), id_2386/*lop Str Str str s*/((v1803)));
} panic("reached function end without returning anything lop Result<File Err> open str s str mode\n");}

int main(int argc, char *argv[]) {
  i64 v1829; /*b*/
  i64 v1828; /*a*/
  i64 v1827; /*n*/
  id_1869/*Vec<i64>*/ v1825; /*v*/
  id_1878/*Str*/ v1820; /*tmp_rval_1819*/
  id_1885/*File*/ v1818; /*tmp_rval_1817*/
  i64 v1826; /*m*/
  id_1879/*Vec<Str>*/ v1824; /*tmp_rval_1823*/
  id_1886/*Result<File Err>*/ v1816; /*tmp_rval_1815*/
  ((v1825)=id_2490/*lop Vec<i64> mp<Str i64> Vec<Str>R v F<i64 StrR> f*/(&(*(((v1824)=id_2462/*op Vec<Str> .call.split StrP slf str p*/((&(*(((v1820)=id_2481/*op Str .call.read FileP slf*/((&(*(((v1818)=id_2484/*op File .call.unwrap Result<File Err>P slf*/((&(*(((v1816)=id_2488/*lop Result<File Err> open str s*/(((str)"17_1.txt"))), (&(v1816))))))), (&(v1818))))))), (&(v1820))))), ((str)"\n"))), (&(v1824)))), (id_2491/*lop i64 lambda_1821 StrR s*/)));
  (((v1826)=id_2267/*op i64 .call.max Vec<i64>P slf*/((&(v1825)))), ((v1827)=((i64)0)), ((v1828)=((i64)0)), ((v1829)=((i64)0)));
  {
      i64 v1837; /*i*/
      id_1864/*RangeIter<i64>*/ v1836; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1835; /*tmp_rval_1834*/
      id_1864/*RangeIter<i64>*/ v1833; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1832; /*tmp_rval_1831*/
      id_1865/*RangeIterRange<i64>*/ v1830; /*__range*/
      ((v1830)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((((&(v1825))->id_1895/*size*/))-(((i64)2))))));
      ((v1836)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1835)=(v1830)), (&(v1835)))))));
      ((v1833)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1832)=(v1830)), (&(v1832)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1833), (v1836))) {
        id_1869/*Vec<i64>*/ v1839; /*tmp_rval_1838*/
        ((v1837)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1833)));
        if (((id_2323/*lop i64 sum Vec<i64>R v*/(&(*(((v1839)=id_2258/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((&(v1825)), (v1837), (((v1837))+(((i64)3))))), (&(v1839))))))<=((v1826)))) {
          id_1869/*Vec<i64>*/ v1843; /*tmp_rval_1842*/
          id_1869/*Vec<i64>*/ v1841; /*tmp_rval_1840*/
          id_1959/*op void += i64R a i64 b*/(&(v1827), ((i64)1));
          ((v1828)=id_2268/*op i64 .call.min Vec<i64>P slf*/((&*id_2251/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&*id_2251/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*(((v1841)=id_2250/*op Vec<i64> ,, i64 a i64 b*/(*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v1825)), (v1837)), *id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v1825)), (((v1837))+(((i64)1)))))), (&(v1841)))), *id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v1825)), (((v1837))+(((i64)2))))), (v1828)))));
          ((v1829)=id_2267/*op i64 .call.max Vec<i64>P slf*/((&*id_2251/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&*id_2251/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*(((v1843)=id_2250/*op Vec<i64> ,, i64 a i64 b*/(*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v1825)), (v1837)), *id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v1825)), (((v1837))+(((i64)1)))))), (&(v1843)))), *id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v1825)), (((v1837))+(((i64)2))))), (v1829)))));
          id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v1841)));
          id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v1843)));
        }
        id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v1839)));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1833));
      }
    }
  ((printf("%lld", (v1827))), (printf("%s", ((str)" "))), (printf("%lld\n", (((v1828))+((v1829))))));
  id_2433/*op void .call.dtor Vec<Str>P slf*/((&(v1824)));
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v1825)));
}

id_1869/*Vec<i64>*/ id_2490/*lop Vec<i64> mp<Str i64> Vec<Str>R v F<i64 StrR> f*/(id_1879/*Vec<Str>*/* v1804, i64(*v1805)(id_1878/*Str*/*)) {{
  id_1869/*Vec<i64>*/ v1806; /*r*/
  ((v1806)=id_2244/*lop Vec<i64> Vec<i64> i64 size*/(((&(*v1804))->id_1895/*size*/)));
  {
      i64 v1814; /*i*/
      id_1864/*RangeIter<i64>*/ v1813; /*__end*/
      id_1865/*RangeIterRange<i64>*/ v1812; /*tmp_rval_1811*/
      id_1864/*RangeIter<i64>*/ v1810; /*__cur*/
      id_1865/*RangeIterRange<i64>*/ v1809; /*tmp_rval_1808*/
      id_1865/*RangeIterRange<i64>*/ v1807; /*__range*/
      ((v1807)=id_2200/*lop RangeIterRange<i64> iter Range<i64> r*/(id_2190/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1804))->id_1895/*size*/))));
      ((v1813)=id_2185/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1812)=(v1807)), (&(v1812)))))));
      ((v1810)=id_2184/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1809)=(v1807)), (&(v1809)))))));
      while (id_2183/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1810), (v1813))) {
        ((v1814)=id_2182/*lop i64 * RangeIter<i64> slf*/((v1810)));
        (*id_2257/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v1806)), (v1814))=((*(v1805))(&*id_2447/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1804)), (v1814)))));
        id_2181/*lop void ++ RangeIter<i64>R slf*/(&(v1810));
      }
    }
  return (v1806);
  id_2243/*op void .call.dtor Vec<i64>P slf*/((&(v1806)));
} panic("reached function end without returning anything lop Vec<i64> mp<Str i64> Vec<Str>R v F<i64 StrR> f\n");}

i64 id_2491/*lop i64 lambda_1821 StrR s*/(id_1878/*Str*/* v1822) {{
  return id_2463/*lop i64 i64 StrR s*/(&(*v1822));
} panic("reached function end without returning anything lop i64 lambda_1821 StrR s\n");}

