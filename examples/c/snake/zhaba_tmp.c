#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\keyboard.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\math.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\screen.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\stdio.c"
#include "C:\Users\wgmlgz\code\zhaba-script\std\c\time.c"

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
struct PROT_id_1634;
typedef struct PROT_id_1634/*IntOpMaker<i8>*/ id_1634/*IntOpMaker<i8>*/;
struct PROT_id_1635;
typedef struct PROT_id_1635/*IntOpMaker<i16>*/ id_1635/*IntOpMaker<i16>*/;
struct PROT_id_1636;
typedef struct PROT_id_1636/*IntOpMaker<i32>*/ id_1636/*IntOpMaker<i32>*/;
struct PROT_id_1637;
typedef struct PROT_id_1637/*IntOpMaker<i64>*/ id_1637/*IntOpMaker<i64>*/;
struct PROT_id_1638;
typedef struct PROT_id_1638/*IntOpMaker<u8>*/ id_1638/*IntOpMaker<u8>*/;
struct PROT_id_1639;
typedef struct PROT_id_1639/*IntOpMaker<u16>*/ id_1639/*IntOpMaker<u16>*/;
struct PROT_id_1640;
typedef struct PROT_id_1640/*IntOpMaker<u32>*/ id_1640/*IntOpMaker<u32>*/;
struct PROT_id_1641;
typedef struct PROT_id_1641/*IntOpMaker<u64>*/ id_1641/*IntOpMaker<u64>*/;
struct PROT_id_1642;
typedef struct PROT_id_1642/*IntOpMaker<char>*/ id_1642/*IntOpMaker<char>*/;
struct PROT_id_1643;
typedef struct PROT_id_1643/*Out*/ id_1643/*Out*/;
struct PROT_id_1644;
typedef struct PROT_id_1644/*Range<i8>*/ id_1644/*Range<i8>*/;
struct PROT_id_1645;
typedef struct PROT_id_1645/*RangeIter<i8>*/ id_1645/*RangeIter<i8>*/;
struct PROT_id_1646;
typedef struct PROT_id_1646/*RangeIterRange<i8>*/ id_1646/*RangeIterRange<i8>*/;
struct PROT_id_1647;
typedef struct PROT_id_1647/*Range<i16>*/ id_1647/*Range<i16>*/;
struct PROT_id_1648;
typedef struct PROT_id_1648/*RangeIter<i16>*/ id_1648/*RangeIter<i16>*/;
struct PROT_id_1649;
typedef struct PROT_id_1649/*RangeIterRange<i16>*/ id_1649/*RangeIterRange<i16>*/;
struct PROT_id_1650;
typedef struct PROT_id_1650/*Range<i32>*/ id_1650/*Range<i32>*/;
struct PROT_id_1651;
typedef struct PROT_id_1651/*RangeIter<i32>*/ id_1651/*RangeIter<i32>*/;
struct PROT_id_1652;
typedef struct PROT_id_1652/*RangeIterRange<i32>*/ id_1652/*RangeIterRange<i32>*/;
struct PROT_id_1653;
typedef struct PROT_id_1653/*Range<i64>*/ id_1653/*Range<i64>*/;
struct PROT_id_1654;
typedef struct PROT_id_1654/*RangeIter<i64>*/ id_1654/*RangeIter<i64>*/;
struct PROT_id_1655;
typedef struct PROT_id_1655/*RangeIterRange<i64>*/ id_1655/*RangeIterRange<i64>*/;
struct PROT_id_1656;
typedef struct PROT_id_1656/*Range<char>*/ id_1656/*Range<char>*/;
struct PROT_id_1657;
typedef struct PROT_id_1657/*RangeIter<char>*/ id_1657/*RangeIter<char>*/;
struct PROT_id_1658;
typedef struct PROT_id_1658/*RangeIterRange<char>*/ id_1658/*RangeIterRange<char>*/;
struct PROT_id_1659;
typedef struct PROT_id_1659/*Vec<i64>*/ id_1659/*Vec<i64>*/;
struct PROT_id_1660;
typedef struct PROT_id_1660/*VecIter<i64>*/ id_1660/*VecIter<i64>*/;
struct PROT_id_1661;
typedef struct PROT_id_1661/*VecIterRange<i64>*/ id_1661/*VecIterRange<i64>*/;
struct PROT_id_1662;
typedef struct PROT_id_1662/*Vec<char>*/ id_1662/*Vec<char>*/;
struct PROT_id_1663;
typedef struct PROT_id_1663/*VecIter<char>*/ id_1663/*VecIter<char>*/;
struct PROT_id_1664;
typedef struct PROT_id_1664/*VecIterRange<char>*/ id_1664/*VecIterRange<char>*/;
struct PROT_id_1665;
typedef struct PROT_id_1665/*Str*/ id_1665/*Str*/;
struct PROT_id_1666;
typedef struct PROT_id_1666/*V2*/ id_1666/*V2*/;
struct PROT_id_1667;
typedef struct PROT_id_1667/*Rng*/ id_1667/*Rng*/;
struct PROT_id_1668;
typedef struct PROT_id_1668/*Vec<Str>*/ id_1668/*Vec<Str>*/;
struct PROT_id_1669;
typedef struct PROT_id_1669/*VecIter<Str>*/ id_1669/*VecIter<Str>*/;
struct PROT_id_1670;
typedef struct PROT_id_1670/*VecIterRange<Str>*/ id_1670/*VecIterRange<Str>*/;
struct PROT_id_1671;
typedef struct PROT_id_1671/*Pair<i64 i64>*/ id_1671/*Pair<i64 i64>*/;
struct PROT_id_1672;
typedef struct PROT_id_1672/*Vec<Pair<i64 i64>>*/ id_1672/*Vec<Pair<i64 i64>>*/;
struct PROT_id_1673;
typedef struct PROT_id_1673/*VecIter<Pair<i64 i64>>*/ id_1673/*VecIter<Pair<i64 i64>>*/;
struct PROT_id_1674;
typedef struct PROT_id_1674/*VecIterRange<Pair<i64 i64>>*/ id_1674/*VecIterRange<Pair<i64 i64>>*/;

struct PROT_id_1634/*IntOpMaker<i8>*/ {
  bool id_1675;
};
struct PROT_id_1635/*IntOpMaker<i16>*/ {
  bool id_1675/*unused*/;
};
struct PROT_id_1636/*IntOpMaker<i32>*/ {
  bool id_1675/*unused*/;
};
struct PROT_id_1637/*IntOpMaker<i64>*/ {
  bool id_1675/*unused*/;
};
struct PROT_id_1638/*IntOpMaker<u8>*/ {
  bool id_1675/*unused*/;
};
struct PROT_id_1639/*IntOpMaker<u16>*/ {
  bool id_1675/*unused*/;
};
struct PROT_id_1640/*IntOpMaker<u32>*/ {
  bool id_1675/*unused*/;
};
struct PROT_id_1641/*IntOpMaker<u64>*/ {
  bool id_1675/*unused*/;
};
struct PROT_id_1642/*IntOpMaker<char>*/ {
  bool id_1675/*unused*/;
};
struct PROT_id_1643/*Out*/ {
  bool id_1676;
};
struct PROT_id_1644/*Range<i8>*/ {
  i8 id_1677;
  i8 id_1678;
};
struct PROT_id_1645/*RangeIter<i8>*/ {
  i8 id_1679;
};
struct PROT_id_1646/*RangeIterRange<i8>*/ {
  id_1645/*RangeIter<i8>*/ id_1677/*begin*/;
  id_1645/*RangeIter<i8>*/ id_1678/*end*/;
};
struct PROT_id_1647/*Range<i16>*/ {
  i16 id_1677/*begin*/;
  i16 id_1678/*end*/;
};
struct PROT_id_1648/*RangeIter<i16>*/ {
  i16 id_1679/*val*/;
};
struct PROT_id_1649/*RangeIterRange<i16>*/ {
  id_1648/*RangeIter<i16>*/ id_1677/*begin*/;
  id_1648/*RangeIter<i16>*/ id_1678/*end*/;
};
struct PROT_id_1650/*Range<i32>*/ {
  i32 id_1677/*begin*/;
  i32 id_1678/*end*/;
};
struct PROT_id_1651/*RangeIter<i32>*/ {
  i32 id_1679/*val*/;
};
struct PROT_id_1652/*RangeIterRange<i32>*/ {
  id_1651/*RangeIter<i32>*/ id_1677/*begin*/;
  id_1651/*RangeIter<i32>*/ id_1678/*end*/;
};
struct PROT_id_1653/*Range<i64>*/ {
  i64 id_1677/*begin*/;
  i64 id_1678/*end*/;
};
struct PROT_id_1654/*RangeIter<i64>*/ {
  i64 id_1679/*val*/;
};
struct PROT_id_1655/*RangeIterRange<i64>*/ {
  id_1654/*RangeIter<i64>*/ id_1677/*begin*/;
  id_1654/*RangeIter<i64>*/ id_1678/*end*/;
};
struct PROT_id_1656/*Range<char>*/ {
  char id_1677/*begin*/;
  char id_1678/*end*/;
};
struct PROT_id_1657/*RangeIter<char>*/ {
  char id_1679/*val*/;
};
struct PROT_id_1658/*RangeIterRange<char>*/ {
  id_1657/*RangeIter<char>*/ id_1677/*begin*/;
  id_1657/*RangeIter<char>*/ id_1678/*end*/;
};
struct PROT_id_1659/*Vec<i64>*/ {
  i64 id_1680;
  i64* id_1681;
  i64 id_1682;
};
struct PROT_id_1660/*VecIter<i64>*/ {
  i64* id_1683;
};
struct PROT_id_1661/*VecIterRange<i64>*/ {
  id_1660/*VecIter<i64>*/ id_1677/*begin*/;
  id_1660/*VecIter<i64>*/ id_1678/*end*/;
};
struct PROT_id_1662/*Vec<char>*/ {
  i64 id_1680/*cap*/;
  char* id_1681/*head*/;
  i64 id_1682/*size*/;
};
struct PROT_id_1663/*VecIter<char>*/ {
  char* id_1683/*ptr*/;
};
struct PROT_id_1664/*VecIterRange<char>*/ {
  id_1663/*VecIter<char>*/ id_1677/*begin*/;
  id_1663/*VecIter<char>*/ id_1678/*end*/;
};
struct PROT_id_1665/*Str*/ {
  id_1662/*Vec<char>*/ id_1684;
  i64 id_1682/*size*/;
};
struct PROT_id_1666/*V2*/ {
  f64 id_1685;
  f64 id_1686;
};
struct PROT_id_1667/*Rng*/ {
  i64 id_1687;
};
struct PROT_id_1668/*Vec<Str>*/ {
  i64 id_1680/*cap*/;
  id_1665/*Str*/* id_1681/*head*/;
  i64 id_1682/*size*/;
};
struct PROT_id_1669/*VecIter<Str>*/ {
  id_1665/*Str*/* id_1683/*ptr*/;
};
struct PROT_id_1670/*VecIterRange<Str>*/ {
  id_1669/*VecIter<Str>*/ id_1677/*begin*/;
  id_1669/*VecIter<Str>*/ id_1678/*end*/;
};
struct PROT_id_1671/*Pair<i64 i64>*/ {
  i64 id_1688;
  i64 id_1689;
};
struct PROT_id_1672/*Vec<Pair<i64 i64>>*/ {
  i64 id_1680/*cap*/;
  id_1671/*Pair<i64 i64>*/* id_1681/*head*/;
  i64 id_1682/*size*/;
};
struct PROT_id_1673/*VecIter<Pair<i64 i64>>*/ {
  id_1671/*Pair<i64 i64>*/* id_1683/*ptr*/;
};
struct PROT_id_1674/*VecIterRange<Pair<i64 i64>>*/ {
  id_1673/*VecIter<Pair<i64 i64>>*/ id_1677/*begin*/;
  id_1673/*VecIter<Pair<i64 i64>>*/ id_1678/*end*/;
};
i8 id_1690();
i16 id_1691();
i32 id_1692();
i64 id_1693();
u8 id_1694();
u16 id_1695();
u32 id_1696();
u64 id_1697();
bool id_1698();
char id_1699();
i64 id_1700(i64 v101, i64 v102);
i64 id_1701(i64 v103, i64 v104);
void id_1702();
void id_1703(i8* v105, i8 v106);
void id_1704(i8* v107, i8 v108);
void id_1705(i8* v109, i8 v110);
void id_1706(i8* v111, i8 v112);
void id_1707(i8* v113, i8 v114);
void id_1708(i8* v115, i8 v116);
void id_1709(i8* v117, i8 v118);
void id_1710(i8* v119, i8 v120);
bool id_1711(i8 v121, i8 v122);
bool id_1712(i8 v123, i8 v124);
i8* id_1713(i8* v125);
i8* id_1714(i8* v126);
i8 id_1715(i8* v127);
i8 id_1716(i8* v129);
void id_1717(i16* v132, i16 v133);
void id_1718(i16* v134, i16 v135);
void id_1719(i16* v136, i16 v137);
void id_1720(i16* v138, i16 v139);
void id_1721(i16* v140, i16 v141);
void id_1722(i16* v142, i16 v143);
void id_1723(i16* v144, i16 v145);
void id_1724(i16* v146, i16 v147);
bool id_1725(i16 v148, i16 v149);
bool id_1726(i16 v150, i16 v151);
i16* id_1727(i16* v152);
i16* id_1728(i16* v153);
i16 id_1729(i16* v154);
i16 id_1730(i16* v156);
void id_1731(i32* v159, i32 v160);
void id_1732(i32* v161, i32 v162);
void id_1733(i32* v163, i32 v164);
void id_1734(i32* v165, i32 v166);
void id_1735(i32* v167, i32 v168);
void id_1736(i32* v169, i32 v170);
void id_1737(i32* v171, i32 v172);
void id_1738(i32* v173, i32 v174);
bool id_1739(i32 v175, i32 v176);
bool id_1740(i32 v177, i32 v178);
i32* id_1741(i32* v179);
i32* id_1742(i32* v180);
i32 id_1743(i32* v181);
i32 id_1744(i32* v183);
void id_1745(i64* v186, i64 v187);
void id_1746(i64* v188, i64 v189);
void id_1747(i64* v190, i64 v191);
void id_1748(i64* v192, i64 v193);
void id_1749(i64* v194, i64 v195);
void id_1750(i64* v196, i64 v197);
void id_1751(i64* v198, i64 v199);
void id_1752(i64* v200, i64 v201);
bool id_1753(i64 v202, i64 v203);
bool id_1754(i64 v204, i64 v205);
i64* id_1755(i64* v206);
i64* id_1756(i64* v207);
i64 id_1757(i64* v208);
i64 id_1758(i64* v210);
void id_1759(u8* v213, u8 v214);
void id_1760(u8* v215, u8 v216);
void id_1761(u8* v217, u8 v218);
void id_1762(u8* v219, u8 v220);
void id_1763(u8* v221, u8 v222);
void id_1764(u8* v223, u8 v224);
void id_1765(u8* v225, u8 v226);
void id_1766(u8* v227, u8 v228);
bool id_1767(u8 v229, u8 v230);
bool id_1768(u8 v231, u8 v232);
u8* id_1769(u8* v233);
u8* id_1770(u8* v234);
u8 id_1771(u8* v235);
u8 id_1772(u8* v237);
void id_1773(u16* v240, u16 v241);
void id_1774(u16* v242, u16 v243);
void id_1775(u16* v244, u16 v245);
void id_1776(u16* v246, u16 v247);
void id_1777(u16* v248, u16 v249);
void id_1778(u16* v250, u16 v251);
void id_1779(u16* v252, u16 v253);
void id_1780(u16* v254, u16 v255);
bool id_1781(u16 v256, u16 v257);
bool id_1782(u16 v258, u16 v259);
u16* id_1783(u16* v260);
u16* id_1784(u16* v261);
u16 id_1785(u16* v262);
u16 id_1786(u16* v264);
void id_1787(u32* v267, u32 v268);
void id_1788(u32* v269, u32 v270);
void id_1789(u32* v271, u32 v272);
void id_1790(u32* v273, u32 v274);
void id_1791(u32* v275, u32 v276);
void id_1792(u32* v277, u32 v278);
void id_1793(u32* v279, u32 v280);
void id_1794(u32* v281, u32 v282);
bool id_1795(u32 v283, u32 v284);
bool id_1796(u32 v285, u32 v286);
u32* id_1797(u32* v287);
u32* id_1798(u32* v288);
u32 id_1799(u32* v289);
u32 id_1800(u32* v291);
void id_1801(u64* v294, u64 v295);
void id_1802(u64* v296, u64 v297);
void id_1803(u64* v298, u64 v299);
void id_1804(u64* v300, u64 v301);
void id_1805(u64* v302, u64 v303);
void id_1806(u64* v304, u64 v305);
void id_1807(u64* v306, u64 v307);
void id_1808(u64* v308, u64 v309);
bool id_1809(u64 v310, u64 v311);
bool id_1810(u64 v312, u64 v313);
u64* id_1811(u64* v314);
u64* id_1812(u64* v315);
u64 id_1813(u64* v316);
u64 id_1814(u64* v318);
void id_1815(char* v321, char v322);
void id_1816(char* v323, char v324);
void id_1817(char* v325, char v326);
void id_1818(char* v327, char v328);
void id_1819(char* v329, char v330);
void id_1820(char* v331, char v332);
void id_1821(char* v333, char v334);
void id_1822(char* v335, char v336);
bool id_1823(char v337, char v338);
bool id_1824(char v339, char v340);
char* id_1825(char* v341);
char* id_1826(char* v342);
char id_1827(char* v343);
char id_1828(char* v345);
void id_1829(f32* v348, f32 v349);
void id_1830(f32* v350, f32 v351);
void id_1831(f32* v352, f32 v353);
void id_1832(f32* v354, f32 v355);
void id_1833(f64* v356, f64 v357);
void id_1834(f64* v358, f64 v359);
void id_1835(f64* v360, f64 v361);
void id_1836(f64* v362, f64 v363);
bool id_1837(bool v364, bool v365);
i64 id_1838(i64 v366, i64 v367);
id_1643/*Out*/ id_1839();
id_1643/*Out*/ id_1840(id_1643/*Out*/ v370, id_1643/*Out*/ v371);
id_1643/*Out*/ id_1841(id_1643/*Out*/ v372);
id_1643/*Out*/ id_1842(str v373);
id_1643/*Out*/ id_1843(str v374);
id_1643/*Out*/ id_1844(id_1643/*Out*/ v375, str v376);
id_1643/*Out*/ id_1845(str* v377);
id_1643/*Out*/ id_1846(id_1643/*Out*/ v378, str* v379);
id_1643/*Out*/ id_1847(char v380);
id_1643/*Out*/ id_1848(char v381);
id_1643/*Out*/ id_1849(id_1643/*Out*/ v382, char v383);
id_1643/*Out*/ id_1850(char* v384);
id_1643/*Out*/ id_1851(id_1643/*Out*/ v385, char* v386);
id_1643/*Out*/ id_1852(i8 v387);
id_1643/*Out*/ id_1853(i8 v388);
id_1643/*Out*/ id_1854(id_1643/*Out*/ v389, i8 v390);
id_1643/*Out*/ id_1855(i8* v391);
id_1643/*Out*/ id_1856(id_1643/*Out*/ v392, i8* v393);
id_1643/*Out*/ id_1857(i16 v394);
id_1643/*Out*/ id_1858(i16 v395);
id_1643/*Out*/ id_1859(id_1643/*Out*/ v396, i16 v397);
id_1643/*Out*/ id_1860(i16* v398);
id_1643/*Out*/ id_1861(id_1643/*Out*/ v399, i16* v400);
id_1643/*Out*/ id_1862(i32 v401);
id_1643/*Out*/ id_1863(i32 v402);
id_1643/*Out*/ id_1864(id_1643/*Out*/ v403, i32 v404);
id_1643/*Out*/ id_1865(i32* v405);
id_1643/*Out*/ id_1866(id_1643/*Out*/ v406, i32* v407);
id_1643/*Out*/ id_1867(i64 v408);
id_1643/*Out*/ id_1868(i64 v409);
id_1643/*Out*/ id_1869(id_1643/*Out*/ v410, i64 v411);
id_1643/*Out*/ id_1870(i64* v412);
id_1643/*Out*/ id_1871(id_1643/*Out*/ v413, i64* v414);
id_1643/*Out*/ id_1872(u8 v415);
id_1643/*Out*/ id_1873(u8 v416);
id_1643/*Out*/ id_1874(id_1643/*Out*/ v417, u8 v418);
id_1643/*Out*/ id_1875(u8* v419);
id_1643/*Out*/ id_1876(id_1643/*Out*/ v420, u8* v421);
id_1643/*Out*/ id_1877(u16 v422);
id_1643/*Out*/ id_1878(u16 v423);
id_1643/*Out*/ id_1879(id_1643/*Out*/ v424, u16 v425);
id_1643/*Out*/ id_1880(u16* v426);
id_1643/*Out*/ id_1881(id_1643/*Out*/ v427, u16* v428);
id_1643/*Out*/ id_1882(u32 v429);
id_1643/*Out*/ id_1883(u32 v430);
id_1643/*Out*/ id_1884(id_1643/*Out*/ v431, u32 v432);
id_1643/*Out*/ id_1885(u32* v433);
id_1643/*Out*/ id_1886(id_1643/*Out*/ v434, u32* v435);
id_1643/*Out*/ id_1887(u64 v436);
id_1643/*Out*/ id_1888(u64 v437);
id_1643/*Out*/ id_1889(id_1643/*Out*/ v438, u64 v439);
id_1643/*Out*/ id_1890(u64* v440);
id_1643/*Out*/ id_1891(id_1643/*Out*/ v441, u64* v442);
id_1643/*Out*/ id_1892(f32 v443);
id_1643/*Out*/ id_1893(f32 v444);
id_1643/*Out*/ id_1894(id_1643/*Out*/ v445, f32 v446);
id_1643/*Out*/ id_1895(f32* v447);
id_1643/*Out*/ id_1896(id_1643/*Out*/ v448, f32* v449);
id_1643/*Out*/ id_1897(f64 v450);
id_1643/*Out*/ id_1898(f64 v451);
id_1643/*Out*/ id_1899(id_1643/*Out*/ v452, f64 v453);
id_1643/*Out*/ id_1900(f64* v454);
id_1643/*Out*/ id_1901(id_1643/*Out*/ v455, f64* v456);
void id_1902();
id_1645/*RangeIter<i8>*/ id_1903(i8 v490);
void id_1904(id_1645/*RangeIter<i8>*/* v492);
i8 id_1905(id_1645/*RangeIter<i8>*/ v493);
bool id_1906(id_1645/*RangeIter<i8>*/ v494, id_1645/*RangeIter<i8>*/ v495);
id_1645/*RangeIter<i8>*/ id_1907(id_1646/*RangeIterRange<i8>*/* v496);
id_1645/*RangeIter<i8>*/ id_1908(id_1646/*RangeIterRange<i8>*/* v497);
id_1646/*RangeIterRange<i8>*/ id_1909(id_1645/*RangeIter<i8>*/ v498, id_1645/*RangeIter<i8>*/ v499);
i8 id_1910(id_1644/*Range<i8>*/* v457);
i8 id_1911(id_1644/*Range<i8>*/* v458);
id_1644/*Range<i8>*/ id_1912(i8 v459, i8 v460);
id_1644/*Range<i8>*/ id_1913(i8 v462, i8 v463);
id_1644/*Range<i8>*/ id_1914(i8 v464, i8 v465);
id_1644/*Range<i8>*/ id_1915(i8 v466);
id_1644/*Range<i8>*/ id_1916(i8 v467);
id_1644/*Range<i8>*/ id_1917(i8 v470);
id_1644/*Range<i8>*/ id_1918(id_1644/*Range<i8>*/ v473);
id_1644/*Range<i8>*/ id_1919(i8 v474, i8 v475);
id_1644/*Range<i8>*/ id_1920(i8 v478);
id_1644/*Range<i8>*/ id_1921(i8 v483);
bool id_1922(i8 v488, id_1644/*Range<i8>*/ v489);
id_1646/*RangeIterRange<i8>*/ id_1923(id_1644/*Range<i8>*/ v501);
id_1648/*RangeIter<i16>*/ id_1924(i16 v536);
void id_1925(id_1648/*RangeIter<i16>*/* v538);
i16 id_1926(id_1648/*RangeIter<i16>*/ v539);
bool id_1927(id_1648/*RangeIter<i16>*/ v540, id_1648/*RangeIter<i16>*/ v541);
id_1648/*RangeIter<i16>*/ id_1928(id_1649/*RangeIterRange<i16>*/* v542);
id_1648/*RangeIter<i16>*/ id_1929(id_1649/*RangeIterRange<i16>*/* v543);
id_1649/*RangeIterRange<i16>*/ id_1930(id_1648/*RangeIter<i16>*/ v544, id_1648/*RangeIter<i16>*/ v545);
i16 id_1931(id_1647/*Range<i16>*/* v503);
i16 id_1932(id_1647/*Range<i16>*/* v504);
id_1647/*Range<i16>*/ id_1933(i16 v505, i16 v506);
id_1647/*Range<i16>*/ id_1934(i16 v508, i16 v509);
id_1647/*Range<i16>*/ id_1935(i16 v510, i16 v511);
id_1647/*Range<i16>*/ id_1936(i16 v512);
id_1647/*Range<i16>*/ id_1937(i16 v513);
id_1647/*Range<i16>*/ id_1938(i16 v516);
id_1647/*Range<i16>*/ id_1939(id_1647/*Range<i16>*/ v519);
id_1647/*Range<i16>*/ id_1940(i16 v520, i16 v521);
id_1647/*Range<i16>*/ id_1941(i16 v524);
id_1647/*Range<i16>*/ id_1942(i16 v529);
bool id_1943(i16 v534, id_1647/*Range<i16>*/ v535);
id_1649/*RangeIterRange<i16>*/ id_1944(id_1647/*Range<i16>*/ v547);
id_1651/*RangeIter<i32>*/ id_1945(i32 v582);
void id_1946(id_1651/*RangeIter<i32>*/* v584);
i32 id_1947(id_1651/*RangeIter<i32>*/ v585);
bool id_1948(id_1651/*RangeIter<i32>*/ v586, id_1651/*RangeIter<i32>*/ v587);
id_1651/*RangeIter<i32>*/ id_1949(id_1652/*RangeIterRange<i32>*/* v588);
id_1651/*RangeIter<i32>*/ id_1950(id_1652/*RangeIterRange<i32>*/* v589);
id_1652/*RangeIterRange<i32>*/ id_1951(id_1651/*RangeIter<i32>*/ v590, id_1651/*RangeIter<i32>*/ v591);
i32 id_1952(id_1650/*Range<i32>*/* v549);
i32 id_1953(id_1650/*Range<i32>*/* v550);
id_1650/*Range<i32>*/ id_1954(i32 v551, i32 v552);
id_1650/*Range<i32>*/ id_1955(i32 v554, i32 v555);
id_1650/*Range<i32>*/ id_1956(i32 v556, i32 v557);
id_1650/*Range<i32>*/ id_1957(i32 v558);
id_1650/*Range<i32>*/ id_1958(i32 v559);
id_1650/*Range<i32>*/ id_1959(i32 v562);
id_1650/*Range<i32>*/ id_1960(id_1650/*Range<i32>*/ v565);
id_1650/*Range<i32>*/ id_1961(i32 v566, i32 v567);
id_1650/*Range<i32>*/ id_1962(i32 v570);
id_1650/*Range<i32>*/ id_1963(i32 v575);
bool id_1964(i32 v580, id_1650/*Range<i32>*/ v581);
id_1652/*RangeIterRange<i32>*/ id_1965(id_1650/*Range<i32>*/ v593);
id_1654/*RangeIter<i64>*/ id_1966(i64 v628);
void id_1967(id_1654/*RangeIter<i64>*/* v630);
i64 id_1968(id_1654/*RangeIter<i64>*/ v631);
bool id_1969(id_1654/*RangeIter<i64>*/ v632, id_1654/*RangeIter<i64>*/ v633);
id_1654/*RangeIter<i64>*/ id_1970(id_1655/*RangeIterRange<i64>*/* v634);
id_1654/*RangeIter<i64>*/ id_1971(id_1655/*RangeIterRange<i64>*/* v635);
id_1655/*RangeIterRange<i64>*/ id_1972(id_1654/*RangeIter<i64>*/ v636, id_1654/*RangeIter<i64>*/ v637);
i64 id_1973(id_1653/*Range<i64>*/* v595);
i64 id_1974(id_1653/*Range<i64>*/* v596);
id_1653/*Range<i64>*/ id_1975(i64 v597, i64 v598);
id_1653/*Range<i64>*/ id_1976(i64 v600, i64 v601);
id_1653/*Range<i64>*/ id_1977(i64 v602, i64 v603);
id_1653/*Range<i64>*/ id_1978(i64 v604);
id_1653/*Range<i64>*/ id_1979(i64 v605);
id_1653/*Range<i64>*/ id_1980(i64 v608);
id_1653/*Range<i64>*/ id_1981(id_1653/*Range<i64>*/ v611);
id_1653/*Range<i64>*/ id_1982(i64 v612, i64 v613);
id_1653/*Range<i64>*/ id_1983(i64 v616);
id_1653/*Range<i64>*/ id_1984(i64 v621);
bool id_1985(i64 v626, id_1653/*Range<i64>*/ v627);
id_1655/*RangeIterRange<i64>*/ id_1986(id_1653/*Range<i64>*/ v639);
id_1657/*RangeIter<char>*/ id_1987(char v674);
void id_1988(id_1657/*RangeIter<char>*/* v676);
char id_1989(id_1657/*RangeIter<char>*/ v677);
bool id_1990(id_1657/*RangeIter<char>*/ v678, id_1657/*RangeIter<char>*/ v679);
id_1657/*RangeIter<char>*/ id_1991(id_1658/*RangeIterRange<char>*/* v680);
id_1657/*RangeIter<char>*/ id_1992(id_1658/*RangeIterRange<char>*/* v681);
id_1658/*RangeIterRange<char>*/ id_1993(id_1657/*RangeIter<char>*/ v682, id_1657/*RangeIter<char>*/ v683);
char id_1994(id_1656/*Range<char>*/* v641);
char id_1995(id_1656/*Range<char>*/* v642);
id_1656/*Range<char>*/ id_1996(char v643, char v644);
id_1656/*Range<char>*/ id_1997(char v646, char v647);
id_1656/*Range<char>*/ id_1998(char v648, char v649);
id_1656/*Range<char>*/ id_1999(char v650);
id_1656/*Range<char>*/ id_2000(char v651);
id_1656/*Range<char>*/ id_2001(char v654);
id_1656/*Range<char>*/ id_2002(id_1656/*Range<char>*/ v657);
id_1656/*Range<char>*/ id_2003(char v658, char v659);
id_1656/*Range<char>*/ id_2004(char v662);
id_1656/*Range<char>*/ id_2005(char v667);
bool id_2006(char v672, id_1656/*Range<char>*/ v673);
id_1658/*RangeIterRange<char>*/ id_2007(id_1656/*Range<char>*/ v685);
id_1660/*VecIter<i64>*/ id_2008(i64* v738);
void id_2009(id_1660/*VecIter<i64>*/* v740);
id_1660/*VecIter<i64>*/ id_2010(id_1660/*VecIter<i64>*/ v741, i64 v742);
bool id_2011(id_1660/*VecIter<i64>*/ v743, id_1660/*VecIter<i64>*/ v744);
i64* id_2012(id_1660/*VecIter<i64>*/ v745);
id_1660/*VecIter<i64>*/ id_2013(id_1661/*VecIterRange<i64>*/* v748);
id_1660/*VecIter<i64>*/ id_2014(id_1661/*VecIterRange<i64>*/* v749);
id_1661/*VecIterRange<i64>*/ id_2015(id_1660/*VecIter<i64>*/ v750, id_1660/*VecIter<i64>*/ v751);
i64* id_2016(id_1659/*Vec<i64>*/* v692, i64 v693);
i64* id_2017(id_1659/*Vec<i64>*/* v694, i64 v695);
void id_2018(id_1659/*Vec<i64>*/* v696);
void id_2019(id_1659/*Vec<i64>*/* v705);
void id_2020(id_1659/*Vec<i64>*/* v714);
void id_2021(id_1659/*Vec<i64>*/* v725, i64 v726);
void id_2022(id_1659/*Vec<i64>*/* v727);
void id_2023(id_1659/*Vec<i64>*/* v728, i64 v729);
id_1660/*VecIter<i64>*/ id_2024(id_1659/*Vec<i64>*/* v746);
id_1660/*VecIter<i64>*/ id_2025(id_1659/*Vec<i64>*/* v747);
id_1661/*VecIterRange<i64>*/ id_2026(id_1659/*Vec<i64>*/* v753);
i64* id_2027(id_1659/*Vec<i64>*/* v755);
i64* id_2028(id_1659/*Vec<i64>*/* v756);
void id_2029(id_1659/*Vec<i64>*/* v757);
id_1659/*Vec<i64>*/ id_2030(i64 v758);
id_1659/*Vec<i64>*/ id_2031(i64 v768, i64 v769);
id_1659/*Vec<i64>*/ id_2032();
id_1659/*Vec<i64>*/ id_2033(id_1659/*Vec<i64>*/* v779);
void id_2034(id_1659/*Vec<i64>*/* v789, i64 v790);
void id_2035(id_1659/*Vec<i64>*/* v791, id_1659/*Vec<i64>*/* v792);
id_1659/*Vec<i64>*/ id_2036(i64 v801, i64 v802);
id_1659/*Vec<i64>*/* id_2037(id_1659/*Vec<i64>*/* v804, i64 v805);
void id_2038(id_1659/*Vec<i64>*/* v806);
void id_2039(id_1659/*Vec<i64>*/* v807);
id_1643/*Out*/ id_2040(id_1659/*Vec<i64>*/* v808);
id_1643/*Out*/ id_2041(id_1659/*Vec<i64>*/* v809);
id_1643/*Out*/ id_2042(id_1643/*Out*/ v810, id_1659/*Vec<i64>*/* v811);
i64* id_2043(id_1659/*Vec<i64>*/* v812, i64 v813);
id_1659/*Vec<i64>*/ id_2044(id_1659/*Vec<i64>*/* v814, i64 v815, i64 v816);
id_1659/*Vec<i64>*/ id_2045(id_1659/*Vec<i64>*/* v826, id_1653/*Range<i64>*/ v827);
id_1659/*Vec<i64>*/ id_2046(id_1659/*Vec<i64>*/* v830);
bool id_2047(id_1659/*Vec<i64>*/* v831, id_1659/*Vec<i64>*/* v832);
void id_2048(i64* v841, i64* v842);
i64* id_2049(i64* v844, i64* v845);
void id_2050(i64* v849, i64* v850);
void id_2051(id_1659/*Vec<i64>*/* v854);
void id_2052(id_1659/*Vec<i64>*/* v859);
id_1659/*Vec<i64>*/ id_2053(id_1659/*Vec<i64>*/* v860, i64(*v861)(i64*));
id_1659/*Vec<i64>*/ id_2054(id_1659/*Vec<i64>*/* v871, bool(*v872)(i64*));
id_1659/*Vec<i64>*/ id_2055(i64 v882, i64 v883);
char id_2056(str* v893, i64 v894);
str id_2057();
bool id_2058(char v896, str v897);
char id_2059(str v898);
id_1663/*VecIter<char>*/ id_2060(char* v945);
void id_2061(id_1663/*VecIter<char>*/* v947);
id_1663/*VecIter<char>*/ id_2062(id_1663/*VecIter<char>*/ v948, i64 v949);
bool id_2063(id_1663/*VecIter<char>*/ v950, id_1663/*VecIter<char>*/ v951);
char* id_2064(id_1663/*VecIter<char>*/ v952);
id_1663/*VecIter<char>*/ id_2065(id_1664/*VecIterRange<char>*/* v955);
id_1663/*VecIter<char>*/ id_2066(id_1664/*VecIterRange<char>*/* v956);
id_1664/*VecIterRange<char>*/ id_2067(id_1663/*VecIter<char>*/ v957, id_1663/*VecIter<char>*/ v958);
char* id_2068(id_1662/*Vec<char>*/* v899, i64 v900);
char* id_2069(id_1662/*Vec<char>*/* v901, i64 v902);
void id_2070(id_1662/*Vec<char>*/* v903);
void id_2071(id_1662/*Vec<char>*/* v912);
void id_2072(id_1662/*Vec<char>*/* v921);
void id_2073(id_1662/*Vec<char>*/* v932, char v933);
void id_2074(id_1662/*Vec<char>*/* v934);
void id_2075(id_1662/*Vec<char>*/* v935, i64 v936);
id_1663/*VecIter<char>*/ id_2076(id_1662/*Vec<char>*/* v953);
id_1663/*VecIter<char>*/ id_2077(id_1662/*Vec<char>*/* v954);
id_1664/*VecIterRange<char>*/ id_2078(id_1662/*Vec<char>*/* v960);
char* id_2079(id_1662/*Vec<char>*/* v962);
char* id_2080(id_1662/*Vec<char>*/* v963);
void id_2081(id_1662/*Vec<char>*/* v964);
id_1662/*Vec<char>*/ id_2082(i64 v965);
id_1662/*Vec<char>*/ id_2083(i64 v975, char v976);
id_1662/*Vec<char>*/ id_2084();
id_1662/*Vec<char>*/ id_2085(id_1662/*Vec<char>*/* v986);
void id_2086(id_1662/*Vec<char>*/* v996, char v997);
void id_2087(id_1662/*Vec<char>*/* v998, id_1662/*Vec<char>*/* v999);
id_1662/*Vec<char>*/ id_2088(char v1008, char v1009);
id_1662/*Vec<char>*/* id_2089(id_1662/*Vec<char>*/* v1011, char v1012);
void id_2090(id_1662/*Vec<char>*/* v1013);
void id_2091(id_1662/*Vec<char>*/* v1014);
id_1643/*Out*/ id_2092(id_1662/*Vec<char>*/* v1015);
id_1643/*Out*/ id_2093(id_1662/*Vec<char>*/* v1016);
id_1643/*Out*/ id_2094(id_1643/*Out*/ v1017, id_1662/*Vec<char>*/* v1018);
char* id_2095(id_1662/*Vec<char>*/* v1019, i64 v1020);
id_1662/*Vec<char>*/ id_2096(id_1662/*Vec<char>*/* v1021, i64 v1022, i64 v1023);
id_1662/*Vec<char>*/ id_2097(id_1662/*Vec<char>*/* v1033, id_1653/*Range<i64>*/ v1034);
id_1662/*Vec<char>*/ id_2098(id_1662/*Vec<char>*/* v1037);
bool id_2099(id_1662/*Vec<char>*/* v1038, id_1662/*Vec<char>*/* v1039);
void id_2100(char* v1048, char* v1049);
char* id_2101(char* v1051, char* v1052);
void id_2102(char* v1056, char* v1057);
void id_2103(id_1662/*Vec<char>*/* v1061);
void id_2104(id_1662/*Vec<char>*/* v1066);
id_1662/*Vec<char>*/ id_2105(id_1662/*Vec<char>*/* v1067, char(*v1068)(char*));
id_1662/*Vec<char>*/ id_2106(id_1662/*Vec<char>*/* v1078, bool(*v1079)(char*));
id_1665/*Str*/ id_2107();
void id_2108(id_1665/*Str*/* v1090);
str id_2109(id_1665/*Str*/* v1091);
id_1664/*VecIterRange<char>*/ id_2110(id_1665/*Str*/* v1093);
char* id_2111(id_1665/*Str*/* v1094, i64 v1095);
char* id_2112(id_1665/*Str*/* v1096, i64 v1097);
char* id_2113(id_1665/*Str*/* v1098, i64 v1099);
void id_2114(id_1665/*Str*/* v1100, char v1101);
void id_2115(id_1665/*Str*/* v1102);
id_1665/*Str*/ id_2116(str v1103);
id_1665/*Str*/ id_2117(id_1665/*Str*/* v1105);
i64 id_2118(str v1107);
void id_2119(id_1665/*Str*/* v1109);
void id_2120(id_1665/*Str*/* v1110);
void id_2121(id_1665/*Str*/* v1111, char v1112);
void id_2122(id_1665/*Str*/* v1113, id_1665/*Str*/* v1114);
void id_2123(id_1665/*Str*/* v1124, str v1125);
id_1665/*Str*/ id_2124(id_1665/*Str*/* v1135, id_1665/*Str*/* v1136);
id_1665/*Str*/ id_2125(str v1138, str v1139);
id_1643/*Out*/ id_2126(id_1665/*Str*/* v1144);
id_1643/*Out*/ id_2127(id_1665/*Str*/* v1145);
id_1643/*Out*/ id_2128(id_1643/*Out*/ v1146, id_1665/*Str*/* v1147);
bool id_2129(id_1665/*Str*/* v1148, id_1665/*Str*/* v1149);
bool id_2130(char v1158, id_1665/*Str*/* v1159);
id_1665/*Str*/ id_2131(str v1168, i64 v1169);
id_1665/*Str*/ id_2132(str v1180);
id_1664/*VecIterRange<char>*/ id_2133(str v1181);
str id_2134();
f64 id_2135(f64 v1184);
id_1666/*V2*/ id_2136(f64 v1194, f64 v1195);
id_1666/*V2*/ id_2137(id_1666/*V2*/ v1197, id_1666/*V2*/ v1198);
id_1666/*V2*/ id_2138(id_1666/*V2*/ v1199, id_1666/*V2*/ v1200);
f64 id_2139(id_1666/*V2*/ v1202);
void id_2140(id_1666/*V2*/ v1203);
void id_2141(id_1666/*V2*/ v1204);
id_1643/*Out*/ id_2142(id_1666/*V2*/ v1205);
id_1643/*Out*/ id_2143(id_1666/*V2*/ v1206);
id_1643/*Out*/ id_2144(id_1643/*Out*/ v1207, id_1666/*V2*/ v1208);
id_1667/*Rng*/ id_2145(i64 v1209);
id_1667/*Rng*/ id_2146();
i64 id_2147(id_1667/*Rng*/* v1211);
int main(int argc, char *argv[]) ;
id_1669/*VecIter<Str>*/ id_2148(id_1665/*Str*/* v1261);
void id_2149(id_1669/*VecIter<Str>*/* v1263);
id_1669/*VecIter<Str>*/ id_2150(id_1669/*VecIter<Str>*/ v1264, i64 v1265);
bool id_2151(id_1669/*VecIter<Str>*/ v1266, id_1669/*VecIter<Str>*/ v1267);
id_1665/*Str*/* id_2152(id_1669/*VecIter<Str>*/ v1268);
id_1669/*VecIter<Str>*/ id_2153(id_1670/*VecIterRange<Str>*/* v1271);
id_1669/*VecIter<Str>*/ id_2154(id_1670/*VecIterRange<Str>*/* v1272);
id_1670/*VecIterRange<Str>*/ id_2155(id_1669/*VecIter<Str>*/ v1273, id_1669/*VecIter<Str>*/ v1274);
id_1665/*Str*/* id_2156(id_1668/*Vec<Str>*/* v1215, i64 v1216);
id_1665/*Str*/* id_2157(id_1668/*Vec<Str>*/* v1217, i64 v1218);
void id_2158(id_1668/*Vec<Str>*/* v1219);
void id_2159(id_1668/*Vec<Str>*/* v1228);
void id_2160(id_1668/*Vec<Str>*/* v1237);
void id_2161(id_1668/*Vec<Str>*/* v1248, id_1665/*Str*/ v1249);
void id_2162(id_1668/*Vec<Str>*/* v1250);
void id_2163(id_1668/*Vec<Str>*/* v1251, i64 v1252);
id_1669/*VecIter<Str>*/ id_2164(id_1668/*Vec<Str>*/* v1269);
id_1669/*VecIter<Str>*/ id_2165(id_1668/*Vec<Str>*/* v1270);
id_1670/*VecIterRange<Str>*/ id_2166(id_1668/*Vec<Str>*/* v1276);
id_1665/*Str*/* id_2167(id_1668/*Vec<Str>*/* v1278);
id_1665/*Str*/* id_2168(id_1668/*Vec<Str>*/* v1279);
void id_2169(id_1668/*Vec<Str>*/* v1280);
id_1668/*Vec<Str>*/ id_2170(i64 v1281);
id_1668/*Vec<Str>*/ id_2171(i64 v1291, id_1665/*Str*/ v1292);
id_1668/*Vec<Str>*/ id_2172();
id_1668/*Vec<Str>*/ id_2173(id_1668/*Vec<Str>*/* v1302);
void id_2174(id_1668/*Vec<Str>*/* v1312, id_1665/*Str*/ v1313);
void id_2175(id_1668/*Vec<Str>*/* v1314, id_1668/*Vec<Str>*/* v1315);
id_1668/*Vec<Str>*/ id_2176(id_1665/*Str*/ v1324, id_1665/*Str*/ v1325);
id_1668/*Vec<Str>*/* id_2177(id_1668/*Vec<Str>*/* v1327, id_1665/*Str*/ v1328);
void id_2178(id_1668/*Vec<Str>*/* v1329);
void id_2179(id_1668/*Vec<Str>*/* v1330);
id_1643/*Out*/ id_2180(id_1668/*Vec<Str>*/* v1331);
id_1643/*Out*/ id_2181(id_1668/*Vec<Str>*/* v1332);
id_1643/*Out*/ id_2182(id_1643/*Out*/ v1333, id_1668/*Vec<Str>*/* v1334);
id_1665/*Str*/* id_2183(id_1668/*Vec<Str>*/* v1335, i64 v1336);
id_1668/*Vec<Str>*/ id_2184(id_1668/*Vec<Str>*/* v1337, i64 v1338, i64 v1339);
id_1668/*Vec<Str>*/ id_2185(id_1668/*Vec<Str>*/* v1349, id_1653/*Range<i64>*/ v1350);
id_1668/*Vec<Str>*/ id_2186(id_1668/*Vec<Str>*/* v1353);
bool id_2187(id_1668/*Vec<Str>*/* v1354, id_1668/*Vec<Str>*/* v1355);
void id_2188(id_1665/*Str*/* v1364, id_1665/*Str*/* v1365);
id_1665/*Str*/* id_2189(id_1665/*Str*/* v1367, id_1665/*Str*/* v1368);
void id_2190(id_1665/*Str*/* v1372, id_1665/*Str*/* v1373);
void id_2191(id_1668/*Vec<Str>*/* v1377);
void id_2192(id_1668/*Vec<Str>*/* v1382);
id_1668/*Vec<Str>*/ id_2193(id_1668/*Vec<Str>*/* v1383, id_1665/*Str*/(*v1384)(id_1665/*Str*/*));
id_1668/*Vec<Str>*/ id_2194(id_1668/*Vec<Str>*/* v1394, bool(*v1395)(id_1665/*Str*/*));
id_1671/*Pair<i64 i64>*/ id_2195(i64* v1406, i64* v1407);
id_1671/*Pair<i64 i64>*/ id_2196();
bool id_2197(id_1671/*Pair<i64 i64>*/* v1413, id_1671/*Pair<i64 i64>*/* v1414);
void id_2198(id_1671/*Pair<i64 i64>*/* v1416);
void id_2199(id_1671/*Pair<i64 i64>*/* v1417);
id_1643/*Out*/ id_2200(id_1671/*Pair<i64 i64>*/* v1418);
id_1643/*Out*/ id_2201(id_1671/*Pair<i64 i64>*/* v1419);
id_1643/*Out*/ id_2202(id_1643/*Out*/ v1420, id_1671/*Pair<i64 i64>*/* v1421);
id_1673/*VecIter<Pair<i64 i64>>*/ id_2203(id_1671/*Pair<i64 i64>*/* v1473);
void id_2204(id_1673/*VecIter<Pair<i64 i64>>*/* v1475);
id_1673/*VecIter<Pair<i64 i64>>*/ id_2205(id_1673/*VecIter<Pair<i64 i64>>*/ v1476, i64 v1477);
bool id_2206(id_1673/*VecIter<Pair<i64 i64>>*/ v1478, id_1673/*VecIter<Pair<i64 i64>>*/ v1479);
id_1671/*Pair<i64 i64>*/* id_2207(id_1673/*VecIter<Pair<i64 i64>>*/ v1480);
id_1673/*VecIter<Pair<i64 i64>>*/ id_2208(id_1674/*VecIterRange<Pair<i64 i64>>*/* v1483);
id_1673/*VecIter<Pair<i64 i64>>*/ id_2209(id_1674/*VecIterRange<Pair<i64 i64>>*/* v1484);
id_1674/*VecIterRange<Pair<i64 i64>>*/ id_2210(id_1673/*VecIter<Pair<i64 i64>>*/ v1485, id_1673/*VecIter<Pair<i64 i64>>*/ v1486);
id_1671/*Pair<i64 i64>*/* id_2211(id_1672/*Vec<Pair<i64 i64>>*/* v1427, i64 v1428);
id_1671/*Pair<i64 i64>*/* id_2212(id_1672/*Vec<Pair<i64 i64>>*/* v1429, i64 v1430);
void id_2213(id_1672/*Vec<Pair<i64 i64>>*/* v1431);
void id_2214(id_1672/*Vec<Pair<i64 i64>>*/* v1440);
void id_2215(id_1672/*Vec<Pair<i64 i64>>*/* v1449);
void id_2216(id_1672/*Vec<Pair<i64 i64>>*/* v1460, id_1671/*Pair<i64 i64>*/ v1461);
void id_2217(id_1672/*Vec<Pair<i64 i64>>*/* v1462);
void id_2218(id_1672/*Vec<Pair<i64 i64>>*/* v1463, i64 v1464);
id_1673/*VecIter<Pair<i64 i64>>*/ id_2219(id_1672/*Vec<Pair<i64 i64>>*/* v1481);
id_1673/*VecIter<Pair<i64 i64>>*/ id_2220(id_1672/*Vec<Pair<i64 i64>>*/* v1482);
id_1674/*VecIterRange<Pair<i64 i64>>*/ id_2221(id_1672/*Vec<Pair<i64 i64>>*/* v1488);
id_1671/*Pair<i64 i64>*/* id_2222(id_1672/*Vec<Pair<i64 i64>>*/* v1490);
id_1671/*Pair<i64 i64>*/* id_2223(id_1672/*Vec<Pair<i64 i64>>*/* v1491);
void id_2224(id_1672/*Vec<Pair<i64 i64>>*/* v1492);
id_1672/*Vec<Pair<i64 i64>>*/ id_2225(i64 v1493);
id_1672/*Vec<Pair<i64 i64>>*/ id_2226(i64 v1503, id_1671/*Pair<i64 i64>*/ v1504);
id_1672/*Vec<Pair<i64 i64>>*/ id_2227();
id_1672/*Vec<Pair<i64 i64>>*/ id_2228(id_1672/*Vec<Pair<i64 i64>>*/* v1514);
void id_2229(id_1672/*Vec<Pair<i64 i64>>*/* v1524, id_1671/*Pair<i64 i64>*/ v1525);
void id_2230(id_1672/*Vec<Pair<i64 i64>>*/* v1526, id_1672/*Vec<Pair<i64 i64>>*/* v1527);
id_1672/*Vec<Pair<i64 i64>>*/ id_2231(id_1671/*Pair<i64 i64>*/ v1536, id_1671/*Pair<i64 i64>*/ v1537);
id_1672/*Vec<Pair<i64 i64>>*/* id_2232(id_1672/*Vec<Pair<i64 i64>>*/* v1539, id_1671/*Pair<i64 i64>*/ v1540);
void id_2233(id_1672/*Vec<Pair<i64 i64>>*/* v1541);
void id_2234(id_1672/*Vec<Pair<i64 i64>>*/* v1542);
id_1643/*Out*/ id_2235(id_1672/*Vec<Pair<i64 i64>>*/* v1543);
id_1643/*Out*/ id_2236(id_1672/*Vec<Pair<i64 i64>>*/* v1544);
id_1643/*Out*/ id_2237(id_1643/*Out*/ v1545, id_1672/*Vec<Pair<i64 i64>>*/* v1546);
id_1671/*Pair<i64 i64>*/* id_2238(id_1672/*Vec<Pair<i64 i64>>*/* v1547, i64 v1548);
id_1672/*Vec<Pair<i64 i64>>*/ id_2239(id_1672/*Vec<Pair<i64 i64>>*/* v1549, i64 v1550, i64 v1551);
id_1672/*Vec<Pair<i64 i64>>*/ id_2240(id_1672/*Vec<Pair<i64 i64>>*/* v1561, id_1653/*Range<i64>*/ v1562);
id_1672/*Vec<Pair<i64 i64>>*/ id_2241(id_1672/*Vec<Pair<i64 i64>>*/* v1565);
bool id_2242(id_1672/*Vec<Pair<i64 i64>>*/* v1566, id_1672/*Vec<Pair<i64 i64>>*/* v1567);
void id_2243(id_1671/*Pair<i64 i64>*/* v1576, id_1671/*Pair<i64 i64>*/* v1577);
id_1671/*Pair<i64 i64>*/* id_2244(id_1671/*Pair<i64 i64>*/* v1579, id_1671/*Pair<i64 i64>*/* v1580);
void id_2245(id_1671/*Pair<i64 i64>*/* v1584, id_1671/*Pair<i64 i64>*/* v1585);
void id_2246(id_1672/*Vec<Pair<i64 i64>>*/* v1589);
void id_2247(id_1672/*Vec<Pair<i64 i64>>*/* v1594);
id_1672/*Vec<Pair<i64 i64>>*/ id_2248(id_1672/*Vec<Pair<i64 i64>>*/* v1595, id_1671/*Pair<i64 i64>*/(*v1596)(id_1671/*Pair<i64 i64>*/*));
id_1672/*Vec<Pair<i64 i64>>*/ id_2249(id_1672/*Vec<Pair<i64 i64>>*/* v1606, bool(*v1607)(id_1671/*Pair<i64 i64>*/*));
i64 id_2250(i64 v1620, i64 v1621);

i8 id_1690/*lop i8 i8*/() {{
  return ((i8)0);
} panic("reached function end without returning anything lop i8 i8\n");}

i16 id_1691/*lop i16 i16*/() {{
  return ((i16)0);
} panic("reached function end without returning anything lop i16 i16\n");}

i32 id_1692/*lop i32 i32*/() {{
  return ((i32)0);
} panic("reached function end without returning anything lop i32 i32\n");}

i64 id_1693/*lop i64 i64*/() {{
  return ((i64)0);
} panic("reached function end without returning anything lop i64 i64\n");}

u8 id_1694/*lop u8 u8*/() {{
  return ((u8)0);
} panic("reached function end without returning anything lop u8 u8\n");}

u16 id_1695/*lop u16 u16*/() {{
  return ((u16)0);
} panic("reached function end without returning anything lop u16 u16\n");}

u32 id_1696/*lop u32 u32*/() {{
  return ((u32)0);
} panic("reached function end without returning anything lop u32 u32\n");}

u64 id_1697/*lop u64 u64*/() {{
  return ((u64)0);
} panic("reached function end without returning anything lop u64 u64\n");}

bool id_1698/*lop bool bool*/() {{
  return ((bool)0);
} panic("reached function end without returning anything lop bool bool\n");}

char id_1699/*lop char char*/() {{
  return ((char)((i8)0));
} panic("reached function end without returning anything lop char char\n");}

i64 id_1700/*lop i64 max i64 a i64 b*/(i64 v101, i64 v102) {{
  if ((((v101))>((v102)))) {
    return (v101);
  } else {
    return (v102);
  }
} panic("reached function end without returning anything lop i64 max i64 a i64 b\n");}

i64 id_1701/*lop i64 min i64 a i64 b*/(i64 v103, i64 v104) {{
  if ((((v103))<((v104)))) {
    return (v103);
  } else {
    return (v104);
  }
} panic("reached function end without returning anything lop i64 min i64 a i64 b\n");}

void id_1702/*lop void intOpMaker*/(){
  id_1641/*IntOpMaker<u64>*/ v320; /*d1*/
  id_1640/*IntOpMaker<u32>*/ v293; /*c1*/
  id_1639/*IntOpMaker<u16>*/ v266; /*b1*/
  id_1638/*IntOpMaker<u8>*/ v239; /*a1*/
  id_1642/*IntOpMaker<char>*/ v347; /*aboba*/
  id_1636/*IntOpMaker<i32>*/ v185; /*c*/
  id_1635/*IntOpMaker<i16>*/ v158; /*b*/
  id_1637/*IntOpMaker<i64>*/ v212; /*d*/
  id_1634/*IntOpMaker<i8>*/ v131; /*a*/
}

void id_1703/*op void += i8R a i8 b*/(i8* v105, i8 v106){
  ((*v105)=(((*v105))+((v106))));
}

void id_1704/*op void -= i8R a i8 b*/(i8* v107, i8 v108){
  ((*v107)=(((*v107))-((v108))));
}

void id_1705/*op void /= i8R a i8 b*/(i8* v109, i8 v110){
  ((*v109)=(((*v109))/((v110))));
}

void id_1706/*op void %= i8R a i8 b*/(i8* v111, i8 v112){
  ((*v111)=(((*v111))%((v112))));
}

void id_1707/*op void *= i8R a i8 b*/(i8* v113, i8 v114){
  ((*v113)=(((*v113))*((v114))));
}

void id_1708/*op void ^= i8R a i8 b*/(i8* v115, i8 v116){
  ((*v115)=(((*v115))^((v116))));
}

void id_1709/*op void &= i8R a i8 b*/(i8* v117, i8 v118){
  ((*v117)=(((*v117))&((v118))));
}

void id_1710/*op void |= i8R a i8 b*/(i8* v119, i8 v120){
  ((*v119)=(((*v119))|((v120))));
}

bool id_1711/*op bool %% i8 a i8 b*/(i8 v121, i8 v122) {{
  return (!((((v121))%((v122)))));
} panic("reached function end without returning anything op bool %% i8 a i8 b\n");}

bool id_1712/*op bool !% i8 a i8 b*/(i8 v123, i8 v124) {{
  return (!((id_1711/*op bool %% i8 a i8 b*/((v123), (v124)))));
} panic("reached function end without returning anything op bool !% i8 a i8 b\n");}

i8* id_1713/*lop i8R ++ i8R x*/(i8* v125) {{
  (id_1703/*op void += i8R a i8 b*/(&(*v125), (((id_1690/*lop i8 i8*/()))-((~((id_1690/*lop i8 i8*/())))))));
  return &(*v125);
} panic("reached function end without returning anything lop i8R ++ i8R x\n");}

i8* id_1714/*lop i8R -- i8R x*/(i8* v126) {{
  (id_1704/*op void -= i8R a i8 b*/(&(*v126), (((id_1690/*lop i8 i8*/()))-((~((id_1690/*lop i8 i8*/())))))));
  return &(*v126);
} panic("reached function end without returning anything lop i8R -- i8R x\n");}

i8 id_1715/*rop i8 ++ i8R x*/(i8* v127) {{
  i8 v128; /*t*/
  ((v128)=(*v127));
  (id_1703/*op void += i8R a i8 b*/(&(*v127), (((id_1690/*lop i8 i8*/()))-((~((id_1690/*lop i8 i8*/())))))));
  return (v128);
} panic("reached function end without returning anything rop i8 ++ i8R x\n");}

i8 id_1716/*rop i8 -- i8R x*/(i8* v129) {{
  i8 v130; /*t*/
  ((v130)=(*v129));
  (id_1704/*op void -= i8R a i8 b*/(&(*v129), (((id_1690/*lop i8 i8*/()))-((~((id_1690/*lop i8 i8*/())))))));
  return (v130);
} panic("reached function end without returning anything rop i8 -- i8R x\n");}

void id_1717/*op void += i16R a i16 b*/(i16* v132, i16 v133){
  ((*v132)=(((*v132))+((v133))));
}

void id_1718/*op void -= i16R a i16 b*/(i16* v134, i16 v135){
  ((*v134)=(((*v134))-((v135))));
}

void id_1719/*op void /= i16R a i16 b*/(i16* v136, i16 v137){
  ((*v136)=(((*v136))/((v137))));
}

void id_1720/*op void %= i16R a i16 b*/(i16* v138, i16 v139){
  ((*v138)=(((*v138))%((v139))));
}

void id_1721/*op void *= i16R a i16 b*/(i16* v140, i16 v141){
  ((*v140)=(((*v140))*((v141))));
}

void id_1722/*op void ^= i16R a i16 b*/(i16* v142, i16 v143){
  ((*v142)=(((*v142))^((v143))));
}

void id_1723/*op void &= i16R a i16 b*/(i16* v144, i16 v145){
  ((*v144)=(((*v144))&((v145))));
}

void id_1724/*op void |= i16R a i16 b*/(i16* v146, i16 v147){
  ((*v146)=(((*v146))|((v147))));
}

bool id_1725/*op bool %% i16 a i16 b*/(i16 v148, i16 v149) {{
  return (!((((v148))%((v149)))));
} panic("reached function end without returning anything op bool %% i16 a i16 b\n");}

bool id_1726/*op bool !% i16 a i16 b*/(i16 v150, i16 v151) {{
  return (!((id_1725/*op bool %% i16 a i16 b*/((v150), (v151)))));
} panic("reached function end without returning anything op bool !% i16 a i16 b\n");}

i16* id_1727/*lop i16R ++ i16R x*/(i16* v152) {{
  (id_1717/*op void += i16R a i16 b*/(&(*v152), (((id_1691/*lop i16 i16*/()))-((~((id_1691/*lop i16 i16*/())))))));
  return &(*v152);
} panic("reached function end without returning anything lop i16R ++ i16R x\n");}

i16* id_1728/*lop i16R -- i16R x*/(i16* v153) {{
  (id_1718/*op void -= i16R a i16 b*/(&(*v153), (((id_1691/*lop i16 i16*/()))-((~((id_1691/*lop i16 i16*/())))))));
  return &(*v153);
} panic("reached function end without returning anything lop i16R -- i16R x\n");}

i16 id_1729/*rop i16 ++ i16R x*/(i16* v154) {{
  i16 v155; /*t*/
  ((v155)=(*v154));
  (id_1717/*op void += i16R a i16 b*/(&(*v154), (((id_1691/*lop i16 i16*/()))-((~((id_1691/*lop i16 i16*/())))))));
  return (v155);
} panic("reached function end without returning anything rop i16 ++ i16R x\n");}

i16 id_1730/*rop i16 -- i16R x*/(i16* v156) {{
  i16 v157; /*t*/
  ((v157)=(*v156));
  (id_1718/*op void -= i16R a i16 b*/(&(*v156), (((id_1691/*lop i16 i16*/()))-((~((id_1691/*lop i16 i16*/())))))));
  return (v157);
} panic("reached function end without returning anything rop i16 -- i16R x\n");}

void id_1731/*op void += i32R a i32 b*/(i32* v159, i32 v160){
  ((*v159)=(((*v159))+((v160))));
}

void id_1732/*op void -= i32R a i32 b*/(i32* v161, i32 v162){
  ((*v161)=(((*v161))-((v162))));
}

void id_1733/*op void /= i32R a i32 b*/(i32* v163, i32 v164){
  ((*v163)=(((*v163))/((v164))));
}

void id_1734/*op void %= i32R a i32 b*/(i32* v165, i32 v166){
  ((*v165)=(((*v165))%((v166))));
}

void id_1735/*op void *= i32R a i32 b*/(i32* v167, i32 v168){
  ((*v167)=(((*v167))*((v168))));
}

void id_1736/*op void ^= i32R a i32 b*/(i32* v169, i32 v170){
  ((*v169)=(((*v169))^((v170))));
}

void id_1737/*op void &= i32R a i32 b*/(i32* v171, i32 v172){
  ((*v171)=(((*v171))&((v172))));
}

void id_1738/*op void |= i32R a i32 b*/(i32* v173, i32 v174){
  ((*v173)=(((*v173))|((v174))));
}

bool id_1739/*op bool %% i32 a i32 b*/(i32 v175, i32 v176) {{
  return (!((((v175))%((v176)))));
} panic("reached function end without returning anything op bool %% i32 a i32 b\n");}

bool id_1740/*op bool !% i32 a i32 b*/(i32 v177, i32 v178) {{
  return (!((id_1739/*op bool %% i32 a i32 b*/((v177), (v178)))));
} panic("reached function end without returning anything op bool !% i32 a i32 b\n");}

i32* id_1741/*lop i32R ++ i32R x*/(i32* v179) {{
  (id_1731/*op void += i32R a i32 b*/(&(*v179), (((id_1692/*lop i32 i32*/()))-((~((id_1692/*lop i32 i32*/())))))));
  return &(*v179);
} panic("reached function end without returning anything lop i32R ++ i32R x\n");}

i32* id_1742/*lop i32R -- i32R x*/(i32* v180) {{
  (id_1732/*op void -= i32R a i32 b*/(&(*v180), (((id_1692/*lop i32 i32*/()))-((~((id_1692/*lop i32 i32*/())))))));
  return &(*v180);
} panic("reached function end without returning anything lop i32R -- i32R x\n");}

i32 id_1743/*rop i32 ++ i32R x*/(i32* v181) {{
  i32 v182; /*t*/
  ((v182)=(*v181));
  (id_1731/*op void += i32R a i32 b*/(&(*v181), (((id_1692/*lop i32 i32*/()))-((~((id_1692/*lop i32 i32*/())))))));
  return (v182);
} panic("reached function end without returning anything rop i32 ++ i32R x\n");}

i32 id_1744/*rop i32 -- i32R x*/(i32* v183) {{
  i32 v184; /*t*/
  ((v184)=(*v183));
  (id_1732/*op void -= i32R a i32 b*/(&(*v183), (((id_1692/*lop i32 i32*/()))-((~((id_1692/*lop i32 i32*/())))))));
  return (v184);
} panic("reached function end without returning anything rop i32 -- i32R x\n");}

void id_1745/*op void += i64R a i64 b*/(i64* v186, i64 v187){
  ((*v186)=(((*v186))+((v187))));
}

void id_1746/*op void -= i64R a i64 b*/(i64* v188, i64 v189){
  ((*v188)=(((*v188))-((v189))));
}

void id_1747/*op void /= i64R a i64 b*/(i64* v190, i64 v191){
  ((*v190)=(((*v190))/((v191))));
}

void id_1748/*op void %= i64R a i64 b*/(i64* v192, i64 v193){
  ((*v192)=(((*v192))%((v193))));
}

void id_1749/*op void *= i64R a i64 b*/(i64* v194, i64 v195){
  ((*v194)=(((*v194))*((v195))));
}

void id_1750/*op void ^= i64R a i64 b*/(i64* v196, i64 v197){
  ((*v196)=(((*v196))^((v197))));
}

void id_1751/*op void &= i64R a i64 b*/(i64* v198, i64 v199){
  ((*v198)=(((*v198))&((v199))));
}

void id_1752/*op void |= i64R a i64 b*/(i64* v200, i64 v201){
  ((*v200)=(((*v200))|((v201))));
}

bool id_1753/*op bool %% i64 a i64 b*/(i64 v202, i64 v203) {{
  return (!((((v202))%((v203)))));
} panic("reached function end without returning anything op bool %% i64 a i64 b\n");}

bool id_1754/*op bool !% i64 a i64 b*/(i64 v204, i64 v205) {{
  return (!((id_1753/*op bool %% i64 a i64 b*/((v204), (v205)))));
} panic("reached function end without returning anything op bool !% i64 a i64 b\n");}

i64* id_1755/*lop i64R ++ i64R x*/(i64* v206) {{
  (id_1745/*op void += i64R a i64 b*/(&(*v206), (((id_1693/*lop i64 i64*/()))-((~((id_1693/*lop i64 i64*/())))))));
  return &(*v206);
} panic("reached function end without returning anything lop i64R ++ i64R x\n");}

i64* id_1756/*lop i64R -- i64R x*/(i64* v207) {{
  (id_1746/*op void -= i64R a i64 b*/(&(*v207), (((id_1693/*lop i64 i64*/()))-((~((id_1693/*lop i64 i64*/())))))));
  return &(*v207);
} panic("reached function end without returning anything lop i64R -- i64R x\n");}

i64 id_1757/*rop i64 ++ i64R x*/(i64* v208) {{
  i64 v209; /*t*/
  ((v209)=(*v208));
  (id_1745/*op void += i64R a i64 b*/(&(*v208), (((id_1693/*lop i64 i64*/()))-((~((id_1693/*lop i64 i64*/())))))));
  return (v209);
} panic("reached function end without returning anything rop i64 ++ i64R x\n");}

i64 id_1758/*rop i64 -- i64R x*/(i64* v210) {{
  i64 v211; /*t*/
  ((v211)=(*v210));
  (id_1746/*op void -= i64R a i64 b*/(&(*v210), (((id_1693/*lop i64 i64*/()))-((~((id_1693/*lop i64 i64*/())))))));
  return (v211);
} panic("reached function end without returning anything rop i64 -- i64R x\n");}

void id_1759/*op void += u8R a u8 b*/(u8* v213, u8 v214){
  ((*v213)=(((*v213))+((v214))));
}

void id_1760/*op void -= u8R a u8 b*/(u8* v215, u8 v216){
  ((*v215)=(((*v215))-((v216))));
}

void id_1761/*op void /= u8R a u8 b*/(u8* v217, u8 v218){
  ((*v217)=(((*v217))/((v218))));
}

void id_1762/*op void %= u8R a u8 b*/(u8* v219, u8 v220){
  ((*v219)=(((*v219))%((v220))));
}

void id_1763/*op void *= u8R a u8 b*/(u8* v221, u8 v222){
  ((*v221)=(((*v221))*((v222))));
}

void id_1764/*op void ^= u8R a u8 b*/(u8* v223, u8 v224){
  ((*v223)=(((*v223))^((v224))));
}

void id_1765/*op void &= u8R a u8 b*/(u8* v225, u8 v226){
  ((*v225)=(((*v225))&((v226))));
}

void id_1766/*op void |= u8R a u8 b*/(u8* v227, u8 v228){
  ((*v227)=(((*v227))|((v228))));
}

bool id_1767/*op bool %% u8 a u8 b*/(u8 v229, u8 v230) {{
  return (!((((v229))%((v230)))));
} panic("reached function end without returning anything op bool %% u8 a u8 b\n");}

bool id_1768/*op bool !% u8 a u8 b*/(u8 v231, u8 v232) {{
  return (!((id_1767/*op bool %% u8 a u8 b*/((v231), (v232)))));
} panic("reached function end without returning anything op bool !% u8 a u8 b\n");}

u8* id_1769/*lop u8R ++ u8R x*/(u8* v233) {{
  (id_1759/*op void += u8R a u8 b*/(&(*v233), (((id_1694/*lop u8 u8*/()))-((~((id_1694/*lop u8 u8*/())))))));
  return &(*v233);
} panic("reached function end without returning anything lop u8R ++ u8R x\n");}

u8* id_1770/*lop u8R -- u8R x*/(u8* v234) {{
  (id_1760/*op void -= u8R a u8 b*/(&(*v234), (((id_1694/*lop u8 u8*/()))-((~((id_1694/*lop u8 u8*/())))))));
  return &(*v234);
} panic("reached function end without returning anything lop u8R -- u8R x\n");}

u8 id_1771/*rop u8 ++ u8R x*/(u8* v235) {{
  u8 v236; /*t*/
  ((v236)=(*v235));
  (id_1759/*op void += u8R a u8 b*/(&(*v235), (((id_1694/*lop u8 u8*/()))-((~((id_1694/*lop u8 u8*/())))))));
  return (v236);
} panic("reached function end without returning anything rop u8 ++ u8R x\n");}

u8 id_1772/*rop u8 -- u8R x*/(u8* v237) {{
  u8 v238; /*t*/
  ((v238)=(*v237));
  (id_1760/*op void -= u8R a u8 b*/(&(*v237), (((id_1694/*lop u8 u8*/()))-((~((id_1694/*lop u8 u8*/())))))));
  return (v238);
} panic("reached function end without returning anything rop u8 -- u8R x\n");}

void id_1773/*op void += u16R a u16 b*/(u16* v240, u16 v241){
  ((*v240)=(((*v240))+((v241))));
}

void id_1774/*op void -= u16R a u16 b*/(u16* v242, u16 v243){
  ((*v242)=(((*v242))-((v243))));
}

void id_1775/*op void /= u16R a u16 b*/(u16* v244, u16 v245){
  ((*v244)=(((*v244))/((v245))));
}

void id_1776/*op void %= u16R a u16 b*/(u16* v246, u16 v247){
  ((*v246)=(((*v246))%((v247))));
}

void id_1777/*op void *= u16R a u16 b*/(u16* v248, u16 v249){
  ((*v248)=(((*v248))*((v249))));
}

void id_1778/*op void ^= u16R a u16 b*/(u16* v250, u16 v251){
  ((*v250)=(((*v250))^((v251))));
}

void id_1779/*op void &= u16R a u16 b*/(u16* v252, u16 v253){
  ((*v252)=(((*v252))&((v253))));
}

void id_1780/*op void |= u16R a u16 b*/(u16* v254, u16 v255){
  ((*v254)=(((*v254))|((v255))));
}

bool id_1781/*op bool %% u16 a u16 b*/(u16 v256, u16 v257) {{
  return (!((((v256))%((v257)))));
} panic("reached function end without returning anything op bool %% u16 a u16 b\n");}

bool id_1782/*op bool !% u16 a u16 b*/(u16 v258, u16 v259) {{
  return (!((id_1781/*op bool %% u16 a u16 b*/((v258), (v259)))));
} panic("reached function end without returning anything op bool !% u16 a u16 b\n");}

u16* id_1783/*lop u16R ++ u16R x*/(u16* v260) {{
  (id_1773/*op void += u16R a u16 b*/(&(*v260), (((id_1695/*lop u16 u16*/()))-((~((id_1695/*lop u16 u16*/())))))));
  return &(*v260);
} panic("reached function end without returning anything lop u16R ++ u16R x\n");}

u16* id_1784/*lop u16R -- u16R x*/(u16* v261) {{
  (id_1774/*op void -= u16R a u16 b*/(&(*v261), (((id_1695/*lop u16 u16*/()))-((~((id_1695/*lop u16 u16*/())))))));
  return &(*v261);
} panic("reached function end without returning anything lop u16R -- u16R x\n");}

u16 id_1785/*rop u16 ++ u16R x*/(u16* v262) {{
  u16 v263; /*t*/
  ((v263)=(*v262));
  (id_1773/*op void += u16R a u16 b*/(&(*v262), (((id_1695/*lop u16 u16*/()))-((~((id_1695/*lop u16 u16*/())))))));
  return (v263);
} panic("reached function end without returning anything rop u16 ++ u16R x\n");}

u16 id_1786/*rop u16 -- u16R x*/(u16* v264) {{
  u16 v265; /*t*/
  ((v265)=(*v264));
  (id_1774/*op void -= u16R a u16 b*/(&(*v264), (((id_1695/*lop u16 u16*/()))-((~((id_1695/*lop u16 u16*/())))))));
  return (v265);
} panic("reached function end without returning anything rop u16 -- u16R x\n");}

void id_1787/*op void += u32R a u32 b*/(u32* v267, u32 v268){
  ((*v267)=(((*v267))+((v268))));
}

void id_1788/*op void -= u32R a u32 b*/(u32* v269, u32 v270){
  ((*v269)=(((*v269))-((v270))));
}

void id_1789/*op void /= u32R a u32 b*/(u32* v271, u32 v272){
  ((*v271)=(((*v271))/((v272))));
}

void id_1790/*op void %= u32R a u32 b*/(u32* v273, u32 v274){
  ((*v273)=(((*v273))%((v274))));
}

void id_1791/*op void *= u32R a u32 b*/(u32* v275, u32 v276){
  ((*v275)=(((*v275))*((v276))));
}

void id_1792/*op void ^= u32R a u32 b*/(u32* v277, u32 v278){
  ((*v277)=(((*v277))^((v278))));
}

void id_1793/*op void &= u32R a u32 b*/(u32* v279, u32 v280){
  ((*v279)=(((*v279))&((v280))));
}

void id_1794/*op void |= u32R a u32 b*/(u32* v281, u32 v282){
  ((*v281)=(((*v281))|((v282))));
}

bool id_1795/*op bool %% u32 a u32 b*/(u32 v283, u32 v284) {{
  return (!((((v283))%((v284)))));
} panic("reached function end without returning anything op bool %% u32 a u32 b\n");}

bool id_1796/*op bool !% u32 a u32 b*/(u32 v285, u32 v286) {{
  return (!((id_1795/*op bool %% u32 a u32 b*/((v285), (v286)))));
} panic("reached function end without returning anything op bool !% u32 a u32 b\n");}

u32* id_1797/*lop u32R ++ u32R x*/(u32* v287) {{
  (id_1787/*op void += u32R a u32 b*/(&(*v287), (((id_1696/*lop u32 u32*/()))-((~((id_1696/*lop u32 u32*/())))))));
  return &(*v287);
} panic("reached function end without returning anything lop u32R ++ u32R x\n");}

u32* id_1798/*lop u32R -- u32R x*/(u32* v288) {{
  (id_1788/*op void -= u32R a u32 b*/(&(*v288), (((id_1696/*lop u32 u32*/()))-((~((id_1696/*lop u32 u32*/())))))));
  return &(*v288);
} panic("reached function end without returning anything lop u32R -- u32R x\n");}

u32 id_1799/*rop u32 ++ u32R x*/(u32* v289) {{
  u32 v290; /*t*/
  ((v290)=(*v289));
  (id_1787/*op void += u32R a u32 b*/(&(*v289), (((id_1696/*lop u32 u32*/()))-((~((id_1696/*lop u32 u32*/())))))));
  return (v290);
} panic("reached function end without returning anything rop u32 ++ u32R x\n");}

u32 id_1800/*rop u32 -- u32R x*/(u32* v291) {{
  u32 v292; /*t*/
  ((v292)=(*v291));
  (id_1788/*op void -= u32R a u32 b*/(&(*v291), (((id_1696/*lop u32 u32*/()))-((~((id_1696/*lop u32 u32*/())))))));
  return (v292);
} panic("reached function end without returning anything rop u32 -- u32R x\n");}

void id_1801/*op void += u64R a u64 b*/(u64* v294, u64 v295){
  ((*v294)=(((*v294))+((v295))));
}

void id_1802/*op void -= u64R a u64 b*/(u64* v296, u64 v297){
  ((*v296)=(((*v296))-((v297))));
}

void id_1803/*op void /= u64R a u64 b*/(u64* v298, u64 v299){
  ((*v298)=(((*v298))/((v299))));
}

void id_1804/*op void %= u64R a u64 b*/(u64* v300, u64 v301){
  ((*v300)=(((*v300))%((v301))));
}

void id_1805/*op void *= u64R a u64 b*/(u64* v302, u64 v303){
  ((*v302)=(((*v302))*((v303))));
}

void id_1806/*op void ^= u64R a u64 b*/(u64* v304, u64 v305){
  ((*v304)=(((*v304))^((v305))));
}

void id_1807/*op void &= u64R a u64 b*/(u64* v306, u64 v307){
  ((*v306)=(((*v306))&((v307))));
}

void id_1808/*op void |= u64R a u64 b*/(u64* v308, u64 v309){
  ((*v308)=(((*v308))|((v309))));
}

bool id_1809/*op bool %% u64 a u64 b*/(u64 v310, u64 v311) {{
  return (!((((v310))%((v311)))));
} panic("reached function end without returning anything op bool %% u64 a u64 b\n");}

bool id_1810/*op bool !% u64 a u64 b*/(u64 v312, u64 v313) {{
  return (!((id_1809/*op bool %% u64 a u64 b*/((v312), (v313)))));
} panic("reached function end without returning anything op bool !% u64 a u64 b\n");}

u64* id_1811/*lop u64R ++ u64R x*/(u64* v314) {{
  (id_1801/*op void += u64R a u64 b*/(&(*v314), (((id_1697/*lop u64 u64*/()))-((~((id_1697/*lop u64 u64*/())))))));
  return &(*v314);
} panic("reached function end without returning anything lop u64R ++ u64R x\n");}

u64* id_1812/*lop u64R -- u64R x*/(u64* v315) {{
  (id_1802/*op void -= u64R a u64 b*/(&(*v315), (((id_1697/*lop u64 u64*/()))-((~((id_1697/*lop u64 u64*/())))))));
  return &(*v315);
} panic("reached function end without returning anything lop u64R -- u64R x\n");}

u64 id_1813/*rop u64 ++ u64R x*/(u64* v316) {{
  u64 v317; /*t*/
  ((v317)=(*v316));
  (id_1801/*op void += u64R a u64 b*/(&(*v316), (((id_1697/*lop u64 u64*/()))-((~((id_1697/*lop u64 u64*/())))))));
  return (v317);
} panic("reached function end without returning anything rop u64 ++ u64R x\n");}

u64 id_1814/*rop u64 -- u64R x*/(u64* v318) {{
  u64 v319; /*t*/
  ((v319)=(*v318));
  (id_1802/*op void -= u64R a u64 b*/(&(*v318), (((id_1697/*lop u64 u64*/()))-((~((id_1697/*lop u64 u64*/())))))));
  return (v319);
} panic("reached function end without returning anything rop u64 -- u64R x\n");}

void id_1815/*op void += charR a char b*/(char* v321, char v322){
  ((*v321)=(((*v321))+((v322))));
}

void id_1816/*op void -= charR a char b*/(char* v323, char v324){
  ((*v323)=(((*v323))-((v324))));
}

void id_1817/*op void /= charR a char b*/(char* v325, char v326){
  ((*v325)=(((*v325))/((v326))));
}

void id_1818/*op void %= charR a char b*/(char* v327, char v328){
  ((*v327)=(((*v327))%((v328))));
}

void id_1819/*op void *= charR a char b*/(char* v329, char v330){
  ((*v329)=(((*v329))*((v330))));
}

void id_1820/*op void ^= charR a char b*/(char* v331, char v332){
  ((*v331)=(((*v331))^((v332))));
}

void id_1821/*op void &= charR a char b*/(char* v333, char v334){
  ((*v333)=(((*v333))&((v334))));
}

void id_1822/*op void |= charR a char b*/(char* v335, char v336){
  ((*v335)=(((*v335))|((v336))));
}

bool id_1823/*op bool %% char a char b*/(char v337, char v338) {{
  return (!((((v337))%((v338)))));
} panic("reached function end without returning anything op bool %% char a char b\n");}

bool id_1824/*op bool !% char a char b*/(char v339, char v340) {{
  return (!((id_1823/*op bool %% char a char b*/((v339), (v340)))));
} panic("reached function end without returning anything op bool !% char a char b\n");}

char* id_1825/*lop charR ++ charR x*/(char* v341) {{
  (id_1815/*op void += charR a char b*/(&(*v341), (((id_1699/*lop char char*/()))-((~((id_1699/*lop char char*/())))))));
  return &(*v341);
} panic("reached function end without returning anything lop charR ++ charR x\n");}

char* id_1826/*lop charR -- charR x*/(char* v342) {{
  (id_1816/*op void -= charR a char b*/(&(*v342), (((id_1699/*lop char char*/()))-((~((id_1699/*lop char char*/())))))));
  return &(*v342);
} panic("reached function end without returning anything lop charR -- charR x\n");}

char id_1827/*rop char ++ charR x*/(char* v343) {{
  char v344; /*t*/
  ((v344)=(*v343));
  (id_1815/*op void += charR a char b*/(&(*v343), (((id_1699/*lop char char*/()))-((~((id_1699/*lop char char*/())))))));
  return (v344);
} panic("reached function end without returning anything rop char ++ charR x\n");}

char id_1828/*rop char -- charR x*/(char* v345) {{
  char v346; /*t*/
  ((v346)=(*v345));
  (id_1816/*op void -= charR a char b*/(&(*v345), (((id_1699/*lop char char*/()))-((~((id_1699/*lop char char*/())))))));
  return (v346);
} panic("reached function end without returning anything rop char -- charR x\n");}

void id_1829/*op void += f32R a f32 b*/(f32* v348, f32 v349){
  ((*v348)=(((*v348))+((v349))));
}

void id_1830/*op void -= f32R a f32 b*/(f32* v350, f32 v351){
  ((*v350)=(((*v350))-((v351))));
}

void id_1831/*op void /= f32R a f32 b*/(f32* v352, f32 v353){
  ((*v352)=(((*v352))/((v353))));
}

void id_1832/*op void *= f32R a f32 b*/(f32* v354, f32 v355){
  ((*v354)=(((*v354))*((v355))));
}

void id_1833/*op void += f64R a f64 b*/(f64* v356, f64 v357){
  ((*v356)=(((*v356))+((v357))));
}

void id_1834/*op void -= f64R a f64 b*/(f64* v358, f64 v359){
  ((*v358)=(((*v358))-((v359))));
}

void id_1835/*op void /= f64R a f64 b*/(f64* v360, f64 v361){
  ((*v360)=(((*v360))/((v361))));
}

void id_1836/*op void *= f64R a f64 b*/(f64* v362, f64 v363){
  ((*v362)=(((*v362))*((v363))));
}

bool id_1837/*op bool < bool a bool b*/(bool v364, bool v365) {{
  return (((!((v364))))&&((v365)));
} panic("reached function end without returning anything op bool < bool a bool b\n");}

i64 id_1838/*op i64 ** i64 a i64 n*/(i64 v366, i64 v367) {{
  i64 v368; /*res*/
  ((v368)=((i64)1));
  while ((((v367))!=(((i64)0)))) {
    if ((id_1754/*op bool !% i64 a i64 b*/((v367), ((i64)2)))) {
      (id_1749/*op void *= i64R a i64 b*/(&(v368), (v366)));
    }
    (id_1749/*op void *= i64R a i64 b*/(&(v366), (v366)));
    (id_1747/*op void /= i64R a i64 b*/(&(v367), ((i64)2)));
  }
  return (v368);
} panic("reached function end without returning anything op i64 ** i64 a i64 n\n");}

id_1643/*Out*/ id_1839/*lop Out Out*/() {{
  id_1643/*Out*/ v369; /*o*/
  return (v369);
} panic("reached function end without returning anything lop Out Out\n");}

id_1643/*Out*/ id_1840/*op Out < Out a Out b*/(id_1643/*Out*/ v370, id_1643/*Out*/ v371) {{
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out a Out b\n");}

id_1643/*Out*/ id_1841/*lop Out < Out o*/(id_1643/*Out*/ v372) {{
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Out o\n");}

id_1643/*Out*/ id_1842/*rop Out < str i*/(str v373) {{
  (printf("%s\n", (v373)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < str i\n");}

id_1643/*Out*/ id_1843/*lop Out < str i*/(str v374) {{
  ((printf("%s", (v374))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < str i\n");}

id_1643/*Out*/ id_1844/*op Out < Out o str i*/(id_1643/*Out*/ v375, str v376) {{
  ((printf("%s", (v376))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o str i\n");}

id_1643/*Out*/ id_1845/*lop Out > strR i*/(str* v377) {{
  ((*v377)=(in_str()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > strR i\n");}

id_1643/*Out*/ id_1846/*op Out > Out o strR i*/(id_1643/*Out*/ v378, str* v379) {{
  ((*v379)=(in_str()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o strR i\n");}

id_1643/*Out*/ id_1847/*rop Out < char i*/(char v380) {{
  (printf("%c\n", (v380)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < char i\n");}

id_1643/*Out*/ id_1848/*lop Out < char i*/(char v381) {{
  ((printf("%c", (v381))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < char i\n");}

id_1643/*Out*/ id_1849/*op Out < Out o char i*/(id_1643/*Out*/ v382, char v383) {{
  ((printf("%c", (v383))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o char i\n");}

id_1643/*Out*/ id_1850/*lop Out > charR i*/(char* v384) {{
  ((*v384)=(in_char()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > charR i\n");}

id_1643/*Out*/ id_1851/*op Out > Out o charR i*/(id_1643/*Out*/ v385, char* v386) {{
  ((*v386)=(in_char()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o charR i\n");}

id_1643/*Out*/ id_1852/*rop Out < i8 i*/(i8 v387) {{
  (printf("%d\n", (v387)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i8 i\n");}

id_1643/*Out*/ id_1853/*lop Out < i8 i*/(i8 v388) {{
  ((printf("%d", (v388))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i8 i\n");}

id_1643/*Out*/ id_1854/*op Out < Out o i8 i*/(id_1643/*Out*/ v389, i8 v390) {{
  ((printf("%d", (v390))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i8 i\n");}

id_1643/*Out*/ id_1855/*lop Out > i8R i*/(i8* v391) {{
  ((*v391)=(in_i8()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i8R i\n");}

id_1643/*Out*/ id_1856/*op Out > Out o i8R i*/(id_1643/*Out*/ v392, i8* v393) {{
  ((*v393)=(in_i8()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i8R i\n");}

id_1643/*Out*/ id_1857/*rop Out < i16 i*/(i16 v394) {{
  (printf("%hd\n", (v394)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i16 i\n");}

id_1643/*Out*/ id_1858/*lop Out < i16 i*/(i16 v395) {{
  ((printf("%hd", (v395))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i16 i\n");}

id_1643/*Out*/ id_1859/*op Out < Out o i16 i*/(id_1643/*Out*/ v396, i16 v397) {{
  ((printf("%hd", (v397))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i16 i\n");}

id_1643/*Out*/ id_1860/*lop Out > i16R i*/(i16* v398) {{
  ((*v398)=(in_i16()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i16R i\n");}

id_1643/*Out*/ id_1861/*op Out > Out o i16R i*/(id_1643/*Out*/ v399, i16* v400) {{
  ((*v400)=(in_i16()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i16R i\n");}

id_1643/*Out*/ id_1862/*rop Out < i32 i*/(i32 v401) {{
  (printf("%d\n", (v401)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i32 i\n");}

id_1643/*Out*/ id_1863/*lop Out < i32 i*/(i32 v402) {{
  ((printf("%d", (v402))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i32 i\n");}

id_1643/*Out*/ id_1864/*op Out < Out o i32 i*/(id_1643/*Out*/ v403, i32 v404) {{
  ((printf("%d", (v404))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i32 i\n");}

id_1643/*Out*/ id_1865/*lop Out > i32R i*/(i32* v405) {{
  ((*v405)=(in_i32()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i32R i\n");}

id_1643/*Out*/ id_1866/*op Out > Out o i32R i*/(id_1643/*Out*/ v406, i32* v407) {{
  ((*v407)=(in_i32()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i32R i\n");}

id_1643/*Out*/ id_1867/*rop Out < i64 i*/(i64 v408) {{
  (printf("%lld\n", (v408)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i64 i\n");}

id_1643/*Out*/ id_1868/*lop Out < i64 i*/(i64 v409) {{
  ((printf("%lld", (v409))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i64 i\n");}

id_1643/*Out*/ id_1869/*op Out < Out o i64 i*/(id_1643/*Out*/ v410, i64 v411) {{
  ((printf("%lld", (v411))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i64 i\n");}

id_1643/*Out*/ id_1870/*lop Out > i64R i*/(i64* v412) {{
  ((*v412)=(in_i64()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i64R i\n");}

id_1643/*Out*/ id_1871/*op Out > Out o i64R i*/(id_1643/*Out*/ v413, i64* v414) {{
  ((*v414)=(in_i64()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i64R i\n");}

id_1643/*Out*/ id_1872/*rop Out < u8 i*/(u8 v415) {{
  (printf("%d\n", (v415)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u8 i\n");}

id_1643/*Out*/ id_1873/*lop Out < u8 i*/(u8 v416) {{
  ((printf("%d", (v416))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u8 i\n");}

id_1643/*Out*/ id_1874/*op Out < Out o u8 i*/(id_1643/*Out*/ v417, u8 v418) {{
  ((printf("%d", (v418))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u8 i\n");}

id_1643/*Out*/ id_1875/*lop Out > u8R i*/(u8* v419) {{
  ((*v419)=(in_u8()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u8R i\n");}

id_1643/*Out*/ id_1876/*op Out > Out o u8R i*/(id_1643/*Out*/ v420, u8* v421) {{
  ((*v421)=(in_u8()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u8R i\n");}

id_1643/*Out*/ id_1877/*rop Out < u16 i*/(u16 v422) {{
  (printf("%hd\n", (v422)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u16 i\n");}

id_1643/*Out*/ id_1878/*lop Out < u16 i*/(u16 v423) {{
  ((printf("%hd", (v423))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u16 i\n");}

id_1643/*Out*/ id_1879/*op Out < Out o u16 i*/(id_1643/*Out*/ v424, u16 v425) {{
  ((printf("%hd", (v425))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u16 i\n");}

id_1643/*Out*/ id_1880/*lop Out > u16R i*/(u16* v426) {{
  ((*v426)=(in_u16()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u16R i\n");}

id_1643/*Out*/ id_1881/*op Out > Out o u16R i*/(id_1643/*Out*/ v427, u16* v428) {{
  ((*v428)=(in_u16()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u16R i\n");}

id_1643/*Out*/ id_1882/*rop Out < u32 i*/(u32 v429) {{
  (printf("%u\n", (v429)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u32 i\n");}

id_1643/*Out*/ id_1883/*lop Out < u32 i*/(u32 v430) {{
  ((printf("%u", (v430))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u32 i\n");}

id_1643/*Out*/ id_1884/*op Out < Out o u32 i*/(id_1643/*Out*/ v431, u32 v432) {{
  ((printf("%u", (v432))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u32 i\n");}

id_1643/*Out*/ id_1885/*lop Out > u32R i*/(u32* v433) {{
  ((*v433)=(in_u32()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u32R i\n");}

id_1643/*Out*/ id_1886/*op Out > Out o u32R i*/(id_1643/*Out*/ v434, u32* v435) {{
  ((*v435)=(in_u32()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u32R i\n");}

id_1643/*Out*/ id_1887/*rop Out < u64 i*/(u64 v436) {{
  (printf("%llu\n", (v436)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u64 i\n");}

id_1643/*Out*/ id_1888/*lop Out < u64 i*/(u64 v437) {{
  ((printf("%llu", (v437))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u64 i\n");}

id_1643/*Out*/ id_1889/*op Out < Out o u64 i*/(id_1643/*Out*/ v438, u64 v439) {{
  ((printf("%llu", (v439))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u64 i\n");}

id_1643/*Out*/ id_1890/*lop Out > u64R i*/(u64* v440) {{
  ((*v440)=(in_u64()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u64R i\n");}

id_1643/*Out*/ id_1891/*op Out > Out o u64R i*/(id_1643/*Out*/ v441, u64* v442) {{
  ((*v442)=(in_u64()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u64R i\n");}

id_1643/*Out*/ id_1892/*rop Out < f32 i*/(f32 v443) {{
  (printf("%f\n", (v443)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < f32 i\n");}

id_1643/*Out*/ id_1893/*lop Out < f32 i*/(f32 v444) {{
  ((printf("%f", (v444))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < f32 i\n");}

id_1643/*Out*/ id_1894/*op Out < Out o f32 i*/(id_1643/*Out*/ v445, f32 v446) {{
  ((printf("%f", (v446))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o f32 i\n");}

id_1643/*Out*/ id_1895/*lop Out > f32R i*/(f32* v447) {{
  ((*v447)=(in_f32()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > f32R i\n");}

id_1643/*Out*/ id_1896/*op Out > Out o f32R i*/(id_1643/*Out*/ v448, f32* v449) {{
  ((*v449)=(in_f32()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o f32R i\n");}

id_1643/*Out*/ id_1897/*rop Out < f64 i*/(f64 v450) {{
  (printf("%f\n", (v450)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < f64 i\n");}

id_1643/*Out*/ id_1898/*lop Out < f64 i*/(f64 v451) {{
  ((printf("%f", (v451))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < f64 i\n");}

id_1643/*Out*/ id_1899/*op Out < Out o f64 i*/(id_1643/*Out*/ v452, f64 v453) {{
  ((printf("%f", (v453))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o f64 i\n");}

id_1643/*Out*/ id_1900/*lop Out > f64R i*/(f64* v454) {{
  ((*v454)=(in_f64()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > f64R i\n");}

id_1643/*Out*/ id_1901/*op Out > Out o f64R i*/(id_1643/*Out*/ v455, f64* v456) {{
  ((*v456)=(in_f64()));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o f64R i\n");}

void id_1902/*lop void rangeMaker*/(){
  id_1655/*RangeIterRange<i64>*/ v690; /*d1*/
  id_1652/*RangeIterRange<i32>*/ v689; /*c1*/
  id_1649/*RangeIterRange<i16>*/ v688; /*b1*/
  id_1646/*RangeIterRange<i8>*/ v687; /*a1*/
  id_1656/*Range<char>*/ v686; /*e*/
  id_1650/*Range<i32>*/ v594; /*c*/
  id_1658/*RangeIterRange<char>*/ v691; /*e1*/
  id_1647/*Range<i16>*/ v548; /*b*/
  id_1653/*Range<i64>*/ v640; /*d*/
  id_1644/*Range<i8>*/ v502; /*a*/
}

id_1645/*RangeIter<i8>*/ id_1903/*lop RangeIter<i8> RangeIter<i8> i8 val*/(i8 v490) {{
  id_1645/*RangeIter<i8>*/ v491; /*slf*/
  (((&(v491))->id_1679/*val*/)=(v490));
  return (v491);
} panic("reached function end without returning anything lop RangeIter<i8> RangeIter<i8> i8 val\n");}

void id_1904/*lop void ++ RangeIter<i8>R slf*/(id_1645/*RangeIter<i8>*/* v492){
  (*id_1713/*lop i8R ++ i8R x*/(&((&(*v492))->id_1679/*val*/)));
}

i8 id_1905/*lop i8 * RangeIter<i8> slf*/(id_1645/*RangeIter<i8>*/ v493) {{
  return ((&(v493))->id_1679/*val*/);
} panic("reached function end without returning anything lop i8 * RangeIter<i8> slf\n");}

bool id_1906/*op bool != RangeIter<i8> a RangeIter<i8> b*/(id_1645/*RangeIter<i8>*/ v494, id_1645/*RangeIter<i8>*/ v495) {{
  return ((((&(v494))->id_1679/*val*/))!=(((&(v495))->id_1679/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i8> a RangeIter<i8> b\n");}

id_1645/*RangeIter<i8>*/ id_1907/*op RangeIter<i8> .call.begin RangeIterRange<i8>P slf*/(id_1646/*RangeIterRange<i8>*/* v496) {{
  return (((v496))->id_1677/*begin*/);
} panic("reached function end without returning anything op RangeIter<i8> .call.begin RangeIterRange<i8>P slf\n");}

id_1645/*RangeIter<i8>*/ id_1908/*op RangeIter<i8> .call.end RangeIterRange<i8>P slf*/(id_1646/*RangeIterRange<i8>*/* v497) {{
  return (((v497))->id_1678/*end*/);
} panic("reached function end without returning anything op RangeIter<i8> .call.end RangeIterRange<i8>P slf\n");}

id_1646/*RangeIterRange<i8>*/ id_1909/*lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end*/(id_1645/*RangeIter<i8>*/ v498, id_1645/*RangeIter<i8>*/ v499) {{
  id_1646/*RangeIterRange<i8>*/ v500; /*slf*/
  (((&(v500))->id_1677/*begin*/)=(v498));
  (((&(v500))->id_1678/*end*/)=(v499));
  return (v500);
} panic("reached function end without returning anything lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end\n");}

i8 id_1910/*op i8 .call.begin Range<i8>P slf*/(id_1644/*Range<i8>*/* v457) {{
  return (((v457))->id_1677/*begin*/);
} panic("reached function end without returning anything op i8 .call.begin Range<i8>P slf\n");}

i8 id_1911/*op i8 .call.end Range<i8>P slf*/(id_1644/*Range<i8>*/* v458) {{
  return (((v458))->id_1678/*end*/);
} panic("reached function end without returning anything op i8 .call.end Range<i8>P slf\n");}

id_1644/*Range<i8>*/ id_1912/*lop Range<i8> Range<i8> i8 begin i8 end*/(i8 v459, i8 v460) {{
  id_1644/*Range<i8>*/ v461; /*slf*/
  (((&(v461))->id_1677/*begin*/)=(v459));
  (((&(v461))->id_1678/*end*/)=(v460));
  return (v461);
} panic("reached function end without returning anything lop Range<i8> Range<i8> i8 begin i8 end\n");}

id_1644/*Range<i8>*/ id_1913/*op Range<i8> .. i8 begin i8 end*/(i8 v462, i8 v463) {{
  return (id_1912/*lop Range<i8> Range<i8> i8 begin i8 end*/((v462), (v463)));
} panic("reached function end without returning anything op Range<i8> .. i8 begin i8 end\n");}

id_1644/*Range<i8>*/ id_1914/*op Range<i8> ..- i8 begin i8 end*/(i8 v464, i8 v465) {{
  return (id_1913/*op Range<i8> .. i8 begin i8 end*/((v464), (-((v465)))));
} panic("reached function end without returning anything op Range<i8> ..- i8 begin i8 end\n");}

id_1644/*Range<i8>*/ id_1915/*rop Range<i8> .. i8 begin*/(i8 v466) {{
  return (id_1913/*op Range<i8> .. i8 begin i8 end*/((v466), (~((id_1690/*lop i8 i8*/())))));
} panic("reached function end without returning anything rop Range<i8> .. i8 begin\n");}

id_1644/*Range<i8>*/ id_1916/*lop Range<i8> .. i8 end*/(i8 v467) {{
  i8 v469; /*tmp_rval_468*/
  return (id_1913/*op Range<i8> .. i8 begin i8 end*/((*id_1713/*lop i8R ++ i8R x*/(&(*(((v469)=(~((id_1690/*lop i8 i8*/())))), (&(v469)))))), (v467)));
} panic("reached function end without returning anything lop Range<i8> .. i8 end\n");}

id_1644/*Range<i8>*/ id_1917/*lop Range<i8> ..- i8 end*/(i8 v470) {{
  i8 v472; /*tmp_rval_471*/
  return (id_1913/*op Range<i8> .. i8 begin i8 end*/((*id_1713/*lop i8R ++ i8R x*/(&(*(((v472)=(~((id_1690/*lop i8 i8*/())))), (&(v472)))))), (-((v470)))));
} panic("reached function end without returning anything lop Range<i8> ..- i8 end\n");}

id_1644/*Range<i8>*/ id_1918/*lop Range<i8> - Range<i8> r*/(id_1644/*Range<i8>*/ v473) {{
  return (id_1913/*op Range<i8> .. i8 begin i8 end*/((-(((&(v473))->id_1677/*begin*/))), ((&(v473))->id_1678/*end*/)));
} panic("reached function end without returning anything lop Range<i8> - Range<i8> r\n");}

id_1644/*Range<i8>*/ id_1919/*op Range<i8> ..= i8 begin i8 end*/(i8 v474, i8 v475) {{
  i8 v477; /*tmp_rval_476*/
  return (id_1913/*op Range<i8> .. i8 begin i8 end*/((v474), (((v475))+((*id_1713/*lop i8R ++ i8R x*/(&(*(((v477)=(id_1690/*lop i8 i8*/())), (&(v477))))))))));
} panic("reached function end without returning anything op Range<i8> ..= i8 begin i8 end\n");}

id_1644/*Range<i8>*/ id_1920/*lop Range<i8> ..= i8 end*/(i8 v478) {{
  i8 v482; /*tmp_rval_481*/
  i8 v480; /*tmp_rval_479*/
  return (id_1913/*op Range<i8> .. i8 begin i8 end*/((*id_1713/*lop i8R ++ i8R x*/(&(*(((v480)=(~((id_1690/*lop i8 i8*/())))), (&(v480)))))), (((v478))+((*id_1713/*lop i8R ++ i8R x*/(&(*(((v482)=(~((id_1690/*lop i8 i8*/())))), (&(v482))))))))));
} panic("reached function end without returning anything lop Range<i8> ..= i8 end\n");}

id_1644/*Range<i8>*/ id_1921/*lop Range<i8> ..=- i8 end*/(i8 v483) {{
  i8 v487; /*tmp_rval_486*/
  i8 v485; /*tmp_rval_484*/
  return (id_1913/*op Range<i8> .. i8 begin i8 end*/((*id_1713/*lop i8R ++ i8R x*/(&(*(((v485)=(~((id_1690/*lop i8 i8*/())))), (&(v485)))))), (((-((v483))))+((*id_1713/*lop i8R ++ i8R x*/(&(*(((v487)=(~((id_1690/*lop i8 i8*/())))), (&(v487))))))))));
} panic("reached function end without returning anything lop Range<i8> ..=- i8 end\n");}

bool id_1922/*op bool == i8 i Range<i8> r*/(i8 v488, id_1644/*Range<i8>*/ v489) {{
  if (((((&(v489))->id_1677/*begin*/))<(((&(v489))->id_1678/*end*/)))) {
    return ((((((&(v489))->id_1677/*begin*/))<=((v488))))&&((((v488))<(((&(v489))->id_1678/*end*/)))));
  } else {
    return ((((((&(v489))->id_1678/*end*/))<=((v488))))&&((((v488))<(((&(v489))->id_1677/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i8 i Range<i8> r\n");}

id_1646/*RangeIterRange<i8>*/ id_1923/*lop RangeIterRange<i8> iter Range<i8> r*/(id_1644/*Range<i8>*/ v501) {{
  return (id_1909/*lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end*/((id_1903/*lop RangeIter<i8> RangeIter<i8> i8 val*/(((&(v501))->id_1677/*begin*/))), (id_1903/*lop RangeIter<i8> RangeIter<i8> i8 val*/(((&(v501))->id_1678/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i8> iter Range<i8> r\n");}

id_1648/*RangeIter<i16>*/ id_1924/*lop RangeIter<i16> RangeIter<i16> i16 val*/(i16 v536) {{
  id_1648/*RangeIter<i16>*/ v537; /*slf*/
  (((&(v537))->id_1679/*val*/)=(v536));
  return (v537);
} panic("reached function end without returning anything lop RangeIter<i16> RangeIter<i16> i16 val\n");}

void id_1925/*lop void ++ RangeIter<i16>R slf*/(id_1648/*RangeIter<i16>*/* v538){
  (*id_1727/*lop i16R ++ i16R x*/(&((&(*v538))->id_1679/*val*/)));
}

i16 id_1926/*lop i16 * RangeIter<i16> slf*/(id_1648/*RangeIter<i16>*/ v539) {{
  return ((&(v539))->id_1679/*val*/);
} panic("reached function end without returning anything lop i16 * RangeIter<i16> slf\n");}

bool id_1927/*op bool != RangeIter<i16> a RangeIter<i16> b*/(id_1648/*RangeIter<i16>*/ v540, id_1648/*RangeIter<i16>*/ v541) {{
  return ((((&(v540))->id_1679/*val*/))!=(((&(v541))->id_1679/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i16> a RangeIter<i16> b\n");}

id_1648/*RangeIter<i16>*/ id_1928/*op RangeIter<i16> .call.begin RangeIterRange<i16>P slf*/(id_1649/*RangeIterRange<i16>*/* v542) {{
  return (((v542))->id_1677/*begin*/);
} panic("reached function end without returning anything op RangeIter<i16> .call.begin RangeIterRange<i16>P slf\n");}

id_1648/*RangeIter<i16>*/ id_1929/*op RangeIter<i16> .call.end RangeIterRange<i16>P slf*/(id_1649/*RangeIterRange<i16>*/* v543) {{
  return (((v543))->id_1678/*end*/);
} panic("reached function end without returning anything op RangeIter<i16> .call.end RangeIterRange<i16>P slf\n");}

id_1649/*RangeIterRange<i16>*/ id_1930/*lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end*/(id_1648/*RangeIter<i16>*/ v544, id_1648/*RangeIter<i16>*/ v545) {{
  id_1649/*RangeIterRange<i16>*/ v546; /*slf*/
  (((&(v546))->id_1677/*begin*/)=(v544));
  (((&(v546))->id_1678/*end*/)=(v545));
  return (v546);
} panic("reached function end without returning anything lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end\n");}

i16 id_1931/*op i16 .call.begin Range<i16>P slf*/(id_1647/*Range<i16>*/* v503) {{
  return (((v503))->id_1677/*begin*/);
} panic("reached function end without returning anything op i16 .call.begin Range<i16>P slf\n");}

i16 id_1932/*op i16 .call.end Range<i16>P slf*/(id_1647/*Range<i16>*/* v504) {{
  return (((v504))->id_1678/*end*/);
} panic("reached function end without returning anything op i16 .call.end Range<i16>P slf\n");}

id_1647/*Range<i16>*/ id_1933/*lop Range<i16> Range<i16> i16 begin i16 end*/(i16 v505, i16 v506) {{
  id_1647/*Range<i16>*/ v507; /*slf*/
  (((&(v507))->id_1677/*begin*/)=(v505));
  (((&(v507))->id_1678/*end*/)=(v506));
  return (v507);
} panic("reached function end without returning anything lop Range<i16> Range<i16> i16 begin i16 end\n");}

id_1647/*Range<i16>*/ id_1934/*op Range<i16> .. i16 begin i16 end*/(i16 v508, i16 v509) {{
  return (id_1933/*lop Range<i16> Range<i16> i16 begin i16 end*/((v508), (v509)));
} panic("reached function end without returning anything op Range<i16> .. i16 begin i16 end\n");}

id_1647/*Range<i16>*/ id_1935/*op Range<i16> ..- i16 begin i16 end*/(i16 v510, i16 v511) {{
  return (id_1934/*op Range<i16> .. i16 begin i16 end*/((v510), (-((v511)))));
} panic("reached function end without returning anything op Range<i16> ..- i16 begin i16 end\n");}

id_1647/*Range<i16>*/ id_1936/*rop Range<i16> .. i16 begin*/(i16 v512) {{
  return (id_1934/*op Range<i16> .. i16 begin i16 end*/((v512), (~((id_1691/*lop i16 i16*/())))));
} panic("reached function end without returning anything rop Range<i16> .. i16 begin\n");}

id_1647/*Range<i16>*/ id_1937/*lop Range<i16> .. i16 end*/(i16 v513) {{
  i16 v515; /*tmp_rval_514*/
  return (id_1934/*op Range<i16> .. i16 begin i16 end*/((*id_1727/*lop i16R ++ i16R x*/(&(*(((v515)=(~((id_1691/*lop i16 i16*/())))), (&(v515)))))), (v513)));
} panic("reached function end without returning anything lop Range<i16> .. i16 end\n");}

id_1647/*Range<i16>*/ id_1938/*lop Range<i16> ..- i16 end*/(i16 v516) {{
  i16 v518; /*tmp_rval_517*/
  return (id_1934/*op Range<i16> .. i16 begin i16 end*/((*id_1727/*lop i16R ++ i16R x*/(&(*(((v518)=(~((id_1691/*lop i16 i16*/())))), (&(v518)))))), (-((v516)))));
} panic("reached function end without returning anything lop Range<i16> ..- i16 end\n");}

id_1647/*Range<i16>*/ id_1939/*lop Range<i16> - Range<i16> r*/(id_1647/*Range<i16>*/ v519) {{
  return (id_1934/*op Range<i16> .. i16 begin i16 end*/((-(((&(v519))->id_1677/*begin*/))), ((&(v519))->id_1678/*end*/)));
} panic("reached function end without returning anything lop Range<i16> - Range<i16> r\n");}

id_1647/*Range<i16>*/ id_1940/*op Range<i16> ..= i16 begin i16 end*/(i16 v520, i16 v521) {{
  i16 v523; /*tmp_rval_522*/
  return (id_1934/*op Range<i16> .. i16 begin i16 end*/((v520), (((v521))+((*id_1727/*lop i16R ++ i16R x*/(&(*(((v523)=(id_1691/*lop i16 i16*/())), (&(v523))))))))));
} panic("reached function end without returning anything op Range<i16> ..= i16 begin i16 end\n");}

id_1647/*Range<i16>*/ id_1941/*lop Range<i16> ..= i16 end*/(i16 v524) {{
  i16 v528; /*tmp_rval_527*/
  i16 v526; /*tmp_rval_525*/
  return (id_1934/*op Range<i16> .. i16 begin i16 end*/((*id_1727/*lop i16R ++ i16R x*/(&(*(((v526)=(~((id_1691/*lop i16 i16*/())))), (&(v526)))))), (((v524))+((*id_1727/*lop i16R ++ i16R x*/(&(*(((v528)=(~((id_1691/*lop i16 i16*/())))), (&(v528))))))))));
} panic("reached function end without returning anything lop Range<i16> ..= i16 end\n");}

id_1647/*Range<i16>*/ id_1942/*lop Range<i16> ..=- i16 end*/(i16 v529) {{
  i16 v533; /*tmp_rval_532*/
  i16 v531; /*tmp_rval_530*/
  return (id_1934/*op Range<i16> .. i16 begin i16 end*/((*id_1727/*lop i16R ++ i16R x*/(&(*(((v531)=(~((id_1691/*lop i16 i16*/())))), (&(v531)))))), (((-((v529))))+((*id_1727/*lop i16R ++ i16R x*/(&(*(((v533)=(~((id_1691/*lop i16 i16*/())))), (&(v533))))))))));
} panic("reached function end without returning anything lop Range<i16> ..=- i16 end\n");}

bool id_1943/*op bool == i16 i Range<i16> r*/(i16 v534, id_1647/*Range<i16>*/ v535) {{
  if (((((&(v535))->id_1677/*begin*/))<(((&(v535))->id_1678/*end*/)))) {
    return ((((((&(v535))->id_1677/*begin*/))<=((v534))))&&((((v534))<(((&(v535))->id_1678/*end*/)))));
  } else {
    return ((((((&(v535))->id_1678/*end*/))<=((v534))))&&((((v534))<(((&(v535))->id_1677/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i16 i Range<i16> r\n");}

id_1649/*RangeIterRange<i16>*/ id_1944/*lop RangeIterRange<i16> iter Range<i16> r*/(id_1647/*Range<i16>*/ v547) {{
  return (id_1930/*lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end*/((id_1924/*lop RangeIter<i16> RangeIter<i16> i16 val*/(((&(v547))->id_1677/*begin*/))), (id_1924/*lop RangeIter<i16> RangeIter<i16> i16 val*/(((&(v547))->id_1678/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i16> iter Range<i16> r\n");}

id_1651/*RangeIter<i32>*/ id_1945/*lop RangeIter<i32> RangeIter<i32> i32 val*/(i32 v582) {{
  id_1651/*RangeIter<i32>*/ v583; /*slf*/
  (((&(v583))->id_1679/*val*/)=(v582));
  return (v583);
} panic("reached function end without returning anything lop RangeIter<i32> RangeIter<i32> i32 val\n");}

void id_1946/*lop void ++ RangeIter<i32>R slf*/(id_1651/*RangeIter<i32>*/* v584){
  (*id_1741/*lop i32R ++ i32R x*/(&((&(*v584))->id_1679/*val*/)));
}

i32 id_1947/*lop i32 * RangeIter<i32> slf*/(id_1651/*RangeIter<i32>*/ v585) {{
  return ((&(v585))->id_1679/*val*/);
} panic("reached function end without returning anything lop i32 * RangeIter<i32> slf\n");}

bool id_1948/*op bool != RangeIter<i32> a RangeIter<i32> b*/(id_1651/*RangeIter<i32>*/ v586, id_1651/*RangeIter<i32>*/ v587) {{
  return ((((&(v586))->id_1679/*val*/))!=(((&(v587))->id_1679/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i32> a RangeIter<i32> b\n");}

id_1651/*RangeIter<i32>*/ id_1949/*op RangeIter<i32> .call.begin RangeIterRange<i32>P slf*/(id_1652/*RangeIterRange<i32>*/* v588) {{
  return (((v588))->id_1677/*begin*/);
} panic("reached function end without returning anything op RangeIter<i32> .call.begin RangeIterRange<i32>P slf\n");}

id_1651/*RangeIter<i32>*/ id_1950/*op RangeIter<i32> .call.end RangeIterRange<i32>P slf*/(id_1652/*RangeIterRange<i32>*/* v589) {{
  return (((v589))->id_1678/*end*/);
} panic("reached function end without returning anything op RangeIter<i32> .call.end RangeIterRange<i32>P slf\n");}

id_1652/*RangeIterRange<i32>*/ id_1951/*lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end*/(id_1651/*RangeIter<i32>*/ v590, id_1651/*RangeIter<i32>*/ v591) {{
  id_1652/*RangeIterRange<i32>*/ v592; /*slf*/
  (((&(v592))->id_1677/*begin*/)=(v590));
  (((&(v592))->id_1678/*end*/)=(v591));
  return (v592);
} panic("reached function end without returning anything lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end\n");}

i32 id_1952/*op i32 .call.begin Range<i32>P slf*/(id_1650/*Range<i32>*/* v549) {{
  return (((v549))->id_1677/*begin*/);
} panic("reached function end without returning anything op i32 .call.begin Range<i32>P slf\n");}

i32 id_1953/*op i32 .call.end Range<i32>P slf*/(id_1650/*Range<i32>*/* v550) {{
  return (((v550))->id_1678/*end*/);
} panic("reached function end without returning anything op i32 .call.end Range<i32>P slf\n");}

id_1650/*Range<i32>*/ id_1954/*lop Range<i32> Range<i32> i32 begin i32 end*/(i32 v551, i32 v552) {{
  id_1650/*Range<i32>*/ v553; /*slf*/
  (((&(v553))->id_1677/*begin*/)=(v551));
  (((&(v553))->id_1678/*end*/)=(v552));
  return (v553);
} panic("reached function end without returning anything lop Range<i32> Range<i32> i32 begin i32 end\n");}

id_1650/*Range<i32>*/ id_1955/*op Range<i32> .. i32 begin i32 end*/(i32 v554, i32 v555) {{
  return (id_1954/*lop Range<i32> Range<i32> i32 begin i32 end*/((v554), (v555)));
} panic("reached function end without returning anything op Range<i32> .. i32 begin i32 end\n");}

id_1650/*Range<i32>*/ id_1956/*op Range<i32> ..- i32 begin i32 end*/(i32 v556, i32 v557) {{
  return (id_1955/*op Range<i32> .. i32 begin i32 end*/((v556), (-((v557)))));
} panic("reached function end without returning anything op Range<i32> ..- i32 begin i32 end\n");}

id_1650/*Range<i32>*/ id_1957/*rop Range<i32> .. i32 begin*/(i32 v558) {{
  return (id_1955/*op Range<i32> .. i32 begin i32 end*/((v558), (~((id_1692/*lop i32 i32*/())))));
} panic("reached function end without returning anything rop Range<i32> .. i32 begin\n");}

id_1650/*Range<i32>*/ id_1958/*lop Range<i32> .. i32 end*/(i32 v559) {{
  i32 v561; /*tmp_rval_560*/
  return (id_1955/*op Range<i32> .. i32 begin i32 end*/((*id_1741/*lop i32R ++ i32R x*/(&(*(((v561)=(~((id_1692/*lop i32 i32*/())))), (&(v561)))))), (v559)));
} panic("reached function end without returning anything lop Range<i32> .. i32 end\n");}

id_1650/*Range<i32>*/ id_1959/*lop Range<i32> ..- i32 end*/(i32 v562) {{
  i32 v564; /*tmp_rval_563*/
  return (id_1955/*op Range<i32> .. i32 begin i32 end*/((*id_1741/*lop i32R ++ i32R x*/(&(*(((v564)=(~((id_1692/*lop i32 i32*/())))), (&(v564)))))), (-((v562)))));
} panic("reached function end without returning anything lop Range<i32> ..- i32 end\n");}

id_1650/*Range<i32>*/ id_1960/*lop Range<i32> - Range<i32> r*/(id_1650/*Range<i32>*/ v565) {{
  return (id_1955/*op Range<i32> .. i32 begin i32 end*/((-(((&(v565))->id_1677/*begin*/))), ((&(v565))->id_1678/*end*/)));
} panic("reached function end without returning anything lop Range<i32> - Range<i32> r\n");}

id_1650/*Range<i32>*/ id_1961/*op Range<i32> ..= i32 begin i32 end*/(i32 v566, i32 v567) {{
  i32 v569; /*tmp_rval_568*/
  return (id_1955/*op Range<i32> .. i32 begin i32 end*/((v566), (((v567))+((*id_1741/*lop i32R ++ i32R x*/(&(*(((v569)=(id_1692/*lop i32 i32*/())), (&(v569))))))))));
} panic("reached function end without returning anything op Range<i32> ..= i32 begin i32 end\n");}

id_1650/*Range<i32>*/ id_1962/*lop Range<i32> ..= i32 end*/(i32 v570) {{
  i32 v574; /*tmp_rval_573*/
  i32 v572; /*tmp_rval_571*/
  return (id_1955/*op Range<i32> .. i32 begin i32 end*/((*id_1741/*lop i32R ++ i32R x*/(&(*(((v572)=(~((id_1692/*lop i32 i32*/())))), (&(v572)))))), (((v570))+((*id_1741/*lop i32R ++ i32R x*/(&(*(((v574)=(~((id_1692/*lop i32 i32*/())))), (&(v574))))))))));
} panic("reached function end without returning anything lop Range<i32> ..= i32 end\n");}

id_1650/*Range<i32>*/ id_1963/*lop Range<i32> ..=- i32 end*/(i32 v575) {{
  i32 v579; /*tmp_rval_578*/
  i32 v577; /*tmp_rval_576*/
  return (id_1955/*op Range<i32> .. i32 begin i32 end*/((*id_1741/*lop i32R ++ i32R x*/(&(*(((v577)=(~((id_1692/*lop i32 i32*/())))), (&(v577)))))), (((-((v575))))+((*id_1741/*lop i32R ++ i32R x*/(&(*(((v579)=(~((id_1692/*lop i32 i32*/())))), (&(v579))))))))));
} panic("reached function end without returning anything lop Range<i32> ..=- i32 end\n");}

bool id_1964/*op bool == i32 i Range<i32> r*/(i32 v580, id_1650/*Range<i32>*/ v581) {{
  if (((((&(v581))->id_1677/*begin*/))<(((&(v581))->id_1678/*end*/)))) {
    return ((((((&(v581))->id_1677/*begin*/))<=((v580))))&&((((v580))<(((&(v581))->id_1678/*end*/)))));
  } else {
    return ((((((&(v581))->id_1678/*end*/))<=((v580))))&&((((v580))<(((&(v581))->id_1677/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i32 i Range<i32> r\n");}

id_1652/*RangeIterRange<i32>*/ id_1965/*lop RangeIterRange<i32> iter Range<i32> r*/(id_1650/*Range<i32>*/ v593) {{
  return (id_1951/*lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end*/((id_1945/*lop RangeIter<i32> RangeIter<i32> i32 val*/(((&(v593))->id_1677/*begin*/))), (id_1945/*lop RangeIter<i32> RangeIter<i32> i32 val*/(((&(v593))->id_1678/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i32> iter Range<i32> r\n");}

id_1654/*RangeIter<i64>*/ id_1966/*lop RangeIter<i64> RangeIter<i64> i64 val*/(i64 v628) {{
  id_1654/*RangeIter<i64>*/ v629; /*slf*/
  (((&(v629))->id_1679/*val*/)=(v628));
  return (v629);
} panic("reached function end without returning anything lop RangeIter<i64> RangeIter<i64> i64 val\n");}

void id_1967/*lop void ++ RangeIter<i64>R slf*/(id_1654/*RangeIter<i64>*/* v630){
  (*id_1755/*lop i64R ++ i64R x*/(&((&(*v630))->id_1679/*val*/)));
}

i64 id_1968/*lop i64 * RangeIter<i64> slf*/(id_1654/*RangeIter<i64>*/ v631) {{
  return ((&(v631))->id_1679/*val*/);
} panic("reached function end without returning anything lop i64 * RangeIter<i64> slf\n");}

bool id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/(id_1654/*RangeIter<i64>*/ v632, id_1654/*RangeIter<i64>*/ v633) {{
  return ((((&(v632))->id_1679/*val*/))!=(((&(v633))->id_1679/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i64> a RangeIter<i64> b\n");}

id_1654/*RangeIter<i64>*/ id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/(id_1655/*RangeIterRange<i64>*/* v634) {{
  return (((v634))->id_1677/*begin*/);
} panic("reached function end without returning anything op RangeIter<i64> .call.begin RangeIterRange<i64>P slf\n");}

id_1654/*RangeIter<i64>*/ id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/(id_1655/*RangeIterRange<i64>*/* v635) {{
  return (((v635))->id_1678/*end*/);
} panic("reached function end without returning anything op RangeIter<i64> .call.end RangeIterRange<i64>P slf\n");}

id_1655/*RangeIterRange<i64>*/ id_1972/*lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end*/(id_1654/*RangeIter<i64>*/ v636, id_1654/*RangeIter<i64>*/ v637) {{
  id_1655/*RangeIterRange<i64>*/ v638; /*slf*/
  (((&(v638))->id_1677/*begin*/)=(v636));
  (((&(v638))->id_1678/*end*/)=(v637));
  return (v638);
} panic("reached function end without returning anything lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end\n");}

i64 id_1973/*op i64 .call.begin Range<i64>P slf*/(id_1653/*Range<i64>*/* v595) {{
  return (((v595))->id_1677/*begin*/);
} panic("reached function end without returning anything op i64 .call.begin Range<i64>P slf\n");}

i64 id_1974/*op i64 .call.end Range<i64>P slf*/(id_1653/*Range<i64>*/* v596) {{
  return (((v596))->id_1678/*end*/);
} panic("reached function end without returning anything op i64 .call.end Range<i64>P slf\n");}

id_1653/*Range<i64>*/ id_1975/*lop Range<i64> Range<i64> i64 begin i64 end*/(i64 v597, i64 v598) {{
  id_1653/*Range<i64>*/ v599; /*slf*/
  (((&(v599))->id_1677/*begin*/)=(v597));
  (((&(v599))->id_1678/*end*/)=(v598));
  return (v599);
} panic("reached function end without returning anything lop Range<i64> Range<i64> i64 begin i64 end\n");}

id_1653/*Range<i64>*/ id_1976/*op Range<i64> .. i64 begin i64 end*/(i64 v600, i64 v601) {{
  return (id_1975/*lop Range<i64> Range<i64> i64 begin i64 end*/((v600), (v601)));
} panic("reached function end without returning anything op Range<i64> .. i64 begin i64 end\n");}

id_1653/*Range<i64>*/ id_1977/*op Range<i64> ..- i64 begin i64 end*/(i64 v602, i64 v603) {{
  return (id_1976/*op Range<i64> .. i64 begin i64 end*/((v602), (-((v603)))));
} panic("reached function end without returning anything op Range<i64> ..- i64 begin i64 end\n");}

id_1653/*Range<i64>*/ id_1978/*rop Range<i64> .. i64 begin*/(i64 v604) {{
  return (id_1976/*op Range<i64> .. i64 begin i64 end*/((v604), (~((id_1693/*lop i64 i64*/())))));
} panic("reached function end without returning anything rop Range<i64> .. i64 begin\n");}

id_1653/*Range<i64>*/ id_1979/*lop Range<i64> .. i64 end*/(i64 v605) {{
  i64 v607; /*tmp_rval_606*/
  return (id_1976/*op Range<i64> .. i64 begin i64 end*/((*id_1755/*lop i64R ++ i64R x*/(&(*(((v607)=(~((id_1693/*lop i64 i64*/())))), (&(v607)))))), (v605)));
} panic("reached function end without returning anything lop Range<i64> .. i64 end\n");}

id_1653/*Range<i64>*/ id_1980/*lop Range<i64> ..- i64 end*/(i64 v608) {{
  i64 v610; /*tmp_rval_609*/
  return (id_1976/*op Range<i64> .. i64 begin i64 end*/((*id_1755/*lop i64R ++ i64R x*/(&(*(((v610)=(~((id_1693/*lop i64 i64*/())))), (&(v610)))))), (-((v608)))));
} panic("reached function end without returning anything lop Range<i64> ..- i64 end\n");}

id_1653/*Range<i64>*/ id_1981/*lop Range<i64> - Range<i64> r*/(id_1653/*Range<i64>*/ v611) {{
  return (id_1976/*op Range<i64> .. i64 begin i64 end*/((-(((&(v611))->id_1677/*begin*/))), ((&(v611))->id_1678/*end*/)));
} panic("reached function end without returning anything lop Range<i64> - Range<i64> r\n");}

id_1653/*Range<i64>*/ id_1982/*op Range<i64> ..= i64 begin i64 end*/(i64 v612, i64 v613) {{
  i64 v615; /*tmp_rval_614*/
  return (id_1976/*op Range<i64> .. i64 begin i64 end*/((v612), (((v613))+((*id_1755/*lop i64R ++ i64R x*/(&(*(((v615)=(id_1693/*lop i64 i64*/())), (&(v615))))))))));
} panic("reached function end without returning anything op Range<i64> ..= i64 begin i64 end\n");}

id_1653/*Range<i64>*/ id_1983/*lop Range<i64> ..= i64 end*/(i64 v616) {{
  i64 v620; /*tmp_rval_619*/
  i64 v618; /*tmp_rval_617*/
  return (id_1976/*op Range<i64> .. i64 begin i64 end*/((*id_1755/*lop i64R ++ i64R x*/(&(*(((v618)=(~((id_1693/*lop i64 i64*/())))), (&(v618)))))), (((v616))+((*id_1755/*lop i64R ++ i64R x*/(&(*(((v620)=(~((id_1693/*lop i64 i64*/())))), (&(v620))))))))));
} panic("reached function end without returning anything lop Range<i64> ..= i64 end\n");}

id_1653/*Range<i64>*/ id_1984/*lop Range<i64> ..=- i64 end*/(i64 v621) {{
  i64 v625; /*tmp_rval_624*/
  i64 v623; /*tmp_rval_622*/
  return (id_1976/*op Range<i64> .. i64 begin i64 end*/((*id_1755/*lop i64R ++ i64R x*/(&(*(((v623)=(~((id_1693/*lop i64 i64*/())))), (&(v623)))))), (((-((v621))))+((*id_1755/*lop i64R ++ i64R x*/(&(*(((v625)=(~((id_1693/*lop i64 i64*/())))), (&(v625))))))))));
} panic("reached function end without returning anything lop Range<i64> ..=- i64 end\n");}

bool id_1985/*op bool == i64 i Range<i64> r*/(i64 v626, id_1653/*Range<i64>*/ v627) {{
  if (((((&(v627))->id_1677/*begin*/))<(((&(v627))->id_1678/*end*/)))) {
    return ((((((&(v627))->id_1677/*begin*/))<=((v626))))&&((((v626))<(((&(v627))->id_1678/*end*/)))));
  } else {
    return ((((((&(v627))->id_1678/*end*/))<=((v626))))&&((((v626))<(((&(v627))->id_1677/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i64 i Range<i64> r\n");}

id_1655/*RangeIterRange<i64>*/ id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/(id_1653/*Range<i64>*/ v639) {{
  return (id_1972/*lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end*/((id_1966/*lop RangeIter<i64> RangeIter<i64> i64 val*/(((&(v639))->id_1677/*begin*/))), (id_1966/*lop RangeIter<i64> RangeIter<i64> i64 val*/(((&(v639))->id_1678/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i64> iter Range<i64> r\n");}

id_1657/*RangeIter<char>*/ id_1987/*lop RangeIter<char> RangeIter<char> char val*/(char v674) {{
  id_1657/*RangeIter<char>*/ v675; /*slf*/
  (((&(v675))->id_1679/*val*/)=(v674));
  return (v675);
} panic("reached function end without returning anything lop RangeIter<char> RangeIter<char> char val\n");}

void id_1988/*lop void ++ RangeIter<char>R slf*/(id_1657/*RangeIter<char>*/* v676){
  (*id_1825/*lop charR ++ charR x*/(&((&(*v676))->id_1679/*val*/)));
}

char id_1989/*lop char * RangeIter<char> slf*/(id_1657/*RangeIter<char>*/ v677) {{
  return ((&(v677))->id_1679/*val*/);
} panic("reached function end without returning anything lop char * RangeIter<char> slf\n");}

bool id_1990/*op bool != RangeIter<char> a RangeIter<char> b*/(id_1657/*RangeIter<char>*/ v678, id_1657/*RangeIter<char>*/ v679) {{
  return ((((&(v678))->id_1679/*val*/))!=(((&(v679))->id_1679/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<char> a RangeIter<char> b\n");}

id_1657/*RangeIter<char>*/ id_1991/*op RangeIter<char> .call.begin RangeIterRange<char>P slf*/(id_1658/*RangeIterRange<char>*/* v680) {{
  return (((v680))->id_1677/*begin*/);
} panic("reached function end without returning anything op RangeIter<char> .call.begin RangeIterRange<char>P slf\n");}

id_1657/*RangeIter<char>*/ id_1992/*op RangeIter<char> .call.end RangeIterRange<char>P slf*/(id_1658/*RangeIterRange<char>*/* v681) {{
  return (((v681))->id_1678/*end*/);
} panic("reached function end without returning anything op RangeIter<char> .call.end RangeIterRange<char>P slf\n");}

id_1658/*RangeIterRange<char>*/ id_1993/*lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end*/(id_1657/*RangeIter<char>*/ v682, id_1657/*RangeIter<char>*/ v683) {{
  id_1658/*RangeIterRange<char>*/ v684; /*slf*/
  (((&(v684))->id_1677/*begin*/)=(v682));
  (((&(v684))->id_1678/*end*/)=(v683));
  return (v684);
} panic("reached function end without returning anything lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end\n");}

char id_1994/*op char .call.begin Range<char>P slf*/(id_1656/*Range<char>*/* v641) {{
  return (((v641))->id_1677/*begin*/);
} panic("reached function end without returning anything op char .call.begin Range<char>P slf\n");}

char id_1995/*op char .call.end Range<char>P slf*/(id_1656/*Range<char>*/* v642) {{
  return (((v642))->id_1678/*end*/);
} panic("reached function end without returning anything op char .call.end Range<char>P slf\n");}

id_1656/*Range<char>*/ id_1996/*lop Range<char> Range<char> char begin char end*/(char v643, char v644) {{
  id_1656/*Range<char>*/ v645; /*slf*/
  (((&(v645))->id_1677/*begin*/)=(v643));
  (((&(v645))->id_1678/*end*/)=(v644));
  return (v645);
} panic("reached function end without returning anything lop Range<char> Range<char> char begin char end\n");}

id_1656/*Range<char>*/ id_1997/*op Range<char> .. char begin char end*/(char v646, char v647) {{
  return (id_1996/*lop Range<char> Range<char> char begin char end*/((v646), (v647)));
} panic("reached function end without returning anything op Range<char> .. char begin char end\n");}

id_1656/*Range<char>*/ id_1998/*op Range<char> ..- char begin char end*/(char v648, char v649) {{
  return (id_1997/*op Range<char> .. char begin char end*/((v648), (-((v649)))));
} panic("reached function end without returning anything op Range<char> ..- char begin char end\n");}

id_1656/*Range<char>*/ id_1999/*rop Range<char> .. char begin*/(char v650) {{
  return (id_1997/*op Range<char> .. char begin char end*/((v650), (~((id_1699/*lop char char*/())))));
} panic("reached function end without returning anything rop Range<char> .. char begin\n");}

id_1656/*Range<char>*/ id_2000/*lop Range<char> .. char end*/(char v651) {{
  char v653; /*tmp_rval_652*/
  return (id_1997/*op Range<char> .. char begin char end*/((*id_1825/*lop charR ++ charR x*/(&(*(((v653)=(~((id_1699/*lop char char*/())))), (&(v653)))))), (v651)));
} panic("reached function end without returning anything lop Range<char> .. char end\n");}

id_1656/*Range<char>*/ id_2001/*lop Range<char> ..- char end*/(char v654) {{
  char v656; /*tmp_rval_655*/
  return (id_1997/*op Range<char> .. char begin char end*/((*id_1825/*lop charR ++ charR x*/(&(*(((v656)=(~((id_1699/*lop char char*/())))), (&(v656)))))), (-((v654)))));
} panic("reached function end without returning anything lop Range<char> ..- char end\n");}

id_1656/*Range<char>*/ id_2002/*lop Range<char> - Range<char> r*/(id_1656/*Range<char>*/ v657) {{
  return (id_1997/*op Range<char> .. char begin char end*/((-(((&(v657))->id_1677/*begin*/))), ((&(v657))->id_1678/*end*/)));
} panic("reached function end without returning anything lop Range<char> - Range<char> r\n");}

id_1656/*Range<char>*/ id_2003/*op Range<char> ..= char begin char end*/(char v658, char v659) {{
  char v661; /*tmp_rval_660*/
  return (id_1997/*op Range<char> .. char begin char end*/((v658), (((v659))+((*id_1825/*lop charR ++ charR x*/(&(*(((v661)=(id_1699/*lop char char*/())), (&(v661))))))))));
} panic("reached function end without returning anything op Range<char> ..= char begin char end\n");}

id_1656/*Range<char>*/ id_2004/*lop Range<char> ..= char end*/(char v662) {{
  char v666; /*tmp_rval_665*/
  char v664; /*tmp_rval_663*/
  return (id_1997/*op Range<char> .. char begin char end*/((*id_1825/*lop charR ++ charR x*/(&(*(((v664)=(~((id_1699/*lop char char*/())))), (&(v664)))))), (((v662))+((*id_1825/*lop charR ++ charR x*/(&(*(((v666)=(~((id_1699/*lop char char*/())))), (&(v666))))))))));
} panic("reached function end without returning anything lop Range<char> ..= char end\n");}

id_1656/*Range<char>*/ id_2005/*lop Range<char> ..=- char end*/(char v667) {{
  char v671; /*tmp_rval_670*/
  char v669; /*tmp_rval_668*/
  return (id_1997/*op Range<char> .. char begin char end*/((*id_1825/*lop charR ++ charR x*/(&(*(((v669)=(~((id_1699/*lop char char*/())))), (&(v669)))))), (((-((v667))))+((*id_1825/*lop charR ++ charR x*/(&(*(((v671)=(~((id_1699/*lop char char*/())))), (&(v671))))))))));
} panic("reached function end without returning anything lop Range<char> ..=- char end\n");}

bool id_2006/*op bool == char i Range<char> r*/(char v672, id_1656/*Range<char>*/ v673) {{
  if (((((&(v673))->id_1677/*begin*/))<(((&(v673))->id_1678/*end*/)))) {
    return ((((((&(v673))->id_1677/*begin*/))<=((v672))))&&((((v672))<(((&(v673))->id_1678/*end*/)))));
  } else {
    return ((((((&(v673))->id_1678/*end*/))<=((v672))))&&((((v672))<(((&(v673))->id_1677/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == char i Range<char> r\n");}

id_1658/*RangeIterRange<char>*/ id_2007/*lop RangeIterRange<char> iter Range<char> r*/(id_1656/*Range<char>*/ v685) {{
  return (id_1993/*lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end*/((id_1987/*lop RangeIter<char> RangeIter<char> char val*/(((&(v685))->id_1677/*begin*/))), (id_1987/*lop RangeIter<char> RangeIter<char> char val*/(((&(v685))->id_1678/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<char> iter Range<char> r\n");}

id_1660/*VecIter<i64>*/ id_2008/*lop VecIter<i64> VecIter<i64> i64P ptr*/(i64* v738) {{
  id_1660/*VecIter<i64>*/ v739; /*slf*/
  (((&(v739))->id_1683/*ptr*/)=(v738));
  return (v739);
} panic("reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n");}

void id_2009/*lop void ++ VecIter<i64>R slf*/(id_1660/*VecIter<i64>*/* v740){
  (((&(*v740))->id_1683/*ptr*/)=((i64*)((((i64)((&(*v740))->id_1683/*ptr*/)))+(((((i64)1))*((sizeof(i64))))))));
}

id_1660/*VecIter<i64>*/ id_2010/*op VecIter<i64> + VecIter<i64> slf i64 i*/(id_1660/*VecIter<i64>*/ v741, i64 v742) {{
  (((&(v741))->id_1683/*ptr*/)=((i64*)((((i64)((&(v741))->id_1683/*ptr*/)))+((((v742))*((sizeof(i64))))))));
  return (v741);
} panic("reached function end without returning anything op VecIter<i64> + VecIter<i64> slf i64 i\n");}

bool id_2011/*op bool != VecIter<i64> a VecIter<i64> b*/(id_1660/*VecIter<i64>*/ v743, id_1660/*VecIter<i64>*/ v744) {{
  return ((((i64)((&(v743))->id_1683/*ptr*/)))!=(((i64)((&(v744))->id_1683/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<i64> a VecIter<i64> b\n");}

i64* id_2012/*lop i64R * VecIter<i64> slf*/(id_1660/*VecIter<i64>*/ v745) {{
  return &(*((&(v745))->id_1683/*ptr*/));
} panic("reached function end without returning anything lop i64R * VecIter<i64> slf\n");}

id_1660/*VecIter<i64>*/ id_2013/*op VecIter<i64> .call.begin VecIterRange<i64>P slf*/(id_1661/*VecIterRange<i64>*/* v748) {{
  return (((v748))->id_1677/*begin*/);
} panic("reached function end without returning anything op VecIter<i64> .call.begin VecIterRange<i64>P slf\n");}

id_1660/*VecIter<i64>*/ id_2014/*op VecIter<i64> .call.end VecIterRange<i64>P slf*/(id_1661/*VecIterRange<i64>*/* v749) {{
  return (((v749))->id_1678/*end*/);
} panic("reached function end without returning anything op VecIter<i64> .call.end VecIterRange<i64>P slf\n");}

id_1661/*VecIterRange<i64>*/ id_2015/*lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end*/(id_1660/*VecIter<i64>*/ v750, id_1660/*VecIter<i64>*/ v751) {{
  id_1661/*VecIterRange<i64>*/ v752; /*slf*/
  (((&(v752))->id_1677/*begin*/)=(v750));
  (((&(v752))->id_1678/*end*/)=(v751));
  return (v752);
} panic("reached function end without returning anything lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end\n");}

i64* id_2016/*op i64P .call.atP Vec<i64>P slf i64 pos*/(id_1659/*Vec<i64>*/* v692, i64 v693) {{
  return ((i64*)((i64*)((((i64)(((v692))->id_1681/*head*/)))+((((v693))*((sizeof(i64))))))));
} panic("reached function end without returning anything op i64P .call.atP Vec<i64>P slf i64 pos\n");}

i64* id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/(id_1659/*Vec<i64>*/* v694, i64 v695) {{
  return &(*(id_2016/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v694), (v695))));
} panic("reached function end without returning anything op i64R .call.at Vec<i64>P slf i64 pos\n");}

void id_2018/*op void .call.print Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v696){
  (printf("%s", ((str)"[")));
  {
      i64 v704; /*i*/
      id_1654/*RangeIter<i64>*/ v703; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v702; /*tmp_rval_701*/
      id_1654/*RangeIter<i64>*/ v700; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v699; /*tmp_rval_698*/
      id_1655/*RangeIterRange<i64>*/ v697; /*__range*/
      ((v697)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v696))->id_1682/*size*/))))));
      ((v703)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v702)=(v697)), (&(v702))))))));
      ((v700)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v699)=(v697)), (&(v699))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v700), (v703)))) {
        ((v704)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v700))));
        if ((!((!((v704)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(id_2016/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v696), (v704))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v700)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2019/*op void .call.println Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v705){
  {
      i64 v713; /*i*/
      id_1654/*RangeIter<i64>*/ v712; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v711; /*tmp_rval_710*/
      id_1654/*RangeIter<i64>*/ v709; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v708; /*tmp_rval_707*/
      id_1655/*RangeIterRange<i64>*/ v706; /*__range*/
      ((v706)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v705))->id_1682/*size*/))))));
      ((v712)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v711)=(v706)), (&(v711))))))));
      ((v709)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v708)=(v706)), (&(v708))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v709), (v712)))) {
        ((v713)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v709))));
        (printf("%lld\n", (*(id_2016/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v705), (v713))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v709)));
      }
    }
}

void id_2020/*op void .call.double_cap Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v714){
  i64 v715; /*ncap*/
  ((v715)=(((v714))->id_1680/*cap*/));
  if ((((v715))==(((i64)0)))) {
    ((v715)=((i64)1));
    ((((v714))->id_1681/*head*/)=((i64*)(alloc((sizeof(i64))))));
    ((((v714))->id_1680/*cap*/)=(v715));
  } else {
    i64* v716; /*new_head*/
    (id_1749/*op void *= i64R a i64 b*/(&(v715), ((i64)2)));
    ((v716)=((i64*)(alloc((((v715))*((sizeof(i64))))))));
    {
        i64 v724; /*i*/
        id_1654/*RangeIter<i64>*/ v723; /*__end*/
        id_1655/*RangeIterRange<i64>*/ v722; /*tmp_rval_721*/
        id_1654/*RangeIter<i64>*/ v720; /*__cur*/
        id_1655/*RangeIterRange<i64>*/ v719; /*tmp_rval_718*/
        id_1655/*RangeIterRange<i64>*/ v717; /*__range*/
        ((v717)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v714))->id_1682/*size*/))))));
        ((v723)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v722)=(v717)), (&(v722))))))));
        ((v720)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v719)=(v717)), (&(v719))))))));
        while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v720), (v723)))) {
          ((v724)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v720))));
          ((*((i64*)((((i64)(v716)))+((((v724))*((sizeof(i64))))))))=(*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((v714), (v724))));
          (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v720)));
        }
      }
    (free((void*) ((i64)(((v714))->id_1681/*head*/))));
    ((((v714))->id_1681/*head*/)=(v716));
  }
  ((((v714))->id_1680/*cap*/)=(v715));
}

void id_2021/*op void .call.push_back Vec<i64>P slf i64 val*/(id_1659/*Vec<i64>*/* v725, i64 v726){
  if ((((((v725))->id_1682/*size*/))==((((v725))->id_1680/*cap*/)))) {
    (id_2020/*op void .call.double_cap Vec<i64>P slf*/((v725)));
  }
  ((*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((v725), (((v725))->id_1682/*size*/)))=(v726));
  (*id_1755/*lop i64R ++ i64R x*/(&(((v725))->id_1682/*size*/)));
}

void id_2022/*op void .call.pop_back Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v727){
  (*id_1756/*lop i64R -- i64R x*/(&(((v727))->id_1682/*size*/)));
}

void id_2023/*op void .call.erase Vec<i64>P slf i64 pos*/(id_1659/*Vec<i64>*/* v728, i64 v729){
  {
      i64 v737; /*i*/
      id_1654/*RangeIter<i64>*/ v736; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v735; /*tmp_rval_734*/
      id_1654/*RangeIter<i64>*/ v733; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v732; /*tmp_rval_731*/
      id_1655/*RangeIterRange<i64>*/ v730; /*__range*/
      ((v730)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((((v729))+(((i64)1))), (((v728))->id_1682/*size*/))))));
      ((v736)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v735)=(v730)), (&(v735))))))));
      ((v733)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v732)=(v730)), (&(v732))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v733), (v736)))) {
        ((v737)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v733))));
        ((*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((v728), (((v737))-(((i64)1)))))=(*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((v728), (v737))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v733)));
      }
    }
  (id_2022/*op void .call.pop_back Vec<i64>P slf*/((v728)));
}

id_1660/*VecIter<i64>*/ id_2024/*op VecIter<i64> .call.begin Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v746) {{
  return (id_2008/*lop VecIter<i64> VecIter<i64> i64P ptr*/((((v746))->id_1681/*head*/)));
} panic("reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P slf\n");}

id_1660/*VecIter<i64>*/ id_2025/*op VecIter<i64> .call.end Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v747) {{
  return (id_2008/*lop VecIter<i64> VecIter<i64> i64P ptr*/((id_2016/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v747), (((v747))->id_1682/*size*/)))));
} panic("reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P slf\n");}

id_1661/*VecIterRange<i64>*/ id_2026/*lop VecIterRange<i64> iter Vec<i64>R slf*/(id_1659/*Vec<i64>*/* v753) {{
  id_1661/*VecIterRange<i64>*/ v754; /*it*/
  (((&(v754))->id_1677/*begin*/)=(id_2024/*op VecIter<i64> .call.begin Vec<i64>P slf*/((&(*v753)))));
  (((&(v754))->id_1678/*end*/)=(id_2025/*op VecIter<i64> .call.end Vec<i64>P slf*/((&(*v753)))));
  return (v754);
} panic("reached function end without returning anything lop VecIterRange<i64> iter Vec<i64>R slf\n");}

i64* id_2027/*op i64R .call.front Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v755) {{
  return &(*(((v755))->id_1681/*head*/));
} panic("reached function end without returning anything op i64R .call.front Vec<i64>P slf\n");}

i64* id_2028/*op i64R .call.back Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v756) {{
  return &(*(id_2016/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v756), (((((v756))->id_1682/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op i64R .call.back Vec<i64>P slf\n");}

void id_2029/*op void .call.dtor Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v757){
  if ((!((!(((i64)(((v757))->id_1681/*head*/))))))) {
    (free((void*) ((i64)(((v757))->id_1681/*head*/))));
    ((((v757))->id_1682/*size*/)=((i64)0));
    ((((v757))->id_1680/*cap*/)=((i64)0));
    ((((v757))->id_1681/*head*/)=((i64*)((i64)0)));
  }
}

id_1659/*Vec<i64>*/ id_2030/*lop Vec<i64> Vec<i64> i64 size*/(i64 v758) {{
  id_1659/*Vec<i64>*/ v759; /*slf*/
  (((&(v759))->id_1681/*head*/)=((i64*)((i64)0)));
  (((&(v759))->id_1682/*size*/)=((i64)0));
  (((&(v759))->id_1680/*cap*/)=((i64)0));
  while (((((&(v759))->id_1680/*cap*/))<((v758)))) {
    (id_2020/*op void .call.double_cap Vec<i64>P slf*/((&(v759))));
  }
  (((&(v759))->id_1682/*size*/)=(v758));
  (((&(v759))->id_1680/*cap*/)=(v758));
  {
      i64 v767; /*i*/
      id_1654/*RangeIter<i64>*/ v766; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v765; /*tmp_rval_764*/
      id_1654/*RangeIter<i64>*/ v763; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v762; /*tmp_rval_761*/
      id_1655/*RangeIterRange<i64>*/ v760; /*__range*/
      ((v760)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v759))->id_1682/*size*/))))));
      ((v766)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v765)=(v760)), (&(v765))))))));
      ((v763)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v762)=(v760)), (&(v762))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v763), (v766)))) {
        ((v767)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v763))));
        ((*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v759)), (v767)))=(id_1693/*lop i64 i64*/()));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v763)));
      }
    }
  return (v759);
  (id_2029/*op void .call.dtor Vec<i64>P slf*/((&(v759))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n");}

id_1659/*Vec<i64>*/ id_2031/*lop Vec<i64> Vec<i64> i64 size i64 default*/(i64 v768, i64 v769) {{
  id_1659/*Vec<i64>*/ v770; /*slf*/
  ((v770)=(id_2030/*lop Vec<i64> Vec<i64> i64 size*/((v768))));
  {
      i64 v778; /*i*/
      id_1655/*RangeIterRange<i64>*/ v776; /*tmp_rval_775*/
      id_1654/*RangeIter<i64>*/ v774; /*__cur*/
      id_1654/*RangeIter<i64>*/ v777; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v773; /*tmp_rval_772*/
      id_1655/*RangeIterRange<i64>*/ v771; /*__range*/
      ((v771)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v770))->id_1682/*size*/))))));
      ((v777)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v776)=(v771)), (&(v776))))))));
      ((v774)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v773)=(v771)), (&(v773))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v774), (v777)))) {
        ((v778)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v774))));
        ((*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v770)), (v778)))=(v769));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v774)));
      }
    }
  return (v770);
  (id_2029/*op void .call.dtor Vec<i64>P slf*/((&(v770))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n");}

id_1659/*Vec<i64>*/ id_2032/*lop Vec<i64> Vec<i64>*/() {{
  return (id_2030/*lop Vec<i64> Vec<i64> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64>\n");}

id_1659/*Vec<i64>*/ id_2033/*lop Vec<i64> Vec<i64> Vec<i64>R other*/(id_1659/*Vec<i64>*/* v779) {{
  id_1659/*Vec<i64>*/ v780; /*slf*/
  ((v780)=(id_2030/*lop Vec<i64> Vec<i64> i64 size*/(((&(*v779))->id_1682/*size*/))));
  {
      i64 v788; /*i*/
      id_1654/*RangeIter<i64>*/ v787; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v786; /*tmp_rval_785*/
      id_1654/*RangeIter<i64>*/ v784; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v783; /*tmp_rval_782*/
      id_1655/*RangeIterRange<i64>*/ v781; /*__range*/
      ((v781)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v779))->id_1682/*size*/))))));
      ((v787)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v786)=(v781)), (&(v786))))))));
      ((v784)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v783)=(v781)), (&(v783))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v784), (v787)))) {
        ((v788)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v784))));
        ((*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v780)), (v788)))=(*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(*v779)), (v788))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v784)));
      }
    }
  return (v780);
  (id_2029/*op void .call.dtor Vec<i64>P slf*/((&(v780))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n");}

void id_2034/*op void += Vec<i64>R slf i64 val*/(id_1659/*Vec<i64>*/* v789, i64 v790){
  (id_2021/*op void .call.push_back Vec<i64>P slf i64 val*/((&(*v789)), (v790)));
}

void id_2035/*op void += Vec<i64>R slf Vec<i64>R other*/(id_1659/*Vec<i64>*/* v791, id_1659/*Vec<i64>*/* v792){
  {
      i64 v800; /*i*/
      id_1654/*RangeIter<i64>*/ v799; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v798; /*tmp_rval_797*/
      id_1654/*RangeIter<i64>*/ v796; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v795; /*tmp_rval_794*/
      id_1655/*RangeIterRange<i64>*/ v793; /*__range*/
      ((v793)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v792))->id_1682/*size*/))))));
      ((v799)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v798)=(v793)), (&(v798))))))));
      ((v796)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v795)=(v793)), (&(v795))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v796), (v799)))) {
        ((v800)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v796))));
        (id_2021/*op void .call.push_back Vec<i64>P slf i64 val*/((&(*v791)), (*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(*v792)), (v800)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v796)));
      }
    }
}

id_1659/*Vec<i64>*/ id_2036/*op Vec<i64> ,, i64 a i64 b*/(i64 v801, i64 v802) {{
  id_1659/*Vec<i64>*/ v803; /*slf*/
  ((v803)=(id_2032/*lop Vec<i64> Vec<i64>*/()));
  (id_2034/*op void += Vec<i64>R slf i64 val*/(&(v803), (v801)));
  (id_2034/*op void += Vec<i64>R slf i64 val*/(&(v803), (v802)));
  return (v803);
  (id_2029/*op void .call.dtor Vec<i64>P slf*/((&(v803))));
} panic("reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n");}

id_1659/*Vec<i64>*/* id_2037/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(id_1659/*Vec<i64>*/* v804, i64 v805) {{
  (id_2034/*op void += Vec<i64>R slf i64 val*/(&(*v804), (v805)));
  return &(*v804);
} panic("reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n");}

void id_2038/*lop void put Vec<i64>R slf*/(id_1659/*Vec<i64>*/* v806){
  (id_2018/*op void .call.print Vec<i64>P slf*/((&(*v806))));
}

void id_2039/*lop void out Vec<i64>R slf*/(id_1659/*Vec<i64>*/* v807){
  (id_2018/*op void .call.print Vec<i64>P slf*/((&(*v807))));
  (printf("%s\n", ((str)"")));
}

id_1643/*Out*/ id_2040/*rop Out < Vec<i64>R i*/(id_1659/*Vec<i64>*/* v808) {{
  (id_2039/*lop void out Vec<i64>R slf*/(&(*v808)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<i64>R i\n");}

id_1643/*Out*/ id_2041/*lop Out < Vec<i64>R i*/(id_1659/*Vec<i64>*/* v809) {{
  ((id_2038/*lop void put Vec<i64>R slf*/(&(*v809))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<i64>R i\n");}

id_1643/*Out*/ id_2042/*op Out < Out o Vec<i64>R i*/(id_1643/*Out*/ v810, id_1659/*Vec<i64>*/* v811) {{
  ((id_2038/*lop void put Vec<i64>R slf*/(&(*v811))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<i64>R i\n");}

i64* id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/(id_1659/*Vec<i64>*/* v812, i64 v813) {{
  if ((((v813))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v813), (((v812))->id_1682/*size*/)));
  }
  return &(*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((v812), (v813)));
} panic("reached function end without returning anything op i64R .call.sub Vec<i64>P slf i64 id\n");}

id_1659/*Vec<i64>*/ id_2044/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/(id_1659/*Vec<i64>*/* v814, i64 v815, i64 v816) {{
  id_1659/*Vec<i64>*/ v817; /*res*/
  ((v817)=(id_2030/*lop Vec<i64> Vec<i64> i64 size*/(((i64)0))));
  {
      i64 v825; /*i*/
      id_1654/*RangeIter<i64>*/ v824; /*__end*/
      id_1654/*RangeIter<i64>*/ v821; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v820; /*tmp_rval_819*/
      id_1655/*RangeIterRange<i64>*/ v823; /*tmp_rval_822*/
      id_1655/*RangeIterRange<i64>*/ v818; /*__range*/
      ((v818)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((v815), (v816))))));
      ((v824)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v823)=(v818)), (&(v823))))))));
      ((v821)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v820)=(v818)), (&(v820))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v821), (v824)))) {
        ((v825)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v821))));
        (id_2021/*op void .call.push_back Vec<i64>P slf i64 val*/((&(v817)), (*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((v814), (v825)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v821)));
      }
    }
  return (v817);
  (id_2029/*op void .call.dtor Vec<i64>P slf*/((&(v817))));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end\n");}

id_1659/*Vec<i64>*/ id_2045/*op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r*/(id_1659/*Vec<i64>*/* v826, id_1653/*Range<i64>*/ v827) {{
  i64 v829; /*end*/
  i64 v828; /*begin*/
  (((v828)=((&(v827))->id_1677/*begin*/)), ((v829)=((&(v827))->id_1678/*end*/)));
  if ((((v828))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v828), (((v826))->id_1682/*size*/)));
  }
  if ((((v828))<(((i64)0)))) {
    ((v828)=((i64)0));
  }
  if ((((v829))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v829), (((v826))->id_1682/*size*/)));
  }
  if ((((v829))>((((v826))->id_1682/*size*/)))) {
    ((v829)=(((v826))->id_1682/*size*/));
  }
  return (id_2044/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((v826), (v828), (v829)));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r\n");}

id_1659/*Vec<i64>*/ id_2046/*op Vec<i64> .call.sub Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v830) {{
  return (id_2044/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((v830), ((i64)0), (((v830))->id_1682/*size*/)));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf\n");}

bool id_2047/*op bool < Vec<i64>R a Vec<i64>R b*/(id_1659/*Vec<i64>*/* v831, id_1659/*Vec<i64>*/* v832) {{
  {
      i64 v840; /*i*/
      id_1654/*RangeIter<i64>*/ v839; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v838; /*tmp_rval_837*/
      id_1654/*RangeIter<i64>*/ v836; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v835; /*tmp_rval_834*/
      id_1655/*RangeIterRange<i64>*/ v833; /*__range*/
      ((v833)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1701/*lop i64 min i64 a i64 b*/(((&(*v831))->id_1682/*size*/), ((&(*v832))->id_1682/*size*/))))))));
      ((v839)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v838)=(v833)), (&(v838))))))));
      ((v836)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v835)=(v833)), (&(v835))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v836), (v839)))) {
        ((v840)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v836))));
        if ((((*id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v831)), (v840))))<((*id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v832)), (v840)))))) {
          return ((bool)1);
        }
 else if ((((*id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v832)), (v840))))<((*id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v831)), (v840)))))) {
          return ((bool)0);
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v836)));
      }
    }
  if (((((&(*v831))->id_1682/*size*/))<(((&(*v832))->id_1682/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v831))->id_1682/*size*/))>(((&(*v832))->id_1682/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n");}

void id_2048/*lop void swap i64P a i64P b*/(i64* v841, i64* v842){
  i64 v843; /*t*/
  ((v843)=(*(v841)));
  ((*(v841))=(*(v842)));
  ((*(v842))=(v843));
}

i64* id_2049/*lop i64P partition i64P lo i64P hi*/(i64* v844, i64* v845) {{
  i64* v848; /*j*/
  i64* v847; /*i*/
  i64* v846; /*pivot*/
  (((v846)=((i64*)((((i64)(v845)))-(((((i64)1))*((sizeof(i64)))))))), ((v847)=(v844)), ((v848)=(v844)));
  ((v848)=(v844));
  while (((((i64)(v848)))!=(((i64)(v846))))) {
    if ((((*(v848)))<((*(v846))))) {
      (id_2048/*lop void swap i64P a i64P b*/((v847), (v848)));
      ((v847)=((i64*)((((i64)(v847)))+(((((i64)1))*((sizeof(i64))))))));
    }
    ((v848)=((i64*)((((i64)(v848)))+(((((i64)1))*((sizeof(i64))))))));
  }
  (id_2048/*lop void swap i64P a i64P b*/((v847), (v846)));
  return (v847);
} panic("reached function end without returning anything lop i64P partition i64P lo i64P hi\n");}

void id_2050/*lop void qsort i64P lhs i64P rhs*/(i64* v849, i64* v850){
  i64 v852; /*b*/
  i64 v851; /*a*/
  ((v851)=((((i64)(v850)))-(((i64)(v849)))));
  ((v852)=(sizeof(i64)));
  if ((((v851))>((v852)))) {
    i64* v853; /*pi*/
    ((v853)=(id_2049/*lop i64P partition i64P lo i64P hi*/((v849), (v850))));
    (id_2050/*lop void qsort i64P lhs i64P rhs*/((v849), (v853)));
    ((v853)=((i64*)((((i64)(v853)))+(((((i64)1))*((sizeof(i64))))))));
    (id_2050/*lop void qsort i64P lhs i64P rhs*/((v853), (v850)));
  }
}

void id_2051/*op void .call.sort Vec<i64>P slf*/(id_1659/*Vec<i64>*/* v854){
  id_1660/*VecIter<i64>*/ v858; /*tmp_rval_857*/
  id_1660/*VecIter<i64>*/ v856; /*tmp_rval_855*/
  (id_2050/*lop void qsort i64P lhs i64P rhs*/(((&(*(((v856)=(id_2024/*op VecIter<i64> .call.begin Vec<i64>P slf*/((v854)))), (&(v856)))))->id_1683/*ptr*/), ((&(*(((v858)=(id_2025/*op VecIter<i64> .call.end Vec<i64>P slf*/((v854)))), (&(v858)))))->id_1683/*ptr*/)));
}

void id_2052/*lop void sort Vec<i64>R slf*/(id_1659/*Vec<i64>*/* v859){
  (id_2051/*op void .call.sort Vec<i64>P slf*/((&(*v859))));
}

id_1659/*Vec<i64>*/ id_2053/*op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f*/(id_1659/*Vec<i64>*/* v860, i64(*v861)(i64*)) {{
  id_1659/*Vec<i64>*/ v862; /*r*/
  ((v862)=(id_2030/*lop Vec<i64> Vec<i64> i64 size*/((((v860))->id_1682/*size*/))));
  {
      id_1654/*RangeIter<i64>*/ v869; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v868; /*tmp_rval_867*/
      id_1654/*RangeIter<i64>*/ v866; /*__cur*/
      i64 v870; /*i*/
      id_1655/*RangeIterRange<i64>*/ v865; /*tmp_rval_864*/
      id_1655/*RangeIterRange<i64>*/ v863; /*__range*/
      ((v863)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v860))->id_1682/*size*/))))));
      ((v869)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v868)=(v863)), (&(v868))))))));
      ((v866)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v865)=(v863)), (&(v865))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v866), (v869)))) {
        ((v870)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v866))));
        ((*id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v862)), (v870)))=((*(v861))(&(*id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/((v860), (v870))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v866)));
      }
    }
  return (v862);
  (id_2029/*op void .call.dtor Vec<i64>P slf*/((&(v862))));
} panic("reached function end without returning anything op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f\n");}

id_1659/*Vec<i64>*/ id_2054/*op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f*/(id_1659/*Vec<i64>*/* v871, bool(*v872)(i64*)) {{
  id_1659/*Vec<i64>*/ v873; /*r*/
  ((v873)=(id_2032/*lop Vec<i64> Vec<i64>*/()));
  {
      i64 v881; /*i*/
      id_1654/*RangeIter<i64>*/ v880; /*__end*/
      id_1654/*RangeIter<i64>*/ v877; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v879; /*tmp_rval_878*/
      id_1655/*RangeIterRange<i64>*/ v876; /*tmp_rval_875*/
      id_1655/*RangeIterRange<i64>*/ v874; /*__range*/
      ((v874)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v871))->id_1682/*size*/))))));
      ((v880)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v879)=(v874)), (&(v879))))))));
      ((v877)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v876)=(v874)), (&(v876))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v877), (v880)))) {
        ((v881)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v877))));
        if (((*(v872))(&(*id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/((v871), (v881)))))) {
          (id_2034/*op void += Vec<i64>R slf i64 val*/(&(v873), (*id_2043/*op i64R .call.sub Vec<i64>P slf i64 id*/((v871), (v881)))));
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v877)));
      }
    }
  return (v873);
  (id_2029/*op void .call.dtor Vec<i64>P slf*/((&(v873))));
} panic("reached function end without returning anything op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f\n");}

id_1659/*Vec<i64>*/ id_2055/*lop Vec<i64> iota i64 begin i64 end*/(i64 v882, i64 v883) {{
  id_1659/*Vec<i64>*/ v884; /*v*/
  ((v884)=(id_2030/*lop Vec<i64> Vec<i64> i64 size*/((((v883))-((v882))))));
  {
      id_1654/*RangeIter<i64>*/ v891; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v890; /*tmp_rval_889*/
      id_1654/*RangeIter<i64>*/ v888; /*__cur*/
      i64 v892; /*i*/
      id_1655/*RangeIterRange<i64>*/ v887; /*tmp_rval_886*/
      id_1655/*RangeIterRange<i64>*/ v885; /*__range*/
      ((v885)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((v882), (v883))))));
      ((v891)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v890)=(v885)), (&(v890))))))));
      ((v888)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v887)=(v885)), (&(v887))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v888), (v891)))) {
        ((v892)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v888))));
        ((*id_2017/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v884)), (((v892))-((v882)))))=(v892));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v888)));
      }
    }
  return (v884);
  (id_2029/*op void .call.dtor Vec<i64>P slf*/((&(v884))));
} panic("reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n");}

char id_2056/*op char .call.sub strP slf i64 pos*/(str* v893, i64 v894) {{
  return (*((char*)((((i64)(*(v893))))+((v894)))));
} panic("reached function end without returning anything op char .call.sub strP slf i64 pos\n");}

str id_2057/*lop str str*/() {{
  u8* v895; /*ptr*/
  ((v895)=((u8*)(alloc(((i64)1)))));
  ((*(v895))=((u8)0));
  return ((str)(v895));
} panic("reached function end without returning anything lop str str\n");}

bool id_2058/*op bool == char ch str s*/(char v896, str v897) {{
  return (((v896))==((id_2056/*op char .call.sub strP slf i64 pos*/((&(v897)), ((i64)0)))));
} panic("reached function end without returning anything op bool == char ch str s\n");}

char id_2059/*lop char chr str s*/(str v898) {{
  return (id_2056/*op char .call.sub strP slf i64 pos*/((&(v898)), ((i64)0)));
} panic("reached function end without returning anything lop char chr str s\n");}

id_1663/*VecIter<char>*/ id_2060/*lop VecIter<char> VecIter<char> charP ptr*/(char* v945) {{
  id_1663/*VecIter<char>*/ v946; /*slf*/
  (((&(v946))->id_1683/*ptr*/)=(v945));
  return (v946);
} panic("reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n");}

void id_2061/*lop void ++ VecIter<char>R slf*/(id_1663/*VecIter<char>*/* v947){
  (((&(*v947))->id_1683/*ptr*/)=((char*)((((i64)((&(*v947))->id_1683/*ptr*/)))+(((((i64)1))*((sizeof(char))))))));
}

id_1663/*VecIter<char>*/ id_2062/*op VecIter<char> + VecIter<char> slf i64 i*/(id_1663/*VecIter<char>*/ v948, i64 v949) {{
  (((&(v948))->id_1683/*ptr*/)=((char*)((((i64)((&(v948))->id_1683/*ptr*/)))+((((v949))*((sizeof(char))))))));
  return (v948);
} panic("reached function end without returning anything op VecIter<char> + VecIter<char> slf i64 i\n");}

bool id_2063/*op bool != VecIter<char> a VecIter<char> b*/(id_1663/*VecIter<char>*/ v950, id_1663/*VecIter<char>*/ v951) {{
  return ((((i64)((&(v950))->id_1683/*ptr*/)))!=(((i64)((&(v951))->id_1683/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<char> a VecIter<char> b\n");}

char* id_2064/*lop charR * VecIter<char> slf*/(id_1663/*VecIter<char>*/ v952) {{
  return &(*((&(v952))->id_1683/*ptr*/));
} panic("reached function end without returning anything lop charR * VecIter<char> slf\n");}

id_1663/*VecIter<char>*/ id_2065/*op VecIter<char> .call.begin VecIterRange<char>P slf*/(id_1664/*VecIterRange<char>*/* v955) {{
  return (((v955))->id_1677/*begin*/);
} panic("reached function end without returning anything op VecIter<char> .call.begin VecIterRange<char>P slf\n");}

id_1663/*VecIter<char>*/ id_2066/*op VecIter<char> .call.end VecIterRange<char>P slf*/(id_1664/*VecIterRange<char>*/* v956) {{
  return (((v956))->id_1678/*end*/);
} panic("reached function end without returning anything op VecIter<char> .call.end VecIterRange<char>P slf\n");}

id_1664/*VecIterRange<char>*/ id_2067/*lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end*/(id_1663/*VecIter<char>*/ v957, id_1663/*VecIter<char>*/ v958) {{
  id_1664/*VecIterRange<char>*/ v959; /*slf*/
  (((&(v959))->id_1677/*begin*/)=(v957));
  (((&(v959))->id_1678/*end*/)=(v958));
  return (v959);
} panic("reached function end without returning anything lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end\n");}

char* id_2068/*op charP .call.atP Vec<char>P slf i64 pos*/(id_1662/*Vec<char>*/* v899, i64 v900) {{
  return ((char*)((char*)((((i64)(((v899))->id_1681/*head*/)))+((((v900))*((sizeof(char))))))));
} panic("reached function end without returning anything op charP .call.atP Vec<char>P slf i64 pos\n");}

char* id_2069/*op charR .call.at Vec<char>P slf i64 pos*/(id_1662/*Vec<char>*/* v901, i64 v902) {{
  return &(*(id_2068/*op charP .call.atP Vec<char>P slf i64 pos*/((v901), (v902))));
} panic("reached function end without returning anything op charR .call.at Vec<char>P slf i64 pos\n");}

void id_2070/*op void .call.print Vec<char>P slf*/(id_1662/*Vec<char>*/* v903){
  (printf("%s", ((str)"[")));
  {
      i64 v911; /*i*/
      id_1654/*RangeIter<i64>*/ v910; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v909; /*tmp_rval_908*/
      id_1654/*RangeIter<i64>*/ v907; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v906; /*tmp_rval_905*/
      id_1655/*RangeIterRange<i64>*/ v904; /*__range*/
      ((v904)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v903))->id_1682/*size*/))))));
      ((v910)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v909)=(v904)), (&(v909))))))));
      ((v907)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v906)=(v904)), (&(v906))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v907), (v910)))) {
        ((v911)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v907))));
        if ((!((!((v911)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(id_2068/*op charP .call.atP Vec<char>P slf i64 pos*/((v903), (v911))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v907)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2071/*op void .call.println Vec<char>P slf*/(id_1662/*Vec<char>*/* v912){
  {
      i64 v920; /*i*/
      id_1654/*RangeIter<i64>*/ v919; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v918; /*tmp_rval_917*/
      id_1654/*RangeIter<i64>*/ v916; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v915; /*tmp_rval_914*/
      id_1655/*RangeIterRange<i64>*/ v913; /*__range*/
      ((v913)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v912))->id_1682/*size*/))))));
      ((v919)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v918)=(v913)), (&(v918))))))));
      ((v916)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v915)=(v913)), (&(v915))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v916), (v919)))) {
        ((v920)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v916))));
        (printf("%c\n", (*(id_2068/*op charP .call.atP Vec<char>P slf i64 pos*/((v912), (v920))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v916)));
      }
    }
}

void id_2072/*op void .call.double_cap Vec<char>P slf*/(id_1662/*Vec<char>*/* v921){
  i64 v922; /*ncap*/
  ((v922)=(((v921))->id_1680/*cap*/));
  if ((((v922))==(((i64)0)))) {
    ((v922)=((i64)1));
    ((((v921))->id_1681/*head*/)=((char*)(alloc((sizeof(char))))));
    ((((v921))->id_1680/*cap*/)=(v922));
  } else {
    char* v923; /*new_head*/
    (id_1749/*op void *= i64R a i64 b*/(&(v922), ((i64)2)));
    ((v923)=((char*)(alloc((((v922))*((sizeof(char))))))));
    {
        i64 v931; /*i*/
        id_1654/*RangeIter<i64>*/ v930; /*__end*/
        id_1655/*RangeIterRange<i64>*/ v929; /*tmp_rval_928*/
        id_1654/*RangeIter<i64>*/ v927; /*__cur*/
        id_1655/*RangeIterRange<i64>*/ v926; /*tmp_rval_925*/
        id_1655/*RangeIterRange<i64>*/ v924; /*__range*/
        ((v924)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v921))->id_1682/*size*/))))));
        ((v930)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v929)=(v924)), (&(v929))))))));
        ((v927)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v926)=(v924)), (&(v926))))))));
        while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v927), (v930)))) {
          ((v931)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v927))));
          ((*((char*)((((i64)(v923)))+((((v931))*((sizeof(char))))))))=(*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((v921), (v931))));
          (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v927)));
        }
      }
    (free((void*) ((i64)(((v921))->id_1681/*head*/))));
    ((((v921))->id_1681/*head*/)=(v923));
  }
  ((((v921))->id_1680/*cap*/)=(v922));
}

void id_2073/*op void .call.push_back Vec<char>P slf char val*/(id_1662/*Vec<char>*/* v932, char v933){
  if ((((((v932))->id_1682/*size*/))==((((v932))->id_1680/*cap*/)))) {
    (id_2072/*op void .call.double_cap Vec<char>P slf*/((v932)));
  }
  ((*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((v932), (((v932))->id_1682/*size*/)))=(v933));
  (*id_1755/*lop i64R ++ i64R x*/(&(((v932))->id_1682/*size*/)));
}

void id_2074/*op void .call.pop_back Vec<char>P slf*/(id_1662/*Vec<char>*/* v934){
  (*id_1756/*lop i64R -- i64R x*/(&(((v934))->id_1682/*size*/)));
}

void id_2075/*op void .call.erase Vec<char>P slf i64 pos*/(id_1662/*Vec<char>*/* v935, i64 v936){
  {
      i64 v944; /*i*/
      id_1654/*RangeIter<i64>*/ v943; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v942; /*tmp_rval_941*/
      id_1654/*RangeIter<i64>*/ v940; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v939; /*tmp_rval_938*/
      id_1655/*RangeIterRange<i64>*/ v937; /*__range*/
      ((v937)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((((v936))+(((i64)1))), (((v935))->id_1682/*size*/))))));
      ((v943)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v942)=(v937)), (&(v942))))))));
      ((v940)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v939)=(v937)), (&(v939))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v940), (v943)))) {
        ((v944)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v940))));
        ((*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((v935), (((v944))-(((i64)1)))))=(*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((v935), (v944))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v940)));
      }
    }
  (id_2074/*op void .call.pop_back Vec<char>P slf*/((v935)));
}

id_1663/*VecIter<char>*/ id_2076/*op VecIter<char> .call.begin Vec<char>P slf*/(id_1662/*Vec<char>*/* v953) {{
  return (id_2060/*lop VecIter<char> VecIter<char> charP ptr*/((((v953))->id_1681/*head*/)));
} panic("reached function end without returning anything op VecIter<char> .call.begin Vec<char>P slf\n");}

id_1663/*VecIter<char>*/ id_2077/*op VecIter<char> .call.end Vec<char>P slf*/(id_1662/*Vec<char>*/* v954) {{
  return (id_2060/*lop VecIter<char> VecIter<char> charP ptr*/((id_2068/*op charP .call.atP Vec<char>P slf i64 pos*/((v954), (((v954))->id_1682/*size*/)))));
} panic("reached function end without returning anything op VecIter<char> .call.end Vec<char>P slf\n");}

id_1664/*VecIterRange<char>*/ id_2078/*lop VecIterRange<char> iter Vec<char>R slf*/(id_1662/*Vec<char>*/* v960) {{
  id_1664/*VecIterRange<char>*/ v961; /*it*/
  (((&(v961))->id_1677/*begin*/)=(id_2076/*op VecIter<char> .call.begin Vec<char>P slf*/((&(*v960)))));
  (((&(v961))->id_1678/*end*/)=(id_2077/*op VecIter<char> .call.end Vec<char>P slf*/((&(*v960)))));
  return (v961);
} panic("reached function end without returning anything lop VecIterRange<char> iter Vec<char>R slf\n");}

char* id_2079/*op charR .call.front Vec<char>P slf*/(id_1662/*Vec<char>*/* v962) {{
  return &(*(((v962))->id_1681/*head*/));
} panic("reached function end without returning anything op charR .call.front Vec<char>P slf\n");}

char* id_2080/*op charR .call.back Vec<char>P slf*/(id_1662/*Vec<char>*/* v963) {{
  return &(*(id_2068/*op charP .call.atP Vec<char>P slf i64 pos*/((v963), (((((v963))->id_1682/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op charR .call.back Vec<char>P slf\n");}

void id_2081/*op void .call.dtor Vec<char>P slf*/(id_1662/*Vec<char>*/* v964){
  if ((!((!(((i64)(((v964))->id_1681/*head*/))))))) {
    (free((void*) ((i64)(((v964))->id_1681/*head*/))));
    ((((v964))->id_1682/*size*/)=((i64)0));
    ((((v964))->id_1680/*cap*/)=((i64)0));
    ((((v964))->id_1681/*head*/)=((char*)((i64)0)));
  }
}

id_1662/*Vec<char>*/ id_2082/*lop Vec<char> Vec<char> i64 size*/(i64 v965) {{
  id_1662/*Vec<char>*/ v966; /*slf*/
  (((&(v966))->id_1681/*head*/)=((char*)((i64)0)));
  (((&(v966))->id_1682/*size*/)=((i64)0));
  (((&(v966))->id_1680/*cap*/)=((i64)0));
  while (((((&(v966))->id_1680/*cap*/))<((v965)))) {
    (id_2072/*op void .call.double_cap Vec<char>P slf*/((&(v966))));
  }
  (((&(v966))->id_1682/*size*/)=(v965));
  (((&(v966))->id_1680/*cap*/)=(v965));
  {
      id_1654/*RangeIter<i64>*/ v973; /*__end*/
      i64 v974; /*i*/
      id_1655/*RangeIterRange<i64>*/ v972; /*tmp_rval_971*/
      id_1654/*RangeIter<i64>*/ v970; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v969; /*tmp_rval_968*/
      id_1655/*RangeIterRange<i64>*/ v967; /*__range*/
      ((v967)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v966))->id_1682/*size*/))))));
      ((v973)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v972)=(v967)), (&(v972))))))));
      ((v970)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v969)=(v967)), (&(v969))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v970), (v973)))) {
        ((v974)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v970))));
        ((*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((&(v966)), (v974)))=(id_1699/*lop char char*/()));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v970)));
      }
    }
  return (v966);
  (id_2081/*op void .call.dtor Vec<char>P slf*/((&(v966))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> i64 size\n");}

id_1662/*Vec<char>*/ id_2083/*lop Vec<char> Vec<char> i64 size char default*/(i64 v975, char v976) {{
  id_1662/*Vec<char>*/ v977; /*slf*/
  ((v977)=(id_2082/*lop Vec<char> Vec<char> i64 size*/((v975))));
  {
      i64 v985; /*i*/
      id_1654/*RangeIter<i64>*/ v984; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v983; /*tmp_rval_982*/
      id_1654/*RangeIter<i64>*/ v981; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v980; /*tmp_rval_979*/
      id_1655/*RangeIterRange<i64>*/ v978; /*__range*/
      ((v978)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v977))->id_1682/*size*/))))));
      ((v984)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v983)=(v978)), (&(v983))))))));
      ((v981)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v980)=(v978)), (&(v980))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v981), (v984)))) {
        ((v985)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v981))));
        ((*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((&(v977)), (v985)))=(v976));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v981)));
      }
    }
  return (v977);
  (id_2081/*op void .call.dtor Vec<char>P slf*/((&(v977))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n");}

id_1662/*Vec<char>*/ id_2084/*lop Vec<char> Vec<char>*/() {{
  return (id_2082/*lop Vec<char> Vec<char> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<char> Vec<char>\n");}

id_1662/*Vec<char>*/ id_2085/*lop Vec<char> Vec<char> Vec<char>R other*/(id_1662/*Vec<char>*/* v986) {{
  id_1662/*Vec<char>*/ v987; /*slf*/
  ((v987)=(id_2082/*lop Vec<char> Vec<char> i64 size*/(((&(*v986))->id_1682/*size*/))));
  {
      i64 v995; /*i*/
      id_1654/*RangeIter<i64>*/ v994; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v993; /*tmp_rval_992*/
      id_1654/*RangeIter<i64>*/ v991; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v990; /*tmp_rval_989*/
      id_1655/*RangeIterRange<i64>*/ v988; /*__range*/
      ((v988)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v986))->id_1682/*size*/))))));
      ((v994)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v993)=(v988)), (&(v993))))))));
      ((v991)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v990)=(v988)), (&(v990))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v991), (v994)))) {
        ((v995)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v991))));
        ((*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((&(v987)), (v995)))=(*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((&(*v986)), (v995))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v991)));
      }
    }
  return (v987);
  (id_2081/*op void .call.dtor Vec<char>P slf*/((&(v987))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n");}

void id_2086/*op void += Vec<char>R slf char val*/(id_1662/*Vec<char>*/* v996, char v997){
  (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&(*v996)), (v997)));
}

void id_2087/*op void += Vec<char>R slf Vec<char>R other*/(id_1662/*Vec<char>*/* v998, id_1662/*Vec<char>*/* v999){
  {
      i64 v1007; /*i*/
      id_1654/*RangeIter<i64>*/ v1006; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1005; /*tmp_rval_1004*/
      id_1654/*RangeIter<i64>*/ v1003; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1002; /*tmp_rval_1001*/
      id_1655/*RangeIterRange<i64>*/ v1000; /*__range*/
      ((v1000)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v999))->id_1682/*size*/))))));
      ((v1006)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1005)=(v1000)), (&(v1005))))))));
      ((v1003)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1002)=(v1000)), (&(v1002))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1003), (v1006)))) {
        ((v1007)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1003))));
        (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&(*v998)), (*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((&(*v999)), (v1007)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1003)));
      }
    }
}

id_1662/*Vec<char>*/ id_2088/*op Vec<char> ,, char a char b*/(char v1008, char v1009) {{
  id_1662/*Vec<char>*/ v1010; /*slf*/
  ((v1010)=(id_2084/*lop Vec<char> Vec<char>*/()));
  (id_2086/*op void += Vec<char>R slf char val*/(&(v1010), (v1008)));
  (id_2086/*op void += Vec<char>R slf char val*/(&(v1010), (v1009)));
  return (v1010);
  (id_2081/*op void .call.dtor Vec<char>P slf*/((&(v1010))));
} panic("reached function end without returning anything op Vec<char> ,, char a char b\n");}

id_1662/*Vec<char>*/* id_2089/*op Vec<char>R ,, Vec<char>R v char a*/(id_1662/*Vec<char>*/* v1011, char v1012) {{
  (id_2086/*op void += Vec<char>R slf char val*/(&(*v1011), (v1012)));
  return &(*v1011);
} panic("reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n");}

void id_2090/*lop void put Vec<char>R slf*/(id_1662/*Vec<char>*/* v1013){
  (id_2070/*op void .call.print Vec<char>P slf*/((&(*v1013))));
}

void id_2091/*lop void out Vec<char>R slf*/(id_1662/*Vec<char>*/* v1014){
  (id_2070/*op void .call.print Vec<char>P slf*/((&(*v1014))));
  (printf("%s\n", ((str)"")));
}

id_1643/*Out*/ id_2092/*rop Out < Vec<char>R i*/(id_1662/*Vec<char>*/* v1015) {{
  (id_2091/*lop void out Vec<char>R slf*/(&(*v1015)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<char>R i\n");}

id_1643/*Out*/ id_2093/*lop Out < Vec<char>R i*/(id_1662/*Vec<char>*/* v1016) {{
  ((id_2090/*lop void put Vec<char>R slf*/(&(*v1016))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<char>R i\n");}

id_1643/*Out*/ id_2094/*op Out < Out o Vec<char>R i*/(id_1643/*Out*/ v1017, id_1662/*Vec<char>*/* v1018) {{
  ((id_2090/*lop void put Vec<char>R slf*/(&(*v1018))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<char>R i\n");}

char* id_2095/*op charR .call.sub Vec<char>P slf i64 id*/(id_1662/*Vec<char>*/* v1019, i64 v1020) {{
  if ((((v1020))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1020), (((v1019))->id_1682/*size*/)));
  }
  return &(*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((v1019), (v1020)));
} panic("reached function end without returning anything op charR .call.sub Vec<char>P slf i64 id\n");}

id_1662/*Vec<char>*/ id_2096/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/(id_1662/*Vec<char>*/* v1021, i64 v1022, i64 v1023) {{
  id_1662/*Vec<char>*/ v1024; /*res*/
  ((v1024)=(id_2082/*lop Vec<char> Vec<char> i64 size*/(((i64)0))));
  {
      i64 v1032; /*i*/
      id_1654/*RangeIter<i64>*/ v1031; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1030; /*tmp_rval_1029*/
      id_1654/*RangeIter<i64>*/ v1028; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1027; /*tmp_rval_1026*/
      id_1655/*RangeIterRange<i64>*/ v1025; /*__range*/
      ((v1025)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((v1022), (v1023))))));
      ((v1031)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1030)=(v1025)), (&(v1030))))))));
      ((v1028)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1027)=(v1025)), (&(v1027))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1028), (v1031)))) {
        ((v1032)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1028))));
        (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&(v1024)), (*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((v1021), (v1032)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1028)));
      }
    }
  return (v1024);
  (id_2081/*op void .call.dtor Vec<char>P slf*/((&(v1024))));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end\n");}

id_1662/*Vec<char>*/ id_2097/*op Vec<char> .call.sub Vec<char>P slf Range<i64> r*/(id_1662/*Vec<char>*/* v1033, id_1653/*Range<i64>*/ v1034) {{
  i64 v1036; /*end*/
  i64 v1035; /*begin*/
  (((v1035)=((&(v1034))->id_1677/*begin*/)), ((v1036)=((&(v1034))->id_1678/*end*/)));
  if ((((v1035))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1035), (((v1033))->id_1682/*size*/)));
  }
  if ((((v1035))<(((i64)0)))) {
    ((v1035)=((i64)0));
  }
  if ((((v1036))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1036), (((v1033))->id_1682/*size*/)));
  }
  if ((((v1036))>((((v1033))->id_1682/*size*/)))) {
    ((v1036)=(((v1033))->id_1682/*size*/));
  }
  return (id_2096/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((v1033), (v1035), (v1036)));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf Range<i64> r\n");}

id_1662/*Vec<char>*/ id_2098/*op Vec<char> .call.sub Vec<char>P slf*/(id_1662/*Vec<char>*/* v1037) {{
  return (id_2096/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((v1037), ((i64)0), (((v1037))->id_1682/*size*/)));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf\n");}

bool id_2099/*op bool < Vec<char>R a Vec<char>R b*/(id_1662/*Vec<char>*/* v1038, id_1662/*Vec<char>*/* v1039) {{
  {
      i64 v1047; /*i*/
      id_1654/*RangeIter<i64>*/ v1046; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1045; /*tmp_rval_1044*/
      id_1654/*RangeIter<i64>*/ v1043; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1042; /*tmp_rval_1041*/
      id_1655/*RangeIterRange<i64>*/ v1040; /*__range*/
      ((v1040)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1701/*lop i64 min i64 a i64 b*/(((&(*v1038))->id_1682/*size*/), ((&(*v1039))->id_1682/*size*/))))))));
      ((v1046)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1045)=(v1040)), (&(v1045))))))));
      ((v1043)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1042)=(v1040)), (&(v1042))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1043), (v1046)))) {
        ((v1047)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1043))));
        if ((((*id_2095/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1038)), (v1047))))<((*id_2095/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1039)), (v1047)))))) {
          return ((bool)1);
        }
 else if ((((*id_2095/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1039)), (v1047))))<((*id_2095/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1038)), (v1047)))))) {
          return ((bool)0);
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1043)));
      }
    }
  if (((((&(*v1038))->id_1682/*size*/))<(((&(*v1039))->id_1682/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1038))->id_1682/*size*/))>(((&(*v1039))->id_1682/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n");}

void id_2100/*lop void swap charP a charP b*/(char* v1048, char* v1049){
  char v1050; /*t*/
  ((v1050)=(*(v1048)));
  ((*(v1048))=(*(v1049)));
  ((*(v1049))=(v1050));
}

char* id_2101/*lop charP partition charP lo charP hi*/(char* v1051, char* v1052) {{
  char* v1055; /*j*/
  char* v1054; /*i*/
  char* v1053; /*pivot*/
  (((v1053)=((char*)((((i64)(v1052)))-(((((i64)1))*((sizeof(char)))))))), ((v1054)=(v1051)), ((v1055)=(v1051)));
  ((v1055)=(v1051));
  while (((((i64)(v1055)))!=(((i64)(v1053))))) {
    if ((((*(v1055)))<((*(v1053))))) {
      (id_2100/*lop void swap charP a charP b*/((v1054), (v1055)));
      ((v1054)=((char*)((((i64)(v1054)))+(((((i64)1))*((sizeof(char))))))));
    }
    ((v1055)=((char*)((((i64)(v1055)))+(((((i64)1))*((sizeof(char))))))));
  }
  (id_2100/*lop void swap charP a charP b*/((v1054), (v1053)));
  return (v1054);
} panic("reached function end without returning anything lop charP partition charP lo charP hi\n");}

void id_2102/*lop void qsort charP lhs charP rhs*/(char* v1056, char* v1057){
  i64 v1059; /*b*/
  i64 v1058; /*a*/
  ((v1058)=((((i64)(v1057)))-(((i64)(v1056)))));
  ((v1059)=(sizeof(char)));
  if ((((v1058))>((v1059)))) {
    char* v1060; /*pi*/
    ((v1060)=(id_2101/*lop charP partition charP lo charP hi*/((v1056), (v1057))));
    (id_2102/*lop void qsort charP lhs charP rhs*/((v1056), (v1060)));
    ((v1060)=((char*)((((i64)(v1060)))+(((((i64)1))*((sizeof(char))))))));
    (id_2102/*lop void qsort charP lhs charP rhs*/((v1060), (v1057)));
  }
}

void id_2103/*op void .call.sort Vec<char>P slf*/(id_1662/*Vec<char>*/* v1061){
  id_1663/*VecIter<char>*/ v1065; /*tmp_rval_1064*/
  id_1663/*VecIter<char>*/ v1063; /*tmp_rval_1062*/
  (id_2102/*lop void qsort charP lhs charP rhs*/(((&(*(((v1063)=(id_2076/*op VecIter<char> .call.begin Vec<char>P slf*/((v1061)))), (&(v1063)))))->id_1683/*ptr*/), ((&(*(((v1065)=(id_2077/*op VecIter<char> .call.end Vec<char>P slf*/((v1061)))), (&(v1065)))))->id_1683/*ptr*/)));
}

void id_2104/*lop void sort Vec<char>R slf*/(id_1662/*Vec<char>*/* v1066){
  (id_2103/*op void .call.sort Vec<char>P slf*/((&(*v1066))));
}

id_1662/*Vec<char>*/ id_2105/*op Vec<char> .call.map Vec<char>P slf F<char charR> f*/(id_1662/*Vec<char>*/* v1067, char(*v1068)(char*)) {{
  id_1662/*Vec<char>*/ v1069; /*r*/
  ((v1069)=(id_2082/*lop Vec<char> Vec<char> i64 size*/((((v1067))->id_1682/*size*/))));
  {
      i64 v1077; /*i*/
      id_1654/*RangeIter<i64>*/ v1076; /*__end*/
      id_1654/*RangeIter<i64>*/ v1073; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1075; /*tmp_rval_1074*/
      id_1655/*RangeIterRange<i64>*/ v1072; /*tmp_rval_1071*/
      id_1655/*RangeIterRange<i64>*/ v1070; /*__range*/
      ((v1070)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1067))->id_1682/*size*/))))));
      ((v1076)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1075)=(v1070)), (&(v1075))))))));
      ((v1073)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1072)=(v1070)), (&(v1072))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1073), (v1076)))) {
        ((v1077)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1073))));
        ((*id_2095/*op charR .call.sub Vec<char>P slf i64 id*/((&(v1069)), (v1077)))=((*(v1068))(&(*id_2095/*op charR .call.sub Vec<char>P slf i64 id*/((v1067), (v1077))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1073)));
      }
    }
  return (v1069);
  (id_2081/*op void .call.dtor Vec<char>P slf*/((&(v1069))));
} panic("reached function end without returning anything op Vec<char> .call.map Vec<char>P slf F<char charR> f\n");}

id_1662/*Vec<char>*/ id_2106/*op Vec<char> .call.filter Vec<char>P slf F<bool charR> f*/(id_1662/*Vec<char>*/* v1078, bool(*v1079)(char*)) {{
  id_1662/*Vec<char>*/ v1080; /*r*/
  ((v1080)=(id_2084/*lop Vec<char> Vec<char>*/()));
  {
      i64 v1088; /*i*/
      id_1654/*RangeIter<i64>*/ v1087; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1086; /*tmp_rval_1085*/
      id_1654/*RangeIter<i64>*/ v1084; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1083; /*tmp_rval_1082*/
      id_1655/*RangeIterRange<i64>*/ v1081; /*__range*/
      ((v1081)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1078))->id_1682/*size*/))))));
      ((v1087)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1086)=(v1081)), (&(v1086))))))));
      ((v1084)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1083)=(v1081)), (&(v1083))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1084), (v1087)))) {
        ((v1088)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1084))));
        if (((*(v1079))(&(*id_2095/*op charR .call.sub Vec<char>P slf i64 id*/((v1078), (v1088)))))) {
          (id_2086/*op void += Vec<char>R slf char val*/(&(v1080), (*id_2095/*op charR .call.sub Vec<char>P slf i64 id*/((v1078), (v1088)))));
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1084)));
      }
    }
  return (v1080);
  (id_2081/*op void .call.dtor Vec<char>P slf*/((&(v1080))));
} panic("reached function end without returning anything op Vec<char> .call.filter Vec<char>P slf F<bool charR> f\n");}

id_1665/*Str*/ id_2107/*lop Str Str*/() {{
  id_1665/*Str*/ v1089; /*slf*/
  (((&(v1089))->id_1684/*data*/)=(id_2084/*lop Vec<char> Vec<char>*/()));
  (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1089))->id_1684/*data*/)), ((char)((u8)0))));
  (((&(v1089))->id_1682/*size*/)=((i64)0));
  return (v1089);
} panic("reached function end without returning anything lop Str Str\n");}

void id_2108/*op void .call.dtor StrP slf*/(id_1665/*Str*/* v1090){
  (id_2081/*op void .call.dtor Vec<char>P slf*/((&(((v1090))->id_1684/*data*/))));
}

str id_2109/*op str .call.cstr StrP slf*/(id_1665/*Str*/* v1091) {{
  id_1663/*VecIter<char>*/ v1092; /*it*/
  ((v1092)=(id_2076/*op VecIter<char> .call.begin Vec<char>P slf*/((&(((v1091))->id_1684/*data*/)))));
  return ((str)((&(v1092))->id_1683/*ptr*/));
} panic("reached function end without returning anything op str .call.cstr StrP slf\n");}

id_1664/*VecIterRange<char>*/ id_2110/*lop VecIterRange<char> iter StrR s*/(id_1665/*Str*/* v1093) {{
  return (id_2067/*lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end*/((id_2076/*op VecIter<char> .call.begin Vec<char>P slf*/((&((&(*v1093))->id_1684/*data*/)))), (id_2062/*op VecIter<char> + VecIter<char> slf i64 i*/((id_2076/*op VecIter<char> .call.begin Vec<char>P slf*/((&((&(*v1093))->id_1684/*data*/)))), ((&(*v1093))->id_1682/*size*/)))));
} panic("reached function end without returning anything lop VecIterRange<char> iter StrR s\n");}

char* id_2111/*op charR .call.at StrP slf i64 pos*/(id_1665/*Str*/* v1094, i64 v1095) {{
  return &(*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((&(((v1094))->id_1684/*data*/)), (v1095)));
} panic("reached function end without returning anything op charR .call.at StrP slf i64 pos\n");}

char* id_2112/*op charR .call.sub StrP slf i64 pos*/(id_1665/*Str*/* v1096, i64 v1097) {{
  return &(*id_2069/*op charR .call.at Vec<char>P slf i64 pos*/((&(((v1096))->id_1684/*data*/)), (v1097)));
} panic("reached function end without returning anything op charR .call.sub StrP slf i64 pos\n");}

char* id_2113/*op charP .call.atP StrP slf i64 pos*/(id_1665/*Str*/* v1098, i64 v1099) {{
  return (id_2068/*op charP .call.atP Vec<char>P slf i64 pos*/((&(((v1098))->id_1684/*data*/)), (v1099)));
} panic("reached function end without returning anything op charP .call.atP StrP slf i64 pos\n");}

void id_2114/*op void .call.push_back StrP slf char ch*/(id_1665/*Str*/* v1100, char v1101){
  (id_2074/*op void .call.pop_back Vec<char>P slf*/((&(((v1100))->id_1684/*data*/))));
  (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&(((v1100))->id_1684/*data*/)), (v1101)));
  (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&(((v1100))->id_1684/*data*/)), ((char)((u8)0))));
  (*id_1755/*lop i64R ++ i64R x*/(&(((v1100))->id_1682/*size*/)));
}

void id_2115/*op void .call.pop_back StrP slf*/(id_1665/*Str*/* v1102){
  (id_2074/*op void .call.pop_back Vec<char>P slf*/((&(((v1102))->id_1684/*data*/))));
  (id_2074/*op void .call.pop_back Vec<char>P slf*/((&(((v1102))->id_1684/*data*/))));
  (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&(((v1102))->id_1684/*data*/)), ((char)((u8)0))));
  (*id_1756/*lop i64R -- i64R x*/(&(((v1102))->id_1682/*size*/)));
}

id_1665/*Str*/ id_2116/*lop Str Str str s*/(str v1103) {{
  id_1665/*Str*/ v1104; /*res*/
  ((v1104)=(id_2107/*lop Str Str*/()));
  (id_2074/*op void .call.pop_back Vec<char>P slf*/((&((&(v1104))->id_1684/*data*/))));
  while ((((*((char*)(v1103))))!=(((char)((u8)0))))) {
    (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1104))->id_1684/*data*/)), (*((char*)(v1103)))));
    ((v1103)=((str)((((i64)(v1103)))+(((i64)1)))));
  }
  (id_2073/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1104))->id_1684/*data*/)), ((char)((u8)0))));
  (((&(v1104))->id_1682/*size*/)=((((&((&(v1104))->id_1684/*data*/))->id_1682/*size*/))-(((i64)1))));
  return (v1104);
  (id_2108/*op void .call.dtor StrP slf*/((&(v1104))));
} panic("reached function end without returning anything lop Str Str str s\n");}

id_1665/*Str*/ id_2117/*lop Str Str StrR s*/(id_1665/*Str*/* v1105) {{
  id_1665/*Str*/ v1106; /*slf*/
  ((v1106)=(id_2107/*lop Str Str*/()));
  (((&(v1106))->id_1684/*data*/)=(id_2085/*lop Vec<char> Vec<char> Vec<char>R other*/(&((&(*v1105))->id_1684/*data*/))));
  (((&(v1106))->id_1682/*size*/)=((&(*v1105))->id_1682/*size*/));
  return (v1106);
  (id_2108/*op void .call.dtor StrP slf*/((&(v1106))));
} panic("reached function end without returning anything lop Str Str StrR s\n");}

i64 id_2118/*lop i64 len str s*/(str v1107) {{
  i64 v1108; /*res*/
  ((v1108)=((i64)0));
  while ((((*((char*)(v1107))))!=(((char)((u8)0))))) {
    (*id_1755/*lop i64R ++ i64R x*/(&(v1108)));
    ((v1107)=((str)((((i64)(v1107)))+(((i64)1)))));
  }
  return (v1108);
} panic("reached function end without returning anything lop i64 len str s\n");}

void id_2119/*lop void out StrR s*/(id_1665/*Str*/* v1109){
  (printf("%s\n", (id_2109/*op str .call.cstr StrP slf*/((&(*v1109))))));
}

void id_2120/*lop void put StrR s*/(id_1665/*Str*/* v1110){
  (printf("%s", (id_2109/*op str .call.cstr StrP slf*/((&(*v1110))))));
}

void id_2121/*op void += StrR a char ch*/(id_1665/*Str*/* v1111, char v1112){
  (id_2114/*op void .call.push_back StrP slf char ch*/((&(*v1111)), (v1112)));
}

void id_2122/*op void += StrR a StrR b*/(id_1665/*Str*/* v1113, id_1665/*Str*/* v1114){
  {
      i64 v1122; /*i*/
      id_1654/*RangeIter<i64>*/ v1121; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1120; /*tmp_rval_1119*/
      id_1654/*RangeIter<i64>*/ v1118; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1117; /*tmp_rval_1116*/
      id_1655/*RangeIterRange<i64>*/ v1115; /*__range*/
      ((v1115)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1114))->id_1682/*size*/))))));
      ((v1121)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1120)=(v1115)), (&(v1120))))))));
      ((v1118)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1117)=(v1115)), (&(v1117))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1118), (v1121)))) {
        char v1123; /*ch*/
        ((v1122)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1118))));
        ((v1123)=((char)((i8)115)));
        ((v1123)=(*id_2111/*op charR .call.at StrP slf i64 pos*/((&(*v1114)), (v1122))));
        (id_2121/*op void += StrR a char ch*/(&(*v1113), (v1123)));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1118)));
      }
    }
}

void id_2123/*op void += StrR a str b*/(id_1665/*Str*/* v1124, str v1125){
  i64 v1126; /*len*/
  ((v1126)=(id_2118/*lop i64 len str s*/((v1125))));
  {
      i64 v1134; /*i*/
      id_1654/*RangeIter<i64>*/ v1133; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1132; /*tmp_rval_1131*/
      id_1654/*RangeIter<i64>*/ v1130; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1129; /*tmp_rval_1128*/
      id_1655/*RangeIterRange<i64>*/ v1127; /*__range*/
      ((v1127)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1126))))));
      ((v1133)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1132)=(v1127)), (&(v1132))))))));
      ((v1130)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1129)=(v1127)), (&(v1129))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1130), (v1133)))) {
        ((v1134)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1130))));
        (id_2121/*op void += StrR a char ch*/(&(*v1124), (id_2056/*op char .call.sub strP slf i64 pos*/((&(v1125)), (v1134)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1130)));
      }
    }
}

id_1665/*Str*/ id_2124/*op Str + StrR a StrR b*/(id_1665/*Str*/* v1135, id_1665/*Str*/* v1136) {{
  id_1665/*Str*/ v1137; /*s*/
  ((v1137)=(id_2117/*lop Str Str StrR s*/(&(*v1135))));
  (id_2122/*op void += StrR a StrR b*/(&(v1137), &(*v1136)));
  return (v1137);
  (id_2108/*op void .call.dtor StrP slf*/((&(v1137))));
} panic("reached function end without returning anything op Str + StrR a StrR b\n");}

id_1665/*Str*/ id_2125/*op Str + str a str b*/(str v1138, str v1139) {{
  id_1665/*Str*/ v1143; /*tmp_rval_1142*/
  id_1665/*Str*/ v1141; /*tmp_rval_1140*/
  (id_2108/*op void .call.dtor StrP slf*/((&(v1141))));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1143))));
  return (id_2124/*op Str + StrR a StrR b*/(&(*(((v1141)=(id_2116/*lop Str Str str s*/((v1138)))), (&(v1141)))), &(*(((v1143)=(id_2116/*lop Str Str str s*/((v1139)))), (&(v1143))))));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1141))));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1143))));
} panic("reached function end without returning anything op Str + str a str b\n");}

id_1643/*Out*/ id_2126/*rop Out < StrR i*/(id_1665/*Str*/* v1144) {{
  (id_2119/*lop void out StrR s*/(&(*v1144)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < StrR i\n");}

id_1643/*Out*/ id_2127/*lop Out < StrR i*/(id_1665/*Str*/* v1145) {{
  ((id_2120/*lop void put StrR s*/(&(*v1145))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < StrR i\n");}

id_1643/*Out*/ id_2128/*op Out < Out o StrR i*/(id_1643/*Out*/ v1146, id_1665/*Str*/* v1147) {{
  ((id_2120/*lop void put StrR s*/(&(*v1147))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o StrR i\n");}

bool id_2129/*op bool < StrR a StrR b*/(id_1665/*Str*/* v1148, id_1665/*Str*/* v1149) {{
  {
      i64 v1157; /*i*/
      id_1654/*RangeIter<i64>*/ v1156; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1155; /*tmp_rval_1154*/
      id_1654/*RangeIter<i64>*/ v1153; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1152; /*tmp_rval_1151*/
      id_1655/*RangeIterRange<i64>*/ v1150; /*__range*/
      ((v1150)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1701/*lop i64 min i64 a i64 b*/(((&(*v1148))->id_1682/*size*/), ((&(*v1149))->id_1682/*size*/))))))));
      ((v1156)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1155)=(v1150)), (&(v1155))))))));
      ((v1153)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1152)=(v1150)), (&(v1152))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1153), (v1156)))) {
        ((v1157)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1153))));
        if ((((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*v1148)), (v1157))))<((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*v1149)), (v1157)))))) {
          return ((bool)1);
        }
 else if ((((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*v1149)), (v1157))))<((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*v1148)), (v1157)))))) {
          return ((bool)0);
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1153)));
      }
    }
  if (((((&(*v1148))->id_1682/*size*/))<(((&(*v1149))->id_1682/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1148))->id_1682/*size*/))>(((&(*v1149))->id_1682/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < StrR a StrR b\n");}

bool id_2130/*op bool in char c StrR s*/(char v1158, id_1665/*Str*/* v1159) {{
  {
      char v1167; /*i*/
      id_1663/*VecIter<char>*/ v1166; /*__end*/
      id_1664/*VecIterRange<char>*/ v1165; /*tmp_rval_1164*/
      id_1663/*VecIter<char>*/ v1163; /*__cur*/
      id_1664/*VecIterRange<char>*/ v1162; /*tmp_rval_1161*/
      id_1664/*VecIterRange<char>*/ v1160; /*__range*/
      ((v1160)=(id_2110/*lop VecIterRange<char> iter StrR s*/(&(*v1159))));
      ((v1166)=(id_2066/*op VecIter<char> .call.end VecIterRange<char>P slf*/((&(*(((v1165)=(v1160)), (&(v1165))))))));
      ((v1163)=(id_2065/*op VecIter<char> .call.begin VecIterRange<char>P slf*/((&(*(((v1162)=(v1160)), (&(v1162))))))));
      while ((id_2063/*op bool != VecIter<char> a VecIter<char> b*/((v1163), (v1166)))) {
        ((v1167)=(*id_2064/*lop charR * VecIter<char> slf*/((v1163))));
        if ((((v1167))==((v1158)))) {
          return ((bool)1);
        }
        (id_2061/*lop void ++ VecIter<char>R slf*/(&(v1163)));
      }
    }
  return ((bool)0);
} panic("reached function end without returning anything op bool in char c StrR s\n");}

id_1665/*Str*/ id_2131/*op Str * str s i64 i*/(str v1168, i64 v1169) {{
  id_1665/*Str*/ v1171; /*t*/
  id_1665/*Str*/ v1170; /*slf*/
  ((v1170)=(id_2107/*lop Str Str*/()));
  ((v1171)=(id_2116/*lop Str Str str s*/((v1168))));
  {
      i64 v1179; /*j*/
      id_1654/*RangeIter<i64>*/ v1178; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1177; /*tmp_rval_1176*/
      id_1654/*RangeIter<i64>*/ v1175; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1174; /*tmp_rval_1173*/
      id_1655/*RangeIterRange<i64>*/ v1172; /*__range*/
      ((v1172)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1169))))));
      ((v1178)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1177)=(v1172)), (&(v1177))))))));
      ((v1175)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1174)=(v1172)), (&(v1174))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1175), (v1178)))) {
        ((v1179)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1175))));
        (id_2122/*op void += StrR a StrR b*/(&(v1170), &(v1171)));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1175)));
      }
    }
  (id_2108/*op void .call.dtor StrP slf*/((&(v1171))));
  return (v1170);
  (id_2108/*op void .call.dtor StrP slf*/((&(v1170))));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1171))));
  return (id_2107/*lop Str Str*/());
  (id_2108/*op void .call.dtor StrP slf*/((&(v1170))));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1171))));
} panic("reached function end without returning anything op Str * str s i64 i\n");}

id_1665/*Str*/ id_2132/*lop Str $ str s*/(str v1180) {{
  return (id_2116/*lop Str Str str s*/((v1180)));
} panic("reached function end without returning anything lop Str $ str s\n");}

id_1664/*VecIterRange<char>*/ id_2133/*lop VecIterRange<char> iter str s*/(str v1181) {{
  id_1665/*Str*/ v1183; /*tmp_rval_1182*/
  (id_2108/*op void .call.dtor StrP slf*/((&(v1183))));
  return (id_2110/*lop VecIterRange<char> iter StrR s*/(&(*(((v1183)=(id_2116/*lop Str Str str s*/((v1181)))), (&(v1183))))));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1183))));
} panic("reached function end without returning anything lop VecIterRange<char> iter str s\n");}

str id_2134/*lop str frog*/() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
} panic("reached function end without returning anything lop str frog\n");}

f64 id_2135/*lop f64 zh_sqrt f64 x*/(f64 v1184) {{
  f64 v1185; /*z*/
  ((v1185)=((f64)1.000000));
  {
      i64 v1193; /*i*/
      id_1654/*RangeIter<i64>*/ v1192; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1191; /*tmp_rval_1190*/
      id_1654/*RangeIter<i64>*/ v1189; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1188; /*tmp_rval_1187*/
      id_1655/*RangeIterRange<i64>*/ v1186; /*__range*/
      ((v1186)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((i64)10))))));
      ((v1192)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1191)=(v1186)), (&(v1191))))))));
      ((v1189)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1188)=(v1186)), (&(v1188))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1189), (v1192)))) {
        ((v1193)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1189))));
        (id_1834/*op void -= f64R a f64 b*/(&(v1185), (((((((v1185))*((v1185))))-((v1184))))/(((((f64)2.000000))*((v1185)))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1189)));
      }
    }
  return (v1185);
} panic("reached function end without returning anything lop f64 zh_sqrt f64 x\n");}

id_1666/*V2*/ id_2136/*lop V2 V2 f64 x f64 y*/(f64 v1194, f64 v1195) {{
  id_1666/*V2*/ v1196; /*slf*/
  (((&(v1196))->id_1685/*x*/)=(v1194));
  (((&(v1196))->id_1686/*y*/)=(v1195));
  return (v1196);
} panic("reached function end without returning anything lop V2 V2 f64 x f64 y\n");}

id_1666/*V2*/ id_2137/*op V2 + V2 a V2 b*/(id_1666/*V2*/ v1197, id_1666/*V2*/ v1198) {{
  (id_1833/*op void += f64R a f64 b*/(&((&(v1197))->id_1685/*x*/), ((&(v1198))->id_1685/*x*/)));
  (id_1833/*op void += f64R a f64 b*/(&((&(v1197))->id_1686/*y*/), ((&(v1198))->id_1686/*y*/)));
  return (v1197);
} panic("reached function end without returning anything op V2 + V2 a V2 b\n");}

id_1666/*V2*/ id_2138/*op V2 * V2 a V2 b*/(id_1666/*V2*/ v1199, id_1666/*V2*/ v1200) {{
  id_1666/*V2*/ v1201; /*res*/
  (((&(v1201))->id_1685/*x*/)=((((((&(v1199))->id_1685/*x*/))*(((&(v1200))->id_1685/*x*/))))-(((((&(v1199))->id_1686/*y*/))*(((&(v1200))->id_1686/*y*/))))));
  (((&(v1201))->id_1686/*y*/)=((((((&(v1199))->id_1685/*x*/))*(((&(v1200))->id_1686/*y*/))))+(((((&(v1199))->id_1686/*y*/))*(((&(v1200))->id_1685/*x*/))))));
  return (v1201);
} panic("reached function end without returning anything op V2 * V2 a V2 b\n");}

f64 id_2139/*lop f64 abs V2 a*/(id_1666/*V2*/ v1202) {{
  return (id_2135/*lop f64 zh_sqrt f64 x*/(((((((&(v1202))->id_1685/*x*/))*(((&(v1202))->id_1685/*x*/))))+(((((&(v1202))->id_1686/*y*/))*(((&(v1202))->id_1686/*y*/)))))));
} panic("reached function end without returning anything lop f64 abs V2 a\n");}

void id_2140/*lop void put V2 a*/(id_1666/*V2*/ v1203){
  (printf("%f", ((&(v1203))->id_1685/*x*/)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1203))->id_1686/*y*/)));
}

void id_2141/*lop void out V2 a*/(id_1666/*V2*/ v1204){
  (printf("%f", ((&(v1204))->id_1685/*x*/)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1204))->id_1686/*y*/)));
  (printf("%s\n", ((str)"")));
}

id_1643/*Out*/ id_2142/*rop Out < V2 i*/(id_1666/*V2*/ v1205) {{
  (id_2141/*lop void out V2 a*/((v1205)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < V2 i\n");}

id_1643/*Out*/ id_2143/*lop Out < V2 i*/(id_1666/*V2*/ v1206) {{
  ((id_2140/*lop void put V2 a*/((v1206))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < V2 i\n");}

id_1643/*Out*/ id_2144/*op Out < Out o V2 i*/(id_1643/*Out*/ v1207, id_1666/*V2*/ v1208) {{
  ((id_2140/*lop void put V2 a*/((v1208))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o V2 i\n");}

id_1667/*Rng*/ id_2145/*lop Rng Rng i64 seed*/(i64 v1209) {{
  id_1667/*Rng*/ v1210; /*slf*/
  (((&(v1210))->id_1687/*seed*/)=(v1209));
  return (v1210);
} panic("reached function end without returning anything lop Rng Rng i64 seed\n");}

id_1667/*Rng*/ id_2146/*lop Rng Rng*/() {{
  return (id_2145/*lop Rng Rng i64 seed*/(((i64)5323)));
} panic("reached function end without returning anything lop Rng Rng\n");}

i64 id_2147/*op i64 .call.call RngP slf*/(id_1667/*Rng*/* v1211) {{
  ((((v1211))->id_1687/*seed*/)=((((((i64)8253729))*((((v1211))->id_1687/*seed*/))))+(((i64)2396403))));
  return (((((v1211))->id_1687/*seed*/))%(((i64)32767)));
} panic("reached function end without returning anything op i64 .call.call RngP slf\n");}

int main(int argc, char *argv[]) {
  char v1623; /*ch*/
  id_1667/*Rng*/ v1618; /*rng*/
  id_1672/*Vec<Pair<i64 i64>>*/ v1617; /*snake*/
  i64(*v1622)(i64, i64); /*mod*/
  id_1671/*Pair<i64 i64>*/ v1426; /*head*/
  i64 v1423; /*tmp_rval_1422*/
  i64 v1425; /*tmp_rval_1424*/
  id_1668/*Vec<Str>*/ v1405; /*screen*/
  i64 v1214; /*tick*/
  i64 v1213; /*sy*/
  i64 v1212; /*sx*/
  (((v1212)=((i64)20)), ((v1213)=((i64)40)), ((v1214)=((i64)100)));
  ((v1405)=(id_2171/*lop Vec<Str> Vec<Str> i64 size Str default*/((v1212), (id_2131/*op Str * str s i64 i*/(((str)" "), (v1213))))));
  ((v1426)=(id_2195/*lop Pair<i64 i64> Pair<i64 i64> i64R a i64R b*/(&(*(((v1423)=((i64)10)), (&(v1423)))), &(*(((v1425)=((i64)20)), (&(v1425)))))));
  ((v1617)=(id_2226/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size Pair<i64 i64> default*/(((i64)1), (v1426))));
  ((v1618)=(id_2146/*lop Rng Rng*/()));
  ((v1622)=(id_2250/*lop i64 lambda_1619 i64 x i64 mx*/));
  ((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1405)), ((*(v1622))((id_2147/*op i64 .call.call RngP slf*/((&(v1618)))), (v1212)))))), ((*(v1622))((id_2147/*op i64 .call.call RngP slf*/((&(v1618)))), (v1213)))))=(id_2059/*lop char chr str s*/(((str)"@"))));
  ((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1405)), ((*(v1622))((id_2147/*op i64 .call.call RngP slf*/((&(v1618)))), (v1212)))))), ((*(v1622))((id_2147/*op i64 .call.call RngP slf*/((&(v1618)))), (v1213)))))=(id_2059/*lop char chr str s*/(((str)"@"))));
  ((v1623)=(id_2059/*lop char chr str s*/(((str)"d"))));
  while ((((v1623))!=((id_2059/*lop char chr str s*/(((str)"x")))))) {
    clock_t v1624; /*start*/
    ((v1624)=(clock()));
    while ((((dif_clock_t((clock()), (v1624))))<((v1214)))) {
      if ((!((!((kbhit())))))) {
        id_1665/*Str*/ v1627; /*tmp_rval_1626*/
        char v1625; /*t*/
        ((v1625)=(getch()));
        if ((id_2130/*op bool in char c StrR s*/((v1625), &(*(((v1627)=(id_2132/*lop Str $ str s*/(((str)"wasdx")))), (&(v1627))))))) {
          ((v1623)=(v1625));
        }
        (id_2108/*op void .call.dtor StrP slf*/((&(v1627))));
      }
    }
    (clrscr());
    {
        char v1628; /*switch*/
        ((v1628)=(v1623));
        if ((id_2058/*op bool == char ch str s*/((v1628), ((str)"w")))) {
          (((&(v1426))->id_1688/*a*/)=((*(v1622))(((((&(v1426))->id_1688/*a*/))-(((i64)1))), (v1212))));
        }
 else if ((id_2058/*op bool == char ch str s*/((v1628), ((str)"a")))) {
          (((&(v1426))->id_1689/*b*/)=((*(v1622))(((((&(v1426))->id_1689/*b*/))-(((i64)1))), (v1213))));
        }
 else if ((id_2058/*op bool == char ch str s*/((v1628), ((str)"s")))) {
          (((&(v1426))->id_1688/*a*/)=((*(v1622))(((((&(v1426))->id_1688/*a*/))+(((i64)1))), (v1212))));
        }
 else if ((id_2058/*op bool == char ch str s*/((v1628), ((str)"d")))) {
          (((&(v1426))->id_1689/*b*/)=((*(v1622))(((((&(v1426))->id_1689/*b*/))+(((i64)1))), (v1213))));
        }
      }
    {
        char v1629; /*switch*/
        ((v1629)=(*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1405)), ((&(v1426))->id_1688/*a*/)))), ((&(v1426))->id_1689/*b*/))));
        if ((id_2058/*op bool == char ch str s*/((v1629), ((str)"o")))) {
          if ((((v1623))==((id_2059/*lop char chr str s*/(((str)"x")))))) {
            (printf("%s\n", ((str)"Exit")));
          } else {
            (printf("%s\n", ((str)"Game over(")));
          }
          ((v1623)=(id_2059/*lop char chr str s*/(((str)"x"))));
        }
 else if ((id_2058/*op bool == char ch str s*/((v1629), ((str)" ")))) {
          i64 v1633; /*b*/
          i64 v1632; /*a*/
          id_1671/*Pair<i64 i64>*/ v1631; /*tmp_destructured_1630*/
          (((v1631)=(*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((&(v1617)), ((i64)0)))), ((v1632)=((&(v1631))->id_1688/*a*/)), ((v1633)=((&(v1631))->id_1689/*b*/)));
          ((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1405)), (v1632)))), (v1633)))=(id_2059/*lop char chr str s*/(((str)" "))));
          (id_2218/*op void .call.erase Vec<Pair<i64 i64>>P slf i64 pos*/((&(v1617)), ((i64)0)));
        }
 else if ((id_2058/*op bool == char ch str s*/((v1629), ((str)"@")))) {
          ((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1405)), ((*(v1622))((id_2147/*op i64 .call.call RngP slf*/((&(v1618)))), (v1212)))))), ((*(v1622))((id_2147/*op i64 .call.call RngP slf*/((&(v1618)))), (v1213)))))=(id_2059/*lop char chr str s*/(((str)"@"))));
        }
      }
    (id_2229/*op void += Vec<Pair<i64 i64>>R slf Pair<i64 i64> val*/(&(v1617), (v1426)));
    ((*id_2112/*op charR .call.sub StrP slf i64 pos*/((&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1405)), ((&(v1426))->id_1688/*a*/)))), ((&(v1426))->id_1689/*b*/)))=(id_2059/*lop char chr str s*/(((str)"o"))));
    (id_2159/*op void .call.println Vec<Str>P slf*/((&(v1405))));
  }
  (id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/((&(v1617))));
  (id_2169/*op void .call.dtor Vec<Str>P slf*/((&(v1405))));
}

id_1669/*VecIter<Str>*/ id_2148/*lop VecIter<Str> VecIter<Str> StrP ptr*/(id_1665/*Str*/* v1261) {{
  id_1669/*VecIter<Str>*/ v1262; /*slf*/
  (((&(v1262))->id_1683/*ptr*/)=(v1261));
  return (v1262);
} panic("reached function end without returning anything lop VecIter<Str> VecIter<Str> StrP ptr\n");}

void id_2149/*lop void ++ VecIter<Str>R slf*/(id_1669/*VecIter<Str>*/* v1263){
  (((&(*v1263))->id_1683/*ptr*/)=((id_1665/*Str*/*)((((i64)((&(*v1263))->id_1683/*ptr*/)))+(((((i64)1))*((sizeof(id_1665/*Str*/))))))));
}

id_1669/*VecIter<Str>*/ id_2150/*op VecIter<Str> + VecIter<Str> slf i64 i*/(id_1669/*VecIter<Str>*/ v1264, i64 v1265) {{
  (((&(v1264))->id_1683/*ptr*/)=((id_1665/*Str*/*)((((i64)((&(v1264))->id_1683/*ptr*/)))+((((v1265))*((sizeof(id_1665/*Str*/))))))));
  return (v1264);
} panic("reached function end without returning anything op VecIter<Str> + VecIter<Str> slf i64 i\n");}

bool id_2151/*op bool != VecIter<Str> a VecIter<Str> b*/(id_1669/*VecIter<Str>*/ v1266, id_1669/*VecIter<Str>*/ v1267) {{
  return ((((i64)((&(v1266))->id_1683/*ptr*/)))!=(((i64)((&(v1267))->id_1683/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<Str> a VecIter<Str> b\n");}

id_1665/*Str*/* id_2152/*lop StrR * VecIter<Str> slf*/(id_1669/*VecIter<Str>*/ v1268) {{
  return &(*((&(v1268))->id_1683/*ptr*/));
} panic("reached function end without returning anything lop StrR * VecIter<Str> slf\n");}

id_1669/*VecIter<Str>*/ id_2153/*op VecIter<Str> .call.begin VecIterRange<Str>P slf*/(id_1670/*VecIterRange<Str>*/* v1271) {{
  return (((v1271))->id_1677/*begin*/);
} panic("reached function end without returning anything op VecIter<Str> .call.begin VecIterRange<Str>P slf\n");}

id_1669/*VecIter<Str>*/ id_2154/*op VecIter<Str> .call.end VecIterRange<Str>P slf*/(id_1670/*VecIterRange<Str>*/* v1272) {{
  return (((v1272))->id_1678/*end*/);
} panic("reached function end without returning anything op VecIter<Str> .call.end VecIterRange<Str>P slf\n");}

id_1670/*VecIterRange<Str>*/ id_2155/*lop VecIterRange<Str> VecIterRange<Str> VecIter<Str> begin VecIter<Str> end*/(id_1669/*VecIter<Str>*/ v1273, id_1669/*VecIter<Str>*/ v1274) {{
  id_1670/*VecIterRange<Str>*/ v1275; /*slf*/
  (((&(v1275))->id_1677/*begin*/)=(v1273));
  (((&(v1275))->id_1678/*end*/)=(v1274));
  return (v1275);
} panic("reached function end without returning anything lop VecIterRange<Str> VecIterRange<Str> VecIter<Str> begin VecIter<Str> end\n");}

id_1665/*Str*/* id_2156/*op StrP .call.atP Vec<Str>P slf i64 pos*/(id_1668/*Vec<Str>*/* v1215, i64 v1216) {{
  return ((id_1665/*Str*/*)((id_1665/*Str*/*)((((i64)(((v1215))->id_1681/*head*/)))+((((v1216))*((sizeof(id_1665/*Str*/))))))));
} panic("reached function end without returning anything op StrP .call.atP Vec<Str>P slf i64 pos\n");}

id_1665/*Str*/* id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/(id_1668/*Vec<Str>*/* v1217, i64 v1218) {{
  return &(*(id_2156/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1217), (v1218))));
} panic("reached function end without returning anything op StrR .call.at Vec<Str>P slf i64 pos\n");}

void id_2158/*op void .call.print Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1219){
  (printf("%s", ((str)"[")));
  {
      i64 v1227; /*i*/
      id_1655/*RangeIterRange<i64>*/ v1225; /*tmp_rval_1224*/
      id_1654/*RangeIter<i64>*/ v1223; /*__cur*/
      id_1654/*RangeIter<i64>*/ v1226; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1222; /*tmp_rval_1221*/
      id_1655/*RangeIterRange<i64>*/ v1220; /*__range*/
      ((v1220)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1219))->id_1682/*size*/))))));
      ((v1226)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1225)=(v1220)), (&(v1225))))))));
      ((v1223)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1222)=(v1220)), (&(v1222))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1223), (v1226)))) {
        ((v1227)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1223))));
        if ((!((!((v1227)))))) {
          (printf("%s", ((str)" ")));
        }
        (id_2120/*lop void put StrR s*/(&(*(id_2156/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1219), (v1227))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1223)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2159/*op void .call.println Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1228){
  {
      i64 v1236; /*i*/
      id_1654/*RangeIter<i64>*/ v1235; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1234; /*tmp_rval_1233*/
      id_1654/*RangeIter<i64>*/ v1232; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1231; /*tmp_rval_1230*/
      id_1655/*RangeIterRange<i64>*/ v1229; /*__range*/
      ((v1229)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1228))->id_1682/*size*/))))));
      ((v1235)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1234)=(v1229)), (&(v1234))))))));
      ((v1232)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1231)=(v1229)), (&(v1231))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1232), (v1235)))) {
        ((v1236)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1232))));
        (id_2119/*lop void out StrR s*/(&(*(id_2156/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1228), (v1236))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1232)));
      }
    }
}

void id_2160/*op void .call.double_cap Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1237){
  i64 v1238; /*ncap*/
  ((v1238)=(((v1237))->id_1680/*cap*/));
  if ((((v1238))==(((i64)0)))) {
    ((v1238)=((i64)1));
    ((((v1237))->id_1681/*head*/)=((id_1665/*Str*/*)(alloc((sizeof(id_1665/*Str*/))))));
    ((((v1237))->id_1680/*cap*/)=(v1238));
  } else {
    id_1665/*Str*/* v1239; /*new_head*/
    (id_1749/*op void *= i64R a i64 b*/(&(v1238), ((i64)2)));
    ((v1239)=((id_1665/*Str*/*)(alloc((((v1238))*((sizeof(id_1665/*Str*/))))))));
    {
        i64 v1247; /*i*/
        id_1654/*RangeIter<i64>*/ v1246; /*__end*/
        id_1655/*RangeIterRange<i64>*/ v1245; /*tmp_rval_1244*/
        id_1654/*RangeIter<i64>*/ v1243; /*__cur*/
        id_1655/*RangeIterRange<i64>*/ v1242; /*tmp_rval_1241*/
        id_1655/*RangeIterRange<i64>*/ v1240; /*__range*/
        ((v1240)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1237))->id_1682/*size*/))))));
        ((v1246)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1245)=(v1240)), (&(v1245))))))));
        ((v1243)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1242)=(v1240)), (&(v1242))))))));
        while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1243), (v1246)))) {
          ((v1247)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1243))));
          ((*((id_1665/*Str*/*)((((i64)(v1239)))+((((v1247))*((sizeof(id_1665/*Str*/))))))))=(id_2117/*lop Str Str StrR s*/(&(*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1237), (v1247))))));
          (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1243)));
        }
      }
    (free((void*) ((i64)(((v1237))->id_1681/*head*/))));
    ((((v1237))->id_1681/*head*/)=(v1239));
  }
  ((((v1237))->id_1680/*cap*/)=(v1238));
}

void id_2161/*op void .call.push_back Vec<Str>P slf Str val*/(id_1668/*Vec<Str>*/* v1248, id_1665/*Str*/ v1249){
  if ((((((v1248))->id_1682/*size*/))==((((v1248))->id_1680/*cap*/)))) {
    (id_2160/*op void .call.double_cap Vec<Str>P slf*/((v1248)));
  }
  ((*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1248), (((v1248))->id_1682/*size*/)))=(id_2117/*lop Str Str StrR s*/(&(v1249))));
  (*id_1755/*lop i64R ++ i64R x*/(&(((v1248))->id_1682/*size*/)));
}

void id_2162/*op void .call.pop_back Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1250){
  (*id_1756/*lop i64R -- i64R x*/(&(((v1250))->id_1682/*size*/)));
}

void id_2163/*op void .call.erase Vec<Str>P slf i64 pos*/(id_1668/*Vec<Str>*/* v1251, i64 v1252){
  {
      id_1654/*RangeIter<i64>*/ v1259; /*__end*/
      i64 v1260; /*i*/
      id_1655/*RangeIterRange<i64>*/ v1258; /*tmp_rval_1257*/
      id_1654/*RangeIter<i64>*/ v1256; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1255; /*tmp_rval_1254*/
      id_1655/*RangeIterRange<i64>*/ v1253; /*__range*/
      ((v1253)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((((v1252))+(((i64)1))), (((v1251))->id_1682/*size*/))))));
      ((v1259)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1258)=(v1253)), (&(v1258))))))));
      ((v1256)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1255)=(v1253)), (&(v1255))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1256), (v1259)))) {
        ((v1260)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1256))));
        ((*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1251), (((v1260))-(((i64)1)))))=(id_2117/*lop Str Str StrR s*/(&(*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1251), (v1260))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1256)));
      }
    }
  (id_2162/*op void .call.pop_back Vec<Str>P slf*/((v1251)));
}

id_1669/*VecIter<Str>*/ id_2164/*op VecIter<Str> .call.begin Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1269) {{
  return (id_2148/*lop VecIter<Str> VecIter<Str> StrP ptr*/((((v1269))->id_1681/*head*/)));
} panic("reached function end without returning anything op VecIter<Str> .call.begin Vec<Str>P slf\n");}

id_1669/*VecIter<Str>*/ id_2165/*op VecIter<Str> .call.end Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1270) {{
  return (id_2148/*lop VecIter<Str> VecIter<Str> StrP ptr*/((id_2156/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1270), (((v1270))->id_1682/*size*/)))));
} panic("reached function end without returning anything op VecIter<Str> .call.end Vec<Str>P slf\n");}

id_1670/*VecIterRange<Str>*/ id_2166/*lop VecIterRange<Str> iter Vec<Str>R slf*/(id_1668/*Vec<Str>*/* v1276) {{
  id_1670/*VecIterRange<Str>*/ v1277; /*it*/
  (((&(v1277))->id_1677/*begin*/)=(id_2164/*op VecIter<Str> .call.begin Vec<Str>P slf*/((&(*v1276)))));
  (((&(v1277))->id_1678/*end*/)=(id_2165/*op VecIter<Str> .call.end Vec<Str>P slf*/((&(*v1276)))));
  return (v1277);
} panic("reached function end without returning anything lop VecIterRange<Str> iter Vec<Str>R slf\n");}

id_1665/*Str*/* id_2167/*op StrR .call.front Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1278) {{
  return &(*(((v1278))->id_1681/*head*/));
} panic("reached function end without returning anything op StrR .call.front Vec<Str>P slf\n");}

id_1665/*Str*/* id_2168/*op StrR .call.back Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1279) {{
  return &(*(id_2156/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1279), (((((v1279))->id_1682/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op StrR .call.back Vec<Str>P slf\n");}

void id_2169/*op void .call.dtor Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1280){
  if ((!((!(((i64)(((v1280))->id_1681/*head*/))))))) {
    (free((void*) ((i64)(((v1280))->id_1681/*head*/))));
    ((((v1280))->id_1682/*size*/)=((i64)0));
    ((((v1280))->id_1680/*cap*/)=((i64)0));
    ((((v1280))->id_1681/*head*/)=((id_1665/*Str*/*)((i64)0)));
  }
}

id_1668/*Vec<Str>*/ id_2170/*lop Vec<Str> Vec<Str> i64 size*/(i64 v1281) {{
  id_1668/*Vec<Str>*/ v1282; /*slf*/
  (((&(v1282))->id_1681/*head*/)=((id_1665/*Str*/*)((i64)0)));
  (((&(v1282))->id_1682/*size*/)=((i64)0));
  (((&(v1282))->id_1680/*cap*/)=((i64)0));
  while (((((&(v1282))->id_1680/*cap*/))<((v1281)))) {
    (id_2160/*op void .call.double_cap Vec<Str>P slf*/((&(v1282))));
  }
  (((&(v1282))->id_1682/*size*/)=(v1281));
  (((&(v1282))->id_1680/*cap*/)=(v1281));
  {
      i64 v1290; /*i*/
      id_1654/*RangeIter<i64>*/ v1289; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1288; /*tmp_rval_1287*/
      id_1654/*RangeIter<i64>*/ v1286; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1285; /*tmp_rval_1284*/
      id_1655/*RangeIterRange<i64>*/ v1283; /*__range*/
      ((v1283)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1282))->id_1682/*size*/))))));
      ((v1289)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1288)=(v1283)), (&(v1288))))))));
      ((v1286)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1285)=(v1283)), (&(v1285))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1286), (v1289)))) {
        ((v1290)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1286))));
        ((*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1282)), (v1290)))=(id_2107/*lop Str Str*/()));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1286)));
      }
    }
  return (v1282);
  (id_2169/*op void .call.dtor Vec<Str>P slf*/((&(v1282))));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> i64 size\n");}

id_1668/*Vec<Str>*/ id_2171/*lop Vec<Str> Vec<Str> i64 size Str default*/(i64 v1291, id_1665/*Str*/ v1292) {{
  id_1668/*Vec<Str>*/ v1293; /*slf*/
  ((v1293)=(id_2170/*lop Vec<Str> Vec<Str> i64 size*/((v1291))));
  {
      i64 v1301; /*i*/
      id_1654/*RangeIter<i64>*/ v1300; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1299; /*tmp_rval_1298*/
      id_1654/*RangeIter<i64>*/ v1297; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1296; /*tmp_rval_1295*/
      id_1655/*RangeIterRange<i64>*/ v1294; /*__range*/
      ((v1294)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1293))->id_1682/*size*/))))));
      ((v1300)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1299)=(v1294)), (&(v1299))))))));
      ((v1297)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1296)=(v1294)), (&(v1296))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1297), (v1300)))) {
        ((v1301)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1297))));
        ((*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1293)), (v1301)))=(id_2117/*lop Str Str StrR s*/(&(v1292))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1297)));
      }
    }
  (id_2108/*op void .call.dtor StrP slf*/((&(v1292))));
  return (v1293);
  (id_2169/*op void .call.dtor Vec<Str>P slf*/((&(v1293))));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> i64 size Str default\n");}

id_1668/*Vec<Str>*/ id_2172/*lop Vec<Str> Vec<Str>*/() {{
  return (id_2170/*lop Vec<Str> Vec<Str> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str>\n");}

id_1668/*Vec<Str>*/ id_2173/*lop Vec<Str> Vec<Str> Vec<Str>R other*/(id_1668/*Vec<Str>*/* v1302) {{
  id_1668/*Vec<Str>*/ v1303; /*slf*/
  ((v1303)=(id_2170/*lop Vec<Str> Vec<Str> i64 size*/(((&(*v1302))->id_1682/*size*/))));
  {
      i64 v1311; /*i*/
      id_1654/*RangeIter<i64>*/ v1310; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1309; /*tmp_rval_1308*/
      id_1654/*RangeIter<i64>*/ v1307; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1306; /*tmp_rval_1305*/
      id_1655/*RangeIterRange<i64>*/ v1304; /*__range*/
      ((v1304)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1302))->id_1682/*size*/))))));
      ((v1310)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1309)=(v1304)), (&(v1309))))))));
      ((v1307)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1306)=(v1304)), (&(v1306))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1307), (v1310)))) {
        ((v1311)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1307))));
        ((*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1303)), (v1311)))=(id_2117/*lop Str Str StrR s*/(&(*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(*v1302)), (v1311))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1307)));
      }
    }
  return (v1303);
  (id_2169/*op void .call.dtor Vec<Str>P slf*/((&(v1303))));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> Vec<Str>R other\n");}

void id_2174/*op void += Vec<Str>R slf Str val*/(id_1668/*Vec<Str>*/* v1312, id_1665/*Str*/ v1313){
  (id_2161/*op void .call.push_back Vec<Str>P slf Str val*/((&(*v1312)), (v1313)));
}

void id_2175/*op void += Vec<Str>R slf Vec<Str>R other*/(id_1668/*Vec<Str>*/* v1314, id_1668/*Vec<Str>*/* v1315){
  {
      i64 v1323; /*i*/
      id_1654/*RangeIter<i64>*/ v1322; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1321; /*tmp_rval_1320*/
      id_1654/*RangeIter<i64>*/ v1319; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1318; /*tmp_rval_1317*/
      id_1655/*RangeIterRange<i64>*/ v1316; /*__range*/
      ((v1316)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1315))->id_1682/*size*/))))));
      ((v1322)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1321)=(v1316)), (&(v1321))))))));
      ((v1319)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1318)=(v1316)), (&(v1318))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1319), (v1322)))) {
        ((v1323)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1319))));
        (id_2161/*op void .call.push_back Vec<Str>P slf Str val*/((&(*v1314)), (*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(*v1315)), (v1323)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1319)));
      }
    }
}

id_1668/*Vec<Str>*/ id_2176/*op Vec<Str> ,, Str a Str b*/(id_1665/*Str*/ v1324, id_1665/*Str*/ v1325) {{
  id_1668/*Vec<Str>*/ v1326; /*slf*/
  ((v1326)=(id_2172/*lop Vec<Str> Vec<Str>*/()));
  (id_2174/*op void += Vec<Str>R slf Str val*/(&(v1326), (v1324)));
  (id_2174/*op void += Vec<Str>R slf Str val*/(&(v1326), (v1325)));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1324))));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1325))));
  return (v1326);
  (id_2169/*op void .call.dtor Vec<Str>P slf*/((&(v1326))));
} panic("reached function end without returning anything op Vec<Str> ,, Str a Str b\n");}

id_1668/*Vec<Str>*/* id_2177/*op Vec<Str>R ,, Vec<Str>R v Str a*/(id_1668/*Vec<Str>*/* v1327, id_1665/*Str*/ v1328) {{
  (id_2174/*op void += Vec<Str>R slf Str val*/(&(*v1327), (v1328)));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1328))));
  return &(*v1327);
} panic("reached function end without returning anything op Vec<Str>R ,, Vec<Str>R v Str a\n");}

void id_2178/*lop void put Vec<Str>R slf*/(id_1668/*Vec<Str>*/* v1329){
  (id_2158/*op void .call.print Vec<Str>P slf*/((&(*v1329))));
}

void id_2179/*lop void out Vec<Str>R slf*/(id_1668/*Vec<Str>*/* v1330){
  (id_2158/*op void .call.print Vec<Str>P slf*/((&(*v1330))));
  (printf("%s\n", ((str)"")));
}

id_1643/*Out*/ id_2180/*rop Out < Vec<Str>R i*/(id_1668/*Vec<Str>*/* v1331) {{
  (id_2179/*lop void out Vec<Str>R slf*/(&(*v1331)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<Str>R i\n");}

id_1643/*Out*/ id_2181/*lop Out < Vec<Str>R i*/(id_1668/*Vec<Str>*/* v1332) {{
  ((id_2178/*lop void put Vec<Str>R slf*/(&(*v1332))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<Str>R i\n");}

id_1643/*Out*/ id_2182/*op Out < Out o Vec<Str>R i*/(id_1643/*Out*/ v1333, id_1668/*Vec<Str>*/* v1334) {{
  ((id_2178/*lop void put Vec<Str>R slf*/(&(*v1334))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<Str>R i\n");}

id_1665/*Str*/* id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/(id_1668/*Vec<Str>*/* v1335, i64 v1336) {{
  if ((((v1336))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1336), (((v1335))->id_1682/*size*/)));
  }
  return &(*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1335), (v1336)));
} panic("reached function end without returning anything op StrR .call.sub Vec<Str>P slf i64 id\n");}

id_1668/*Vec<Str>*/ id_2184/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/(id_1668/*Vec<Str>*/* v1337, i64 v1338, i64 v1339) {{
  id_1668/*Vec<Str>*/ v1340; /*res*/
  ((v1340)=(id_2170/*lop Vec<Str> Vec<Str> i64 size*/(((i64)0))));
  {
      i64 v1348; /*i*/
      id_1654/*RangeIter<i64>*/ v1347; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1346; /*tmp_rval_1345*/
      id_1654/*RangeIter<i64>*/ v1344; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1343; /*tmp_rval_1342*/
      id_1655/*RangeIterRange<i64>*/ v1341; /*__range*/
      ((v1341)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((v1338), (v1339))))));
      ((v1347)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1346)=(v1341)), (&(v1346))))))));
      ((v1344)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1343)=(v1341)), (&(v1343))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1344), (v1347)))) {
        ((v1348)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1344))));
        (id_2161/*op void .call.push_back Vec<Str>P slf Str val*/((&(v1340)), (*id_2157/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1337), (v1348)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1344)));
      }
    }
  return (v1340);
  (id_2169/*op void .call.dtor Vec<Str>P slf*/((&(v1340))));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end\n");}

id_1668/*Vec<Str>*/ id_2185/*op Vec<Str> .call.sub Vec<Str>P slf Range<i64> r*/(id_1668/*Vec<Str>*/* v1349, id_1653/*Range<i64>*/ v1350) {{
  i64 v1352; /*end*/
  i64 v1351; /*begin*/
  (((v1351)=((&(v1350))->id_1677/*begin*/)), ((v1352)=((&(v1350))->id_1678/*end*/)));
  if ((((v1351))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1351), (((v1349))->id_1682/*size*/)));
  }
  if ((((v1351))<(((i64)0)))) {
    ((v1351)=((i64)0));
  }
  if ((((v1352))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1352), (((v1349))->id_1682/*size*/)));
  }
  if ((((v1352))>((((v1349))->id_1682/*size*/)))) {
    ((v1352)=(((v1349))->id_1682/*size*/));
  }
  return (id_2184/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/((v1349), (v1351), (v1352)));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf Range<i64> r\n");}

id_1668/*Vec<Str>*/ id_2186/*op Vec<Str> .call.sub Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1353) {{
  return (id_2184/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/((v1353), ((i64)0), (((v1353))->id_1682/*size*/)));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf\n");}

bool id_2187/*op bool < Vec<Str>R a Vec<Str>R b*/(id_1668/*Vec<Str>*/* v1354, id_1668/*Vec<Str>*/* v1355) {{
  {
      i64 v1363; /*i*/
      id_1654/*RangeIter<i64>*/ v1362; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1361; /*tmp_rval_1360*/
      id_1654/*RangeIter<i64>*/ v1359; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1358; /*tmp_rval_1357*/
      id_1655/*RangeIterRange<i64>*/ v1356; /*__range*/
      ((v1356)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1701/*lop i64 min i64 a i64 b*/(((&(*v1354))->id_1682/*size*/), ((&(*v1355))->id_1682/*size*/))))))));
      ((v1362)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1361)=(v1356)), (&(v1361))))))));
      ((v1359)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1358)=(v1356)), (&(v1358))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1359), (v1362)))) {
        ((v1363)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1359))));
        if ((id_2129/*op bool < StrR a StrR b*/(&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1354)), (v1363))), &(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1355)), (v1363)))))) {
          return ((bool)1);
        }
 else if ((id_2129/*op bool < StrR a StrR b*/(&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1355)), (v1363))), &(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1354)), (v1363)))))) {
          return ((bool)0);
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1359)));
      }
    }
  if (((((&(*v1354))->id_1682/*size*/))<(((&(*v1355))->id_1682/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1354))->id_1682/*size*/))>(((&(*v1355))->id_1682/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<Str>R a Vec<Str>R b\n");}

void id_2188/*lop void swap StrP a StrP b*/(id_1665/*Str*/* v1364, id_1665/*Str*/* v1365){
  id_1665/*Str*/ v1366; /*t*/
  ((v1366)=(*(v1364)));
  ((*(v1364))=(id_2117/*lop Str Str StrR s*/(&(*(v1365)))));
  ((*(v1365))=(id_2117/*lop Str Str StrR s*/(&(v1366))));
  (id_2108/*op void .call.dtor StrP slf*/((&(v1366))));
}

id_1665/*Str*/* id_2189/*lop StrP partition StrP lo StrP hi*/(id_1665/*Str*/* v1367, id_1665/*Str*/* v1368) {{
  id_1665/*Str*/* v1371; /*j*/
  id_1665/*Str*/* v1370; /*i*/
  id_1665/*Str*/* v1369; /*pivot*/
  (((v1369)=((id_1665/*Str*/*)((((i64)(v1368)))-(((((i64)1))*((sizeof(id_1665/*Str*/)))))))), ((v1370)=(v1367)), ((v1371)=(v1367)));
  ((v1371)=(v1367));
  while (((((i64)(v1371)))!=(((i64)(v1369))))) {
    if ((id_2129/*op bool < StrR a StrR b*/(&(*(v1371)), &(*(v1369))))) {
      (id_2188/*lop void swap StrP a StrP b*/((v1370), (v1371)));
      ((v1370)=((id_1665/*Str*/*)((((i64)(v1370)))+(((((i64)1))*((sizeof(id_1665/*Str*/))))))));
    }
    ((v1371)=((id_1665/*Str*/*)((((i64)(v1371)))+(((((i64)1))*((sizeof(id_1665/*Str*/))))))));
  }
  (id_2188/*lop void swap StrP a StrP b*/((v1370), (v1369)));
  return (v1370);
} panic("reached function end without returning anything lop StrP partition StrP lo StrP hi\n");}

void id_2190/*lop void qsort StrP lhs StrP rhs*/(id_1665/*Str*/* v1372, id_1665/*Str*/* v1373){
  i64 v1375; /*b*/
  i64 v1374; /*a*/
  ((v1374)=((((i64)(v1373)))-(((i64)(v1372)))));
  ((v1375)=(sizeof(id_1665/*Str*/)));
  if ((((v1374))>((v1375)))) {
    id_1665/*Str*/* v1376; /*pi*/
    ((v1376)=(id_2189/*lop StrP partition StrP lo StrP hi*/((v1372), (v1373))));
    (id_2190/*lop void qsort StrP lhs StrP rhs*/((v1372), (v1376)));
    ((v1376)=((id_1665/*Str*/*)((((i64)(v1376)))+(((((i64)1))*((sizeof(id_1665/*Str*/))))))));
    (id_2190/*lop void qsort StrP lhs StrP rhs*/((v1376), (v1373)));
  }
}

void id_2191/*op void .call.sort Vec<Str>P slf*/(id_1668/*Vec<Str>*/* v1377){
  id_1669/*VecIter<Str>*/ v1381; /*tmp_rval_1380*/
  id_1669/*VecIter<Str>*/ v1379; /*tmp_rval_1378*/
  (id_2190/*lop void qsort StrP lhs StrP rhs*/(((&(*(((v1379)=(id_2164/*op VecIter<Str> .call.begin Vec<Str>P slf*/((v1377)))), (&(v1379)))))->id_1683/*ptr*/), ((&(*(((v1381)=(id_2165/*op VecIter<Str> .call.end Vec<Str>P slf*/((v1377)))), (&(v1381)))))->id_1683/*ptr*/)));
}

void id_2192/*lop void sort Vec<Str>R slf*/(id_1668/*Vec<Str>*/* v1382){
  (id_2191/*op void .call.sort Vec<Str>P slf*/((&(*v1382))));
}

id_1668/*Vec<Str>*/ id_2193/*op Vec<Str> .call.map Vec<Str>P slf F<Str StrR> f*/(id_1668/*Vec<Str>*/* v1383, id_1665/*Str*/(*v1384)(id_1665/*Str*/*)) {{
  id_1668/*Vec<Str>*/ v1385; /*r*/
  ((v1385)=(id_2170/*lop Vec<Str> Vec<Str> i64 size*/((((v1383))->id_1682/*size*/))));
  {
      i64 v1393; /*i*/
      id_1654/*RangeIter<i64>*/ v1392; /*__end*/
      id_1654/*RangeIter<i64>*/ v1389; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1388; /*tmp_rval_1387*/
      id_1655/*RangeIterRange<i64>*/ v1391; /*tmp_rval_1390*/
      id_1655/*RangeIterRange<i64>*/ v1386; /*__range*/
      ((v1386)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1383))->id_1682/*size*/))))));
      ((v1392)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1391)=(v1386)), (&(v1391))))))));
      ((v1389)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1388)=(v1386)), (&(v1388))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1389), (v1392)))) {
        ((v1393)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1389))));
        ((*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1385)), (v1393)))=((*(v1384))(&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1383), (v1393))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1389)));
      }
    }
  return (v1385);
  (id_2169/*op void .call.dtor Vec<Str>P slf*/((&(v1385))));
} panic("reached function end without returning anything op Vec<Str> .call.map Vec<Str>P slf F<Str StrR> f\n");}

id_1668/*Vec<Str>*/ id_2194/*op Vec<Str> .call.filter Vec<Str>P slf F<bool StrR> f*/(id_1668/*Vec<Str>*/* v1394, bool(*v1395)(id_1665/*Str*/*)) {{
  id_1668/*Vec<Str>*/ v1396; /*r*/
  ((v1396)=(id_2172/*lop Vec<Str> Vec<Str>*/()));
  {
      i64 v1404; /*i*/
      id_1654/*RangeIter<i64>*/ v1403; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1402; /*tmp_rval_1401*/
      id_1654/*RangeIter<i64>*/ v1400; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1399; /*tmp_rval_1398*/
      id_1655/*RangeIterRange<i64>*/ v1397; /*__range*/
      ((v1397)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1394))->id_1682/*size*/))))));
      ((v1403)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1402)=(v1397)), (&(v1402))))))));
      ((v1400)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1399)=(v1397)), (&(v1399))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1400), (v1403)))) {
        ((v1404)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1400))));
        if (((*(v1395))(&(*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1394), (v1404)))))) {
          (id_2174/*op void += Vec<Str>R slf Str val*/(&(v1396), (*id_2183/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1394), (v1404)))));
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1400)));
      }
    }
  return (v1396);
  (id_2169/*op void .call.dtor Vec<Str>P slf*/((&(v1396))));
} panic("reached function end without returning anything op Vec<Str> .call.filter Vec<Str>P slf F<bool StrR> f\n");}

id_1671/*Pair<i64 i64>*/ id_2195/*lop Pair<i64 i64> Pair<i64 i64> i64R a i64R b*/(i64* v1406, i64* v1407) {{
  id_1671/*Pair<i64 i64>*/ v1408; /*slf*/
  (((&(v1408))->id_1688/*a*/)=(*v1406));
  (((&(v1408))->id_1689/*b*/)=(*v1407));
  return (v1408);
} panic("reached function end without returning anything lop Pair<i64 i64> Pair<i64 i64> i64R a i64R b\n");}

id_1671/*Pair<i64 i64>*/ id_2196/*lop Pair<i64 i64> Pair<i64 i64>*/() {{
  i64 v1412; /*tmp_rval_1411*/
  i64 v1410; /*tmp_rval_1409*/
  return (id_2195/*lop Pair<i64 i64> Pair<i64 i64> i64R a i64R b*/(&(*(((v1410)=(id_1693/*lop i64 i64*/())), (&(v1410)))), &(*(((v1412)=(id_1693/*lop i64 i64*/())), (&(v1412))))));
} panic("reached function end without returning anything lop Pair<i64 i64> Pair<i64 i64>\n");}

bool id_2197/*op bool < Pair<i64 i64>R a Pair<i64 i64>R b*/(id_1671/*Pair<i64 i64>*/* v1413, id_1671/*Pair<i64 i64>*/* v1414) {{
  bool v1415; /*t*/
  ((v1415)=((((&(*v1413))->id_1688/*a*/))<(((&(*v1414))->id_1688/*a*/))));
  if ((v1415)) {
    return (v1415);
  }
  ((v1415)=((((&(*v1414))->id_1688/*a*/))<(((&(*v1414))->id_1688/*a*/))));
  if ((v1415)) {
    return (v1415);
  }
  return ((((&(*v1413))->id_1689/*b*/))<(((&(*v1414))->id_1689/*b*/)));
} panic("reached function end without returning anything op bool < Pair<i64 i64>R a Pair<i64 i64>R b\n");}

void id_2198/*lop void put Pair<i64 i64>R slf*/(id_1671/*Pair<i64 i64>*/* v1416){
  (printf("%s", ((str)"{")));
  (printf("%lld", ((&(*v1416))->id_1688/*a*/)));
  (printf("%s", ((str)" ")));
  (printf("%lld", ((&(*v1416))->id_1689/*b*/)));
  (printf("%s", ((str)"}")));
}

void id_2199/*lop void out Pair<i64 i64>R node*/(id_1671/*Pair<i64 i64>*/* v1417){
  (id_2198/*lop void put Pair<i64 i64>R slf*/(&(*v1417)));
  (printf("%s\n", ((str)"")));
}

id_1643/*Out*/ id_2200/*rop Out < Pair<i64 i64>R i*/(id_1671/*Pair<i64 i64>*/* v1418) {{
  (id_2199/*lop void out Pair<i64 i64>R node*/(&(*v1418)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Pair<i64 i64>R i\n");}

id_1643/*Out*/ id_2201/*lop Out < Pair<i64 i64>R i*/(id_1671/*Pair<i64 i64>*/* v1419) {{
  ((id_2198/*lop void put Pair<i64 i64>R slf*/(&(*v1419))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Pair<i64 i64>R i\n");}

id_1643/*Out*/ id_2202/*op Out < Out o Pair<i64 i64>R i*/(id_1643/*Out*/ v1420, id_1671/*Pair<i64 i64>*/* v1421) {{
  ((id_2198/*lop void put Pair<i64 i64>R slf*/(&(*v1421))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Pair<i64 i64>R i\n");}

id_1673/*VecIter<Pair<i64 i64>>*/ id_2203/*lop VecIter<Pair<i64 i64>> VecIter<Pair<i64 i64>> Pair<i64 i64>P ptr*/(id_1671/*Pair<i64 i64>*/* v1473) {{
  id_1673/*VecIter<Pair<i64 i64>>*/ v1474; /*slf*/
  (((&(v1474))->id_1683/*ptr*/)=(v1473));
  return (v1474);
} panic("reached function end without returning anything lop VecIter<Pair<i64 i64>> VecIter<Pair<i64 i64>> Pair<i64 i64>P ptr\n");}

void id_2204/*lop void ++ VecIter<Pair<i64 i64>>R slf*/(id_1673/*VecIter<Pair<i64 i64>>*/* v1475){
  (((&(*v1475))->id_1683/*ptr*/)=((id_1671/*Pair<i64 i64>*/*)((((i64)((&(*v1475))->id_1683/*ptr*/)))+(((((i64)1))*((sizeof(id_1671/*Pair<i64 i64>*/))))))));
}

id_1673/*VecIter<Pair<i64 i64>>*/ id_2205/*op VecIter<Pair<i64 i64>> + VecIter<Pair<i64 i64>> slf i64 i*/(id_1673/*VecIter<Pair<i64 i64>>*/ v1476, i64 v1477) {{
  (((&(v1476))->id_1683/*ptr*/)=((id_1671/*Pair<i64 i64>*/*)((((i64)((&(v1476))->id_1683/*ptr*/)))+((((v1477))*((sizeof(id_1671/*Pair<i64 i64>*/))))))));
  return (v1476);
} panic("reached function end without returning anything op VecIter<Pair<i64 i64>> + VecIter<Pair<i64 i64>> slf i64 i\n");}

bool id_2206/*op bool != VecIter<Pair<i64 i64>> a VecIter<Pair<i64 i64>> b*/(id_1673/*VecIter<Pair<i64 i64>>*/ v1478, id_1673/*VecIter<Pair<i64 i64>>*/ v1479) {{
  return ((((i64)((&(v1478))->id_1683/*ptr*/)))!=(((i64)((&(v1479))->id_1683/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<Pair<i64 i64>> a VecIter<Pair<i64 i64>> b\n");}

id_1671/*Pair<i64 i64>*/* id_2207/*lop Pair<i64 i64>R * VecIter<Pair<i64 i64>> slf*/(id_1673/*VecIter<Pair<i64 i64>>*/ v1480) {{
  return &(*((&(v1480))->id_1683/*ptr*/));
} panic("reached function end without returning anything lop Pair<i64 i64>R * VecIter<Pair<i64 i64>> slf\n");}

id_1673/*VecIter<Pair<i64 i64>>*/ id_2208/*op VecIter<Pair<i64 i64>> .call.begin VecIterRange<Pair<i64 i64>>P slf*/(id_1674/*VecIterRange<Pair<i64 i64>>*/* v1483) {{
  return (((v1483))->id_1677/*begin*/);
} panic("reached function end without returning anything op VecIter<Pair<i64 i64>> .call.begin VecIterRange<Pair<i64 i64>>P slf\n");}

id_1673/*VecIter<Pair<i64 i64>>*/ id_2209/*op VecIter<Pair<i64 i64>> .call.end VecIterRange<Pair<i64 i64>>P slf*/(id_1674/*VecIterRange<Pair<i64 i64>>*/* v1484) {{
  return (((v1484))->id_1678/*end*/);
} panic("reached function end without returning anything op VecIter<Pair<i64 i64>> .call.end VecIterRange<Pair<i64 i64>>P slf\n");}

id_1674/*VecIterRange<Pair<i64 i64>>*/ id_2210/*lop VecIterRange<Pair<i64 i64>> VecIterRange<Pair<i64 i64>> VecIter<Pair<i64 i64>> begin VecIter<Pair<i64 i64>> end*/(id_1673/*VecIter<Pair<i64 i64>>*/ v1485, id_1673/*VecIter<Pair<i64 i64>>*/ v1486) {{
  id_1674/*VecIterRange<Pair<i64 i64>>*/ v1487; /*slf*/
  (((&(v1487))->id_1677/*begin*/)=(v1485));
  (((&(v1487))->id_1678/*end*/)=(v1486));
  return (v1487);
} panic("reached function end without returning anything lop VecIterRange<Pair<i64 i64>> VecIterRange<Pair<i64 i64>> VecIter<Pair<i64 i64>> begin VecIter<Pair<i64 i64>> end\n");}

id_1671/*Pair<i64 i64>*/* id_2211/*op Pair<i64 i64>P .call.atP Vec<Pair<i64 i64>>P slf i64 pos*/(id_1672/*Vec<Pair<i64 i64>>*/* v1427, i64 v1428) {{
  return ((id_1671/*Pair<i64 i64>*/*)((id_1671/*Pair<i64 i64>*/*)((((i64)(((v1427))->id_1681/*head*/)))+((((v1428))*((sizeof(id_1671/*Pair<i64 i64>*/))))))));
} panic("reached function end without returning anything op Pair<i64 i64>P .call.atP Vec<Pair<i64 i64>>P slf i64 pos\n");}

id_1671/*Pair<i64 i64>*/* id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/(id_1672/*Vec<Pair<i64 i64>>*/* v1429, i64 v1430) {{
  return &(*(id_2211/*op Pair<i64 i64>P .call.atP Vec<Pair<i64 i64>>P slf i64 pos*/((v1429), (v1430))));
} panic("reached function end without returning anything op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos\n");}

void id_2213/*op void .call.print Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1431){
  (printf("%s", ((str)"[")));
  {
      i64 v1439; /*i*/
      id_1654/*RangeIter<i64>*/ v1438; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1437; /*tmp_rval_1436*/
      id_1654/*RangeIter<i64>*/ v1435; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1434; /*tmp_rval_1433*/
      id_1655/*RangeIterRange<i64>*/ v1432; /*__range*/
      ((v1432)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1431))->id_1682/*size*/))))));
      ((v1438)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1437)=(v1432)), (&(v1437))))))));
      ((v1435)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1434)=(v1432)), (&(v1434))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1435), (v1438)))) {
        ((v1439)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1435))));
        if ((!((!((v1439)))))) {
          (printf("%s", ((str)" ")));
        }
        (id_2198/*lop void put Pair<i64 i64>R slf*/(&(*(id_2211/*op Pair<i64 i64>P .call.atP Vec<Pair<i64 i64>>P slf i64 pos*/((v1431), (v1439))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1435)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2214/*op void .call.println Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1440){
  {
      i64 v1448; /*i*/
      id_1654/*RangeIter<i64>*/ v1447; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1446; /*tmp_rval_1445*/
      id_1654/*RangeIter<i64>*/ v1444; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1443; /*tmp_rval_1442*/
      id_1655/*RangeIterRange<i64>*/ v1441; /*__range*/
      ((v1441)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1440))->id_1682/*size*/))))));
      ((v1447)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1446)=(v1441)), (&(v1446))))))));
      ((v1444)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1443)=(v1441)), (&(v1443))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1444), (v1447)))) {
        ((v1448)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1444))));
        (id_2199/*lop void out Pair<i64 i64>R node*/(&(*(id_2211/*op Pair<i64 i64>P .call.atP Vec<Pair<i64 i64>>P slf i64 pos*/((v1440), (v1448))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1444)));
      }
    }
}

void id_2215/*op void .call.double_cap Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1449){
  i64 v1450; /*ncap*/
  ((v1450)=(((v1449))->id_1680/*cap*/));
  if ((((v1450))==(((i64)0)))) {
    ((v1450)=((i64)1));
    ((((v1449))->id_1681/*head*/)=((id_1671/*Pair<i64 i64>*/*)(alloc((sizeof(id_1671/*Pair<i64 i64>*/))))));
    ((((v1449))->id_1680/*cap*/)=(v1450));
  } else {
    id_1671/*Pair<i64 i64>*/* v1451; /*new_head*/
    (id_1749/*op void *= i64R a i64 b*/(&(v1450), ((i64)2)));
    ((v1451)=((id_1671/*Pair<i64 i64>*/*)(alloc((((v1450))*((sizeof(id_1671/*Pair<i64 i64>*/))))))));
    {
        i64 v1459; /*i*/
        id_1654/*RangeIter<i64>*/ v1458; /*__end*/
        id_1655/*RangeIterRange<i64>*/ v1457; /*tmp_rval_1456*/
        id_1654/*RangeIter<i64>*/ v1455; /*__cur*/
        id_1655/*RangeIterRange<i64>*/ v1454; /*tmp_rval_1453*/
        id_1655/*RangeIterRange<i64>*/ v1452; /*__range*/
        ((v1452)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1449))->id_1682/*size*/))))));
        ((v1458)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1457)=(v1452)), (&(v1457))))))));
        ((v1455)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1454)=(v1452)), (&(v1454))))))));
        while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1455), (v1458)))) {
          ((v1459)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1455))));
          ((*((id_1671/*Pair<i64 i64>*/*)((((i64)(v1451)))+((((v1459))*((sizeof(id_1671/*Pair<i64 i64>*/))))))))=(*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((v1449), (v1459))));
          (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1455)));
        }
      }
    (free((void*) ((i64)(((v1449))->id_1681/*head*/))));
    ((((v1449))->id_1681/*head*/)=(v1451));
  }
  ((((v1449))->id_1680/*cap*/)=(v1450));
}

void id_2216/*op void .call.push_back Vec<Pair<i64 i64>>P slf Pair<i64 i64> val*/(id_1672/*Vec<Pair<i64 i64>>*/* v1460, id_1671/*Pair<i64 i64>*/ v1461){
  if ((((((v1460))->id_1682/*size*/))==((((v1460))->id_1680/*cap*/)))) {
    (id_2215/*op void .call.double_cap Vec<Pair<i64 i64>>P slf*/((v1460)));
  }
  ((*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((v1460), (((v1460))->id_1682/*size*/)))=(v1461));
  (*id_1755/*lop i64R ++ i64R x*/(&(((v1460))->id_1682/*size*/)));
}

void id_2217/*op void .call.pop_back Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1462){
  (*id_1756/*lop i64R -- i64R x*/(&(((v1462))->id_1682/*size*/)));
}

void id_2218/*op void .call.erase Vec<Pair<i64 i64>>P slf i64 pos*/(id_1672/*Vec<Pair<i64 i64>>*/* v1463, i64 v1464){
  {
      i64 v1472; /*i*/
      id_1654/*RangeIter<i64>*/ v1471; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1470; /*tmp_rval_1469*/
      id_1654/*RangeIter<i64>*/ v1468; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1467; /*tmp_rval_1466*/
      id_1655/*RangeIterRange<i64>*/ v1465; /*__range*/
      ((v1465)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((((v1464))+(((i64)1))), (((v1463))->id_1682/*size*/))))));
      ((v1471)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1470)=(v1465)), (&(v1470))))))));
      ((v1468)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1467)=(v1465)), (&(v1467))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1468), (v1471)))) {
        ((v1472)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1468))));
        ((*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((v1463), (((v1472))-(((i64)1)))))=(*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((v1463), (v1472))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1468)));
      }
    }
  (id_2217/*op void .call.pop_back Vec<Pair<i64 i64>>P slf*/((v1463)));
}

id_1673/*VecIter<Pair<i64 i64>>*/ id_2219/*op VecIter<Pair<i64 i64>> .call.begin Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1481) {{
  return (id_2203/*lop VecIter<Pair<i64 i64>> VecIter<Pair<i64 i64>> Pair<i64 i64>P ptr*/((((v1481))->id_1681/*head*/)));
} panic("reached function end without returning anything op VecIter<Pair<i64 i64>> .call.begin Vec<Pair<i64 i64>>P slf\n");}

id_1673/*VecIter<Pair<i64 i64>>*/ id_2220/*op VecIter<Pair<i64 i64>> .call.end Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1482) {{
  return (id_2203/*lop VecIter<Pair<i64 i64>> VecIter<Pair<i64 i64>> Pair<i64 i64>P ptr*/((id_2211/*op Pair<i64 i64>P .call.atP Vec<Pair<i64 i64>>P slf i64 pos*/((v1482), (((v1482))->id_1682/*size*/)))));
} panic("reached function end without returning anything op VecIter<Pair<i64 i64>> .call.end Vec<Pair<i64 i64>>P slf\n");}

id_1674/*VecIterRange<Pair<i64 i64>>*/ id_2221/*lop VecIterRange<Pair<i64 i64>> iter Vec<Pair<i64 i64>>R slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1488) {{
  id_1674/*VecIterRange<Pair<i64 i64>>*/ v1489; /*it*/
  (((&(v1489))->id_1677/*begin*/)=(id_2219/*op VecIter<Pair<i64 i64>> .call.begin Vec<Pair<i64 i64>>P slf*/((&(*v1488)))));
  (((&(v1489))->id_1678/*end*/)=(id_2220/*op VecIter<Pair<i64 i64>> .call.end Vec<Pair<i64 i64>>P slf*/((&(*v1488)))));
  return (v1489);
} panic("reached function end without returning anything lop VecIterRange<Pair<i64 i64>> iter Vec<Pair<i64 i64>>R slf\n");}

id_1671/*Pair<i64 i64>*/* id_2222/*op Pair<i64 i64>R .call.front Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1490) {{
  return &(*(((v1490))->id_1681/*head*/));
} panic("reached function end without returning anything op Pair<i64 i64>R .call.front Vec<Pair<i64 i64>>P slf\n");}

id_1671/*Pair<i64 i64>*/* id_2223/*op Pair<i64 i64>R .call.back Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1491) {{
  return &(*(id_2211/*op Pair<i64 i64>P .call.atP Vec<Pair<i64 i64>>P slf i64 pos*/((v1491), (((((v1491))->id_1682/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op Pair<i64 i64>R .call.back Vec<Pair<i64 i64>>P slf\n");}

void id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1492){
  if ((!((!(((i64)(((v1492))->id_1681/*head*/))))))) {
    (free((void*) ((i64)(((v1492))->id_1681/*head*/))));
    ((((v1492))->id_1682/*size*/)=((i64)0));
    ((((v1492))->id_1680/*cap*/)=((i64)0));
    ((((v1492))->id_1681/*head*/)=((id_1671/*Pair<i64 i64>*/*)((i64)0)));
  }
}

id_1672/*Vec<Pair<i64 i64>>*/ id_2225/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size*/(i64 v1493) {{
  id_1672/*Vec<Pair<i64 i64>>*/ v1494; /*slf*/
  (((&(v1494))->id_1681/*head*/)=((id_1671/*Pair<i64 i64>*/*)((i64)0)));
  (((&(v1494))->id_1682/*size*/)=((i64)0));
  (((&(v1494))->id_1680/*cap*/)=((i64)0));
  while (((((&(v1494))->id_1680/*cap*/))<((v1493)))) {
    (id_2215/*op void .call.double_cap Vec<Pair<i64 i64>>P slf*/((&(v1494))));
  }
  (((&(v1494))->id_1682/*size*/)=(v1493));
  (((&(v1494))->id_1680/*cap*/)=(v1493));
  {
      i64 v1502; /*i*/
      id_1654/*RangeIter<i64>*/ v1501; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1500; /*tmp_rval_1499*/
      id_1654/*RangeIter<i64>*/ v1498; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1497; /*tmp_rval_1496*/
      id_1655/*RangeIterRange<i64>*/ v1495; /*__range*/
      ((v1495)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1494))->id_1682/*size*/))))));
      ((v1501)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1500)=(v1495)), (&(v1500))))))));
      ((v1498)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1497)=(v1495)), (&(v1497))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1498), (v1501)))) {
        ((v1502)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1498))));
        ((*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((&(v1494)), (v1502)))=(id_2196/*lop Pair<i64 i64> Pair<i64 i64>*/()));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1498)));
      }
    }
  return (v1494);
  (id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/((&(v1494))));
} panic("reached function end without returning anything lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size\n");}

id_1672/*Vec<Pair<i64 i64>>*/ id_2226/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size Pair<i64 i64> default*/(i64 v1503, id_1671/*Pair<i64 i64>*/ v1504) {{
  id_1672/*Vec<Pair<i64 i64>>*/ v1505; /*slf*/
  ((v1505)=(id_2225/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size*/((v1503))));
  {
      i64 v1513; /*i*/
      id_1654/*RangeIter<i64>*/ v1509; /*__cur*/
      id_1654/*RangeIter<i64>*/ v1512; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1511; /*tmp_rval_1510*/
      id_1655/*RangeIterRange<i64>*/ v1508; /*tmp_rval_1507*/
      id_1655/*RangeIterRange<i64>*/ v1506; /*__range*/
      ((v1506)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1505))->id_1682/*size*/))))));
      ((v1512)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1511)=(v1506)), (&(v1511))))))));
      ((v1509)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1508)=(v1506)), (&(v1508))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1509), (v1512)))) {
        ((v1513)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1509))));
        ((*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((&(v1505)), (v1513)))=(v1504));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1509)));
      }
    }
  return (v1505);
  (id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/((&(v1505))));
} panic("reached function end without returning anything lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size Pair<i64 i64> default\n");}

id_1672/*Vec<Pair<i64 i64>>*/ id_2227/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>>*/() {{
  return (id_2225/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>>\n");}

id_1672/*Vec<Pair<i64 i64>>*/ id_2228/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> Vec<Pair<i64 i64>>R other*/(id_1672/*Vec<Pair<i64 i64>>*/* v1514) {{
  id_1672/*Vec<Pair<i64 i64>>*/ v1515; /*slf*/
  ((v1515)=(id_2225/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size*/(((&(*v1514))->id_1682/*size*/))));
  {
      i64 v1523; /*i*/
      id_1654/*RangeIter<i64>*/ v1522; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1521; /*tmp_rval_1520*/
      id_1654/*RangeIter<i64>*/ v1519; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1518; /*tmp_rval_1517*/
      id_1655/*RangeIterRange<i64>*/ v1516; /*__range*/
      ((v1516)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1514))->id_1682/*size*/))))));
      ((v1522)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1521)=(v1516)), (&(v1521))))))));
      ((v1519)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1518)=(v1516)), (&(v1518))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1519), (v1522)))) {
        ((v1523)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1519))));
        ((*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((&(v1515)), (v1523)))=(*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((&(*v1514)), (v1523))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1519)));
      }
    }
  return (v1515);
  (id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/((&(v1515))));
} panic("reached function end without returning anything lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> Vec<Pair<i64 i64>>R other\n");}

void id_2229/*op void += Vec<Pair<i64 i64>>R slf Pair<i64 i64> val*/(id_1672/*Vec<Pair<i64 i64>>*/* v1524, id_1671/*Pair<i64 i64>*/ v1525){
  (id_2216/*op void .call.push_back Vec<Pair<i64 i64>>P slf Pair<i64 i64> val*/((&(*v1524)), (v1525)));
}

void id_2230/*op void += Vec<Pair<i64 i64>>R slf Vec<Pair<i64 i64>>R other*/(id_1672/*Vec<Pair<i64 i64>>*/* v1526, id_1672/*Vec<Pair<i64 i64>>*/* v1527){
  {
      i64 v1535; /*i*/
      id_1654/*RangeIter<i64>*/ v1534; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1533; /*tmp_rval_1532*/
      id_1654/*RangeIter<i64>*/ v1531; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1530; /*tmp_rval_1529*/
      id_1655/*RangeIterRange<i64>*/ v1528; /*__range*/
      ((v1528)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1527))->id_1682/*size*/))))));
      ((v1534)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1533)=(v1528)), (&(v1533))))))));
      ((v1531)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1530)=(v1528)), (&(v1530))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1531), (v1534)))) {
        ((v1535)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1531))));
        (id_2216/*op void .call.push_back Vec<Pair<i64 i64>>P slf Pair<i64 i64> val*/((&(*v1526)), (*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((&(*v1527)), (v1535)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1531)));
      }
    }
}

id_1672/*Vec<Pair<i64 i64>>*/ id_2231/*op Vec<Pair<i64 i64>> ,, Pair<i64 i64> a Pair<i64 i64> b*/(id_1671/*Pair<i64 i64>*/ v1536, id_1671/*Pair<i64 i64>*/ v1537) {{
  id_1672/*Vec<Pair<i64 i64>>*/ v1538; /*slf*/
  ((v1538)=(id_2227/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>>*/()));
  (id_2229/*op void += Vec<Pair<i64 i64>>R slf Pair<i64 i64> val*/(&(v1538), (v1536)));
  (id_2229/*op void += Vec<Pair<i64 i64>>R slf Pair<i64 i64> val*/(&(v1538), (v1537)));
  return (v1538);
  (id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/((&(v1538))));
} panic("reached function end without returning anything op Vec<Pair<i64 i64>> ,, Pair<i64 i64> a Pair<i64 i64> b\n");}

id_1672/*Vec<Pair<i64 i64>>*/* id_2232/*op Vec<Pair<i64 i64>>R ,, Vec<Pair<i64 i64>>R v Pair<i64 i64> a*/(id_1672/*Vec<Pair<i64 i64>>*/* v1539, id_1671/*Pair<i64 i64>*/ v1540) {{
  (id_2229/*op void += Vec<Pair<i64 i64>>R slf Pair<i64 i64> val*/(&(*v1539), (v1540)));
  return &(*v1539);
} panic("reached function end without returning anything op Vec<Pair<i64 i64>>R ,, Vec<Pair<i64 i64>>R v Pair<i64 i64> a\n");}

void id_2233/*lop void put Vec<Pair<i64 i64>>R slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1541){
  (id_2213/*op void .call.print Vec<Pair<i64 i64>>P slf*/((&(*v1541))));
}

void id_2234/*lop void out Vec<Pair<i64 i64>>R slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1542){
  (id_2213/*op void .call.print Vec<Pair<i64 i64>>P slf*/((&(*v1542))));
  (printf("%s\n", ((str)"")));
}

id_1643/*Out*/ id_2235/*rop Out < Vec<Pair<i64 i64>>R i*/(id_1672/*Vec<Pair<i64 i64>>*/* v1543) {{
  (id_2234/*lop void out Vec<Pair<i64 i64>>R slf*/(&(*v1543)));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<Pair<i64 i64>>R i\n");}

id_1643/*Out*/ id_2236/*lop Out < Vec<Pair<i64 i64>>R i*/(id_1672/*Vec<Pair<i64 i64>>*/* v1544) {{
  ((id_2233/*lop void put Vec<Pair<i64 i64>>R slf*/(&(*v1544))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<Pair<i64 i64>>R i\n");}

id_1643/*Out*/ id_2237/*op Out < Out o Vec<Pair<i64 i64>>R i*/(id_1643/*Out*/ v1545, id_1672/*Vec<Pair<i64 i64>>*/* v1546) {{
  ((id_2233/*lop void put Vec<Pair<i64 i64>>R slf*/(&(*v1546))), (printf("%s", ((str)" "))));
  return (id_1839/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<Pair<i64 i64>>R i\n");}

id_1671/*Pair<i64 i64>*/* id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/(id_1672/*Vec<Pair<i64 i64>>*/* v1547, i64 v1548) {{
  if ((((v1548))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1548), (((v1547))->id_1682/*size*/)));
  }
  return &(*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((v1547), (v1548)));
} panic("reached function end without returning anything op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id\n");}

id_1672/*Vec<Pair<i64 i64>>*/ id_2239/*op Vec<Pair<i64 i64>> .call.sub Vec<Pair<i64 i64>>P slf i64 begin i64 end*/(id_1672/*Vec<Pair<i64 i64>>*/* v1549, i64 v1550, i64 v1551) {{
  id_1672/*Vec<Pair<i64 i64>>*/ v1552; /*res*/
  ((v1552)=(id_2225/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size*/(((i64)0))));
  {
      i64 v1560; /*i*/
      id_1654/*RangeIter<i64>*/ v1559; /*__end*/
      id_1654/*RangeIter<i64>*/ v1556; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1555; /*tmp_rval_1554*/
      id_1655/*RangeIterRange<i64>*/ v1558; /*tmp_rval_1557*/
      id_1655/*RangeIterRange<i64>*/ v1553; /*__range*/
      ((v1553)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/((v1550), (v1551))))));
      ((v1559)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1558)=(v1553)), (&(v1558))))))));
      ((v1556)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1555)=(v1553)), (&(v1555))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1556), (v1559)))) {
        ((v1560)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1556))));
        (id_2216/*op void .call.push_back Vec<Pair<i64 i64>>P slf Pair<i64 i64> val*/((&(v1552)), (*id_2212/*op Pair<i64 i64>R .call.at Vec<Pair<i64 i64>>P slf i64 pos*/((v1549), (v1560)))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1556)));
      }
    }
  return (v1552);
  (id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/((&(v1552))));
} panic("reached function end without returning anything op Vec<Pair<i64 i64>> .call.sub Vec<Pair<i64 i64>>P slf i64 begin i64 end\n");}

id_1672/*Vec<Pair<i64 i64>>*/ id_2240/*op Vec<Pair<i64 i64>> .call.sub Vec<Pair<i64 i64>>P slf Range<i64> r*/(id_1672/*Vec<Pair<i64 i64>>*/* v1561, id_1653/*Range<i64>*/ v1562) {{
  i64 v1564; /*end*/
  i64 v1563; /*begin*/
  (((v1563)=((&(v1562))->id_1677/*begin*/)), ((v1564)=((&(v1562))->id_1678/*end*/)));
  if ((((v1563))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1563), (((v1561))->id_1682/*size*/)));
  }
  if ((((v1563))<(((i64)0)))) {
    ((v1563)=((i64)0));
  }
  if ((((v1564))<(((i64)0)))) {
    (id_1745/*op void += i64R a i64 b*/(&(v1564), (((v1561))->id_1682/*size*/)));
  }
  if ((((v1564))>((((v1561))->id_1682/*size*/)))) {
    ((v1564)=(((v1561))->id_1682/*size*/));
  }
  return (id_2239/*op Vec<Pair<i64 i64>> .call.sub Vec<Pair<i64 i64>>P slf i64 begin i64 end*/((v1561), (v1563), (v1564)));
} panic("reached function end without returning anything op Vec<Pair<i64 i64>> .call.sub Vec<Pair<i64 i64>>P slf Range<i64> r\n");}

id_1672/*Vec<Pair<i64 i64>>*/ id_2241/*op Vec<Pair<i64 i64>> .call.sub Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1565) {{
  return (id_2239/*op Vec<Pair<i64 i64>> .call.sub Vec<Pair<i64 i64>>P slf i64 begin i64 end*/((v1565), ((i64)0), (((v1565))->id_1682/*size*/)));
} panic("reached function end without returning anything op Vec<Pair<i64 i64>> .call.sub Vec<Pair<i64 i64>>P slf\n");}

bool id_2242/*op bool < Vec<Pair<i64 i64>>R a Vec<Pair<i64 i64>>R b*/(id_1672/*Vec<Pair<i64 i64>>*/* v1566, id_1672/*Vec<Pair<i64 i64>>*/* v1567) {{
  {
      i64 v1575; /*i*/
      id_1654/*RangeIter<i64>*/ v1574; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1573; /*tmp_rval_1572*/
      id_1654/*RangeIter<i64>*/ v1571; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1570; /*tmp_rval_1569*/
      id_1655/*RangeIterRange<i64>*/ v1568; /*__range*/
      ((v1568)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1701/*lop i64 min i64 a i64 b*/(((&(*v1566))->id_1682/*size*/), ((&(*v1567))->id_1682/*size*/))))))));
      ((v1574)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1573)=(v1568)), (&(v1573))))))));
      ((v1571)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1570)=(v1568)), (&(v1570))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1571), (v1574)))) {
        ((v1575)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1571))));
        if ((id_2197/*op bool < Pair<i64 i64>R a Pair<i64 i64>R b*/(&(*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((&(*v1566)), (v1575))), &(*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((&(*v1567)), (v1575)))))) {
          return ((bool)1);
        }
 else if ((id_2197/*op bool < Pair<i64 i64>R a Pair<i64 i64>R b*/(&(*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((&(*v1567)), (v1575))), &(*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((&(*v1566)), (v1575)))))) {
          return ((bool)0);
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1571)));
      }
    }
  if (((((&(*v1566))->id_1682/*size*/))<(((&(*v1567))->id_1682/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1566))->id_1682/*size*/))>(((&(*v1567))->id_1682/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<Pair<i64 i64>>R a Vec<Pair<i64 i64>>R b\n");}

void id_2243/*lop void swap Pair<i64 i64>P a Pair<i64 i64>P b*/(id_1671/*Pair<i64 i64>*/* v1576, id_1671/*Pair<i64 i64>*/* v1577){
  id_1671/*Pair<i64 i64>*/ v1578; /*t*/
  ((v1578)=(*(v1576)));
  ((*(v1576))=(*(v1577)));
  ((*(v1577))=(v1578));
}

id_1671/*Pair<i64 i64>*/* id_2244/*lop Pair<i64 i64>P partition Pair<i64 i64>P lo Pair<i64 i64>P hi*/(id_1671/*Pair<i64 i64>*/* v1579, id_1671/*Pair<i64 i64>*/* v1580) {{
  id_1671/*Pair<i64 i64>*/* v1583; /*j*/
  id_1671/*Pair<i64 i64>*/* v1582; /*i*/
  id_1671/*Pair<i64 i64>*/* v1581; /*pivot*/
  (((v1581)=((id_1671/*Pair<i64 i64>*/*)((((i64)(v1580)))-(((((i64)1))*((sizeof(id_1671/*Pair<i64 i64>*/)))))))), ((v1582)=(v1579)), ((v1583)=(v1579)));
  ((v1583)=(v1579));
  while (((((i64)(v1583)))!=(((i64)(v1581))))) {
    if ((id_2197/*op bool < Pair<i64 i64>R a Pair<i64 i64>R b*/(&(*(v1583)), &(*(v1581))))) {
      (id_2243/*lop void swap Pair<i64 i64>P a Pair<i64 i64>P b*/((v1582), (v1583)));
      ((v1582)=((id_1671/*Pair<i64 i64>*/*)((((i64)(v1582)))+(((((i64)1))*((sizeof(id_1671/*Pair<i64 i64>*/))))))));
    }
    ((v1583)=((id_1671/*Pair<i64 i64>*/*)((((i64)(v1583)))+(((((i64)1))*((sizeof(id_1671/*Pair<i64 i64>*/))))))));
  }
  (id_2243/*lop void swap Pair<i64 i64>P a Pair<i64 i64>P b*/((v1582), (v1581)));
  return (v1582);
} panic("reached function end without returning anything lop Pair<i64 i64>P partition Pair<i64 i64>P lo Pair<i64 i64>P hi\n");}

void id_2245/*lop void qsort Pair<i64 i64>P lhs Pair<i64 i64>P rhs*/(id_1671/*Pair<i64 i64>*/* v1584, id_1671/*Pair<i64 i64>*/* v1585){
  i64 v1587; /*b*/
  i64 v1586; /*a*/
  ((v1586)=((((i64)(v1585)))-(((i64)(v1584)))));
  ((v1587)=(sizeof(id_1671/*Pair<i64 i64>*/)));
  if ((((v1586))>((v1587)))) {
    id_1671/*Pair<i64 i64>*/* v1588; /*pi*/
    ((v1588)=(id_2244/*lop Pair<i64 i64>P partition Pair<i64 i64>P lo Pair<i64 i64>P hi*/((v1584), (v1585))));
    (id_2245/*lop void qsort Pair<i64 i64>P lhs Pair<i64 i64>P rhs*/((v1584), (v1588)));
    ((v1588)=((id_1671/*Pair<i64 i64>*/*)((((i64)(v1588)))+(((((i64)1))*((sizeof(id_1671/*Pair<i64 i64>*/))))))));
    (id_2245/*lop void qsort Pair<i64 i64>P lhs Pair<i64 i64>P rhs*/((v1588), (v1585)));
  }
}

void id_2246/*op void .call.sort Vec<Pair<i64 i64>>P slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1589){
  id_1673/*VecIter<Pair<i64 i64>>*/ v1593; /*tmp_rval_1592*/
  id_1673/*VecIter<Pair<i64 i64>>*/ v1591; /*tmp_rval_1590*/
  (id_2245/*lop void qsort Pair<i64 i64>P lhs Pair<i64 i64>P rhs*/(((&(*(((v1591)=(id_2219/*op VecIter<Pair<i64 i64>> .call.begin Vec<Pair<i64 i64>>P slf*/((v1589)))), (&(v1591)))))->id_1683/*ptr*/), ((&(*(((v1593)=(id_2220/*op VecIter<Pair<i64 i64>> .call.end Vec<Pair<i64 i64>>P slf*/((v1589)))), (&(v1593)))))->id_1683/*ptr*/)));
}

void id_2247/*lop void sort Vec<Pair<i64 i64>>R slf*/(id_1672/*Vec<Pair<i64 i64>>*/* v1594){
  (id_2246/*op void .call.sort Vec<Pair<i64 i64>>P slf*/((&(*v1594))));
}

id_1672/*Vec<Pair<i64 i64>>*/ id_2248/*op Vec<Pair<i64 i64>> .call.map Vec<Pair<i64 i64>>P slf F<Pair<i64 i64> Pair<i64 i64>R> f*/(id_1672/*Vec<Pair<i64 i64>>*/* v1595, id_1671/*Pair<i64 i64>*/(*v1596)(id_1671/*Pair<i64 i64>*/*)) {{
  id_1672/*Vec<Pair<i64 i64>>*/ v1597; /*r*/
  ((v1597)=(id_2225/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>> i64 size*/((((v1595))->id_1682/*size*/))));
  {
      i64 v1605; /*i*/
      id_1654/*RangeIter<i64>*/ v1604; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1603; /*tmp_rval_1602*/
      id_1654/*RangeIter<i64>*/ v1601; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1600; /*tmp_rval_1599*/
      id_1655/*RangeIterRange<i64>*/ v1598; /*__range*/
      ((v1598)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1595))->id_1682/*size*/))))));
      ((v1604)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1603)=(v1598)), (&(v1603))))))));
      ((v1601)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1600)=(v1598)), (&(v1600))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1601), (v1604)))) {
        ((v1605)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1601))));
        ((*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((&(v1597)), (v1605)))=((*(v1596))(&(*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((v1595), (v1605))))));
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1601)));
      }
    }
  return (v1597);
  (id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/((&(v1597))));
} panic("reached function end without returning anything op Vec<Pair<i64 i64>> .call.map Vec<Pair<i64 i64>>P slf F<Pair<i64 i64> Pair<i64 i64>R> f\n");}

id_1672/*Vec<Pair<i64 i64>>*/ id_2249/*op Vec<Pair<i64 i64>> .call.filter Vec<Pair<i64 i64>>P slf F<bool Pair<i64 i64>R> f*/(id_1672/*Vec<Pair<i64 i64>>*/* v1606, bool(*v1607)(id_1671/*Pair<i64 i64>*/*)) {{
  id_1672/*Vec<Pair<i64 i64>>*/ v1608; /*r*/
  ((v1608)=(id_2227/*lop Vec<Pair<i64 i64>> Vec<Pair<i64 i64>>*/()));
  {
      i64 v1616; /*i*/
      id_1654/*RangeIter<i64>*/ v1615; /*__end*/
      id_1655/*RangeIterRange<i64>*/ v1614; /*tmp_rval_1613*/
      id_1654/*RangeIter<i64>*/ v1612; /*__cur*/
      id_1655/*RangeIterRange<i64>*/ v1611; /*tmp_rval_1610*/
      id_1655/*RangeIterRange<i64>*/ v1609; /*__range*/
      ((v1609)=(id_1986/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1976/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1606))->id_1682/*size*/))))));
      ((v1615)=(id_1971/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1614)=(v1609)), (&(v1614))))))));
      ((v1612)=(id_1970/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1611)=(v1609)), (&(v1611))))))));
      while ((id_1969/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1612), (v1615)))) {
        ((v1616)=(id_1968/*lop i64 * RangeIter<i64> slf*/((v1612))));
        if (((*(v1607))(&(*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((v1606), (v1616)))))) {
          (id_2229/*op void += Vec<Pair<i64 i64>>R slf Pair<i64 i64> val*/(&(v1608), (*id_2238/*op Pair<i64 i64>R .call.sub Vec<Pair<i64 i64>>P slf i64 id*/((v1606), (v1616)))));
        }
        (id_1967/*lop void ++ RangeIter<i64>R slf*/(&(v1612)));
      }
    }
  return (v1608);
  (id_2224/*op void .call.dtor Vec<Pair<i64 i64>>P slf*/((&(v1608))));
} panic("reached function end without returning anything op Vec<Pair<i64 i64>> .call.filter Vec<Pair<i64 i64>>P slf F<bool Pair<i64 i64>R> f\n");}

i64 id_2250/*lop i64 lambda_1619 i64 x i64 mx*/(i64 v1620, i64 v1621) {{
  return (((((((v1620))%((v1621))))+((v1621))))%((v1621)));
} panic("reached function end without returning anything lop i64 lambda_1619 i64 x i64 mx\n");}

