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

char *inputString() {
  size_t size = 10;
  char *str;
  int ch;
  size_t len = 0;
  str = realloc(NULL, sizeof(*str)*size);
  if(!str)return str;
  while(EOF!=(ch=fgetc(stdin)) && ch != '\n'){
    str[len++]=ch;
    if (len==size) {
      str = realloc(str, sizeof(*str)*(size+=16));
      if(!str) return str;
    }
  }
  str[len++]='\0';
  return realloc(str, sizeof(*str)*len);
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
struct PROT_id_1492;
typedef struct PROT_id_1492/*IntOpMaker<i8>*/ id_1492/*IntOpMaker<i8>*/;
struct PROT_id_1493;
typedef struct PROT_id_1493/*IntOpMaker<i16>*/ id_1493/*IntOpMaker<i16>*/;
struct PROT_id_1494;
typedef struct PROT_id_1494/*IntOpMaker<i32>*/ id_1494/*IntOpMaker<i32>*/;
struct PROT_id_1495;
typedef struct PROT_id_1495/*IntOpMaker<i64>*/ id_1495/*IntOpMaker<i64>*/;
struct PROT_id_1496;
typedef struct PROT_id_1496/*IntOpMaker<u8>*/ id_1496/*IntOpMaker<u8>*/;
struct PROT_id_1497;
typedef struct PROT_id_1497/*IntOpMaker<u16>*/ id_1497/*IntOpMaker<u16>*/;
struct PROT_id_1498;
typedef struct PROT_id_1498/*IntOpMaker<u32>*/ id_1498/*IntOpMaker<u32>*/;
struct PROT_id_1499;
typedef struct PROT_id_1499/*IntOpMaker<u64>*/ id_1499/*IntOpMaker<u64>*/;
struct PROT_id_1500;
typedef struct PROT_id_1500/*IntOpMaker<char>*/ id_1500/*IntOpMaker<char>*/;
struct PROT_id_1501;
typedef struct PROT_id_1501/*Out*/ id_1501/*Out*/;
struct PROT_id_1502;
typedef struct PROT_id_1502/*Range<i8>*/ id_1502/*Range<i8>*/;
struct PROT_id_1503;
typedef struct PROT_id_1503/*RangeIter<i8>*/ id_1503/*RangeIter<i8>*/;
struct PROT_id_1504;
typedef struct PROT_id_1504/*RangeIterRange<i8>*/ id_1504/*RangeIterRange<i8>*/;
struct PROT_id_1505;
typedef struct PROT_id_1505/*Range<i16>*/ id_1505/*Range<i16>*/;
struct PROT_id_1506;
typedef struct PROT_id_1506/*RangeIter<i16>*/ id_1506/*RangeIter<i16>*/;
struct PROT_id_1507;
typedef struct PROT_id_1507/*RangeIterRange<i16>*/ id_1507/*RangeIterRange<i16>*/;
struct PROT_id_1508;
typedef struct PROT_id_1508/*Range<i32>*/ id_1508/*Range<i32>*/;
struct PROT_id_1509;
typedef struct PROT_id_1509/*RangeIter<i32>*/ id_1509/*RangeIter<i32>*/;
struct PROT_id_1510;
typedef struct PROT_id_1510/*RangeIterRange<i32>*/ id_1510/*RangeIterRange<i32>*/;
struct PROT_id_1511;
typedef struct PROT_id_1511/*Range<i64>*/ id_1511/*Range<i64>*/;
struct PROT_id_1512;
typedef struct PROT_id_1512/*RangeIter<i64>*/ id_1512/*RangeIter<i64>*/;
struct PROT_id_1513;
typedef struct PROT_id_1513/*RangeIterRange<i64>*/ id_1513/*RangeIterRange<i64>*/;
struct PROT_id_1514;
typedef struct PROT_id_1514/*Range<char>*/ id_1514/*Range<char>*/;
struct PROT_id_1515;
typedef struct PROT_id_1515/*RangeIter<char>*/ id_1515/*RangeIter<char>*/;
struct PROT_id_1516;
typedef struct PROT_id_1516/*RangeIterRange<char>*/ id_1516/*RangeIterRange<char>*/;
struct PROT_id_1517;
typedef struct PROT_id_1517/*Vec<i64>*/ id_1517/*Vec<i64>*/;
struct PROT_id_1518;
typedef struct PROT_id_1518/*VecIter<i64>*/ id_1518/*VecIter<i64>*/;
struct PROT_id_1519;
typedef struct PROT_id_1519/*VecIterRange<i64>*/ id_1519/*VecIterRange<i64>*/;
struct PROT_id_1520;
typedef struct PROT_id_1520/*Vec<char>*/ id_1520/*Vec<char>*/;
struct PROT_id_1521;
typedef struct PROT_id_1521/*VecIter<char>*/ id_1521/*VecIter<char>*/;
struct PROT_id_1522;
typedef struct PROT_id_1522/*VecIterRange<char>*/ id_1522/*VecIterRange<char>*/;
struct PROT_id_1523;
typedef struct PROT_id_1523/*Str*/ id_1523/*Str*/;
struct PROT_id_1524;
typedef struct PROT_id_1524/*V2*/ id_1524/*V2*/;
struct PROT_id_1525;
typedef struct PROT_id_1525/*Rng*/ id_1525/*Rng*/;
struct PROT_id_1526;
typedef struct PROT_id_1526/*MapNode<i64 i64>*/ id_1526/*MapNode<i64 i64>*/;
struct PROT_id_1527;
typedef struct PROT_id_1527/*AVLNode<MapNode<i64 i64>>*/ id_1527/*AVLNode<MapNode<i64 i64>>*/;
struct PROT_id_1528;
typedef struct PROT_id_1528/*AVLTree<MapNode<i64 i64>>*/ id_1528/*AVLTree<MapNode<i64 i64>>*/;
struct PROT_id_1529;
typedef struct PROT_id_1529/*AVLIter<MapNode<i64 i64>>*/ id_1529/*AVLIter<MapNode<i64 i64>>*/;
struct PROT_id_1530;
typedef struct PROT_id_1530/*AVLIterRange<MapNode<i64 i64>>*/ id_1530/*AVLIterRange<MapNode<i64 i64>>*/;
struct PROT_id_1531;
typedef struct PROT_id_1531/*Vec<MapNode<i64 i64>>*/ id_1531/*Vec<MapNode<i64 i64>>*/;
struct PROT_id_1532;
typedef struct PROT_id_1532/*VecIter<MapNode<i64 i64>>*/ id_1532/*VecIter<MapNode<i64 i64>>*/;
struct PROT_id_1533;
typedef struct PROT_id_1533/*VecIterRange<MapNode<i64 i64>>*/ id_1533/*VecIterRange<MapNode<i64 i64>>*/;
struct PROT_id_1534;
typedef struct PROT_id_1534/*Map<i64 i64>*/ id_1534/*Map<i64 i64>*/;

struct PROT_id_1492/*IntOpMaker<i8>*/ {
  bool id_1535;
};
struct PROT_id_1493/*IntOpMaker<i16>*/ {
  bool id_1535/*unused*/;
};
struct PROT_id_1494/*IntOpMaker<i32>*/ {
  bool id_1535/*unused*/;
};
struct PROT_id_1495/*IntOpMaker<i64>*/ {
  bool id_1535/*unused*/;
};
struct PROT_id_1496/*IntOpMaker<u8>*/ {
  bool id_1535/*unused*/;
};
struct PROT_id_1497/*IntOpMaker<u16>*/ {
  bool id_1535/*unused*/;
};
struct PROT_id_1498/*IntOpMaker<u32>*/ {
  bool id_1535/*unused*/;
};
struct PROT_id_1499/*IntOpMaker<u64>*/ {
  bool id_1535/*unused*/;
};
struct PROT_id_1500/*IntOpMaker<char>*/ {
  bool id_1535/*unused*/;
};
struct PROT_id_1501/*Out*/ {
  bool id_1536;
};
struct PROT_id_1502/*Range<i8>*/ {
  i8 id_1537;
  i8 id_1538;
};
struct PROT_id_1503/*RangeIter<i8>*/ {
  i8 id_1539;
};
struct PROT_id_1504/*RangeIterRange<i8>*/ {
  id_1503/*RangeIter<i8>*/ id_1537/*begin*/;
  id_1503/*RangeIter<i8>*/ id_1538/*end*/;
};
struct PROT_id_1505/*Range<i16>*/ {
  i16 id_1537/*begin*/;
  i16 id_1538/*end*/;
};
struct PROT_id_1506/*RangeIter<i16>*/ {
  i16 id_1539/*val*/;
};
struct PROT_id_1507/*RangeIterRange<i16>*/ {
  id_1506/*RangeIter<i16>*/ id_1537/*begin*/;
  id_1506/*RangeIter<i16>*/ id_1538/*end*/;
};
struct PROT_id_1508/*Range<i32>*/ {
  i32 id_1537/*begin*/;
  i32 id_1538/*end*/;
};
struct PROT_id_1509/*RangeIter<i32>*/ {
  i32 id_1539/*val*/;
};
struct PROT_id_1510/*RangeIterRange<i32>*/ {
  id_1509/*RangeIter<i32>*/ id_1537/*begin*/;
  id_1509/*RangeIter<i32>*/ id_1538/*end*/;
};
struct PROT_id_1511/*Range<i64>*/ {
  i64 id_1537/*begin*/;
  i64 id_1538/*end*/;
};
struct PROT_id_1512/*RangeIter<i64>*/ {
  i64 id_1539/*val*/;
};
struct PROT_id_1513/*RangeIterRange<i64>*/ {
  id_1512/*RangeIter<i64>*/ id_1537/*begin*/;
  id_1512/*RangeIter<i64>*/ id_1538/*end*/;
};
struct PROT_id_1514/*Range<char>*/ {
  char id_1537/*begin*/;
  char id_1538/*end*/;
};
struct PROT_id_1515/*RangeIter<char>*/ {
  char id_1539/*val*/;
};
struct PROT_id_1516/*RangeIterRange<char>*/ {
  id_1515/*RangeIter<char>*/ id_1537/*begin*/;
  id_1515/*RangeIter<char>*/ id_1538/*end*/;
};
struct PROT_id_1517/*Vec<i64>*/ {
  i64 id_1540;
  i64* id_1541;
  i64 id_1542;
};
struct PROT_id_1518/*VecIter<i64>*/ {
  i64* id_1543;
};
struct PROT_id_1519/*VecIterRange<i64>*/ {
  id_1518/*VecIter<i64>*/ id_1537/*begin*/;
  id_1518/*VecIter<i64>*/ id_1538/*end*/;
};
struct PROT_id_1520/*Vec<char>*/ {
  i64 id_1540/*cap*/;
  char* id_1541/*head*/;
  i64 id_1542/*size*/;
};
struct PROT_id_1521/*VecIter<char>*/ {
  char* id_1543/*ptr*/;
};
struct PROT_id_1522/*VecIterRange<char>*/ {
  id_1521/*VecIter<char>*/ id_1537/*begin*/;
  id_1521/*VecIter<char>*/ id_1538/*end*/;
};
struct PROT_id_1523/*Str*/ {
  id_1520/*Vec<char>*/ id_1544;
  i64 id_1542/*size*/;
};
struct PROT_id_1524/*V2*/ {
  f64 id_1545;
  f64 id_1546;
};
struct PROT_id_1525/*Rng*/ {
  i64 id_1547;
};
struct PROT_id_1526/*MapNode<i64 i64>*/ {
  i64 id_1548;
  i64 id_1539/*val*/;
};
struct PROT_id_1527/*AVLNode<MapNode<i64 i64>>*/ {
  i64 id_1549;
  id_1527/*AVLNode<MapNode<i64 i64>>*/* id_1550;
  id_1527/*AVLNode<MapNode<i64 i64>>*/* id_1551;
  id_1527/*AVLNode<MapNode<i64 i64>>*/* id_1552;
  id_1526/*MapNode<i64 i64>*/ id_1539/*val*/;
};
struct PROT_id_1528/*AVLTree<MapNode<i64 i64>>*/ {
  id_1527/*AVLNode<MapNode<i64 i64>>*/* id_1553;
};
struct PROT_id_1529/*AVLIter<MapNode<i64 i64>>*/ {
  id_1527/*AVLNode<MapNode<i64 i64>>*/* id_1554;
};
struct PROT_id_1530/*AVLIterRange<MapNode<i64 i64>>*/ {
  id_1529/*AVLIter<MapNode<i64 i64>>*/ id_1537/*begin*/;
  id_1529/*AVLIter<MapNode<i64 i64>>*/ id_1538/*end*/;
};
struct PROT_id_1531/*Vec<MapNode<i64 i64>>*/ {
  i64 id_1540/*cap*/;
  id_1526/*MapNode<i64 i64>*/* id_1541/*head*/;
  i64 id_1542/*size*/;
};
struct PROT_id_1532/*VecIter<MapNode<i64 i64>>*/ {
  id_1526/*MapNode<i64 i64>*/* id_1543/*ptr*/;
};
struct PROT_id_1533/*VecIterRange<MapNode<i64 i64>>*/ {
  id_1532/*VecIter<MapNode<i64 i64>>*/ id_1537/*begin*/;
  id_1532/*VecIter<MapNode<i64 i64>>*/ id_1538/*end*/;
};
struct PROT_id_1534/*Map<i64 i64>*/ {
  id_1528/*AVLTree<MapNode<i64 i64>>*/ id_1555;
};
i8 id_1556();
i16 id_1557();
i32 id_1558();
i64 id_1559();
u8 id_1560();
u16 id_1561();
u32 id_1562();
u64 id_1563();
bool id_1564();
char id_1565();
i64 id_1566(i64 v101, i64 v102);
i64 id_1567(i64 v103, i64 v104);
void id_1568();
void id_1569(i8* v105, i8 v106);
void id_1570(i8* v107, i8 v108);
void id_1571(i8* v109, i8 v110);
void id_1572(i8* v111, i8 v112);
void id_1573(i8* v113, i8 v114);
void id_1574(i8* v115, i8 v116);
void id_1575(i8* v117, i8 v118);
void id_1576(i8* v119, i8 v120);
bool id_1577(i8 v121, i8 v122);
bool id_1578(i8 v123, i8 v124);
i8* id_1579(i8* v125);
i8* id_1580(i8* v126);
i8 id_1581(i8* v127);
i8 id_1582(i8* v129);
void id_1583(i16* v132, i16 v133);
void id_1584(i16* v134, i16 v135);
void id_1585(i16* v136, i16 v137);
void id_1586(i16* v138, i16 v139);
void id_1587(i16* v140, i16 v141);
void id_1588(i16* v142, i16 v143);
void id_1589(i16* v144, i16 v145);
void id_1590(i16* v146, i16 v147);
bool id_1591(i16 v148, i16 v149);
bool id_1592(i16 v150, i16 v151);
i16* id_1593(i16* v152);
i16* id_1594(i16* v153);
i16 id_1595(i16* v154);
i16 id_1596(i16* v156);
void id_1597(i32* v159, i32 v160);
void id_1598(i32* v161, i32 v162);
void id_1599(i32* v163, i32 v164);
void id_1600(i32* v165, i32 v166);
void id_1601(i32* v167, i32 v168);
void id_1602(i32* v169, i32 v170);
void id_1603(i32* v171, i32 v172);
void id_1604(i32* v173, i32 v174);
bool id_1605(i32 v175, i32 v176);
bool id_1606(i32 v177, i32 v178);
i32* id_1607(i32* v179);
i32* id_1608(i32* v180);
i32 id_1609(i32* v181);
i32 id_1610(i32* v183);
void id_1611(i64* v186, i64 v187);
void id_1612(i64* v188, i64 v189);
void id_1613(i64* v190, i64 v191);
void id_1614(i64* v192, i64 v193);
void id_1615(i64* v194, i64 v195);
void id_1616(i64* v196, i64 v197);
void id_1617(i64* v198, i64 v199);
void id_1618(i64* v200, i64 v201);
bool id_1619(i64 v202, i64 v203);
bool id_1620(i64 v204, i64 v205);
i64* id_1621(i64* v206);
i64* id_1622(i64* v207);
i64 id_1623(i64* v208);
i64 id_1624(i64* v210);
void id_1625(u8* v213, u8 v214);
void id_1626(u8* v215, u8 v216);
void id_1627(u8* v217, u8 v218);
void id_1628(u8* v219, u8 v220);
void id_1629(u8* v221, u8 v222);
void id_1630(u8* v223, u8 v224);
void id_1631(u8* v225, u8 v226);
void id_1632(u8* v227, u8 v228);
bool id_1633(u8 v229, u8 v230);
bool id_1634(u8 v231, u8 v232);
u8* id_1635(u8* v233);
u8* id_1636(u8* v234);
u8 id_1637(u8* v235);
u8 id_1638(u8* v237);
void id_1639(u16* v240, u16 v241);
void id_1640(u16* v242, u16 v243);
void id_1641(u16* v244, u16 v245);
void id_1642(u16* v246, u16 v247);
void id_1643(u16* v248, u16 v249);
void id_1644(u16* v250, u16 v251);
void id_1645(u16* v252, u16 v253);
void id_1646(u16* v254, u16 v255);
bool id_1647(u16 v256, u16 v257);
bool id_1648(u16 v258, u16 v259);
u16* id_1649(u16* v260);
u16* id_1650(u16* v261);
u16 id_1651(u16* v262);
u16 id_1652(u16* v264);
void id_1653(u32* v267, u32 v268);
void id_1654(u32* v269, u32 v270);
void id_1655(u32* v271, u32 v272);
void id_1656(u32* v273, u32 v274);
void id_1657(u32* v275, u32 v276);
void id_1658(u32* v277, u32 v278);
void id_1659(u32* v279, u32 v280);
void id_1660(u32* v281, u32 v282);
bool id_1661(u32 v283, u32 v284);
bool id_1662(u32 v285, u32 v286);
u32* id_1663(u32* v287);
u32* id_1664(u32* v288);
u32 id_1665(u32* v289);
u32 id_1666(u32* v291);
void id_1667(u64* v294, u64 v295);
void id_1668(u64* v296, u64 v297);
void id_1669(u64* v298, u64 v299);
void id_1670(u64* v300, u64 v301);
void id_1671(u64* v302, u64 v303);
void id_1672(u64* v304, u64 v305);
void id_1673(u64* v306, u64 v307);
void id_1674(u64* v308, u64 v309);
bool id_1675(u64 v310, u64 v311);
bool id_1676(u64 v312, u64 v313);
u64* id_1677(u64* v314);
u64* id_1678(u64* v315);
u64 id_1679(u64* v316);
u64 id_1680(u64* v318);
void id_1681(char* v321, char v322);
void id_1682(char* v323, char v324);
void id_1683(char* v325, char v326);
void id_1684(char* v327, char v328);
void id_1685(char* v329, char v330);
void id_1686(char* v331, char v332);
void id_1687(char* v333, char v334);
void id_1688(char* v335, char v336);
bool id_1689(char v337, char v338);
bool id_1690(char v339, char v340);
char* id_1691(char* v341);
char* id_1692(char* v342);
char id_1693(char* v343);
char id_1694(char* v345);
void id_1695(f32* v348, f32 v349);
void id_1696(f32* v350, f32 v351);
void id_1697(f32* v352, f32 v353);
void id_1698(f32* v354, f32 v355);
void id_1699(f64* v356, f64 v357);
void id_1700(f64* v358, f64 v359);
void id_1701(f64* v360, f64 v361);
void id_1702(f64* v362, f64 v363);
bool id_1703(bool v364, bool v365);
i64 id_1704(i64 v366, i64 v367);
id_1501/*Out*/ id_1705();
id_1501/*Out*/ id_1706(id_1501/*Out*/ v370, id_1501/*Out*/ v371);
id_1501/*Out*/ id_1707(id_1501/*Out*/ v372);
id_1501/*Out*/ id_1708(str v373);
id_1501/*Out*/ id_1709(str v374);
id_1501/*Out*/ id_1710(id_1501/*Out*/ v375, str v376);
id_1501/*Out*/ id_1711(str* v377);
id_1501/*Out*/ id_1712(id_1501/*Out*/ v378, str* v379);
id_1501/*Out*/ id_1713(char v380);
id_1501/*Out*/ id_1714(char v381);
id_1501/*Out*/ id_1715(id_1501/*Out*/ v382, char v383);
id_1501/*Out*/ id_1716(char* v384);
id_1501/*Out*/ id_1717(id_1501/*Out*/ v385, char* v386);
id_1501/*Out*/ id_1718(i8 v387);
id_1501/*Out*/ id_1719(i8 v388);
id_1501/*Out*/ id_1720(id_1501/*Out*/ v389, i8 v390);
id_1501/*Out*/ id_1721(i8* v391);
id_1501/*Out*/ id_1722(id_1501/*Out*/ v392, i8* v393);
id_1501/*Out*/ id_1723(i16 v394);
id_1501/*Out*/ id_1724(i16 v395);
id_1501/*Out*/ id_1725(id_1501/*Out*/ v396, i16 v397);
id_1501/*Out*/ id_1726(i16* v398);
id_1501/*Out*/ id_1727(id_1501/*Out*/ v399, i16* v400);
id_1501/*Out*/ id_1728(i32 v401);
id_1501/*Out*/ id_1729(i32 v402);
id_1501/*Out*/ id_1730(id_1501/*Out*/ v403, i32 v404);
id_1501/*Out*/ id_1731(i32* v405);
id_1501/*Out*/ id_1732(id_1501/*Out*/ v406, i32* v407);
id_1501/*Out*/ id_1733(i64 v408);
id_1501/*Out*/ id_1734(i64 v409);
id_1501/*Out*/ id_1735(id_1501/*Out*/ v410, i64 v411);
id_1501/*Out*/ id_1736(i64* v412);
id_1501/*Out*/ id_1737(id_1501/*Out*/ v413, i64* v414);
id_1501/*Out*/ id_1738(u8 v415);
id_1501/*Out*/ id_1739(u8 v416);
id_1501/*Out*/ id_1740(id_1501/*Out*/ v417, u8 v418);
id_1501/*Out*/ id_1741(u8* v419);
id_1501/*Out*/ id_1742(id_1501/*Out*/ v420, u8* v421);
id_1501/*Out*/ id_1743(u16 v422);
id_1501/*Out*/ id_1744(u16 v423);
id_1501/*Out*/ id_1745(id_1501/*Out*/ v424, u16 v425);
id_1501/*Out*/ id_1746(u16* v426);
id_1501/*Out*/ id_1747(id_1501/*Out*/ v427, u16* v428);
id_1501/*Out*/ id_1748(u32 v429);
id_1501/*Out*/ id_1749(u32 v430);
id_1501/*Out*/ id_1750(id_1501/*Out*/ v431, u32 v432);
id_1501/*Out*/ id_1751(u32* v433);
id_1501/*Out*/ id_1752(id_1501/*Out*/ v434, u32* v435);
id_1501/*Out*/ id_1753(u64 v436);
id_1501/*Out*/ id_1754(u64 v437);
id_1501/*Out*/ id_1755(id_1501/*Out*/ v438, u64 v439);
id_1501/*Out*/ id_1756(u64* v440);
id_1501/*Out*/ id_1757(id_1501/*Out*/ v441, u64* v442);
id_1501/*Out*/ id_1758(f32 v443);
id_1501/*Out*/ id_1759(f32 v444);
id_1501/*Out*/ id_1760(id_1501/*Out*/ v445, f32 v446);
id_1501/*Out*/ id_1761(f32* v447);
id_1501/*Out*/ id_1762(id_1501/*Out*/ v448, f32* v449);
id_1501/*Out*/ id_1763(f64 v450);
id_1501/*Out*/ id_1764(f64 v451);
id_1501/*Out*/ id_1765(id_1501/*Out*/ v452, f64 v453);
id_1501/*Out*/ id_1766(f64* v454);
id_1501/*Out*/ id_1767(id_1501/*Out*/ v455, f64* v456);
void id_1768();
id_1503/*RangeIter<i8>*/ id_1769(i8 v490);
void id_1770(id_1503/*RangeIter<i8>*/* v492);
i8 id_1771(id_1503/*RangeIter<i8>*/ v493);
bool id_1772(id_1503/*RangeIter<i8>*/ v494, id_1503/*RangeIter<i8>*/ v495);
id_1503/*RangeIter<i8>*/ id_1773(id_1504/*RangeIterRange<i8>*/* v496);
id_1503/*RangeIter<i8>*/ id_1774(id_1504/*RangeIterRange<i8>*/* v497);
id_1504/*RangeIterRange<i8>*/ id_1775(id_1503/*RangeIter<i8>*/ v498, id_1503/*RangeIter<i8>*/ v499);
i8 id_1776(id_1502/*Range<i8>*/* v457);
i8 id_1777(id_1502/*Range<i8>*/* v458);
id_1502/*Range<i8>*/ id_1778(i8 v459, i8 v460);
id_1502/*Range<i8>*/ id_1779(i8 v462, i8 v463);
id_1502/*Range<i8>*/ id_1780(i8 v464, i8 v465);
id_1502/*Range<i8>*/ id_1781(i8 v466);
id_1502/*Range<i8>*/ id_1782(i8 v467);
id_1502/*Range<i8>*/ id_1783(i8 v470);
id_1502/*Range<i8>*/ id_1784(id_1502/*Range<i8>*/ v473);
id_1502/*Range<i8>*/ id_1785(i8 v474, i8 v475);
id_1502/*Range<i8>*/ id_1786(i8 v478);
id_1502/*Range<i8>*/ id_1787(i8 v483);
bool id_1788(i8 v488, id_1502/*Range<i8>*/ v489);
id_1504/*RangeIterRange<i8>*/ id_1789(id_1502/*Range<i8>*/ v501);
id_1506/*RangeIter<i16>*/ id_1790(i16 v536);
void id_1791(id_1506/*RangeIter<i16>*/* v538);
i16 id_1792(id_1506/*RangeIter<i16>*/ v539);
bool id_1793(id_1506/*RangeIter<i16>*/ v540, id_1506/*RangeIter<i16>*/ v541);
id_1506/*RangeIter<i16>*/ id_1794(id_1507/*RangeIterRange<i16>*/* v542);
id_1506/*RangeIter<i16>*/ id_1795(id_1507/*RangeIterRange<i16>*/* v543);
id_1507/*RangeIterRange<i16>*/ id_1796(id_1506/*RangeIter<i16>*/ v544, id_1506/*RangeIter<i16>*/ v545);
i16 id_1797(id_1505/*Range<i16>*/* v503);
i16 id_1798(id_1505/*Range<i16>*/* v504);
id_1505/*Range<i16>*/ id_1799(i16 v505, i16 v506);
id_1505/*Range<i16>*/ id_1800(i16 v508, i16 v509);
id_1505/*Range<i16>*/ id_1801(i16 v510, i16 v511);
id_1505/*Range<i16>*/ id_1802(i16 v512);
id_1505/*Range<i16>*/ id_1803(i16 v513);
id_1505/*Range<i16>*/ id_1804(i16 v516);
id_1505/*Range<i16>*/ id_1805(id_1505/*Range<i16>*/ v519);
id_1505/*Range<i16>*/ id_1806(i16 v520, i16 v521);
id_1505/*Range<i16>*/ id_1807(i16 v524);
id_1505/*Range<i16>*/ id_1808(i16 v529);
bool id_1809(i16 v534, id_1505/*Range<i16>*/ v535);
id_1507/*RangeIterRange<i16>*/ id_1810(id_1505/*Range<i16>*/ v547);
id_1509/*RangeIter<i32>*/ id_1811(i32 v582);
void id_1812(id_1509/*RangeIter<i32>*/* v584);
i32 id_1813(id_1509/*RangeIter<i32>*/ v585);
bool id_1814(id_1509/*RangeIter<i32>*/ v586, id_1509/*RangeIter<i32>*/ v587);
id_1509/*RangeIter<i32>*/ id_1815(id_1510/*RangeIterRange<i32>*/* v588);
id_1509/*RangeIter<i32>*/ id_1816(id_1510/*RangeIterRange<i32>*/* v589);
id_1510/*RangeIterRange<i32>*/ id_1817(id_1509/*RangeIter<i32>*/ v590, id_1509/*RangeIter<i32>*/ v591);
i32 id_1818(id_1508/*Range<i32>*/* v549);
i32 id_1819(id_1508/*Range<i32>*/* v550);
id_1508/*Range<i32>*/ id_1820(i32 v551, i32 v552);
id_1508/*Range<i32>*/ id_1821(i32 v554, i32 v555);
id_1508/*Range<i32>*/ id_1822(i32 v556, i32 v557);
id_1508/*Range<i32>*/ id_1823(i32 v558);
id_1508/*Range<i32>*/ id_1824(i32 v559);
id_1508/*Range<i32>*/ id_1825(i32 v562);
id_1508/*Range<i32>*/ id_1826(id_1508/*Range<i32>*/ v565);
id_1508/*Range<i32>*/ id_1827(i32 v566, i32 v567);
id_1508/*Range<i32>*/ id_1828(i32 v570);
id_1508/*Range<i32>*/ id_1829(i32 v575);
bool id_1830(i32 v580, id_1508/*Range<i32>*/ v581);
id_1510/*RangeIterRange<i32>*/ id_1831(id_1508/*Range<i32>*/ v593);
id_1512/*RangeIter<i64>*/ id_1832(i64 v628);
void id_1833(id_1512/*RangeIter<i64>*/* v630);
i64 id_1834(id_1512/*RangeIter<i64>*/ v631);
bool id_1835(id_1512/*RangeIter<i64>*/ v632, id_1512/*RangeIter<i64>*/ v633);
id_1512/*RangeIter<i64>*/ id_1836(id_1513/*RangeIterRange<i64>*/* v634);
id_1512/*RangeIter<i64>*/ id_1837(id_1513/*RangeIterRange<i64>*/* v635);
id_1513/*RangeIterRange<i64>*/ id_1838(id_1512/*RangeIter<i64>*/ v636, id_1512/*RangeIter<i64>*/ v637);
i64 id_1839(id_1511/*Range<i64>*/* v595);
i64 id_1840(id_1511/*Range<i64>*/* v596);
id_1511/*Range<i64>*/ id_1841(i64 v597, i64 v598);
id_1511/*Range<i64>*/ id_1842(i64 v600, i64 v601);
id_1511/*Range<i64>*/ id_1843(i64 v602, i64 v603);
id_1511/*Range<i64>*/ id_1844(i64 v604);
id_1511/*Range<i64>*/ id_1845(i64 v605);
id_1511/*Range<i64>*/ id_1846(i64 v608);
id_1511/*Range<i64>*/ id_1847(id_1511/*Range<i64>*/ v611);
id_1511/*Range<i64>*/ id_1848(i64 v612, i64 v613);
id_1511/*Range<i64>*/ id_1849(i64 v616);
id_1511/*Range<i64>*/ id_1850(i64 v621);
bool id_1851(i64 v626, id_1511/*Range<i64>*/ v627);
id_1513/*RangeIterRange<i64>*/ id_1852(id_1511/*Range<i64>*/ v639);
id_1515/*RangeIter<char>*/ id_1853(char v674);
void id_1854(id_1515/*RangeIter<char>*/* v676);
char id_1855(id_1515/*RangeIter<char>*/ v677);
bool id_1856(id_1515/*RangeIter<char>*/ v678, id_1515/*RangeIter<char>*/ v679);
id_1515/*RangeIter<char>*/ id_1857(id_1516/*RangeIterRange<char>*/* v680);
id_1515/*RangeIter<char>*/ id_1858(id_1516/*RangeIterRange<char>*/* v681);
id_1516/*RangeIterRange<char>*/ id_1859(id_1515/*RangeIter<char>*/ v682, id_1515/*RangeIter<char>*/ v683);
char id_1860(id_1514/*Range<char>*/* v641);
char id_1861(id_1514/*Range<char>*/* v642);
id_1514/*Range<char>*/ id_1862(char v643, char v644);
id_1514/*Range<char>*/ id_1863(char v646, char v647);
id_1514/*Range<char>*/ id_1864(char v648, char v649);
id_1514/*Range<char>*/ id_1865(char v650);
id_1514/*Range<char>*/ id_1866(char v651);
id_1514/*Range<char>*/ id_1867(char v654);
id_1514/*Range<char>*/ id_1868(id_1514/*Range<char>*/ v657);
id_1514/*Range<char>*/ id_1869(char v658, char v659);
id_1514/*Range<char>*/ id_1870(char v662);
id_1514/*Range<char>*/ id_1871(char v667);
bool id_1872(char v672, id_1514/*Range<char>*/ v673);
id_1516/*RangeIterRange<char>*/ id_1873(id_1514/*Range<char>*/ v685);
id_1518/*VecIter<i64>*/ id_1874(i64* v728);
void id_1875(id_1518/*VecIter<i64>*/* v730);
id_1518/*VecIter<i64>*/ id_1876(id_1518/*VecIter<i64>*/ v731, i64 v732);
bool id_1877(id_1518/*VecIter<i64>*/ v733, id_1518/*VecIter<i64>*/ v734);
i64* id_1878(id_1518/*VecIter<i64>*/ v735);
id_1518/*VecIter<i64>*/ id_1879(id_1519/*VecIterRange<i64>*/* v738);
id_1518/*VecIter<i64>*/ id_1880(id_1519/*VecIterRange<i64>*/* v739);
id_1519/*VecIterRange<i64>*/ id_1881(id_1518/*VecIter<i64>*/ v740, id_1518/*VecIter<i64>*/ v741);
i64* id_1882(id_1517/*Vec<i64>*/* v692, i64 v693);
i64* id_1883(id_1517/*Vec<i64>*/* v694, i64 v695);
void id_1884(id_1517/*Vec<i64>*/* v696);
void id_1885(id_1517/*Vec<i64>*/* v705);
void id_1886(id_1517/*Vec<i64>*/* v714);
void id_1887(id_1517/*Vec<i64>*/* v725, i64 v726);
void id_1888(id_1517/*Vec<i64>*/* v727);
id_1518/*VecIter<i64>*/ id_1889(id_1517/*Vec<i64>*/* v736);
id_1518/*VecIter<i64>*/ id_1890(id_1517/*Vec<i64>*/* v737);
id_1519/*VecIterRange<i64>*/ id_1891(id_1517/*Vec<i64>*/* v743);
i64* id_1892(id_1517/*Vec<i64>*/* v745);
i64* id_1893(id_1517/*Vec<i64>*/* v746);
void id_1894(id_1517/*Vec<i64>*/* v747);
id_1517/*Vec<i64>*/ id_1895(i64 v748);
id_1517/*Vec<i64>*/ id_1896(i64 v758, i64 v759);
id_1517/*Vec<i64>*/ id_1897();
id_1517/*Vec<i64>*/ id_1898(id_1517/*Vec<i64>*/* v769);
void id_1899(id_1517/*Vec<i64>*/* v779, i64 v780);
void id_1900(id_1517/*Vec<i64>*/* v781, id_1517/*Vec<i64>*/* v782);
id_1517/*Vec<i64>*/ id_1901(i64 v791, i64 v792);
id_1517/*Vec<i64>*/* id_1902(id_1517/*Vec<i64>*/* v794, i64 v795);
void id_1903(id_1517/*Vec<i64>*/* v796);
void id_1904(id_1517/*Vec<i64>*/* v797);
id_1501/*Out*/ id_1905(id_1517/*Vec<i64>*/* v798);
id_1501/*Out*/ id_1906(id_1517/*Vec<i64>*/* v799);
id_1501/*Out*/ id_1907(id_1501/*Out*/ v800, id_1517/*Vec<i64>*/* v801);
i64* id_1908(id_1517/*Vec<i64>*/* v802, i64 v803);
id_1517/*Vec<i64>*/ id_1909(id_1517/*Vec<i64>*/* v804, i64 v805, i64 v806);
id_1517/*Vec<i64>*/ id_1910(id_1517/*Vec<i64>*/* v816, id_1511/*Range<i64>*/ v817);
id_1517/*Vec<i64>*/ id_1911(id_1517/*Vec<i64>*/* v820);
bool id_1912(id_1517/*Vec<i64>*/* v821, id_1517/*Vec<i64>*/* v822);
void id_1913(i64* v831, i64* v832);
i64* id_1914(i64* v834, i64* v835);
void id_1915(i64* v839, i64* v840);
void id_1916(id_1517/*Vec<i64>*/* v844);
void id_1917(id_1517/*Vec<i64>*/* v849);
id_1517/*Vec<i64>*/ id_1918(id_1517/*Vec<i64>*/* v850, i64(*v851)(i64*));
id_1517/*Vec<i64>*/ id_1919(id_1517/*Vec<i64>*/* v861, bool(*v862)(i64*));
id_1517/*Vec<i64>*/ id_1920(i64 v872, i64 v873);
char id_1921(str* v883, i64 v884);
str id_1922();
bool id_1923(char v886, str v887);
char id_1924(str v888);
id_1521/*VecIter<char>*/ id_1925(char* v925);
void id_1926(id_1521/*VecIter<char>*/* v927);
id_1521/*VecIter<char>*/ id_1927(id_1521/*VecIter<char>*/ v928, i64 v929);
bool id_1928(id_1521/*VecIter<char>*/ v930, id_1521/*VecIter<char>*/ v931);
char* id_1929(id_1521/*VecIter<char>*/ v932);
id_1521/*VecIter<char>*/ id_1930(id_1522/*VecIterRange<char>*/* v935);
id_1521/*VecIter<char>*/ id_1931(id_1522/*VecIterRange<char>*/* v936);
id_1522/*VecIterRange<char>*/ id_1932(id_1521/*VecIter<char>*/ v937, id_1521/*VecIter<char>*/ v938);
char* id_1933(id_1520/*Vec<char>*/* v889, i64 v890);
char* id_1934(id_1520/*Vec<char>*/* v891, i64 v892);
void id_1935(id_1520/*Vec<char>*/* v893);
void id_1936(id_1520/*Vec<char>*/* v902);
void id_1937(id_1520/*Vec<char>*/* v911);
void id_1938(id_1520/*Vec<char>*/* v922, char v923);
void id_1939(id_1520/*Vec<char>*/* v924);
id_1521/*VecIter<char>*/ id_1940(id_1520/*Vec<char>*/* v933);
id_1521/*VecIter<char>*/ id_1941(id_1520/*Vec<char>*/* v934);
id_1522/*VecIterRange<char>*/ id_1942(id_1520/*Vec<char>*/* v940);
char* id_1943(id_1520/*Vec<char>*/* v942);
char* id_1944(id_1520/*Vec<char>*/* v943);
void id_1945(id_1520/*Vec<char>*/* v944);
id_1520/*Vec<char>*/ id_1946(i64 v945);
id_1520/*Vec<char>*/ id_1947(i64 v955, char v956);
id_1520/*Vec<char>*/ id_1948();
id_1520/*Vec<char>*/ id_1949(id_1520/*Vec<char>*/* v966);
void id_1950(id_1520/*Vec<char>*/* v976, char v977);
void id_1951(id_1520/*Vec<char>*/* v978, id_1520/*Vec<char>*/* v979);
id_1520/*Vec<char>*/ id_1952(char v988, char v989);
id_1520/*Vec<char>*/* id_1953(id_1520/*Vec<char>*/* v991, char v992);
void id_1954(id_1520/*Vec<char>*/* v993);
void id_1955(id_1520/*Vec<char>*/* v994);
id_1501/*Out*/ id_1956(id_1520/*Vec<char>*/* v995);
id_1501/*Out*/ id_1957(id_1520/*Vec<char>*/* v996);
id_1501/*Out*/ id_1958(id_1501/*Out*/ v997, id_1520/*Vec<char>*/* v998);
char* id_1959(id_1520/*Vec<char>*/* v999, i64 v1000);
id_1520/*Vec<char>*/ id_1960(id_1520/*Vec<char>*/* v1001, i64 v1002, i64 v1003);
id_1520/*Vec<char>*/ id_1961(id_1520/*Vec<char>*/* v1013, id_1511/*Range<i64>*/ v1014);
id_1520/*Vec<char>*/ id_1962(id_1520/*Vec<char>*/* v1017);
bool id_1963(id_1520/*Vec<char>*/* v1018, id_1520/*Vec<char>*/* v1019);
void id_1964(char* v1028, char* v1029);
char* id_1965(char* v1031, char* v1032);
void id_1966(char* v1036, char* v1037);
void id_1967(id_1520/*Vec<char>*/* v1041);
void id_1968(id_1520/*Vec<char>*/* v1046);
id_1520/*Vec<char>*/ id_1969(id_1520/*Vec<char>*/* v1047, char(*v1048)(char*));
id_1520/*Vec<char>*/ id_1970(id_1520/*Vec<char>*/* v1058, bool(*v1059)(char*));
id_1523/*Str*/ id_1971();
void id_1972(id_1523/*Str*/* v1070);
str id_1973(id_1523/*Str*/* v1071);
id_1522/*VecIterRange<char>*/ id_1974(id_1523/*Str*/* v1073);
char* id_1975(id_1523/*Str*/* v1074, i64 v1075);
char* id_1976(id_1523/*Str*/* v1076, i64 v1077);
char* id_1977(id_1523/*Str*/* v1078, i64 v1079);
void id_1978(id_1523/*Str*/* v1080, char v1081);
void id_1979(id_1523/*Str*/* v1082);
id_1523/*Str*/ id_1980(str v1083);
id_1523/*Str*/ id_1981(id_1523/*Str*/* v1085);
i64 id_1982(str v1087);
void id_1983(id_1523/*Str*/* v1089);
void id_1984(id_1523/*Str*/* v1090);
void id_1985(id_1523/*Str*/* v1091, char v1092);
void id_1986(id_1523/*Str*/* v1093, id_1523/*Str*/* v1094);
void id_1987(id_1523/*Str*/* v1104, str v1105);
id_1523/*Str*/ id_1988(id_1523/*Str*/* v1115, id_1523/*Str*/* v1116);
id_1523/*Str*/ id_1989(str v1118, str v1119);
id_1501/*Out*/ id_1990(id_1523/*Str*/* v1124);
id_1501/*Out*/ id_1991(id_1523/*Str*/* v1125);
id_1501/*Out*/ id_1992(id_1501/*Out*/ v1126, id_1523/*Str*/* v1127);
bool id_1993(id_1523/*Str*/* v1128, id_1523/*Str*/* v1129);
id_1523/*Str*/ id_1994(str v1138, i64 v1139);
id_1523/*Str*/ id_1995(str v1150);
id_1522/*VecIterRange<char>*/ id_1996(str v1151);
str id_1997();
f64 id_1998(f64 v1154);
id_1524/*V2*/ id_1999(f64 v1164, f64 v1165);
id_1524/*V2*/ id_2000(id_1524/*V2*/ v1167, id_1524/*V2*/ v1168);
id_1524/*V2*/ id_2001(id_1524/*V2*/ v1169, id_1524/*V2*/ v1170);
f64 id_2002(id_1524/*V2*/ v1172);
void id_2003(id_1524/*V2*/ v1173);
void id_2004(id_1524/*V2*/ v1174);
id_1501/*Out*/ id_2005(id_1524/*V2*/ v1175);
id_1501/*Out*/ id_2006(id_1524/*V2*/ v1176);
id_1501/*Out*/ id_2007(id_1501/*Out*/ v1177, id_1524/*V2*/ v1178);
id_1525/*Rng*/ id_2008(i64 v1179);
id_1525/*Rng*/ id_2009();
i64 id_2010(id_1525/*Rng*/* v1181);
int main(int argc, char *argv[]) ;
id_1526/*MapNode<i64 i64>*/ id_2011(i64* v1185, i64* v1186);
id_1526/*MapNode<i64 i64>*/ id_2012();
bool id_2013(id_1526/*MapNode<i64 i64>*/* v1192, id_1526/*MapNode<i64 i64>*/* v1193);
void id_2014(id_1526/*MapNode<i64 i64>*/* v1194);
void id_2015(id_1526/*MapNode<i64 i64>*/* v1195);
id_1501/*Out*/ id_2016(id_1526/*MapNode<i64 i64>*/* v1196);
id_1501/*Out*/ id_2017(id_1526/*MapNode<i64 i64>*/* v1197);
id_1501/*Out*/ id_2018(id_1501/*Out*/ v1198, id_1526/*MapNode<i64 i64>*/* v1199);
id_1527/*AVLNode<MapNode<i64 i64>>*/ id_2019(id_1526/*MapNode<i64 i64>*/* v1200);
id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2020(id_1527/*AVLNode<MapNode<i64 i64>>*/ v1202);
bool id_2021(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1204);
bool id_2022(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1205);
i64 id_2023(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1206);
i64 id_2024(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1207);
void id_2025(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1208);
id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2026(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1209);
id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2027(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1211);
id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2028(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1213);
id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2029(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1214, id_1526/*MapNode<i64 i64>*/* v1215);
id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2030(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1218, id_1526/*MapNode<i64 i64>*/* v1219);
void id_2031(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1221, id_1523/*Str*/* v1222);
id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2032(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1226);
id_1526/*MapNode<i64 i64>*/* id_2033(id_1529/*AVLIter<MapNode<i64 i64>>*/ v1228);
id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2034(id_1529/*AVLIter<MapNode<i64 i64>>*/* v1229);
bool id_2035(id_1529/*AVLIter<MapNode<i64 i64>>*/ v1231, id_1529/*AVLIter<MapNode<i64 i64>>*/ v1232);
id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2036(id_1530/*AVLIterRange<MapNode<i64 i64>>*/* v1236);
id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2037(id_1530/*AVLIterRange<MapNode<i64 i64>>*/* v1237);
id_1530/*AVLIterRange<MapNode<i64 i64>>*/ id_2038(id_1529/*AVLIter<MapNode<i64 i64>>*/ v1238, id_1529/*AVLIter<MapNode<i64 i64>>*/ v1239);
id_1532/*VecIter<MapNode<i64 i64>>*/ id_2039(id_1526/*MapNode<i64 i64>*/* v1285);
void id_2040(id_1532/*VecIter<MapNode<i64 i64>>*/* v1287);
id_1532/*VecIter<MapNode<i64 i64>>*/ id_2041(id_1532/*VecIter<MapNode<i64 i64>>*/ v1288, i64 v1289);
bool id_2042(id_1532/*VecIter<MapNode<i64 i64>>*/ v1290, id_1532/*VecIter<MapNode<i64 i64>>*/ v1291);
id_1526/*MapNode<i64 i64>*/* id_2043(id_1532/*VecIter<MapNode<i64 i64>>*/ v1292);
id_1532/*VecIter<MapNode<i64 i64>>*/ id_2044(id_1533/*VecIterRange<MapNode<i64 i64>>*/* v1295);
id_1532/*VecIter<MapNode<i64 i64>>*/ id_2045(id_1533/*VecIterRange<MapNode<i64 i64>>*/* v1296);
id_1533/*VecIterRange<MapNode<i64 i64>>*/ id_2046(id_1532/*VecIter<MapNode<i64 i64>>*/ v1297, id_1532/*VecIter<MapNode<i64 i64>>*/ v1298);
id_1526/*MapNode<i64 i64>*/* id_2047(id_1531/*Vec<MapNode<i64 i64>>*/* v1249, i64 v1250);
id_1526/*MapNode<i64 i64>*/* id_2048(id_1531/*Vec<MapNode<i64 i64>>*/* v1251, i64 v1252);
void id_2049(id_1531/*Vec<MapNode<i64 i64>>*/* v1253);
void id_2050(id_1531/*Vec<MapNode<i64 i64>>*/* v1262);
void id_2051(id_1531/*Vec<MapNode<i64 i64>>*/* v1271);
void id_2052(id_1531/*Vec<MapNode<i64 i64>>*/* v1282, id_1526/*MapNode<i64 i64>*/ v1283);
void id_2053(id_1531/*Vec<MapNode<i64 i64>>*/* v1284);
id_1532/*VecIter<MapNode<i64 i64>>*/ id_2054(id_1531/*Vec<MapNode<i64 i64>>*/* v1293);
id_1532/*VecIter<MapNode<i64 i64>>*/ id_2055(id_1531/*Vec<MapNode<i64 i64>>*/* v1294);
id_1533/*VecIterRange<MapNode<i64 i64>>*/ id_2056(id_1531/*Vec<MapNode<i64 i64>>*/* v1300);
id_1526/*MapNode<i64 i64>*/* id_2057(id_1531/*Vec<MapNode<i64 i64>>*/* v1302);
id_1526/*MapNode<i64 i64>*/* id_2058(id_1531/*Vec<MapNode<i64 i64>>*/* v1303);
void id_2059(id_1531/*Vec<MapNode<i64 i64>>*/* v1304);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2060(i64 v1305);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2061(i64 v1315, id_1526/*MapNode<i64 i64>*/ v1316);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2062();
id_1531/*Vec<MapNode<i64 i64>>*/ id_2063(id_1531/*Vec<MapNode<i64 i64>>*/* v1326);
void id_2064(id_1531/*Vec<MapNode<i64 i64>>*/* v1336, id_1526/*MapNode<i64 i64>*/ v1337);
void id_2065(id_1531/*Vec<MapNode<i64 i64>>*/* v1338, id_1531/*Vec<MapNode<i64 i64>>*/* v1339);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2066(id_1526/*MapNode<i64 i64>*/ v1348, id_1526/*MapNode<i64 i64>*/ v1349);
id_1531/*Vec<MapNode<i64 i64>>*/* id_2067(id_1531/*Vec<MapNode<i64 i64>>*/* v1351, id_1526/*MapNode<i64 i64>*/ v1352);
void id_2068(id_1531/*Vec<MapNode<i64 i64>>*/* v1353);
void id_2069(id_1531/*Vec<MapNode<i64 i64>>*/* v1354);
id_1501/*Out*/ id_2070(id_1531/*Vec<MapNode<i64 i64>>*/* v1355);
id_1501/*Out*/ id_2071(id_1531/*Vec<MapNode<i64 i64>>*/* v1356);
id_1501/*Out*/ id_2072(id_1501/*Out*/ v1357, id_1531/*Vec<MapNode<i64 i64>>*/* v1358);
id_1526/*MapNode<i64 i64>*/* id_2073(id_1531/*Vec<MapNode<i64 i64>>*/* v1359, i64 v1360);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2074(id_1531/*Vec<MapNode<i64 i64>>*/* v1361, i64 v1362, i64 v1363);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2075(id_1531/*Vec<MapNode<i64 i64>>*/* v1373, id_1511/*Range<i64>*/ v1374);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2076(id_1531/*Vec<MapNode<i64 i64>>*/* v1377);
bool id_2077(id_1531/*Vec<MapNode<i64 i64>>*/* v1378, id_1531/*Vec<MapNode<i64 i64>>*/* v1379);
void id_2078(id_1526/*MapNode<i64 i64>*/* v1388, id_1526/*MapNode<i64 i64>*/* v1389);
id_1526/*MapNode<i64 i64>*/* id_2079(id_1526/*MapNode<i64 i64>*/* v1391, id_1526/*MapNode<i64 i64>*/* v1392);
void id_2080(id_1526/*MapNode<i64 i64>*/* v1396, id_1526/*MapNode<i64 i64>*/* v1397);
void id_2081(id_1531/*Vec<MapNode<i64 i64>>*/* v1401);
void id_2082(id_1531/*Vec<MapNode<i64 i64>>*/* v1406);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2083(id_1531/*Vec<MapNode<i64 i64>>*/* v1407, id_1526/*MapNode<i64 i64>*/(*v1408)(id_1526/*MapNode<i64 i64>*/*));
id_1531/*Vec<MapNode<i64 i64>>*/ id_2084(id_1531/*Vec<MapNode<i64 i64>>*/* v1418, bool(*v1419)(id_1526/*MapNode<i64 i64>*/*));
id_1528/*AVLTree<MapNode<i64 i64>>*/ id_2085();
id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2086(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1233);
id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2087(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1235);
id_1530/*AVLIterRange<MapNode<i64 i64>>*/ id_2088(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1241);
void id_2089(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1243, id_1526/*MapNode<i64 i64>*/ v1244);
id_1526/*MapNode<i64 i64>*/* id_2090(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1245, id_1526/*MapNode<i64 i64>*/ v1246);
void id_2091(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1247, id_1526/*MapNode<i64 i64>*/ v1248);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2092(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1429);
void id_2093(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1439);
id_1534/*Map<i64 i64>*/ id_2094();
i64* id_2095(id_1534/*Map<i64 i64>*/* v1443, i64* v1444);
void id_2096(id_1534/*Map<i64 i64>*/* v1447, i64* v1448, i64* v1449);
id_1531/*Vec<MapNode<i64 i64>>*/ id_2097(id_1534/*Map<i64 i64>*/* v1451);
void id_2098(id_1534/*Map<i64 i64>*/* v1453);
void id_2099(id_1534/*Map<i64 i64>*/* v1465);
void id_2100(id_1534/*Map<i64 i64>*/* v1466);
id_1501/*Out*/ id_2101(id_1534/*Map<i64 i64>*/* v1467);
id_1501/*Out*/ id_2102(id_1534/*Map<i64 i64>*/* v1468);
id_1501/*Out*/ id_2103(id_1501/*Out*/ v1469, id_1534/*Map<i64 i64>*/* v1470);
id_1530/*AVLIterRange<MapNode<i64 i64>>*/ id_2104(id_1534/*Map<i64 i64>*/* v1471);

i8 id_1556/*lop i8 i8*/() {{
  return ((i8)0);
} panic("reached function end without returning anything lop i8 i8\n");}

i16 id_1557/*lop i16 i16*/() {{
  return ((i16)0);
} panic("reached function end without returning anything lop i16 i16\n");}

i32 id_1558/*lop i32 i32*/() {{
  return ((i32)0);
} panic("reached function end without returning anything lop i32 i32\n");}

i64 id_1559/*lop i64 i64*/() {{
  return ((i64)0);
} panic("reached function end without returning anything lop i64 i64\n");}

u8 id_1560/*lop u8 u8*/() {{
  return ((u8)0);
} panic("reached function end without returning anything lop u8 u8\n");}

u16 id_1561/*lop u16 u16*/() {{
  return ((u16)0);
} panic("reached function end without returning anything lop u16 u16\n");}

u32 id_1562/*lop u32 u32*/() {{
  return ((u32)0);
} panic("reached function end without returning anything lop u32 u32\n");}

u64 id_1563/*lop u64 u64*/() {{
  return ((u64)0);
} panic("reached function end without returning anything lop u64 u64\n");}

bool id_1564/*lop bool bool*/() {{
  return ((bool)0);
} panic("reached function end without returning anything lop bool bool\n");}

char id_1565/*lop char char*/() {{
  return ((char)((i8)0));
} panic("reached function end without returning anything lop char char\n");}

i64 id_1566/*lop i64 max i64 a i64 b*/(i64 v101, i64 v102) {{
  if ((((v101))>((v102)))) {
    return (v101);
  } else {
    return (v102);
  }
} panic("reached function end without returning anything lop i64 max i64 a i64 b\n");}

i64 id_1567/*lop i64 min i64 a i64 b*/(i64 v103, i64 v104) {{
  if ((((v103))<((v104)))) {
    return (v103);
  } else {
    return (v104);
  }
} panic("reached function end without returning anything lop i64 min i64 a i64 b\n");}

void id_1568/*lop void intOpMaker*/(){
  id_1499/*IntOpMaker<u64>*/ v320; /*d1*/
  id_1498/*IntOpMaker<u32>*/ v293; /*c1*/
  id_1497/*IntOpMaker<u16>*/ v266; /*b1*/
  id_1496/*IntOpMaker<u8>*/ v239; /*a1*/
  id_1500/*IntOpMaker<char>*/ v347; /*aboba*/
  id_1494/*IntOpMaker<i32>*/ v185; /*c*/
  id_1493/*IntOpMaker<i16>*/ v158; /*b*/
  id_1495/*IntOpMaker<i64>*/ v212; /*d*/
  id_1492/*IntOpMaker<i8>*/ v131; /*a*/
}

void id_1569/*op void += i8R a i8 b*/(i8* v105, i8 v106){
  ((*v105)=(((*v105))+((v106))));
}

void id_1570/*op void -= i8R a i8 b*/(i8* v107, i8 v108){
  ((*v107)=(((*v107))-((v108))));
}

void id_1571/*op void /= i8R a i8 b*/(i8* v109, i8 v110){
  ((*v109)=(((*v109))/((v110))));
}

void id_1572/*op void %= i8R a i8 b*/(i8* v111, i8 v112){
  ((*v111)=(((*v111))%((v112))));
}

void id_1573/*op void *= i8R a i8 b*/(i8* v113, i8 v114){
  ((*v113)=(((*v113))*((v114))));
}

void id_1574/*op void ^= i8R a i8 b*/(i8* v115, i8 v116){
  ((*v115)=(((*v115))^((v116))));
}

void id_1575/*op void &= i8R a i8 b*/(i8* v117, i8 v118){
  ((*v117)=(((*v117))&((v118))));
}

void id_1576/*op void |= i8R a i8 b*/(i8* v119, i8 v120){
  ((*v119)=(((*v119))|((v120))));
}

bool id_1577/*op bool %% i8 a i8 b*/(i8 v121, i8 v122) {{
  return (!((((v121))%((v122)))));
} panic("reached function end without returning anything op bool %% i8 a i8 b\n");}

bool id_1578/*op bool !% i8 a i8 b*/(i8 v123, i8 v124) {{
  return (!((id_1577/*op bool %% i8 a i8 b*/((v123), (v124)))));
} panic("reached function end without returning anything op bool !% i8 a i8 b\n");}

i8* id_1579/*lop i8R ++ i8R x*/(i8* v125) {{
  (id_1569/*op void += i8R a i8 b*/(&(*v125), (((id_1556/*lop i8 i8*/()))-((~((id_1556/*lop i8 i8*/())))))));
  return &(*v125);
} panic("reached function end without returning anything lop i8R ++ i8R x\n");}

i8* id_1580/*lop i8R -- i8R x*/(i8* v126) {{
  (id_1570/*op void -= i8R a i8 b*/(&(*v126), (((id_1556/*lop i8 i8*/()))-((~((id_1556/*lop i8 i8*/())))))));
  return &(*v126);
} panic("reached function end without returning anything lop i8R -- i8R x\n");}

i8 id_1581/*rop i8 ++ i8R x*/(i8* v127) {{
  i8 v128; /*t*/
  ((v128)=(*v127));
  (id_1569/*op void += i8R a i8 b*/(&(*v127), (((id_1556/*lop i8 i8*/()))-((~((id_1556/*lop i8 i8*/())))))));
  return (v128);
} panic("reached function end without returning anything rop i8 ++ i8R x\n");}

i8 id_1582/*rop i8 -- i8R x*/(i8* v129) {{
  i8 v130; /*t*/
  ((v130)=(*v129));
  (id_1570/*op void -= i8R a i8 b*/(&(*v129), (((id_1556/*lop i8 i8*/()))-((~((id_1556/*lop i8 i8*/())))))));
  return (v130);
} panic("reached function end without returning anything rop i8 -- i8R x\n");}

void id_1583/*op void += i16R a i16 b*/(i16* v132, i16 v133){
  ((*v132)=(((*v132))+((v133))));
}

void id_1584/*op void -= i16R a i16 b*/(i16* v134, i16 v135){
  ((*v134)=(((*v134))-((v135))));
}

void id_1585/*op void /= i16R a i16 b*/(i16* v136, i16 v137){
  ((*v136)=(((*v136))/((v137))));
}

void id_1586/*op void %= i16R a i16 b*/(i16* v138, i16 v139){
  ((*v138)=(((*v138))%((v139))));
}

void id_1587/*op void *= i16R a i16 b*/(i16* v140, i16 v141){
  ((*v140)=(((*v140))*((v141))));
}

void id_1588/*op void ^= i16R a i16 b*/(i16* v142, i16 v143){
  ((*v142)=(((*v142))^((v143))));
}

void id_1589/*op void &= i16R a i16 b*/(i16* v144, i16 v145){
  ((*v144)=(((*v144))&((v145))));
}

void id_1590/*op void |= i16R a i16 b*/(i16* v146, i16 v147){
  ((*v146)=(((*v146))|((v147))));
}

bool id_1591/*op bool %% i16 a i16 b*/(i16 v148, i16 v149) {{
  return (!((((v148))%((v149)))));
} panic("reached function end without returning anything op bool %% i16 a i16 b\n");}

bool id_1592/*op bool !% i16 a i16 b*/(i16 v150, i16 v151) {{
  return (!((id_1591/*op bool %% i16 a i16 b*/((v150), (v151)))));
} panic("reached function end without returning anything op bool !% i16 a i16 b\n");}

i16* id_1593/*lop i16R ++ i16R x*/(i16* v152) {{
  (id_1583/*op void += i16R a i16 b*/(&(*v152), (((id_1557/*lop i16 i16*/()))-((~((id_1557/*lop i16 i16*/())))))));
  return &(*v152);
} panic("reached function end without returning anything lop i16R ++ i16R x\n");}

i16* id_1594/*lop i16R -- i16R x*/(i16* v153) {{
  (id_1584/*op void -= i16R a i16 b*/(&(*v153), (((id_1557/*lop i16 i16*/()))-((~((id_1557/*lop i16 i16*/())))))));
  return &(*v153);
} panic("reached function end without returning anything lop i16R -- i16R x\n");}

i16 id_1595/*rop i16 ++ i16R x*/(i16* v154) {{
  i16 v155; /*t*/
  ((v155)=(*v154));
  (id_1583/*op void += i16R a i16 b*/(&(*v154), (((id_1557/*lop i16 i16*/()))-((~((id_1557/*lop i16 i16*/())))))));
  return (v155);
} panic("reached function end without returning anything rop i16 ++ i16R x\n");}

i16 id_1596/*rop i16 -- i16R x*/(i16* v156) {{
  i16 v157; /*t*/
  ((v157)=(*v156));
  (id_1584/*op void -= i16R a i16 b*/(&(*v156), (((id_1557/*lop i16 i16*/()))-((~((id_1557/*lop i16 i16*/())))))));
  return (v157);
} panic("reached function end without returning anything rop i16 -- i16R x\n");}

void id_1597/*op void += i32R a i32 b*/(i32* v159, i32 v160){
  ((*v159)=(((*v159))+((v160))));
}

void id_1598/*op void -= i32R a i32 b*/(i32* v161, i32 v162){
  ((*v161)=(((*v161))-((v162))));
}

void id_1599/*op void /= i32R a i32 b*/(i32* v163, i32 v164){
  ((*v163)=(((*v163))/((v164))));
}

void id_1600/*op void %= i32R a i32 b*/(i32* v165, i32 v166){
  ((*v165)=(((*v165))%((v166))));
}

void id_1601/*op void *= i32R a i32 b*/(i32* v167, i32 v168){
  ((*v167)=(((*v167))*((v168))));
}

void id_1602/*op void ^= i32R a i32 b*/(i32* v169, i32 v170){
  ((*v169)=(((*v169))^((v170))));
}

void id_1603/*op void &= i32R a i32 b*/(i32* v171, i32 v172){
  ((*v171)=(((*v171))&((v172))));
}

void id_1604/*op void |= i32R a i32 b*/(i32* v173, i32 v174){
  ((*v173)=(((*v173))|((v174))));
}

bool id_1605/*op bool %% i32 a i32 b*/(i32 v175, i32 v176) {{
  return (!((((v175))%((v176)))));
} panic("reached function end without returning anything op bool %% i32 a i32 b\n");}

bool id_1606/*op bool !% i32 a i32 b*/(i32 v177, i32 v178) {{
  return (!((id_1605/*op bool %% i32 a i32 b*/((v177), (v178)))));
} panic("reached function end without returning anything op bool !% i32 a i32 b\n");}

i32* id_1607/*lop i32R ++ i32R x*/(i32* v179) {{
  (id_1597/*op void += i32R a i32 b*/(&(*v179), (((id_1558/*lop i32 i32*/()))-((~((id_1558/*lop i32 i32*/())))))));
  return &(*v179);
} panic("reached function end without returning anything lop i32R ++ i32R x\n");}

i32* id_1608/*lop i32R -- i32R x*/(i32* v180) {{
  (id_1598/*op void -= i32R a i32 b*/(&(*v180), (((id_1558/*lop i32 i32*/()))-((~((id_1558/*lop i32 i32*/())))))));
  return &(*v180);
} panic("reached function end without returning anything lop i32R -- i32R x\n");}

i32 id_1609/*rop i32 ++ i32R x*/(i32* v181) {{
  i32 v182; /*t*/
  ((v182)=(*v181));
  (id_1597/*op void += i32R a i32 b*/(&(*v181), (((id_1558/*lop i32 i32*/()))-((~((id_1558/*lop i32 i32*/())))))));
  return (v182);
} panic("reached function end without returning anything rop i32 ++ i32R x\n");}

i32 id_1610/*rop i32 -- i32R x*/(i32* v183) {{
  i32 v184; /*t*/
  ((v184)=(*v183));
  (id_1598/*op void -= i32R a i32 b*/(&(*v183), (((id_1558/*lop i32 i32*/()))-((~((id_1558/*lop i32 i32*/())))))));
  return (v184);
} panic("reached function end without returning anything rop i32 -- i32R x\n");}

void id_1611/*op void += i64R a i64 b*/(i64* v186, i64 v187){
  ((*v186)=(((*v186))+((v187))));
}

void id_1612/*op void -= i64R a i64 b*/(i64* v188, i64 v189){
  ((*v188)=(((*v188))-((v189))));
}

void id_1613/*op void /= i64R a i64 b*/(i64* v190, i64 v191){
  ((*v190)=(((*v190))/((v191))));
}

void id_1614/*op void %= i64R a i64 b*/(i64* v192, i64 v193){
  ((*v192)=(((*v192))%((v193))));
}

void id_1615/*op void *= i64R a i64 b*/(i64* v194, i64 v195){
  ((*v194)=(((*v194))*((v195))));
}

void id_1616/*op void ^= i64R a i64 b*/(i64* v196, i64 v197){
  ((*v196)=(((*v196))^((v197))));
}

void id_1617/*op void &= i64R a i64 b*/(i64* v198, i64 v199){
  ((*v198)=(((*v198))&((v199))));
}

void id_1618/*op void |= i64R a i64 b*/(i64* v200, i64 v201){
  ((*v200)=(((*v200))|((v201))));
}

bool id_1619/*op bool %% i64 a i64 b*/(i64 v202, i64 v203) {{
  return (!((((v202))%((v203)))));
} panic("reached function end without returning anything op bool %% i64 a i64 b\n");}

bool id_1620/*op bool !% i64 a i64 b*/(i64 v204, i64 v205) {{
  return (!((id_1619/*op bool %% i64 a i64 b*/((v204), (v205)))));
} panic("reached function end without returning anything op bool !% i64 a i64 b\n");}

i64* id_1621/*lop i64R ++ i64R x*/(i64* v206) {{
  (id_1611/*op void += i64R a i64 b*/(&(*v206), (((id_1559/*lop i64 i64*/()))-((~((id_1559/*lop i64 i64*/())))))));
  return &(*v206);
} panic("reached function end without returning anything lop i64R ++ i64R x\n");}

i64* id_1622/*lop i64R -- i64R x*/(i64* v207) {{
  (id_1612/*op void -= i64R a i64 b*/(&(*v207), (((id_1559/*lop i64 i64*/()))-((~((id_1559/*lop i64 i64*/())))))));
  return &(*v207);
} panic("reached function end without returning anything lop i64R -- i64R x\n");}

i64 id_1623/*rop i64 ++ i64R x*/(i64* v208) {{
  i64 v209; /*t*/
  ((v209)=(*v208));
  (id_1611/*op void += i64R a i64 b*/(&(*v208), (((id_1559/*lop i64 i64*/()))-((~((id_1559/*lop i64 i64*/())))))));
  return (v209);
} panic("reached function end without returning anything rop i64 ++ i64R x\n");}

i64 id_1624/*rop i64 -- i64R x*/(i64* v210) {{
  i64 v211; /*t*/
  ((v211)=(*v210));
  (id_1612/*op void -= i64R a i64 b*/(&(*v210), (((id_1559/*lop i64 i64*/()))-((~((id_1559/*lop i64 i64*/())))))));
  return (v211);
} panic("reached function end without returning anything rop i64 -- i64R x\n");}

void id_1625/*op void += u8R a u8 b*/(u8* v213, u8 v214){
  ((*v213)=(((*v213))+((v214))));
}

void id_1626/*op void -= u8R a u8 b*/(u8* v215, u8 v216){
  ((*v215)=(((*v215))-((v216))));
}

void id_1627/*op void /= u8R a u8 b*/(u8* v217, u8 v218){
  ((*v217)=(((*v217))/((v218))));
}

void id_1628/*op void %= u8R a u8 b*/(u8* v219, u8 v220){
  ((*v219)=(((*v219))%((v220))));
}

void id_1629/*op void *= u8R a u8 b*/(u8* v221, u8 v222){
  ((*v221)=(((*v221))*((v222))));
}

void id_1630/*op void ^= u8R a u8 b*/(u8* v223, u8 v224){
  ((*v223)=(((*v223))^((v224))));
}

void id_1631/*op void &= u8R a u8 b*/(u8* v225, u8 v226){
  ((*v225)=(((*v225))&((v226))));
}

void id_1632/*op void |= u8R a u8 b*/(u8* v227, u8 v228){
  ((*v227)=(((*v227))|((v228))));
}

bool id_1633/*op bool %% u8 a u8 b*/(u8 v229, u8 v230) {{
  return (!((((v229))%((v230)))));
} panic("reached function end without returning anything op bool %% u8 a u8 b\n");}

bool id_1634/*op bool !% u8 a u8 b*/(u8 v231, u8 v232) {{
  return (!((id_1633/*op bool %% u8 a u8 b*/((v231), (v232)))));
} panic("reached function end without returning anything op bool !% u8 a u8 b\n");}

u8* id_1635/*lop u8R ++ u8R x*/(u8* v233) {{
  (id_1625/*op void += u8R a u8 b*/(&(*v233), (((id_1560/*lop u8 u8*/()))-((~((id_1560/*lop u8 u8*/())))))));
  return &(*v233);
} panic("reached function end without returning anything lop u8R ++ u8R x\n");}

u8* id_1636/*lop u8R -- u8R x*/(u8* v234) {{
  (id_1626/*op void -= u8R a u8 b*/(&(*v234), (((id_1560/*lop u8 u8*/()))-((~((id_1560/*lop u8 u8*/())))))));
  return &(*v234);
} panic("reached function end without returning anything lop u8R -- u8R x\n");}

u8 id_1637/*rop u8 ++ u8R x*/(u8* v235) {{
  u8 v236; /*t*/
  ((v236)=(*v235));
  (id_1625/*op void += u8R a u8 b*/(&(*v235), (((id_1560/*lop u8 u8*/()))-((~((id_1560/*lop u8 u8*/())))))));
  return (v236);
} panic("reached function end without returning anything rop u8 ++ u8R x\n");}

u8 id_1638/*rop u8 -- u8R x*/(u8* v237) {{
  u8 v238; /*t*/
  ((v238)=(*v237));
  (id_1626/*op void -= u8R a u8 b*/(&(*v237), (((id_1560/*lop u8 u8*/()))-((~((id_1560/*lop u8 u8*/())))))));
  return (v238);
} panic("reached function end without returning anything rop u8 -- u8R x\n");}

void id_1639/*op void += u16R a u16 b*/(u16* v240, u16 v241){
  ((*v240)=(((*v240))+((v241))));
}

void id_1640/*op void -= u16R a u16 b*/(u16* v242, u16 v243){
  ((*v242)=(((*v242))-((v243))));
}

void id_1641/*op void /= u16R a u16 b*/(u16* v244, u16 v245){
  ((*v244)=(((*v244))/((v245))));
}

void id_1642/*op void %= u16R a u16 b*/(u16* v246, u16 v247){
  ((*v246)=(((*v246))%((v247))));
}

void id_1643/*op void *= u16R a u16 b*/(u16* v248, u16 v249){
  ((*v248)=(((*v248))*((v249))));
}

void id_1644/*op void ^= u16R a u16 b*/(u16* v250, u16 v251){
  ((*v250)=(((*v250))^((v251))));
}

void id_1645/*op void &= u16R a u16 b*/(u16* v252, u16 v253){
  ((*v252)=(((*v252))&((v253))));
}

void id_1646/*op void |= u16R a u16 b*/(u16* v254, u16 v255){
  ((*v254)=(((*v254))|((v255))));
}

bool id_1647/*op bool %% u16 a u16 b*/(u16 v256, u16 v257) {{
  return (!((((v256))%((v257)))));
} panic("reached function end without returning anything op bool %% u16 a u16 b\n");}

bool id_1648/*op bool !% u16 a u16 b*/(u16 v258, u16 v259) {{
  return (!((id_1647/*op bool %% u16 a u16 b*/((v258), (v259)))));
} panic("reached function end without returning anything op bool !% u16 a u16 b\n");}

u16* id_1649/*lop u16R ++ u16R x*/(u16* v260) {{
  (id_1639/*op void += u16R a u16 b*/(&(*v260), (((id_1561/*lop u16 u16*/()))-((~((id_1561/*lop u16 u16*/())))))));
  return &(*v260);
} panic("reached function end without returning anything lop u16R ++ u16R x\n");}

u16* id_1650/*lop u16R -- u16R x*/(u16* v261) {{
  (id_1640/*op void -= u16R a u16 b*/(&(*v261), (((id_1561/*lop u16 u16*/()))-((~((id_1561/*lop u16 u16*/())))))));
  return &(*v261);
} panic("reached function end without returning anything lop u16R -- u16R x\n");}

u16 id_1651/*rop u16 ++ u16R x*/(u16* v262) {{
  u16 v263; /*t*/
  ((v263)=(*v262));
  (id_1639/*op void += u16R a u16 b*/(&(*v262), (((id_1561/*lop u16 u16*/()))-((~((id_1561/*lop u16 u16*/())))))));
  return (v263);
} panic("reached function end without returning anything rop u16 ++ u16R x\n");}

u16 id_1652/*rop u16 -- u16R x*/(u16* v264) {{
  u16 v265; /*t*/
  ((v265)=(*v264));
  (id_1640/*op void -= u16R a u16 b*/(&(*v264), (((id_1561/*lop u16 u16*/()))-((~((id_1561/*lop u16 u16*/())))))));
  return (v265);
} panic("reached function end without returning anything rop u16 -- u16R x\n");}

void id_1653/*op void += u32R a u32 b*/(u32* v267, u32 v268){
  ((*v267)=(((*v267))+((v268))));
}

void id_1654/*op void -= u32R a u32 b*/(u32* v269, u32 v270){
  ((*v269)=(((*v269))-((v270))));
}

void id_1655/*op void /= u32R a u32 b*/(u32* v271, u32 v272){
  ((*v271)=(((*v271))/((v272))));
}

void id_1656/*op void %= u32R a u32 b*/(u32* v273, u32 v274){
  ((*v273)=(((*v273))%((v274))));
}

void id_1657/*op void *= u32R a u32 b*/(u32* v275, u32 v276){
  ((*v275)=(((*v275))*((v276))));
}

void id_1658/*op void ^= u32R a u32 b*/(u32* v277, u32 v278){
  ((*v277)=(((*v277))^((v278))));
}

void id_1659/*op void &= u32R a u32 b*/(u32* v279, u32 v280){
  ((*v279)=(((*v279))&((v280))));
}

void id_1660/*op void |= u32R a u32 b*/(u32* v281, u32 v282){
  ((*v281)=(((*v281))|((v282))));
}

bool id_1661/*op bool %% u32 a u32 b*/(u32 v283, u32 v284) {{
  return (!((((v283))%((v284)))));
} panic("reached function end without returning anything op bool %% u32 a u32 b\n");}

bool id_1662/*op bool !% u32 a u32 b*/(u32 v285, u32 v286) {{
  return (!((id_1661/*op bool %% u32 a u32 b*/((v285), (v286)))));
} panic("reached function end without returning anything op bool !% u32 a u32 b\n");}

u32* id_1663/*lop u32R ++ u32R x*/(u32* v287) {{
  (id_1653/*op void += u32R a u32 b*/(&(*v287), (((id_1562/*lop u32 u32*/()))-((~((id_1562/*lop u32 u32*/())))))));
  return &(*v287);
} panic("reached function end without returning anything lop u32R ++ u32R x\n");}

u32* id_1664/*lop u32R -- u32R x*/(u32* v288) {{
  (id_1654/*op void -= u32R a u32 b*/(&(*v288), (((id_1562/*lop u32 u32*/()))-((~((id_1562/*lop u32 u32*/())))))));
  return &(*v288);
} panic("reached function end without returning anything lop u32R -- u32R x\n");}

u32 id_1665/*rop u32 ++ u32R x*/(u32* v289) {{
  u32 v290; /*t*/
  ((v290)=(*v289));
  (id_1653/*op void += u32R a u32 b*/(&(*v289), (((id_1562/*lop u32 u32*/()))-((~((id_1562/*lop u32 u32*/())))))));
  return (v290);
} panic("reached function end without returning anything rop u32 ++ u32R x\n");}

u32 id_1666/*rop u32 -- u32R x*/(u32* v291) {{
  u32 v292; /*t*/
  ((v292)=(*v291));
  (id_1654/*op void -= u32R a u32 b*/(&(*v291), (((id_1562/*lop u32 u32*/()))-((~((id_1562/*lop u32 u32*/())))))));
  return (v292);
} panic("reached function end without returning anything rop u32 -- u32R x\n");}

void id_1667/*op void += u64R a u64 b*/(u64* v294, u64 v295){
  ((*v294)=(((*v294))+((v295))));
}

void id_1668/*op void -= u64R a u64 b*/(u64* v296, u64 v297){
  ((*v296)=(((*v296))-((v297))));
}

void id_1669/*op void /= u64R a u64 b*/(u64* v298, u64 v299){
  ((*v298)=(((*v298))/((v299))));
}

void id_1670/*op void %= u64R a u64 b*/(u64* v300, u64 v301){
  ((*v300)=(((*v300))%((v301))));
}

void id_1671/*op void *= u64R a u64 b*/(u64* v302, u64 v303){
  ((*v302)=(((*v302))*((v303))));
}

void id_1672/*op void ^= u64R a u64 b*/(u64* v304, u64 v305){
  ((*v304)=(((*v304))^((v305))));
}

void id_1673/*op void &= u64R a u64 b*/(u64* v306, u64 v307){
  ((*v306)=(((*v306))&((v307))));
}

void id_1674/*op void |= u64R a u64 b*/(u64* v308, u64 v309){
  ((*v308)=(((*v308))|((v309))));
}

bool id_1675/*op bool %% u64 a u64 b*/(u64 v310, u64 v311) {{
  return (!((((v310))%((v311)))));
} panic("reached function end without returning anything op bool %% u64 a u64 b\n");}

bool id_1676/*op bool !% u64 a u64 b*/(u64 v312, u64 v313) {{
  return (!((id_1675/*op bool %% u64 a u64 b*/((v312), (v313)))));
} panic("reached function end without returning anything op bool !% u64 a u64 b\n");}

u64* id_1677/*lop u64R ++ u64R x*/(u64* v314) {{
  (id_1667/*op void += u64R a u64 b*/(&(*v314), (((id_1563/*lop u64 u64*/()))-((~((id_1563/*lop u64 u64*/())))))));
  return &(*v314);
} panic("reached function end without returning anything lop u64R ++ u64R x\n");}

u64* id_1678/*lop u64R -- u64R x*/(u64* v315) {{
  (id_1668/*op void -= u64R a u64 b*/(&(*v315), (((id_1563/*lop u64 u64*/()))-((~((id_1563/*lop u64 u64*/())))))));
  return &(*v315);
} panic("reached function end without returning anything lop u64R -- u64R x\n");}

u64 id_1679/*rop u64 ++ u64R x*/(u64* v316) {{
  u64 v317; /*t*/
  ((v317)=(*v316));
  (id_1667/*op void += u64R a u64 b*/(&(*v316), (((id_1563/*lop u64 u64*/()))-((~((id_1563/*lop u64 u64*/())))))));
  return (v317);
} panic("reached function end without returning anything rop u64 ++ u64R x\n");}

u64 id_1680/*rop u64 -- u64R x*/(u64* v318) {{
  u64 v319; /*t*/
  ((v319)=(*v318));
  (id_1668/*op void -= u64R a u64 b*/(&(*v318), (((id_1563/*lop u64 u64*/()))-((~((id_1563/*lop u64 u64*/())))))));
  return (v319);
} panic("reached function end without returning anything rop u64 -- u64R x\n");}

void id_1681/*op void += charR a char b*/(char* v321, char v322){
  ((*v321)=(((*v321))+((v322))));
}

void id_1682/*op void -= charR a char b*/(char* v323, char v324){
  ((*v323)=(((*v323))-((v324))));
}

void id_1683/*op void /= charR a char b*/(char* v325, char v326){
  ((*v325)=(((*v325))/((v326))));
}

void id_1684/*op void %= charR a char b*/(char* v327, char v328){
  ((*v327)=(((*v327))%((v328))));
}

void id_1685/*op void *= charR a char b*/(char* v329, char v330){
  ((*v329)=(((*v329))*((v330))));
}

void id_1686/*op void ^= charR a char b*/(char* v331, char v332){
  ((*v331)=(((*v331))^((v332))));
}

void id_1687/*op void &= charR a char b*/(char* v333, char v334){
  ((*v333)=(((*v333))&((v334))));
}

void id_1688/*op void |= charR a char b*/(char* v335, char v336){
  ((*v335)=(((*v335))|((v336))));
}

bool id_1689/*op bool %% char a char b*/(char v337, char v338) {{
  return (!((((v337))%((v338)))));
} panic("reached function end without returning anything op bool %% char a char b\n");}

bool id_1690/*op bool !% char a char b*/(char v339, char v340) {{
  return (!((id_1689/*op bool %% char a char b*/((v339), (v340)))));
} panic("reached function end without returning anything op bool !% char a char b\n");}

char* id_1691/*lop charR ++ charR x*/(char* v341) {{
  (id_1681/*op void += charR a char b*/(&(*v341), (((id_1565/*lop char char*/()))-((~((id_1565/*lop char char*/())))))));
  return &(*v341);
} panic("reached function end without returning anything lop charR ++ charR x\n");}

char* id_1692/*lop charR -- charR x*/(char* v342) {{
  (id_1682/*op void -= charR a char b*/(&(*v342), (((id_1565/*lop char char*/()))-((~((id_1565/*lop char char*/())))))));
  return &(*v342);
} panic("reached function end without returning anything lop charR -- charR x\n");}

char id_1693/*rop char ++ charR x*/(char* v343) {{
  char v344; /*t*/
  ((v344)=(*v343));
  (id_1681/*op void += charR a char b*/(&(*v343), (((id_1565/*lop char char*/()))-((~((id_1565/*lop char char*/())))))));
  return (v344);
} panic("reached function end without returning anything rop char ++ charR x\n");}

char id_1694/*rop char -- charR x*/(char* v345) {{
  char v346; /*t*/
  ((v346)=(*v345));
  (id_1682/*op void -= charR a char b*/(&(*v345), (((id_1565/*lop char char*/()))-((~((id_1565/*lop char char*/())))))));
  return (v346);
} panic("reached function end without returning anything rop char -- charR x\n");}

void id_1695/*op void += f32R a f32 b*/(f32* v348, f32 v349){
  ((*v348)=(((*v348))+((v349))));
}

void id_1696/*op void -= f32R a f32 b*/(f32* v350, f32 v351){
  ((*v350)=(((*v350))-((v351))));
}

void id_1697/*op void /= f32R a f32 b*/(f32* v352, f32 v353){
  ((*v352)=(((*v352))/((v353))));
}

void id_1698/*op void *= f32R a f32 b*/(f32* v354, f32 v355){
  ((*v354)=(((*v354))*((v355))));
}

void id_1699/*op void += f64R a f64 b*/(f64* v356, f64 v357){
  ((*v356)=(((*v356))+((v357))));
}

void id_1700/*op void -= f64R a f64 b*/(f64* v358, f64 v359){
  ((*v358)=(((*v358))-((v359))));
}

void id_1701/*op void /= f64R a f64 b*/(f64* v360, f64 v361){
  ((*v360)=(((*v360))/((v361))));
}

void id_1702/*op void *= f64R a f64 b*/(f64* v362, f64 v363){
  ((*v362)=(((*v362))*((v363))));
}

bool id_1703/*op bool < bool a bool b*/(bool v364, bool v365) {{
  return (((!((v364))))&&((v365)));
} panic("reached function end without returning anything op bool < bool a bool b\n");}

i64 id_1704/*op i64 ** i64 a i64 n*/(i64 v366, i64 v367) {{
  i64 v368; /*res*/
  ((v368)=((i64)1));
  while ((((v367))!=(((i64)0)))) {
    if ((id_1620/*op bool !% i64 a i64 b*/((v367), ((i64)2)))) {
      (id_1615/*op void *= i64R a i64 b*/(&(v368), (v366)));
    }
    (id_1615/*op void *= i64R a i64 b*/(&(v366), (v366)));
    (id_1613/*op void /= i64R a i64 b*/(&(v367), ((i64)2)));
  }
  return (v368);
} panic("reached function end without returning anything op i64 ** i64 a i64 n\n");}

id_1501/*Out*/ id_1705/*lop Out Out*/() {{
  id_1501/*Out*/ v369; /*o*/
  return (v369);
} panic("reached function end without returning anything lop Out Out\n");}

id_1501/*Out*/ id_1706/*op Out < Out a Out b*/(id_1501/*Out*/ v370, id_1501/*Out*/ v371) {{
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out a Out b\n");}

id_1501/*Out*/ id_1707/*lop Out < Out o*/(id_1501/*Out*/ v372) {{
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Out o\n");}

id_1501/*Out*/ id_1708/*rop Out < str i*/(str v373) {{
  (printf("%s\n", (v373)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < str i\n");}

id_1501/*Out*/ id_1709/*lop Out < str i*/(str v374) {{
  ((printf("%s", (v374))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < str i\n");}

id_1501/*Out*/ id_1710/*op Out < Out o str i*/(id_1501/*Out*/ v375, str v376) {{
  ((printf("%s", (v376))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o str i\n");}

id_1501/*Out*/ id_1711/*lop Out > strR i*/(str* v377) {{
  ((*v377)=(in_str()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > strR i\n");}

id_1501/*Out*/ id_1712/*op Out > Out o strR i*/(id_1501/*Out*/ v378, str* v379) {{
  ((*v379)=(in_str()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o strR i\n");}

id_1501/*Out*/ id_1713/*rop Out < char i*/(char v380) {{
  (printf("%c\n", (v380)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < char i\n");}

id_1501/*Out*/ id_1714/*lop Out < char i*/(char v381) {{
  ((printf("%c", (v381))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < char i\n");}

id_1501/*Out*/ id_1715/*op Out < Out o char i*/(id_1501/*Out*/ v382, char v383) {{
  ((printf("%c", (v383))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o char i\n");}

id_1501/*Out*/ id_1716/*lop Out > charR i*/(char* v384) {{
  ((*v384)=(in_char()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > charR i\n");}

id_1501/*Out*/ id_1717/*op Out > Out o charR i*/(id_1501/*Out*/ v385, char* v386) {{
  ((*v386)=(in_char()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o charR i\n");}

id_1501/*Out*/ id_1718/*rop Out < i8 i*/(i8 v387) {{
  (printf("%d\n", (v387)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i8 i\n");}

id_1501/*Out*/ id_1719/*lop Out < i8 i*/(i8 v388) {{
  ((printf("%d", (v388))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i8 i\n");}

id_1501/*Out*/ id_1720/*op Out < Out o i8 i*/(id_1501/*Out*/ v389, i8 v390) {{
  ((printf("%d", (v390))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i8 i\n");}

id_1501/*Out*/ id_1721/*lop Out > i8R i*/(i8* v391) {{
  ((*v391)=(in_i8()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i8R i\n");}

id_1501/*Out*/ id_1722/*op Out > Out o i8R i*/(id_1501/*Out*/ v392, i8* v393) {{
  ((*v393)=(in_i8()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i8R i\n");}

id_1501/*Out*/ id_1723/*rop Out < i16 i*/(i16 v394) {{
  (printf("%hd\n", (v394)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i16 i\n");}

id_1501/*Out*/ id_1724/*lop Out < i16 i*/(i16 v395) {{
  ((printf("%hd", (v395))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i16 i\n");}

id_1501/*Out*/ id_1725/*op Out < Out o i16 i*/(id_1501/*Out*/ v396, i16 v397) {{
  ((printf("%hd", (v397))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i16 i\n");}

id_1501/*Out*/ id_1726/*lop Out > i16R i*/(i16* v398) {{
  ((*v398)=(in_i16()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i16R i\n");}

id_1501/*Out*/ id_1727/*op Out > Out o i16R i*/(id_1501/*Out*/ v399, i16* v400) {{
  ((*v400)=(in_i16()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i16R i\n");}

id_1501/*Out*/ id_1728/*rop Out < i32 i*/(i32 v401) {{
  (printf("%d\n", (v401)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i32 i\n");}

id_1501/*Out*/ id_1729/*lop Out < i32 i*/(i32 v402) {{
  ((printf("%d", (v402))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i32 i\n");}

id_1501/*Out*/ id_1730/*op Out < Out o i32 i*/(id_1501/*Out*/ v403, i32 v404) {{
  ((printf("%d", (v404))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i32 i\n");}

id_1501/*Out*/ id_1731/*lop Out > i32R i*/(i32* v405) {{
  ((*v405)=(in_i32()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i32R i\n");}

id_1501/*Out*/ id_1732/*op Out > Out o i32R i*/(id_1501/*Out*/ v406, i32* v407) {{
  ((*v407)=(in_i32()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i32R i\n");}

id_1501/*Out*/ id_1733/*rop Out < i64 i*/(i64 v408) {{
  (printf("%lld\n", (v408)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i64 i\n");}

id_1501/*Out*/ id_1734/*lop Out < i64 i*/(i64 v409) {{
  ((printf("%lld", (v409))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i64 i\n");}

id_1501/*Out*/ id_1735/*op Out < Out o i64 i*/(id_1501/*Out*/ v410, i64 v411) {{
  ((printf("%lld", (v411))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i64 i\n");}

id_1501/*Out*/ id_1736/*lop Out > i64R i*/(i64* v412) {{
  ((*v412)=(in_i64()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i64R i\n");}

id_1501/*Out*/ id_1737/*op Out > Out o i64R i*/(id_1501/*Out*/ v413, i64* v414) {{
  ((*v414)=(in_i64()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i64R i\n");}

id_1501/*Out*/ id_1738/*rop Out < u8 i*/(u8 v415) {{
  (printf("%d\n", (v415)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u8 i\n");}

id_1501/*Out*/ id_1739/*lop Out < u8 i*/(u8 v416) {{
  ((printf("%d", (v416))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u8 i\n");}

id_1501/*Out*/ id_1740/*op Out < Out o u8 i*/(id_1501/*Out*/ v417, u8 v418) {{
  ((printf("%d", (v418))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u8 i\n");}

id_1501/*Out*/ id_1741/*lop Out > u8R i*/(u8* v419) {{
  ((*v419)=(in_u8()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u8R i\n");}

id_1501/*Out*/ id_1742/*op Out > Out o u8R i*/(id_1501/*Out*/ v420, u8* v421) {{
  ((*v421)=(in_u8()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u8R i\n");}

id_1501/*Out*/ id_1743/*rop Out < u16 i*/(u16 v422) {{
  (printf("%hd\n", (v422)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u16 i\n");}

id_1501/*Out*/ id_1744/*lop Out < u16 i*/(u16 v423) {{
  ((printf("%hd", (v423))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u16 i\n");}

id_1501/*Out*/ id_1745/*op Out < Out o u16 i*/(id_1501/*Out*/ v424, u16 v425) {{
  ((printf("%hd", (v425))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u16 i\n");}

id_1501/*Out*/ id_1746/*lop Out > u16R i*/(u16* v426) {{
  ((*v426)=(in_u16()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u16R i\n");}

id_1501/*Out*/ id_1747/*op Out > Out o u16R i*/(id_1501/*Out*/ v427, u16* v428) {{
  ((*v428)=(in_u16()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u16R i\n");}

id_1501/*Out*/ id_1748/*rop Out < u32 i*/(u32 v429) {{
  (printf("%u\n", (v429)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u32 i\n");}

id_1501/*Out*/ id_1749/*lop Out < u32 i*/(u32 v430) {{
  ((printf("%u", (v430))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u32 i\n");}

id_1501/*Out*/ id_1750/*op Out < Out o u32 i*/(id_1501/*Out*/ v431, u32 v432) {{
  ((printf("%u", (v432))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u32 i\n");}

id_1501/*Out*/ id_1751/*lop Out > u32R i*/(u32* v433) {{
  ((*v433)=(in_u32()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u32R i\n");}

id_1501/*Out*/ id_1752/*op Out > Out o u32R i*/(id_1501/*Out*/ v434, u32* v435) {{
  ((*v435)=(in_u32()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u32R i\n");}

id_1501/*Out*/ id_1753/*rop Out < u64 i*/(u64 v436) {{
  (printf("%llu\n", (v436)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u64 i\n");}

id_1501/*Out*/ id_1754/*lop Out < u64 i*/(u64 v437) {{
  ((printf("%llu", (v437))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u64 i\n");}

id_1501/*Out*/ id_1755/*op Out < Out o u64 i*/(id_1501/*Out*/ v438, u64 v439) {{
  ((printf("%llu", (v439))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u64 i\n");}

id_1501/*Out*/ id_1756/*lop Out > u64R i*/(u64* v440) {{
  ((*v440)=(in_u64()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u64R i\n");}

id_1501/*Out*/ id_1757/*op Out > Out o u64R i*/(id_1501/*Out*/ v441, u64* v442) {{
  ((*v442)=(in_u64()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u64R i\n");}

id_1501/*Out*/ id_1758/*rop Out < f32 i*/(f32 v443) {{
  (printf("%f\n", (v443)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < f32 i\n");}

id_1501/*Out*/ id_1759/*lop Out < f32 i*/(f32 v444) {{
  ((printf("%f", (v444))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < f32 i\n");}

id_1501/*Out*/ id_1760/*op Out < Out o f32 i*/(id_1501/*Out*/ v445, f32 v446) {{
  ((printf("%f", (v446))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o f32 i\n");}

id_1501/*Out*/ id_1761/*lop Out > f32R i*/(f32* v447) {{
  ((*v447)=(in_f32()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > f32R i\n");}

id_1501/*Out*/ id_1762/*op Out > Out o f32R i*/(id_1501/*Out*/ v448, f32* v449) {{
  ((*v449)=(in_f32()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o f32R i\n");}

id_1501/*Out*/ id_1763/*rop Out < f64 i*/(f64 v450) {{
  (printf("%f\n", (v450)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < f64 i\n");}

id_1501/*Out*/ id_1764/*lop Out < f64 i*/(f64 v451) {{
  ((printf("%f", (v451))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < f64 i\n");}

id_1501/*Out*/ id_1765/*op Out < Out o f64 i*/(id_1501/*Out*/ v452, f64 v453) {{
  ((printf("%f", (v453))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o f64 i\n");}

id_1501/*Out*/ id_1766/*lop Out > f64R i*/(f64* v454) {{
  ((*v454)=(in_f64()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > f64R i\n");}

id_1501/*Out*/ id_1767/*op Out > Out o f64R i*/(id_1501/*Out*/ v455, f64* v456) {{
  ((*v456)=(in_f64()));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o f64R i\n");}

void id_1768/*lop void rangeMaker*/(){
  id_1513/*RangeIterRange<i64>*/ v690; /*d1*/
  id_1510/*RangeIterRange<i32>*/ v689; /*c1*/
  id_1507/*RangeIterRange<i16>*/ v688; /*b1*/
  id_1504/*RangeIterRange<i8>*/ v687; /*a1*/
  id_1514/*Range<char>*/ v686; /*e*/
  id_1508/*Range<i32>*/ v594; /*c*/
  id_1516/*RangeIterRange<char>*/ v691; /*e1*/
  id_1505/*Range<i16>*/ v548; /*b*/
  id_1511/*Range<i64>*/ v640; /*d*/
  id_1502/*Range<i8>*/ v502; /*a*/
}

id_1503/*RangeIter<i8>*/ id_1769/*lop RangeIter<i8> RangeIter<i8> i8 val*/(i8 v490) {{
  id_1503/*RangeIter<i8>*/ v491; /*slf*/
  (((&(v491))->id_1539/*val*/)=(v490));
  return (v491);
} panic("reached function end without returning anything lop RangeIter<i8> RangeIter<i8> i8 val\n");}

void id_1770/*lop void ++ RangeIter<i8>R slf*/(id_1503/*RangeIter<i8>*/* v492){
  (*id_1579/*lop i8R ++ i8R x*/(&((&(*v492))->id_1539/*val*/)));
}

i8 id_1771/*lop i8 * RangeIter<i8> slf*/(id_1503/*RangeIter<i8>*/ v493) {{
  return ((&(v493))->id_1539/*val*/);
} panic("reached function end without returning anything lop i8 * RangeIter<i8> slf\n");}

bool id_1772/*op bool != RangeIter<i8> a RangeIter<i8> b*/(id_1503/*RangeIter<i8>*/ v494, id_1503/*RangeIter<i8>*/ v495) {{
  return ((((&(v494))->id_1539/*val*/))!=(((&(v495))->id_1539/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i8> a RangeIter<i8> b\n");}

id_1503/*RangeIter<i8>*/ id_1773/*op RangeIter<i8> .call.begin RangeIterRange<i8>P slf*/(id_1504/*RangeIterRange<i8>*/* v496) {{
  return (((v496))->id_1537/*begin*/);
} panic("reached function end without returning anything op RangeIter<i8> .call.begin RangeIterRange<i8>P slf\n");}

id_1503/*RangeIter<i8>*/ id_1774/*op RangeIter<i8> .call.end RangeIterRange<i8>P slf*/(id_1504/*RangeIterRange<i8>*/* v497) {{
  return (((v497))->id_1538/*end*/);
} panic("reached function end without returning anything op RangeIter<i8> .call.end RangeIterRange<i8>P slf\n");}

id_1504/*RangeIterRange<i8>*/ id_1775/*lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end*/(id_1503/*RangeIter<i8>*/ v498, id_1503/*RangeIter<i8>*/ v499) {{
  id_1504/*RangeIterRange<i8>*/ v500; /*slf*/
  (((&(v500))->id_1537/*begin*/)=(v498));
  (((&(v500))->id_1538/*end*/)=(v499));
  return (v500);
} panic("reached function end without returning anything lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end\n");}

i8 id_1776/*op i8 .call.begin Range<i8>P slf*/(id_1502/*Range<i8>*/* v457) {{
  return (((v457))->id_1537/*begin*/);
} panic("reached function end without returning anything op i8 .call.begin Range<i8>P slf\n");}

i8 id_1777/*op i8 .call.end Range<i8>P slf*/(id_1502/*Range<i8>*/* v458) {{
  return (((v458))->id_1538/*end*/);
} panic("reached function end without returning anything op i8 .call.end Range<i8>P slf\n");}

id_1502/*Range<i8>*/ id_1778/*lop Range<i8> Range<i8> i8 begin i8 end*/(i8 v459, i8 v460) {{
  id_1502/*Range<i8>*/ v461; /*slf*/
  (((&(v461))->id_1537/*begin*/)=(v459));
  (((&(v461))->id_1538/*end*/)=(v460));
  return (v461);
} panic("reached function end without returning anything lop Range<i8> Range<i8> i8 begin i8 end\n");}

id_1502/*Range<i8>*/ id_1779/*op Range<i8> .. i8 begin i8 end*/(i8 v462, i8 v463) {{
  return (id_1778/*lop Range<i8> Range<i8> i8 begin i8 end*/((v462), (v463)));
} panic("reached function end without returning anything op Range<i8> .. i8 begin i8 end\n");}

id_1502/*Range<i8>*/ id_1780/*op Range<i8> ..- i8 begin i8 end*/(i8 v464, i8 v465) {{
  return (id_1779/*op Range<i8> .. i8 begin i8 end*/((v464), (-((v465)))));
} panic("reached function end without returning anything op Range<i8> ..- i8 begin i8 end\n");}

id_1502/*Range<i8>*/ id_1781/*rop Range<i8> .. i8 begin*/(i8 v466) {{
  return (id_1779/*op Range<i8> .. i8 begin i8 end*/((v466), (~((id_1556/*lop i8 i8*/())))));
} panic("reached function end without returning anything rop Range<i8> .. i8 begin\n");}

id_1502/*Range<i8>*/ id_1782/*lop Range<i8> .. i8 end*/(i8 v467) {{
  i8 v469; /*tmp_rval_468*/
  return (id_1779/*op Range<i8> .. i8 begin i8 end*/((*id_1579/*lop i8R ++ i8R x*/(&(*(((v469)=(~((id_1556/*lop i8 i8*/())))), (&(v469)))))), (v467)));
} panic("reached function end without returning anything lop Range<i8> .. i8 end\n");}

id_1502/*Range<i8>*/ id_1783/*lop Range<i8> ..- i8 end*/(i8 v470) {{
  i8 v472; /*tmp_rval_471*/
  return (id_1779/*op Range<i8> .. i8 begin i8 end*/((*id_1579/*lop i8R ++ i8R x*/(&(*(((v472)=(~((id_1556/*lop i8 i8*/())))), (&(v472)))))), (-((v470)))));
} panic("reached function end without returning anything lop Range<i8> ..- i8 end\n");}

id_1502/*Range<i8>*/ id_1784/*lop Range<i8> - Range<i8> r*/(id_1502/*Range<i8>*/ v473) {{
  return (id_1779/*op Range<i8> .. i8 begin i8 end*/((-(((&(v473))->id_1537/*begin*/))), ((&(v473))->id_1538/*end*/)));
} panic("reached function end without returning anything lop Range<i8> - Range<i8> r\n");}

id_1502/*Range<i8>*/ id_1785/*op Range<i8> ..= i8 begin i8 end*/(i8 v474, i8 v475) {{
  i8 v477; /*tmp_rval_476*/
  return (id_1779/*op Range<i8> .. i8 begin i8 end*/((v474), (((v475))+((*id_1579/*lop i8R ++ i8R x*/(&(*(((v477)=(id_1556/*lop i8 i8*/())), (&(v477))))))))));
} panic("reached function end without returning anything op Range<i8> ..= i8 begin i8 end\n");}

id_1502/*Range<i8>*/ id_1786/*lop Range<i8> ..= i8 end*/(i8 v478) {{
  i8 v482; /*tmp_rval_481*/
  i8 v480; /*tmp_rval_479*/
  return (id_1779/*op Range<i8> .. i8 begin i8 end*/((*id_1579/*lop i8R ++ i8R x*/(&(*(((v480)=(~((id_1556/*lop i8 i8*/())))), (&(v480)))))), (((v478))+((*id_1579/*lop i8R ++ i8R x*/(&(*(((v482)=(~((id_1556/*lop i8 i8*/())))), (&(v482))))))))));
} panic("reached function end without returning anything lop Range<i8> ..= i8 end\n");}

id_1502/*Range<i8>*/ id_1787/*lop Range<i8> ..=- i8 end*/(i8 v483) {{
  i8 v487; /*tmp_rval_486*/
  i8 v485; /*tmp_rval_484*/
  return (id_1779/*op Range<i8> .. i8 begin i8 end*/((*id_1579/*lop i8R ++ i8R x*/(&(*(((v485)=(~((id_1556/*lop i8 i8*/())))), (&(v485)))))), (((-((v483))))+((*id_1579/*lop i8R ++ i8R x*/(&(*(((v487)=(~((id_1556/*lop i8 i8*/())))), (&(v487))))))))));
} panic("reached function end without returning anything lop Range<i8> ..=- i8 end\n");}

bool id_1788/*op bool == i8 i Range<i8> r*/(i8 v488, id_1502/*Range<i8>*/ v489) {{
  if (((((&(v489))->id_1537/*begin*/))<(((&(v489))->id_1538/*end*/)))) {
    return ((((((&(v489))->id_1537/*begin*/))<=((v488))))&&((((v488))<(((&(v489))->id_1538/*end*/)))));
  } else {
    return ((((((&(v489))->id_1538/*end*/))<=((v488))))&&((((v488))<(((&(v489))->id_1537/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i8 i Range<i8> r\n");}

id_1504/*RangeIterRange<i8>*/ id_1789/*lop RangeIterRange<i8> iter Range<i8> r*/(id_1502/*Range<i8>*/ v501) {{
  return (id_1775/*lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end*/((id_1769/*lop RangeIter<i8> RangeIter<i8> i8 val*/(((&(v501))->id_1537/*begin*/))), (id_1769/*lop RangeIter<i8> RangeIter<i8> i8 val*/(((&(v501))->id_1538/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i8> iter Range<i8> r\n");}

id_1506/*RangeIter<i16>*/ id_1790/*lop RangeIter<i16> RangeIter<i16> i16 val*/(i16 v536) {{
  id_1506/*RangeIter<i16>*/ v537; /*slf*/
  (((&(v537))->id_1539/*val*/)=(v536));
  return (v537);
} panic("reached function end without returning anything lop RangeIter<i16> RangeIter<i16> i16 val\n");}

void id_1791/*lop void ++ RangeIter<i16>R slf*/(id_1506/*RangeIter<i16>*/* v538){
  (*id_1593/*lop i16R ++ i16R x*/(&((&(*v538))->id_1539/*val*/)));
}

i16 id_1792/*lop i16 * RangeIter<i16> slf*/(id_1506/*RangeIter<i16>*/ v539) {{
  return ((&(v539))->id_1539/*val*/);
} panic("reached function end without returning anything lop i16 * RangeIter<i16> slf\n");}

bool id_1793/*op bool != RangeIter<i16> a RangeIter<i16> b*/(id_1506/*RangeIter<i16>*/ v540, id_1506/*RangeIter<i16>*/ v541) {{
  return ((((&(v540))->id_1539/*val*/))!=(((&(v541))->id_1539/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i16> a RangeIter<i16> b\n");}

id_1506/*RangeIter<i16>*/ id_1794/*op RangeIter<i16> .call.begin RangeIterRange<i16>P slf*/(id_1507/*RangeIterRange<i16>*/* v542) {{
  return (((v542))->id_1537/*begin*/);
} panic("reached function end without returning anything op RangeIter<i16> .call.begin RangeIterRange<i16>P slf\n");}

id_1506/*RangeIter<i16>*/ id_1795/*op RangeIter<i16> .call.end RangeIterRange<i16>P slf*/(id_1507/*RangeIterRange<i16>*/* v543) {{
  return (((v543))->id_1538/*end*/);
} panic("reached function end without returning anything op RangeIter<i16> .call.end RangeIterRange<i16>P slf\n");}

id_1507/*RangeIterRange<i16>*/ id_1796/*lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end*/(id_1506/*RangeIter<i16>*/ v544, id_1506/*RangeIter<i16>*/ v545) {{
  id_1507/*RangeIterRange<i16>*/ v546; /*slf*/
  (((&(v546))->id_1537/*begin*/)=(v544));
  (((&(v546))->id_1538/*end*/)=(v545));
  return (v546);
} panic("reached function end without returning anything lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end\n");}

i16 id_1797/*op i16 .call.begin Range<i16>P slf*/(id_1505/*Range<i16>*/* v503) {{
  return (((v503))->id_1537/*begin*/);
} panic("reached function end without returning anything op i16 .call.begin Range<i16>P slf\n");}

i16 id_1798/*op i16 .call.end Range<i16>P slf*/(id_1505/*Range<i16>*/* v504) {{
  return (((v504))->id_1538/*end*/);
} panic("reached function end without returning anything op i16 .call.end Range<i16>P slf\n");}

id_1505/*Range<i16>*/ id_1799/*lop Range<i16> Range<i16> i16 begin i16 end*/(i16 v505, i16 v506) {{
  id_1505/*Range<i16>*/ v507; /*slf*/
  (((&(v507))->id_1537/*begin*/)=(v505));
  (((&(v507))->id_1538/*end*/)=(v506));
  return (v507);
} panic("reached function end without returning anything lop Range<i16> Range<i16> i16 begin i16 end\n");}

id_1505/*Range<i16>*/ id_1800/*op Range<i16> .. i16 begin i16 end*/(i16 v508, i16 v509) {{
  return (id_1799/*lop Range<i16> Range<i16> i16 begin i16 end*/((v508), (v509)));
} panic("reached function end without returning anything op Range<i16> .. i16 begin i16 end\n");}

id_1505/*Range<i16>*/ id_1801/*op Range<i16> ..- i16 begin i16 end*/(i16 v510, i16 v511) {{
  return (id_1800/*op Range<i16> .. i16 begin i16 end*/((v510), (-((v511)))));
} panic("reached function end without returning anything op Range<i16> ..- i16 begin i16 end\n");}

id_1505/*Range<i16>*/ id_1802/*rop Range<i16> .. i16 begin*/(i16 v512) {{
  return (id_1800/*op Range<i16> .. i16 begin i16 end*/((v512), (~((id_1557/*lop i16 i16*/())))));
} panic("reached function end without returning anything rop Range<i16> .. i16 begin\n");}

id_1505/*Range<i16>*/ id_1803/*lop Range<i16> .. i16 end*/(i16 v513) {{
  i16 v515; /*tmp_rval_514*/
  return (id_1800/*op Range<i16> .. i16 begin i16 end*/((*id_1593/*lop i16R ++ i16R x*/(&(*(((v515)=(~((id_1557/*lop i16 i16*/())))), (&(v515)))))), (v513)));
} panic("reached function end without returning anything lop Range<i16> .. i16 end\n");}

id_1505/*Range<i16>*/ id_1804/*lop Range<i16> ..- i16 end*/(i16 v516) {{
  i16 v518; /*tmp_rval_517*/
  return (id_1800/*op Range<i16> .. i16 begin i16 end*/((*id_1593/*lop i16R ++ i16R x*/(&(*(((v518)=(~((id_1557/*lop i16 i16*/())))), (&(v518)))))), (-((v516)))));
} panic("reached function end without returning anything lop Range<i16> ..- i16 end\n");}

id_1505/*Range<i16>*/ id_1805/*lop Range<i16> - Range<i16> r*/(id_1505/*Range<i16>*/ v519) {{
  return (id_1800/*op Range<i16> .. i16 begin i16 end*/((-(((&(v519))->id_1537/*begin*/))), ((&(v519))->id_1538/*end*/)));
} panic("reached function end without returning anything lop Range<i16> - Range<i16> r\n");}

id_1505/*Range<i16>*/ id_1806/*op Range<i16> ..= i16 begin i16 end*/(i16 v520, i16 v521) {{
  i16 v523; /*tmp_rval_522*/
  return (id_1800/*op Range<i16> .. i16 begin i16 end*/((v520), (((v521))+((*id_1593/*lop i16R ++ i16R x*/(&(*(((v523)=(id_1557/*lop i16 i16*/())), (&(v523))))))))));
} panic("reached function end without returning anything op Range<i16> ..= i16 begin i16 end\n");}

id_1505/*Range<i16>*/ id_1807/*lop Range<i16> ..= i16 end*/(i16 v524) {{
  i16 v528; /*tmp_rval_527*/
  i16 v526; /*tmp_rval_525*/
  return (id_1800/*op Range<i16> .. i16 begin i16 end*/((*id_1593/*lop i16R ++ i16R x*/(&(*(((v526)=(~((id_1557/*lop i16 i16*/())))), (&(v526)))))), (((v524))+((*id_1593/*lop i16R ++ i16R x*/(&(*(((v528)=(~((id_1557/*lop i16 i16*/())))), (&(v528))))))))));
} panic("reached function end without returning anything lop Range<i16> ..= i16 end\n");}

id_1505/*Range<i16>*/ id_1808/*lop Range<i16> ..=- i16 end*/(i16 v529) {{
  i16 v533; /*tmp_rval_532*/
  i16 v531; /*tmp_rval_530*/
  return (id_1800/*op Range<i16> .. i16 begin i16 end*/((*id_1593/*lop i16R ++ i16R x*/(&(*(((v531)=(~((id_1557/*lop i16 i16*/())))), (&(v531)))))), (((-((v529))))+((*id_1593/*lop i16R ++ i16R x*/(&(*(((v533)=(~((id_1557/*lop i16 i16*/())))), (&(v533))))))))));
} panic("reached function end without returning anything lop Range<i16> ..=- i16 end\n");}

bool id_1809/*op bool == i16 i Range<i16> r*/(i16 v534, id_1505/*Range<i16>*/ v535) {{
  if (((((&(v535))->id_1537/*begin*/))<(((&(v535))->id_1538/*end*/)))) {
    return ((((((&(v535))->id_1537/*begin*/))<=((v534))))&&((((v534))<(((&(v535))->id_1538/*end*/)))));
  } else {
    return ((((((&(v535))->id_1538/*end*/))<=((v534))))&&((((v534))<(((&(v535))->id_1537/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i16 i Range<i16> r\n");}

id_1507/*RangeIterRange<i16>*/ id_1810/*lop RangeIterRange<i16> iter Range<i16> r*/(id_1505/*Range<i16>*/ v547) {{
  return (id_1796/*lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end*/((id_1790/*lop RangeIter<i16> RangeIter<i16> i16 val*/(((&(v547))->id_1537/*begin*/))), (id_1790/*lop RangeIter<i16> RangeIter<i16> i16 val*/(((&(v547))->id_1538/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i16> iter Range<i16> r\n");}

id_1509/*RangeIter<i32>*/ id_1811/*lop RangeIter<i32> RangeIter<i32> i32 val*/(i32 v582) {{
  id_1509/*RangeIter<i32>*/ v583; /*slf*/
  (((&(v583))->id_1539/*val*/)=(v582));
  return (v583);
} panic("reached function end without returning anything lop RangeIter<i32> RangeIter<i32> i32 val\n");}

void id_1812/*lop void ++ RangeIter<i32>R slf*/(id_1509/*RangeIter<i32>*/* v584){
  (*id_1607/*lop i32R ++ i32R x*/(&((&(*v584))->id_1539/*val*/)));
}

i32 id_1813/*lop i32 * RangeIter<i32> slf*/(id_1509/*RangeIter<i32>*/ v585) {{
  return ((&(v585))->id_1539/*val*/);
} panic("reached function end without returning anything lop i32 * RangeIter<i32> slf\n");}

bool id_1814/*op bool != RangeIter<i32> a RangeIter<i32> b*/(id_1509/*RangeIter<i32>*/ v586, id_1509/*RangeIter<i32>*/ v587) {{
  return ((((&(v586))->id_1539/*val*/))!=(((&(v587))->id_1539/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i32> a RangeIter<i32> b\n");}

id_1509/*RangeIter<i32>*/ id_1815/*op RangeIter<i32> .call.begin RangeIterRange<i32>P slf*/(id_1510/*RangeIterRange<i32>*/* v588) {{
  return (((v588))->id_1537/*begin*/);
} panic("reached function end without returning anything op RangeIter<i32> .call.begin RangeIterRange<i32>P slf\n");}

id_1509/*RangeIter<i32>*/ id_1816/*op RangeIter<i32> .call.end RangeIterRange<i32>P slf*/(id_1510/*RangeIterRange<i32>*/* v589) {{
  return (((v589))->id_1538/*end*/);
} panic("reached function end without returning anything op RangeIter<i32> .call.end RangeIterRange<i32>P slf\n");}

id_1510/*RangeIterRange<i32>*/ id_1817/*lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end*/(id_1509/*RangeIter<i32>*/ v590, id_1509/*RangeIter<i32>*/ v591) {{
  id_1510/*RangeIterRange<i32>*/ v592; /*slf*/
  (((&(v592))->id_1537/*begin*/)=(v590));
  (((&(v592))->id_1538/*end*/)=(v591));
  return (v592);
} panic("reached function end without returning anything lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end\n");}

i32 id_1818/*op i32 .call.begin Range<i32>P slf*/(id_1508/*Range<i32>*/* v549) {{
  return (((v549))->id_1537/*begin*/);
} panic("reached function end without returning anything op i32 .call.begin Range<i32>P slf\n");}

i32 id_1819/*op i32 .call.end Range<i32>P slf*/(id_1508/*Range<i32>*/* v550) {{
  return (((v550))->id_1538/*end*/);
} panic("reached function end without returning anything op i32 .call.end Range<i32>P slf\n");}

id_1508/*Range<i32>*/ id_1820/*lop Range<i32> Range<i32> i32 begin i32 end*/(i32 v551, i32 v552) {{
  id_1508/*Range<i32>*/ v553; /*slf*/
  (((&(v553))->id_1537/*begin*/)=(v551));
  (((&(v553))->id_1538/*end*/)=(v552));
  return (v553);
} panic("reached function end without returning anything lop Range<i32> Range<i32> i32 begin i32 end\n");}

id_1508/*Range<i32>*/ id_1821/*op Range<i32> .. i32 begin i32 end*/(i32 v554, i32 v555) {{
  return (id_1820/*lop Range<i32> Range<i32> i32 begin i32 end*/((v554), (v555)));
} panic("reached function end without returning anything op Range<i32> .. i32 begin i32 end\n");}

id_1508/*Range<i32>*/ id_1822/*op Range<i32> ..- i32 begin i32 end*/(i32 v556, i32 v557) {{
  return (id_1821/*op Range<i32> .. i32 begin i32 end*/((v556), (-((v557)))));
} panic("reached function end without returning anything op Range<i32> ..- i32 begin i32 end\n");}

id_1508/*Range<i32>*/ id_1823/*rop Range<i32> .. i32 begin*/(i32 v558) {{
  return (id_1821/*op Range<i32> .. i32 begin i32 end*/((v558), (~((id_1558/*lop i32 i32*/())))));
} panic("reached function end without returning anything rop Range<i32> .. i32 begin\n");}

id_1508/*Range<i32>*/ id_1824/*lop Range<i32> .. i32 end*/(i32 v559) {{
  i32 v561; /*tmp_rval_560*/
  return (id_1821/*op Range<i32> .. i32 begin i32 end*/((*id_1607/*lop i32R ++ i32R x*/(&(*(((v561)=(~((id_1558/*lop i32 i32*/())))), (&(v561)))))), (v559)));
} panic("reached function end without returning anything lop Range<i32> .. i32 end\n");}

id_1508/*Range<i32>*/ id_1825/*lop Range<i32> ..- i32 end*/(i32 v562) {{
  i32 v564; /*tmp_rval_563*/
  return (id_1821/*op Range<i32> .. i32 begin i32 end*/((*id_1607/*lop i32R ++ i32R x*/(&(*(((v564)=(~((id_1558/*lop i32 i32*/())))), (&(v564)))))), (-((v562)))));
} panic("reached function end without returning anything lop Range<i32> ..- i32 end\n");}

id_1508/*Range<i32>*/ id_1826/*lop Range<i32> - Range<i32> r*/(id_1508/*Range<i32>*/ v565) {{
  return (id_1821/*op Range<i32> .. i32 begin i32 end*/((-(((&(v565))->id_1537/*begin*/))), ((&(v565))->id_1538/*end*/)));
} panic("reached function end without returning anything lop Range<i32> - Range<i32> r\n");}

id_1508/*Range<i32>*/ id_1827/*op Range<i32> ..= i32 begin i32 end*/(i32 v566, i32 v567) {{
  i32 v569; /*tmp_rval_568*/
  return (id_1821/*op Range<i32> .. i32 begin i32 end*/((v566), (((v567))+((*id_1607/*lop i32R ++ i32R x*/(&(*(((v569)=(id_1558/*lop i32 i32*/())), (&(v569))))))))));
} panic("reached function end without returning anything op Range<i32> ..= i32 begin i32 end\n");}

id_1508/*Range<i32>*/ id_1828/*lop Range<i32> ..= i32 end*/(i32 v570) {{
  i32 v574; /*tmp_rval_573*/
  i32 v572; /*tmp_rval_571*/
  return (id_1821/*op Range<i32> .. i32 begin i32 end*/((*id_1607/*lop i32R ++ i32R x*/(&(*(((v572)=(~((id_1558/*lop i32 i32*/())))), (&(v572)))))), (((v570))+((*id_1607/*lop i32R ++ i32R x*/(&(*(((v574)=(~((id_1558/*lop i32 i32*/())))), (&(v574))))))))));
} panic("reached function end without returning anything lop Range<i32> ..= i32 end\n");}

id_1508/*Range<i32>*/ id_1829/*lop Range<i32> ..=- i32 end*/(i32 v575) {{
  i32 v579; /*tmp_rval_578*/
  i32 v577; /*tmp_rval_576*/
  return (id_1821/*op Range<i32> .. i32 begin i32 end*/((*id_1607/*lop i32R ++ i32R x*/(&(*(((v577)=(~((id_1558/*lop i32 i32*/())))), (&(v577)))))), (((-((v575))))+((*id_1607/*lop i32R ++ i32R x*/(&(*(((v579)=(~((id_1558/*lop i32 i32*/())))), (&(v579))))))))));
} panic("reached function end without returning anything lop Range<i32> ..=- i32 end\n");}

bool id_1830/*op bool == i32 i Range<i32> r*/(i32 v580, id_1508/*Range<i32>*/ v581) {{
  if (((((&(v581))->id_1537/*begin*/))<(((&(v581))->id_1538/*end*/)))) {
    return ((((((&(v581))->id_1537/*begin*/))<=((v580))))&&((((v580))<(((&(v581))->id_1538/*end*/)))));
  } else {
    return ((((((&(v581))->id_1538/*end*/))<=((v580))))&&((((v580))<(((&(v581))->id_1537/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i32 i Range<i32> r\n");}

id_1510/*RangeIterRange<i32>*/ id_1831/*lop RangeIterRange<i32> iter Range<i32> r*/(id_1508/*Range<i32>*/ v593) {{
  return (id_1817/*lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end*/((id_1811/*lop RangeIter<i32> RangeIter<i32> i32 val*/(((&(v593))->id_1537/*begin*/))), (id_1811/*lop RangeIter<i32> RangeIter<i32> i32 val*/(((&(v593))->id_1538/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i32> iter Range<i32> r\n");}

id_1512/*RangeIter<i64>*/ id_1832/*lop RangeIter<i64> RangeIter<i64> i64 val*/(i64 v628) {{
  id_1512/*RangeIter<i64>*/ v629; /*slf*/
  (((&(v629))->id_1539/*val*/)=(v628));
  return (v629);
} panic("reached function end without returning anything lop RangeIter<i64> RangeIter<i64> i64 val\n");}

void id_1833/*lop void ++ RangeIter<i64>R slf*/(id_1512/*RangeIter<i64>*/* v630){
  (*id_1621/*lop i64R ++ i64R x*/(&((&(*v630))->id_1539/*val*/)));
}

i64 id_1834/*lop i64 * RangeIter<i64> slf*/(id_1512/*RangeIter<i64>*/ v631) {{
  return ((&(v631))->id_1539/*val*/);
} panic("reached function end without returning anything lop i64 * RangeIter<i64> slf\n");}

bool id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/(id_1512/*RangeIter<i64>*/ v632, id_1512/*RangeIter<i64>*/ v633) {{
  return ((((&(v632))->id_1539/*val*/))!=(((&(v633))->id_1539/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i64> a RangeIter<i64> b\n");}

id_1512/*RangeIter<i64>*/ id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/(id_1513/*RangeIterRange<i64>*/* v634) {{
  return (((v634))->id_1537/*begin*/);
} panic("reached function end without returning anything op RangeIter<i64> .call.begin RangeIterRange<i64>P slf\n");}

id_1512/*RangeIter<i64>*/ id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/(id_1513/*RangeIterRange<i64>*/* v635) {{
  return (((v635))->id_1538/*end*/);
} panic("reached function end without returning anything op RangeIter<i64> .call.end RangeIterRange<i64>P slf\n");}

id_1513/*RangeIterRange<i64>*/ id_1838/*lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end*/(id_1512/*RangeIter<i64>*/ v636, id_1512/*RangeIter<i64>*/ v637) {{
  id_1513/*RangeIterRange<i64>*/ v638; /*slf*/
  (((&(v638))->id_1537/*begin*/)=(v636));
  (((&(v638))->id_1538/*end*/)=(v637));
  return (v638);
} panic("reached function end without returning anything lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end\n");}

i64 id_1839/*op i64 .call.begin Range<i64>P slf*/(id_1511/*Range<i64>*/* v595) {{
  return (((v595))->id_1537/*begin*/);
} panic("reached function end without returning anything op i64 .call.begin Range<i64>P slf\n");}

i64 id_1840/*op i64 .call.end Range<i64>P slf*/(id_1511/*Range<i64>*/* v596) {{
  return (((v596))->id_1538/*end*/);
} panic("reached function end without returning anything op i64 .call.end Range<i64>P slf\n");}

id_1511/*Range<i64>*/ id_1841/*lop Range<i64> Range<i64> i64 begin i64 end*/(i64 v597, i64 v598) {{
  id_1511/*Range<i64>*/ v599; /*slf*/
  (((&(v599))->id_1537/*begin*/)=(v597));
  (((&(v599))->id_1538/*end*/)=(v598));
  return (v599);
} panic("reached function end without returning anything lop Range<i64> Range<i64> i64 begin i64 end\n");}

id_1511/*Range<i64>*/ id_1842/*op Range<i64> .. i64 begin i64 end*/(i64 v600, i64 v601) {{
  return (id_1841/*lop Range<i64> Range<i64> i64 begin i64 end*/((v600), (v601)));
} panic("reached function end without returning anything op Range<i64> .. i64 begin i64 end\n");}

id_1511/*Range<i64>*/ id_1843/*op Range<i64> ..- i64 begin i64 end*/(i64 v602, i64 v603) {{
  return (id_1842/*op Range<i64> .. i64 begin i64 end*/((v602), (-((v603)))));
} panic("reached function end without returning anything op Range<i64> ..- i64 begin i64 end\n");}

id_1511/*Range<i64>*/ id_1844/*rop Range<i64> .. i64 begin*/(i64 v604) {{
  return (id_1842/*op Range<i64> .. i64 begin i64 end*/((v604), (~((id_1559/*lop i64 i64*/())))));
} panic("reached function end without returning anything rop Range<i64> .. i64 begin\n");}

id_1511/*Range<i64>*/ id_1845/*lop Range<i64> .. i64 end*/(i64 v605) {{
  i64 v607; /*tmp_rval_606*/
  return (id_1842/*op Range<i64> .. i64 begin i64 end*/((*id_1621/*lop i64R ++ i64R x*/(&(*(((v607)=(~((id_1559/*lop i64 i64*/())))), (&(v607)))))), (v605)));
} panic("reached function end without returning anything lop Range<i64> .. i64 end\n");}

id_1511/*Range<i64>*/ id_1846/*lop Range<i64> ..- i64 end*/(i64 v608) {{
  i64 v610; /*tmp_rval_609*/
  return (id_1842/*op Range<i64> .. i64 begin i64 end*/((*id_1621/*lop i64R ++ i64R x*/(&(*(((v610)=(~((id_1559/*lop i64 i64*/())))), (&(v610)))))), (-((v608)))));
} panic("reached function end without returning anything lop Range<i64> ..- i64 end\n");}

id_1511/*Range<i64>*/ id_1847/*lop Range<i64> - Range<i64> r*/(id_1511/*Range<i64>*/ v611) {{
  return (id_1842/*op Range<i64> .. i64 begin i64 end*/((-(((&(v611))->id_1537/*begin*/))), ((&(v611))->id_1538/*end*/)));
} panic("reached function end without returning anything lop Range<i64> - Range<i64> r\n");}

id_1511/*Range<i64>*/ id_1848/*op Range<i64> ..= i64 begin i64 end*/(i64 v612, i64 v613) {{
  i64 v615; /*tmp_rval_614*/
  return (id_1842/*op Range<i64> .. i64 begin i64 end*/((v612), (((v613))+((*id_1621/*lop i64R ++ i64R x*/(&(*(((v615)=(id_1559/*lop i64 i64*/())), (&(v615))))))))));
} panic("reached function end without returning anything op Range<i64> ..= i64 begin i64 end\n");}

id_1511/*Range<i64>*/ id_1849/*lop Range<i64> ..= i64 end*/(i64 v616) {{
  i64 v620; /*tmp_rval_619*/
  i64 v618; /*tmp_rval_617*/
  return (id_1842/*op Range<i64> .. i64 begin i64 end*/((*id_1621/*lop i64R ++ i64R x*/(&(*(((v618)=(~((id_1559/*lop i64 i64*/())))), (&(v618)))))), (((v616))+((*id_1621/*lop i64R ++ i64R x*/(&(*(((v620)=(~((id_1559/*lop i64 i64*/())))), (&(v620))))))))));
} panic("reached function end without returning anything lop Range<i64> ..= i64 end\n");}

id_1511/*Range<i64>*/ id_1850/*lop Range<i64> ..=- i64 end*/(i64 v621) {{
  i64 v625; /*tmp_rval_624*/
  i64 v623; /*tmp_rval_622*/
  return (id_1842/*op Range<i64> .. i64 begin i64 end*/((*id_1621/*lop i64R ++ i64R x*/(&(*(((v623)=(~((id_1559/*lop i64 i64*/())))), (&(v623)))))), (((-((v621))))+((*id_1621/*lop i64R ++ i64R x*/(&(*(((v625)=(~((id_1559/*lop i64 i64*/())))), (&(v625))))))))));
} panic("reached function end without returning anything lop Range<i64> ..=- i64 end\n");}

bool id_1851/*op bool == i64 i Range<i64> r*/(i64 v626, id_1511/*Range<i64>*/ v627) {{
  if (((((&(v627))->id_1537/*begin*/))<(((&(v627))->id_1538/*end*/)))) {
    return ((((((&(v627))->id_1537/*begin*/))<=((v626))))&&((((v626))<(((&(v627))->id_1538/*end*/)))));
  } else {
    return ((((((&(v627))->id_1538/*end*/))<=((v626))))&&((((v626))<(((&(v627))->id_1537/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i64 i Range<i64> r\n");}

id_1513/*RangeIterRange<i64>*/ id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/(id_1511/*Range<i64>*/ v639) {{
  return (id_1838/*lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end*/((id_1832/*lop RangeIter<i64> RangeIter<i64> i64 val*/(((&(v639))->id_1537/*begin*/))), (id_1832/*lop RangeIter<i64> RangeIter<i64> i64 val*/(((&(v639))->id_1538/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i64> iter Range<i64> r\n");}

id_1515/*RangeIter<char>*/ id_1853/*lop RangeIter<char> RangeIter<char> char val*/(char v674) {{
  id_1515/*RangeIter<char>*/ v675; /*slf*/
  (((&(v675))->id_1539/*val*/)=(v674));
  return (v675);
} panic("reached function end without returning anything lop RangeIter<char> RangeIter<char> char val\n");}

void id_1854/*lop void ++ RangeIter<char>R slf*/(id_1515/*RangeIter<char>*/* v676){
  (*id_1691/*lop charR ++ charR x*/(&((&(*v676))->id_1539/*val*/)));
}

char id_1855/*lop char * RangeIter<char> slf*/(id_1515/*RangeIter<char>*/ v677) {{
  return ((&(v677))->id_1539/*val*/);
} panic("reached function end without returning anything lop char * RangeIter<char> slf\n");}

bool id_1856/*op bool != RangeIter<char> a RangeIter<char> b*/(id_1515/*RangeIter<char>*/ v678, id_1515/*RangeIter<char>*/ v679) {{
  return ((((&(v678))->id_1539/*val*/))!=(((&(v679))->id_1539/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<char> a RangeIter<char> b\n");}

id_1515/*RangeIter<char>*/ id_1857/*op RangeIter<char> .call.begin RangeIterRange<char>P slf*/(id_1516/*RangeIterRange<char>*/* v680) {{
  return (((v680))->id_1537/*begin*/);
} panic("reached function end without returning anything op RangeIter<char> .call.begin RangeIterRange<char>P slf\n");}

id_1515/*RangeIter<char>*/ id_1858/*op RangeIter<char> .call.end RangeIterRange<char>P slf*/(id_1516/*RangeIterRange<char>*/* v681) {{
  return (((v681))->id_1538/*end*/);
} panic("reached function end without returning anything op RangeIter<char> .call.end RangeIterRange<char>P slf\n");}

id_1516/*RangeIterRange<char>*/ id_1859/*lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end*/(id_1515/*RangeIter<char>*/ v682, id_1515/*RangeIter<char>*/ v683) {{
  id_1516/*RangeIterRange<char>*/ v684; /*slf*/
  (((&(v684))->id_1537/*begin*/)=(v682));
  (((&(v684))->id_1538/*end*/)=(v683));
  return (v684);
} panic("reached function end without returning anything lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end\n");}

char id_1860/*op char .call.begin Range<char>P slf*/(id_1514/*Range<char>*/* v641) {{
  return (((v641))->id_1537/*begin*/);
} panic("reached function end without returning anything op char .call.begin Range<char>P slf\n");}

char id_1861/*op char .call.end Range<char>P slf*/(id_1514/*Range<char>*/* v642) {{
  return (((v642))->id_1538/*end*/);
} panic("reached function end without returning anything op char .call.end Range<char>P slf\n");}

id_1514/*Range<char>*/ id_1862/*lop Range<char> Range<char> char begin char end*/(char v643, char v644) {{
  id_1514/*Range<char>*/ v645; /*slf*/
  (((&(v645))->id_1537/*begin*/)=(v643));
  (((&(v645))->id_1538/*end*/)=(v644));
  return (v645);
} panic("reached function end without returning anything lop Range<char> Range<char> char begin char end\n");}

id_1514/*Range<char>*/ id_1863/*op Range<char> .. char begin char end*/(char v646, char v647) {{
  return (id_1862/*lop Range<char> Range<char> char begin char end*/((v646), (v647)));
} panic("reached function end without returning anything op Range<char> .. char begin char end\n");}

id_1514/*Range<char>*/ id_1864/*op Range<char> ..- char begin char end*/(char v648, char v649) {{
  return (id_1863/*op Range<char> .. char begin char end*/((v648), (-((v649)))));
} panic("reached function end without returning anything op Range<char> ..- char begin char end\n");}

id_1514/*Range<char>*/ id_1865/*rop Range<char> .. char begin*/(char v650) {{
  return (id_1863/*op Range<char> .. char begin char end*/((v650), (~((id_1565/*lop char char*/())))));
} panic("reached function end without returning anything rop Range<char> .. char begin\n");}

id_1514/*Range<char>*/ id_1866/*lop Range<char> .. char end*/(char v651) {{
  char v653; /*tmp_rval_652*/
  return (id_1863/*op Range<char> .. char begin char end*/((*id_1691/*lop charR ++ charR x*/(&(*(((v653)=(~((id_1565/*lop char char*/())))), (&(v653)))))), (v651)));
} panic("reached function end without returning anything lop Range<char> .. char end\n");}

id_1514/*Range<char>*/ id_1867/*lop Range<char> ..- char end*/(char v654) {{
  char v656; /*tmp_rval_655*/
  return (id_1863/*op Range<char> .. char begin char end*/((*id_1691/*lop charR ++ charR x*/(&(*(((v656)=(~((id_1565/*lop char char*/())))), (&(v656)))))), (-((v654)))));
} panic("reached function end without returning anything lop Range<char> ..- char end\n");}

id_1514/*Range<char>*/ id_1868/*lop Range<char> - Range<char> r*/(id_1514/*Range<char>*/ v657) {{
  return (id_1863/*op Range<char> .. char begin char end*/((-(((&(v657))->id_1537/*begin*/))), ((&(v657))->id_1538/*end*/)));
} panic("reached function end without returning anything lop Range<char> - Range<char> r\n");}

id_1514/*Range<char>*/ id_1869/*op Range<char> ..= char begin char end*/(char v658, char v659) {{
  char v661; /*tmp_rval_660*/
  return (id_1863/*op Range<char> .. char begin char end*/((v658), (((v659))+((*id_1691/*lop charR ++ charR x*/(&(*(((v661)=(id_1565/*lop char char*/())), (&(v661))))))))));
} panic("reached function end without returning anything op Range<char> ..= char begin char end\n");}

id_1514/*Range<char>*/ id_1870/*lop Range<char> ..= char end*/(char v662) {{
  char v666; /*tmp_rval_665*/
  char v664; /*tmp_rval_663*/
  return (id_1863/*op Range<char> .. char begin char end*/((*id_1691/*lop charR ++ charR x*/(&(*(((v664)=(~((id_1565/*lop char char*/())))), (&(v664)))))), (((v662))+((*id_1691/*lop charR ++ charR x*/(&(*(((v666)=(~((id_1565/*lop char char*/())))), (&(v666))))))))));
} panic("reached function end without returning anything lop Range<char> ..= char end\n");}

id_1514/*Range<char>*/ id_1871/*lop Range<char> ..=- char end*/(char v667) {{
  char v671; /*tmp_rval_670*/
  char v669; /*tmp_rval_668*/
  return (id_1863/*op Range<char> .. char begin char end*/((*id_1691/*lop charR ++ charR x*/(&(*(((v669)=(~((id_1565/*lop char char*/())))), (&(v669)))))), (((-((v667))))+((*id_1691/*lop charR ++ charR x*/(&(*(((v671)=(~((id_1565/*lop char char*/())))), (&(v671))))))))));
} panic("reached function end without returning anything lop Range<char> ..=- char end\n");}

bool id_1872/*op bool == char i Range<char> r*/(char v672, id_1514/*Range<char>*/ v673) {{
  if (((((&(v673))->id_1537/*begin*/))<(((&(v673))->id_1538/*end*/)))) {
    return ((((((&(v673))->id_1537/*begin*/))<=((v672))))&&((((v672))<(((&(v673))->id_1538/*end*/)))));
  } else {
    return ((((((&(v673))->id_1538/*end*/))<=((v672))))&&((((v672))<(((&(v673))->id_1537/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == char i Range<char> r\n");}

id_1516/*RangeIterRange<char>*/ id_1873/*lop RangeIterRange<char> iter Range<char> r*/(id_1514/*Range<char>*/ v685) {{
  return (id_1859/*lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end*/((id_1853/*lop RangeIter<char> RangeIter<char> char val*/(((&(v685))->id_1537/*begin*/))), (id_1853/*lop RangeIter<char> RangeIter<char> char val*/(((&(v685))->id_1538/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<char> iter Range<char> r\n");}

id_1518/*VecIter<i64>*/ id_1874/*lop VecIter<i64> VecIter<i64> i64P ptr*/(i64* v728) {{
  id_1518/*VecIter<i64>*/ v729; /*slf*/
  (((&(v729))->id_1543/*ptr*/)=(v728));
  return (v729);
} panic("reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n");}

void id_1875/*lop void ++ VecIter<i64>R slf*/(id_1518/*VecIter<i64>*/* v730){
  (((&(*v730))->id_1543/*ptr*/)=((i64*)((((i64)((&(*v730))->id_1543/*ptr*/)))+(((((i64)1))*((sizeof(i64))))))));
}

id_1518/*VecIter<i64>*/ id_1876/*op VecIter<i64> + VecIter<i64> slf i64 i*/(id_1518/*VecIter<i64>*/ v731, i64 v732) {{
  (((&(v731))->id_1543/*ptr*/)=((i64*)((((i64)((&(v731))->id_1543/*ptr*/)))+((((v732))*((sizeof(i64))))))));
  return (v731);
} panic("reached function end without returning anything op VecIter<i64> + VecIter<i64> slf i64 i\n");}

bool id_1877/*op bool != VecIter<i64> a VecIter<i64> b*/(id_1518/*VecIter<i64>*/ v733, id_1518/*VecIter<i64>*/ v734) {{
  return ((((i64)((&(v733))->id_1543/*ptr*/)))!=(((i64)((&(v734))->id_1543/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<i64> a VecIter<i64> b\n");}

i64* id_1878/*lop i64R * VecIter<i64> slf*/(id_1518/*VecIter<i64>*/ v735) {{
  return &(*((&(v735))->id_1543/*ptr*/));
} panic("reached function end without returning anything lop i64R * VecIter<i64> slf\n");}

id_1518/*VecIter<i64>*/ id_1879/*op VecIter<i64> .call.begin VecIterRange<i64>P slf*/(id_1519/*VecIterRange<i64>*/* v738) {{
  return (((v738))->id_1537/*begin*/);
} panic("reached function end without returning anything op VecIter<i64> .call.begin VecIterRange<i64>P slf\n");}

id_1518/*VecIter<i64>*/ id_1880/*op VecIter<i64> .call.end VecIterRange<i64>P slf*/(id_1519/*VecIterRange<i64>*/* v739) {{
  return (((v739))->id_1538/*end*/);
} panic("reached function end without returning anything op VecIter<i64> .call.end VecIterRange<i64>P slf\n");}

id_1519/*VecIterRange<i64>*/ id_1881/*lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end*/(id_1518/*VecIter<i64>*/ v740, id_1518/*VecIter<i64>*/ v741) {{
  id_1519/*VecIterRange<i64>*/ v742; /*slf*/
  (((&(v742))->id_1537/*begin*/)=(v740));
  (((&(v742))->id_1538/*end*/)=(v741));
  return (v742);
} panic("reached function end without returning anything lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end\n");}

i64* id_1882/*op i64P .call.atP Vec<i64>P slf i64 pos*/(id_1517/*Vec<i64>*/* v692, i64 v693) {{
  return ((i64*)((i64*)((((i64)(((v692))->id_1541/*head*/)))+((((v693))*((sizeof(i64))))))));
} panic("reached function end without returning anything op i64P .call.atP Vec<i64>P slf i64 pos\n");}

i64* id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/(id_1517/*Vec<i64>*/* v694, i64 v695) {{
  return &(*(id_1882/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v694), (v695))));
} panic("reached function end without returning anything op i64R .call.at Vec<i64>P slf i64 pos\n");}

void id_1884/*op void .call.print Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v696){
  (printf("%s", ((str)"[")));
  {
      i64 v704; /*i*/
      id_1512/*RangeIter<i64>*/ v703; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v702; /*tmp_rval_701*/
      id_1512/*RangeIter<i64>*/ v700; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v699; /*tmp_rval_698*/
      id_1513/*RangeIterRange<i64>*/ v697; /*__range*/
      ((v697)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v696))->id_1542/*size*/))))));
      ((v703)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v702)=(v697)), (&(v702))))))));
      ((v700)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v699)=(v697)), (&(v699))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v700), (v703)))) {
        ((v704)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v700))));
        if ((!((!((v704)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(id_1882/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v696), (v704))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v700)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_1885/*op void .call.println Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v705){
  {
      i64 v713; /*i*/
      id_1512/*RangeIter<i64>*/ v712; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v711; /*tmp_rval_710*/
      id_1512/*RangeIter<i64>*/ v709; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v708; /*tmp_rval_707*/
      id_1513/*RangeIterRange<i64>*/ v706; /*__range*/
      ((v706)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v705))->id_1542/*size*/))))));
      ((v712)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v711)=(v706)), (&(v711))))))));
      ((v709)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v708)=(v706)), (&(v708))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v709), (v712)))) {
        ((v713)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v709))));
        (printf("%lld\n", (*(id_1882/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v705), (v713))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v709)));
      }
    }
}

void id_1886/*op void .call.double_cap Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v714){
  i64 v715; /*ncap*/
  ((v715)=(((v714))->id_1540/*cap*/));
  if ((((v715))==(((i64)0)))) {
    ((v715)=((i64)1));
    ((((v714))->id_1541/*head*/)=((i64*)(alloc((sizeof(i64))))));
    ((((v714))->id_1540/*cap*/)=(v715));
  } else {
    i64* v716; /*new_head*/
    (id_1615/*op void *= i64R a i64 b*/(&(v715), ((i64)2)));
    ((v716)=((i64*)(alloc((((v715))*((sizeof(i64))))))));
    {
        i64 v724; /*i*/
        id_1512/*RangeIter<i64>*/ v723; /*__end*/
        id_1513/*RangeIterRange<i64>*/ v722; /*tmp_rval_721*/
        id_1512/*RangeIter<i64>*/ v720; /*__cur*/
        id_1513/*RangeIterRange<i64>*/ v719; /*tmp_rval_718*/
        id_1513/*RangeIterRange<i64>*/ v717; /*__range*/
        ((v717)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v714))->id_1542/*size*/))))));
        ((v723)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v722)=(v717)), (&(v722))))))));
        ((v720)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v719)=(v717)), (&(v719))))))));
        while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v720), (v723)))) {
          ((v724)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v720))));
          ((*((i64*)((((i64)(v716)))+((((v724))*((sizeof(i64))))))))=(*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((v714), (v724))));
          (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v720)));
        }
      }
    (free((void*) ((i64)(((v714))->id_1541/*head*/))));
    ((((v714))->id_1541/*head*/)=(v716));
  }
  ((((v714))->id_1540/*cap*/)=(v715));
}

void id_1887/*op void .call.push_back Vec<i64>P slf i64 val*/(id_1517/*Vec<i64>*/* v725, i64 v726){
  if ((((((v725))->id_1542/*size*/))==((((v725))->id_1540/*cap*/)))) {
    (id_1886/*op void .call.double_cap Vec<i64>P slf*/((v725)));
  }
  ((*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((v725), (((v725))->id_1542/*size*/)))=(v726));
  (*id_1621/*lop i64R ++ i64R x*/(&(((v725))->id_1542/*size*/)));
}

void id_1888/*op void .call.pop_back Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v727){
  (*id_1622/*lop i64R -- i64R x*/(&(((v727))->id_1542/*size*/)));
}

id_1518/*VecIter<i64>*/ id_1889/*op VecIter<i64> .call.begin Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v736) {{
  return (id_1874/*lop VecIter<i64> VecIter<i64> i64P ptr*/((((v736))->id_1541/*head*/)));
} panic("reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P slf\n");}

id_1518/*VecIter<i64>*/ id_1890/*op VecIter<i64> .call.end Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v737) {{
  return (id_1874/*lop VecIter<i64> VecIter<i64> i64P ptr*/((id_1882/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v737), (((v737))->id_1542/*size*/)))));
} panic("reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P slf\n");}

id_1519/*VecIterRange<i64>*/ id_1891/*lop VecIterRange<i64> iter Vec<i64>R slf*/(id_1517/*Vec<i64>*/* v743) {{
  id_1519/*VecIterRange<i64>*/ v744; /*it*/
  (((&(v744))->id_1537/*begin*/)=(id_1889/*op VecIter<i64> .call.begin Vec<i64>P slf*/((&(*v743)))));
  (((&(v744))->id_1538/*end*/)=(id_1890/*op VecIter<i64> .call.end Vec<i64>P slf*/((&(*v743)))));
  return (v744);
} panic("reached function end without returning anything lop VecIterRange<i64> iter Vec<i64>R slf\n");}

i64* id_1892/*op i64R .call.front Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v745) {{
  return &(*(((v745))->id_1541/*head*/));
} panic("reached function end without returning anything op i64R .call.front Vec<i64>P slf\n");}

i64* id_1893/*op i64R .call.back Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v746) {{
  return &(*(id_1882/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v746), (((((v746))->id_1542/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op i64R .call.back Vec<i64>P slf\n");}

void id_1894/*op void .call.dtor Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v747){
  if ((!((!(((i64)(((v747))->id_1541/*head*/))))))) {
    (free((void*) ((i64)(((v747))->id_1541/*head*/))));
    ((((v747))->id_1542/*size*/)=((i64)0));
    ((((v747))->id_1540/*cap*/)=((i64)0));
    ((((v747))->id_1541/*head*/)=((i64*)((i64)0)));
  }
}

id_1517/*Vec<i64>*/ id_1895/*lop Vec<i64> Vec<i64> i64 size*/(i64 v748) {{
  id_1517/*Vec<i64>*/ v749; /*slf*/
  (((&(v749))->id_1541/*head*/)=((i64*)((i64)0)));
  (((&(v749))->id_1542/*size*/)=((i64)0));
  (((&(v749))->id_1540/*cap*/)=((i64)0));
  while (((((&(v749))->id_1540/*cap*/))<((v748)))) {
    (id_1886/*op void .call.double_cap Vec<i64>P slf*/((&(v749))));
  }
  (((&(v749))->id_1542/*size*/)=(v748));
  (((&(v749))->id_1540/*cap*/)=(v748));
  {
      i64 v757; /*i*/
      id_1512/*RangeIter<i64>*/ v756; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v755; /*tmp_rval_754*/
      id_1512/*RangeIter<i64>*/ v753; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v752; /*tmp_rval_751*/
      id_1513/*RangeIterRange<i64>*/ v750; /*__range*/
      ((v750)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v749))->id_1542/*size*/))))));
      ((v756)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v755)=(v750)), (&(v755))))))));
      ((v753)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v752)=(v750)), (&(v752))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v753), (v756)))) {
        ((v757)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v753))));
        ((*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v749)), (v757)))=(id_1559/*lop i64 i64*/()));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v753)));
      }
    }
  return (v749);
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v749))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n");}

id_1517/*Vec<i64>*/ id_1896/*lop Vec<i64> Vec<i64> i64 size i64 default*/(i64 v758, i64 v759) {{
  id_1517/*Vec<i64>*/ v760; /*slf*/
  ((v760)=(id_1895/*lop Vec<i64> Vec<i64> i64 size*/((v758))));
  {
      i64 v768; /*i*/
      id_1512/*RangeIter<i64>*/ v767; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v766; /*tmp_rval_765*/
      id_1512/*RangeIter<i64>*/ v764; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v763; /*tmp_rval_762*/
      id_1513/*RangeIterRange<i64>*/ v761; /*__range*/
      ((v761)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v760))->id_1542/*size*/))))));
      ((v767)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v766)=(v761)), (&(v766))))))));
      ((v764)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v763)=(v761)), (&(v763))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v764), (v767)))) {
        ((v768)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v764))));
        ((*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v760)), (v768)))=(v759));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v764)));
      }
    }
  return (v760);
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v760))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n");}

id_1517/*Vec<i64>*/ id_1897/*lop Vec<i64> Vec<i64>*/() {{
  return (id_1895/*lop Vec<i64> Vec<i64> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64>\n");}

id_1517/*Vec<i64>*/ id_1898/*lop Vec<i64> Vec<i64> Vec<i64>R other*/(id_1517/*Vec<i64>*/* v769) {{
  id_1517/*Vec<i64>*/ v770; /*slf*/
  ((v770)=(id_1895/*lop Vec<i64> Vec<i64> i64 size*/(((&(*v769))->id_1542/*size*/))));
  {
      i64 v778; /*i*/
      id_1513/*RangeIterRange<i64>*/ v776; /*tmp_rval_775*/
      id_1512/*RangeIter<i64>*/ v774; /*__cur*/
      id_1512/*RangeIter<i64>*/ v777; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v773; /*tmp_rval_772*/
      id_1513/*RangeIterRange<i64>*/ v771; /*__range*/
      ((v771)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v769))->id_1542/*size*/))))));
      ((v777)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v776)=(v771)), (&(v776))))))));
      ((v774)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v773)=(v771)), (&(v773))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v774), (v777)))) {
        ((v778)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v774))));
        ((*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v770)), (v778)))=(*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(*v769)), (v778))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v774)));
      }
    }
  return (v770);
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v770))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n");}

void id_1899/*op void += Vec<i64>R slf i64 val*/(id_1517/*Vec<i64>*/* v779, i64 v780){
  (id_1887/*op void .call.push_back Vec<i64>P slf i64 val*/((&(*v779)), (v780)));
}

void id_1900/*op void += Vec<i64>R slf Vec<i64>R other*/(id_1517/*Vec<i64>*/* v781, id_1517/*Vec<i64>*/* v782){
  {
      i64 v790; /*i*/
      id_1512/*RangeIter<i64>*/ v789; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v788; /*tmp_rval_787*/
      id_1512/*RangeIter<i64>*/ v786; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v785; /*tmp_rval_784*/
      id_1513/*RangeIterRange<i64>*/ v783; /*__range*/
      ((v783)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v782))->id_1542/*size*/))))));
      ((v789)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v788)=(v783)), (&(v788))))))));
      ((v786)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v785)=(v783)), (&(v785))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v786), (v789)))) {
        ((v790)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v786))));
        (id_1887/*op void .call.push_back Vec<i64>P slf i64 val*/((&(*v781)), (*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(*v782)), (v790)))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v786)));
      }
    }
}

id_1517/*Vec<i64>*/ id_1901/*op Vec<i64> ,, i64 a i64 b*/(i64 v791, i64 v792) {{
  id_1517/*Vec<i64>*/ v793; /*slf*/
  ((v793)=(id_1897/*lop Vec<i64> Vec<i64>*/()));
  (id_1899/*op void += Vec<i64>R slf i64 val*/(&(v793), (v791)));
  (id_1899/*op void += Vec<i64>R slf i64 val*/(&(v793), (v792)));
  return (v793);
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v793))));
} panic("reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n");}

id_1517/*Vec<i64>*/* id_1902/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(id_1517/*Vec<i64>*/* v794, i64 v795) {{
  (id_1899/*op void += Vec<i64>R slf i64 val*/(&(*v794), (v795)));
  return &(*v794);
} panic("reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n");}

void id_1903/*lop void put Vec<i64>R slf*/(id_1517/*Vec<i64>*/* v796){
  (id_1884/*op void .call.print Vec<i64>P slf*/((&(*v796))));
}

void id_1904/*lop void out Vec<i64>R slf*/(id_1517/*Vec<i64>*/* v797){
  (id_1884/*op void .call.print Vec<i64>P slf*/((&(*v797))));
  (printf("%s\n", ((str)"")));
}

id_1501/*Out*/ id_1905/*rop Out < Vec<i64>R i*/(id_1517/*Vec<i64>*/* v798) {{
  (id_1904/*lop void out Vec<i64>R slf*/(&(*v798)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<i64>R i\n");}

id_1501/*Out*/ id_1906/*lop Out < Vec<i64>R i*/(id_1517/*Vec<i64>*/* v799) {{
  ((id_1903/*lop void put Vec<i64>R slf*/(&(*v799))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<i64>R i\n");}

id_1501/*Out*/ id_1907/*op Out < Out o Vec<i64>R i*/(id_1501/*Out*/ v800, id_1517/*Vec<i64>*/* v801) {{
  ((id_1903/*lop void put Vec<i64>R slf*/(&(*v801))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<i64>R i\n");}

i64* id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/(id_1517/*Vec<i64>*/* v802, i64 v803) {{
  if ((((v803))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v803), (((v802))->id_1542/*size*/)));
  }
  return &(*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((v802), (v803)));
} panic("reached function end without returning anything op i64R .call.sub Vec<i64>P slf i64 id\n");}

id_1517/*Vec<i64>*/ id_1909/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/(id_1517/*Vec<i64>*/* v804, i64 v805, i64 v806) {{
  id_1517/*Vec<i64>*/ v807; /*res*/
  ((v807)=(id_1895/*lop Vec<i64> Vec<i64> i64 size*/(((i64)0))));
  {
      i64 v815; /*i*/
      id_1512/*RangeIter<i64>*/ v814; /*__end*/
      id_1512/*RangeIter<i64>*/ v811; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v813; /*tmp_rval_812*/
      id_1513/*RangeIterRange<i64>*/ v810; /*tmp_rval_809*/
      id_1513/*RangeIterRange<i64>*/ v808; /*__range*/
      ((v808)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/((v805), (v806))))));
      ((v814)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v813)=(v808)), (&(v813))))))));
      ((v811)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v810)=(v808)), (&(v810))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v811), (v814)))) {
        ((v815)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v811))));
        (id_1887/*op void .call.push_back Vec<i64>P slf i64 val*/((&(v807)), (*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((v804), (v815)))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v811)));
      }
    }
  return (v807);
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v807))));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end\n");}

id_1517/*Vec<i64>*/ id_1910/*op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r*/(id_1517/*Vec<i64>*/* v816, id_1511/*Range<i64>*/ v817) {{
  i64 v819; /*end*/
  i64 v818; /*begin*/
  (((v818)=((&(v817))->id_1537/*begin*/)), ((v819)=((&(v817))->id_1538/*end*/)));
  if ((((v818))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v818), (((v816))->id_1542/*size*/)));
  }
  if ((((v818))<(((i64)0)))) {
    ((v818)=((i64)0));
  }
  if ((((v819))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v819), (((v816))->id_1542/*size*/)));
  }
  if ((((v819))>((((v816))->id_1542/*size*/)))) {
    ((v819)=(((v816))->id_1542/*size*/));
  }
  return (id_1909/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((v816), (v818), (v819)));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r\n");}

id_1517/*Vec<i64>*/ id_1911/*op Vec<i64> .call.sub Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v820) {{
  return (id_1909/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((v820), ((i64)0), (((v820))->id_1542/*size*/)));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf\n");}

bool id_1912/*op bool < Vec<i64>R a Vec<i64>R b*/(id_1517/*Vec<i64>*/* v821, id_1517/*Vec<i64>*/* v822) {{
  {
      i64 v830; /*i*/
      id_1513/*RangeIterRange<i64>*/ v828; /*tmp_rval_827*/
      id_1512/*RangeIter<i64>*/ v826; /*__cur*/
      id_1512/*RangeIter<i64>*/ v829; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v825; /*tmp_rval_824*/
      id_1513/*RangeIterRange<i64>*/ v823; /*__range*/
      ((v823)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1567/*lop i64 min i64 a i64 b*/(((&(*v821))->id_1542/*size*/), ((&(*v822))->id_1542/*size*/))))))));
      ((v829)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v828)=(v823)), (&(v828))))))));
      ((v826)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v825)=(v823)), (&(v825))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v826), (v829)))) {
        ((v830)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v826))));
        if ((((*id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v821)), (v830))))<((*id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v822)), (v830)))))) {
          return ((bool)1);
        }
 else if ((((*id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v822)), (v830))))<((*id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v821)), (v830)))))) {
          return ((bool)0);
        }
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v826)));
      }
    }
  if (((((&(*v821))->id_1542/*size*/))<(((&(*v822))->id_1542/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v821))->id_1542/*size*/))>(((&(*v822))->id_1542/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n");}

void id_1913/*lop void swap i64P a i64P b*/(i64* v831, i64* v832){
  i64 v833; /*t*/
  ((v833)=(*(v831)));
  ((*(v831))=(*(v832)));
  ((*(v832))=(v833));
}

i64* id_1914/*lop i64P partition i64P lo i64P hi*/(i64* v834, i64* v835) {{
  i64* v838; /*j*/
  i64* v837; /*i*/
  i64* v836; /*pivot*/
  (((v836)=((i64*)((((i64)(v835)))-(((((i64)1))*((sizeof(i64)))))))), ((v837)=(v834)), ((v838)=(v834)));
  ((v838)=(v834));
  while (((((i64)(v838)))!=(((i64)(v836))))) {
    if ((((*(v838)))<((*(v836))))) {
      (id_1913/*lop void swap i64P a i64P b*/((v837), (v838)));
      ((v837)=((i64*)((((i64)(v837)))+(((((i64)1))*((sizeof(i64))))))));
    }
    ((v838)=((i64*)((((i64)(v838)))+(((((i64)1))*((sizeof(i64))))))));
  }
  (id_1913/*lop void swap i64P a i64P b*/((v837), (v836)));
  return (v837);
} panic("reached function end without returning anything lop i64P partition i64P lo i64P hi\n");}

void id_1915/*lop void qsort i64P lhs i64P rhs*/(i64* v839, i64* v840){
  i64 v842; /*b*/
  i64 v841; /*a*/
  ((v841)=((((i64)(v840)))-(((i64)(v839)))));
  ((v842)=(sizeof(i64)));
  if ((((v841))>((v842)))) {
    i64* v843; /*pi*/
    ((v843)=(id_1914/*lop i64P partition i64P lo i64P hi*/((v839), (v840))));
    (id_1915/*lop void qsort i64P lhs i64P rhs*/((v839), (v843)));
    ((v843)=((i64*)((((i64)(v843)))+(((((i64)1))*((sizeof(i64))))))));
    (id_1915/*lop void qsort i64P lhs i64P rhs*/((v843), (v840)));
  }
}

void id_1916/*op void .call.sort Vec<i64>P slf*/(id_1517/*Vec<i64>*/* v844){
  id_1518/*VecIter<i64>*/ v848; /*tmp_rval_847*/
  id_1518/*VecIter<i64>*/ v846; /*tmp_rval_845*/
  (id_1915/*lop void qsort i64P lhs i64P rhs*/(((&(*(((v846)=(id_1889/*op VecIter<i64> .call.begin Vec<i64>P slf*/((v844)))), (&(v846)))))->id_1543/*ptr*/), ((&(*(((v848)=(id_1890/*op VecIter<i64> .call.end Vec<i64>P slf*/((v844)))), (&(v848)))))->id_1543/*ptr*/)));
}

void id_1917/*lop void sort Vec<i64>R slf*/(id_1517/*Vec<i64>*/* v849){
  (id_1916/*op void .call.sort Vec<i64>P slf*/((&(*v849))));
}

id_1517/*Vec<i64>*/ id_1918/*op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f*/(id_1517/*Vec<i64>*/* v850, i64(*v851)(i64*)) {{
  id_1517/*Vec<i64>*/ v852; /*r*/
  ((v852)=(id_1895/*lop Vec<i64> Vec<i64> i64 size*/((((v850))->id_1542/*size*/))));
  {
      i64 v860; /*i*/
      id_1512/*RangeIter<i64>*/ v859; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v858; /*tmp_rval_857*/
      id_1512/*RangeIter<i64>*/ v856; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v855; /*tmp_rval_854*/
      id_1513/*RangeIterRange<i64>*/ v853; /*__range*/
      ((v853)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v850))->id_1542/*size*/))))));
      ((v859)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v858)=(v853)), (&(v858))))))));
      ((v856)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v855)=(v853)), (&(v855))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v856), (v859)))) {
        ((v860)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v856))));
        ((*id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v852)), (v860)))=((*(v851))(&(*id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/((v850), (v860))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v856)));
      }
    }
  return (v852);
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v852))));
} panic("reached function end without returning anything op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f\n");}

id_1517/*Vec<i64>*/ id_1919/*op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f*/(id_1517/*Vec<i64>*/* v861, bool(*v862)(i64*)) {{
  id_1517/*Vec<i64>*/ v863; /*r*/
  ((v863)=(id_1897/*lop Vec<i64> Vec<i64>*/()));
  {
      i64 v871; /*i*/
      id_1512/*RangeIter<i64>*/ v867; /*__cur*/
      id_1512/*RangeIter<i64>*/ v870; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v869; /*tmp_rval_868*/
      id_1513/*RangeIterRange<i64>*/ v866; /*tmp_rval_865*/
      id_1513/*RangeIterRange<i64>*/ v864; /*__range*/
      ((v864)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v861))->id_1542/*size*/))))));
      ((v870)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v869)=(v864)), (&(v869))))))));
      ((v867)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v866)=(v864)), (&(v866))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v867), (v870)))) {
        ((v871)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v867))));
        if (((*(v862))(&(*id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/((v861), (v871)))))) {
          (id_1899/*op void += Vec<i64>R slf i64 val*/(&(v863), (*id_1908/*op i64R .call.sub Vec<i64>P slf i64 id*/((v861), (v871)))));
        }
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v867)));
      }
    }
  return (v863);
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v863))));
} panic("reached function end without returning anything op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f\n");}

id_1517/*Vec<i64>*/ id_1920/*lop Vec<i64> iota i64 begin i64 end*/(i64 v872, i64 v873) {{
  id_1517/*Vec<i64>*/ v874; /*v*/
  ((v874)=(id_1895/*lop Vec<i64> Vec<i64> i64 size*/((((v873))-((v872))))));
  {
      i64 v882; /*i*/
      id_1512/*RangeIter<i64>*/ v881; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v880; /*tmp_rval_879*/
      id_1512/*RangeIter<i64>*/ v878; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v877; /*tmp_rval_876*/
      id_1513/*RangeIterRange<i64>*/ v875; /*__range*/
      ((v875)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/((v872), (v873))))));
      ((v881)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v880)=(v875)), (&(v880))))))));
      ((v878)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v877)=(v875)), (&(v877))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v878), (v881)))) {
        ((v882)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v878))));
        ((*id_1883/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v874)), (((v882))-((v872)))))=(v882));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v878)));
      }
    }
  return (v874);
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v874))));
} panic("reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n");}

char id_1921/*op char .call.sub strP slf i64 pos*/(str* v883, i64 v884) {{
  return (*((char*)((((i64)(*(v883))))+((v884)))));
} panic("reached function end without returning anything op char .call.sub strP slf i64 pos\n");}

str id_1922/*lop str str*/() {{
  u8* v885; /*ptr*/
  ((v885)=((u8*)(alloc(((i64)1)))));
  ((*(v885))=((u8)0));
  return ((str)(v885));
} panic("reached function end without returning anything lop str str\n");}

bool id_1923/*op bool == char ch str s*/(char v886, str v887) {{
  return (((v886))==((id_1921/*op char .call.sub strP slf i64 pos*/((&(v887)), ((i64)0)))));
} panic("reached function end without returning anything op bool == char ch str s\n");}

char id_1924/*lop char chr str s*/(str v888) {{
  return (id_1921/*op char .call.sub strP slf i64 pos*/((&(v888)), ((i64)0)));
} panic("reached function end without returning anything lop char chr str s\n");}

id_1521/*VecIter<char>*/ id_1925/*lop VecIter<char> VecIter<char> charP ptr*/(char* v925) {{
  id_1521/*VecIter<char>*/ v926; /*slf*/
  (((&(v926))->id_1543/*ptr*/)=(v925));
  return (v926);
} panic("reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n");}

void id_1926/*lop void ++ VecIter<char>R slf*/(id_1521/*VecIter<char>*/* v927){
  (((&(*v927))->id_1543/*ptr*/)=((char*)((((i64)((&(*v927))->id_1543/*ptr*/)))+(((((i64)1))*((sizeof(char))))))));
}

id_1521/*VecIter<char>*/ id_1927/*op VecIter<char> + VecIter<char> slf i64 i*/(id_1521/*VecIter<char>*/ v928, i64 v929) {{
  (((&(v928))->id_1543/*ptr*/)=((char*)((((i64)((&(v928))->id_1543/*ptr*/)))+((((v929))*((sizeof(char))))))));
  return (v928);
} panic("reached function end without returning anything op VecIter<char> + VecIter<char> slf i64 i\n");}

bool id_1928/*op bool != VecIter<char> a VecIter<char> b*/(id_1521/*VecIter<char>*/ v930, id_1521/*VecIter<char>*/ v931) {{
  return ((((i64)((&(v930))->id_1543/*ptr*/)))!=(((i64)((&(v931))->id_1543/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<char> a VecIter<char> b\n");}

char* id_1929/*lop charR * VecIter<char> slf*/(id_1521/*VecIter<char>*/ v932) {{
  return &(*((&(v932))->id_1543/*ptr*/));
} panic("reached function end without returning anything lop charR * VecIter<char> slf\n");}

id_1521/*VecIter<char>*/ id_1930/*op VecIter<char> .call.begin VecIterRange<char>P slf*/(id_1522/*VecIterRange<char>*/* v935) {{
  return (((v935))->id_1537/*begin*/);
} panic("reached function end without returning anything op VecIter<char> .call.begin VecIterRange<char>P slf\n");}

id_1521/*VecIter<char>*/ id_1931/*op VecIter<char> .call.end VecIterRange<char>P slf*/(id_1522/*VecIterRange<char>*/* v936) {{
  return (((v936))->id_1538/*end*/);
} panic("reached function end without returning anything op VecIter<char> .call.end VecIterRange<char>P slf\n");}

id_1522/*VecIterRange<char>*/ id_1932/*lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end*/(id_1521/*VecIter<char>*/ v937, id_1521/*VecIter<char>*/ v938) {{
  id_1522/*VecIterRange<char>*/ v939; /*slf*/
  (((&(v939))->id_1537/*begin*/)=(v937));
  (((&(v939))->id_1538/*end*/)=(v938));
  return (v939);
} panic("reached function end without returning anything lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end\n");}

char* id_1933/*op charP .call.atP Vec<char>P slf i64 pos*/(id_1520/*Vec<char>*/* v889, i64 v890) {{
  return ((char*)((char*)((((i64)(((v889))->id_1541/*head*/)))+((((v890))*((sizeof(char))))))));
} panic("reached function end without returning anything op charP .call.atP Vec<char>P slf i64 pos\n");}

char* id_1934/*op charR .call.at Vec<char>P slf i64 pos*/(id_1520/*Vec<char>*/* v891, i64 v892) {{
  return &(*(id_1933/*op charP .call.atP Vec<char>P slf i64 pos*/((v891), (v892))));
} panic("reached function end without returning anything op charR .call.at Vec<char>P slf i64 pos\n");}

void id_1935/*op void .call.print Vec<char>P slf*/(id_1520/*Vec<char>*/* v893){
  (printf("%s", ((str)"[")));
  {
      i64 v901; /*i*/
      id_1512/*RangeIter<i64>*/ v900; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v899; /*tmp_rval_898*/
      id_1512/*RangeIter<i64>*/ v897; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v896; /*tmp_rval_895*/
      id_1513/*RangeIterRange<i64>*/ v894; /*__range*/
      ((v894)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v893))->id_1542/*size*/))))));
      ((v900)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v899)=(v894)), (&(v899))))))));
      ((v897)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v896)=(v894)), (&(v896))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v897), (v900)))) {
        ((v901)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v897))));
        if ((!((!((v901)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(id_1933/*op charP .call.atP Vec<char>P slf i64 pos*/((v893), (v901))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v897)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_1936/*op void .call.println Vec<char>P slf*/(id_1520/*Vec<char>*/* v902){
  {
      i64 v910; /*i*/
      id_1512/*RangeIter<i64>*/ v909; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v908; /*tmp_rval_907*/
      id_1512/*RangeIter<i64>*/ v906; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v905; /*tmp_rval_904*/
      id_1513/*RangeIterRange<i64>*/ v903; /*__range*/
      ((v903)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v902))->id_1542/*size*/))))));
      ((v909)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v908)=(v903)), (&(v908))))))));
      ((v906)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v905)=(v903)), (&(v905))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v906), (v909)))) {
        ((v910)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v906))));
        (printf("%c\n", (*(id_1933/*op charP .call.atP Vec<char>P slf i64 pos*/((v902), (v910))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v906)));
      }
    }
}

void id_1937/*op void .call.double_cap Vec<char>P slf*/(id_1520/*Vec<char>*/* v911){
  i64 v912; /*ncap*/
  ((v912)=(((v911))->id_1540/*cap*/));
  if ((((v912))==(((i64)0)))) {
    ((v912)=((i64)1));
    ((((v911))->id_1541/*head*/)=((char*)(alloc((sizeof(char))))));
    ((((v911))->id_1540/*cap*/)=(v912));
  } else {
    char* v913; /*new_head*/
    (id_1615/*op void *= i64R a i64 b*/(&(v912), ((i64)2)));
    ((v913)=((char*)(alloc((((v912))*((sizeof(char))))))));
    {
        i64 v921; /*i*/
        id_1512/*RangeIter<i64>*/ v920; /*__end*/
        id_1513/*RangeIterRange<i64>*/ v919; /*tmp_rval_918*/
        id_1512/*RangeIter<i64>*/ v917; /*__cur*/
        id_1513/*RangeIterRange<i64>*/ v916; /*tmp_rval_915*/
        id_1513/*RangeIterRange<i64>*/ v914; /*__range*/
        ((v914)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v911))->id_1542/*size*/))))));
        ((v920)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v919)=(v914)), (&(v919))))))));
        ((v917)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v916)=(v914)), (&(v916))))))));
        while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v917), (v920)))) {
          ((v921)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v917))));
          ((*((char*)((((i64)(v913)))+((((v921))*((sizeof(char))))))))=(*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((v911), (v921))));
          (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v917)));
        }
      }
    (free((void*) ((i64)(((v911))->id_1541/*head*/))));
    ((((v911))->id_1541/*head*/)=(v913));
  }
  ((((v911))->id_1540/*cap*/)=(v912));
}

void id_1938/*op void .call.push_back Vec<char>P slf char val*/(id_1520/*Vec<char>*/* v922, char v923){
  if ((((((v922))->id_1542/*size*/))==((((v922))->id_1540/*cap*/)))) {
    (id_1937/*op void .call.double_cap Vec<char>P slf*/((v922)));
  }
  ((*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((v922), (((v922))->id_1542/*size*/)))=(v923));
  (*id_1621/*lop i64R ++ i64R x*/(&(((v922))->id_1542/*size*/)));
}

void id_1939/*op void .call.pop_back Vec<char>P slf*/(id_1520/*Vec<char>*/* v924){
  (*id_1622/*lop i64R -- i64R x*/(&(((v924))->id_1542/*size*/)));
}

id_1521/*VecIter<char>*/ id_1940/*op VecIter<char> .call.begin Vec<char>P slf*/(id_1520/*Vec<char>*/* v933) {{
  return (id_1925/*lop VecIter<char> VecIter<char> charP ptr*/((((v933))->id_1541/*head*/)));
} panic("reached function end without returning anything op VecIter<char> .call.begin Vec<char>P slf\n");}

id_1521/*VecIter<char>*/ id_1941/*op VecIter<char> .call.end Vec<char>P slf*/(id_1520/*Vec<char>*/* v934) {{
  return (id_1925/*lop VecIter<char> VecIter<char> charP ptr*/((id_1933/*op charP .call.atP Vec<char>P slf i64 pos*/((v934), (((v934))->id_1542/*size*/)))));
} panic("reached function end without returning anything op VecIter<char> .call.end Vec<char>P slf\n");}

id_1522/*VecIterRange<char>*/ id_1942/*lop VecIterRange<char> iter Vec<char>R slf*/(id_1520/*Vec<char>*/* v940) {{
  id_1522/*VecIterRange<char>*/ v941; /*it*/
  (((&(v941))->id_1537/*begin*/)=(id_1940/*op VecIter<char> .call.begin Vec<char>P slf*/((&(*v940)))));
  (((&(v941))->id_1538/*end*/)=(id_1941/*op VecIter<char> .call.end Vec<char>P slf*/((&(*v940)))));
  return (v941);
} panic("reached function end without returning anything lop VecIterRange<char> iter Vec<char>R slf\n");}

char* id_1943/*op charR .call.front Vec<char>P slf*/(id_1520/*Vec<char>*/* v942) {{
  return &(*(((v942))->id_1541/*head*/));
} panic("reached function end without returning anything op charR .call.front Vec<char>P slf\n");}

char* id_1944/*op charR .call.back Vec<char>P slf*/(id_1520/*Vec<char>*/* v943) {{
  return &(*(id_1933/*op charP .call.atP Vec<char>P slf i64 pos*/((v943), (((((v943))->id_1542/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op charR .call.back Vec<char>P slf\n");}

void id_1945/*op void .call.dtor Vec<char>P slf*/(id_1520/*Vec<char>*/* v944){
  if ((!((!(((i64)(((v944))->id_1541/*head*/))))))) {
    (free((void*) ((i64)(((v944))->id_1541/*head*/))));
    ((((v944))->id_1542/*size*/)=((i64)0));
    ((((v944))->id_1540/*cap*/)=((i64)0));
    ((((v944))->id_1541/*head*/)=((char*)((i64)0)));
  }
}

id_1520/*Vec<char>*/ id_1946/*lop Vec<char> Vec<char> i64 size*/(i64 v945) {{
  id_1520/*Vec<char>*/ v946; /*slf*/
  (((&(v946))->id_1541/*head*/)=((char*)((i64)0)));
  (((&(v946))->id_1542/*size*/)=((i64)0));
  (((&(v946))->id_1540/*cap*/)=((i64)0));
  while (((((&(v946))->id_1540/*cap*/))<((v945)))) {
    (id_1937/*op void .call.double_cap Vec<char>P slf*/((&(v946))));
  }
  (((&(v946))->id_1542/*size*/)=(v945));
  (((&(v946))->id_1540/*cap*/)=(v945));
  {
      i64 v954; /*i*/
      id_1512/*RangeIter<i64>*/ v953; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v952; /*tmp_rval_951*/
      id_1512/*RangeIter<i64>*/ v950; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v949; /*tmp_rval_948*/
      id_1513/*RangeIterRange<i64>*/ v947; /*__range*/
      ((v947)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v946))->id_1542/*size*/))))));
      ((v953)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v952)=(v947)), (&(v952))))))));
      ((v950)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v949)=(v947)), (&(v949))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v950), (v953)))) {
        ((v954)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v950))));
        ((*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((&(v946)), (v954)))=(id_1565/*lop char char*/()));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v950)));
      }
    }
  return (v946);
  (id_1945/*op void .call.dtor Vec<char>P slf*/((&(v946))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> i64 size\n");}

id_1520/*Vec<char>*/ id_1947/*lop Vec<char> Vec<char> i64 size char default*/(i64 v955, char v956) {{
  id_1520/*Vec<char>*/ v957; /*slf*/
  ((v957)=(id_1946/*lop Vec<char> Vec<char> i64 size*/((v955))));
  {
      i64 v965; /*i*/
      id_1512/*RangeIter<i64>*/ v964; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v963; /*tmp_rval_962*/
      id_1512/*RangeIter<i64>*/ v961; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v960; /*tmp_rval_959*/
      id_1513/*RangeIterRange<i64>*/ v958; /*__range*/
      ((v958)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v957))->id_1542/*size*/))))));
      ((v964)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v963)=(v958)), (&(v963))))))));
      ((v961)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v960)=(v958)), (&(v960))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v961), (v964)))) {
        ((v965)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v961))));
        ((*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((&(v957)), (v965)))=(v956));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v961)));
      }
    }
  return (v957);
  (id_1945/*op void .call.dtor Vec<char>P slf*/((&(v957))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n");}

id_1520/*Vec<char>*/ id_1948/*lop Vec<char> Vec<char>*/() {{
  return (id_1946/*lop Vec<char> Vec<char> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<char> Vec<char>\n");}

id_1520/*Vec<char>*/ id_1949/*lop Vec<char> Vec<char> Vec<char>R other*/(id_1520/*Vec<char>*/* v966) {{
  id_1520/*Vec<char>*/ v967; /*slf*/
  ((v967)=(id_1946/*lop Vec<char> Vec<char> i64 size*/(((&(*v966))->id_1542/*size*/))));
  {
      i64 v975; /*i*/
      id_1512/*RangeIter<i64>*/ v974; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v973; /*tmp_rval_972*/
      id_1512/*RangeIter<i64>*/ v971; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v970; /*tmp_rval_969*/
      id_1513/*RangeIterRange<i64>*/ v968; /*__range*/
      ((v968)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v966))->id_1542/*size*/))))));
      ((v974)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v973)=(v968)), (&(v973))))))));
      ((v971)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v970)=(v968)), (&(v970))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v971), (v974)))) {
        ((v975)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v971))));
        ((*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((&(v967)), (v975)))=(*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((&(*v966)), (v975))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v971)));
      }
    }
  return (v967);
  (id_1945/*op void .call.dtor Vec<char>P slf*/((&(v967))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n");}

void id_1950/*op void += Vec<char>R slf char val*/(id_1520/*Vec<char>*/* v976, char v977){
  (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&(*v976)), (v977)));
}

void id_1951/*op void += Vec<char>R slf Vec<char>R other*/(id_1520/*Vec<char>*/* v978, id_1520/*Vec<char>*/* v979){
  {
      i64 v987; /*i*/
      id_1512/*RangeIter<i64>*/ v986; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v985; /*tmp_rval_984*/
      id_1512/*RangeIter<i64>*/ v983; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v982; /*tmp_rval_981*/
      id_1513/*RangeIterRange<i64>*/ v980; /*__range*/
      ((v980)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v979))->id_1542/*size*/))))));
      ((v986)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v985)=(v980)), (&(v985))))))));
      ((v983)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v982)=(v980)), (&(v982))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v983), (v986)))) {
        ((v987)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v983))));
        (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&(*v978)), (*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((&(*v979)), (v987)))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v983)));
      }
    }
}

id_1520/*Vec<char>*/ id_1952/*op Vec<char> ,, char a char b*/(char v988, char v989) {{
  id_1520/*Vec<char>*/ v990; /*slf*/
  ((v990)=(id_1948/*lop Vec<char> Vec<char>*/()));
  (id_1950/*op void += Vec<char>R slf char val*/(&(v990), (v988)));
  (id_1950/*op void += Vec<char>R slf char val*/(&(v990), (v989)));
  return (v990);
  (id_1945/*op void .call.dtor Vec<char>P slf*/((&(v990))));
} panic("reached function end without returning anything op Vec<char> ,, char a char b\n");}

id_1520/*Vec<char>*/* id_1953/*op Vec<char>R ,, Vec<char>R v char a*/(id_1520/*Vec<char>*/* v991, char v992) {{
  (id_1950/*op void += Vec<char>R slf char val*/(&(*v991), (v992)));
  return &(*v991);
} panic("reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n");}

void id_1954/*lop void put Vec<char>R slf*/(id_1520/*Vec<char>*/* v993){
  (id_1935/*op void .call.print Vec<char>P slf*/((&(*v993))));
}

void id_1955/*lop void out Vec<char>R slf*/(id_1520/*Vec<char>*/* v994){
  (id_1935/*op void .call.print Vec<char>P slf*/((&(*v994))));
  (printf("%s\n", ((str)"")));
}

id_1501/*Out*/ id_1956/*rop Out < Vec<char>R i*/(id_1520/*Vec<char>*/* v995) {{
  (id_1955/*lop void out Vec<char>R slf*/(&(*v995)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<char>R i\n");}

id_1501/*Out*/ id_1957/*lop Out < Vec<char>R i*/(id_1520/*Vec<char>*/* v996) {{
  ((id_1954/*lop void put Vec<char>R slf*/(&(*v996))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<char>R i\n");}

id_1501/*Out*/ id_1958/*op Out < Out o Vec<char>R i*/(id_1501/*Out*/ v997, id_1520/*Vec<char>*/* v998) {{
  ((id_1954/*lop void put Vec<char>R slf*/(&(*v998))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<char>R i\n");}

char* id_1959/*op charR .call.sub Vec<char>P slf i64 id*/(id_1520/*Vec<char>*/* v999, i64 v1000) {{
  if ((((v1000))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v1000), (((v999))->id_1542/*size*/)));
  }
  return &(*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((v999), (v1000)));
} panic("reached function end without returning anything op charR .call.sub Vec<char>P slf i64 id\n");}

id_1520/*Vec<char>*/ id_1960/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/(id_1520/*Vec<char>*/* v1001, i64 v1002, i64 v1003) {{
  id_1520/*Vec<char>*/ v1004; /*res*/
  ((v1004)=(id_1946/*lop Vec<char> Vec<char> i64 size*/(((i64)0))));
  {
      i64 v1012; /*i*/
      id_1512/*RangeIter<i64>*/ v1011; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1010; /*tmp_rval_1009*/
      id_1512/*RangeIter<i64>*/ v1008; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1007; /*tmp_rval_1006*/
      id_1513/*RangeIterRange<i64>*/ v1005; /*__range*/
      ((v1005)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/((v1002), (v1003))))));
      ((v1011)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1010)=(v1005)), (&(v1010))))))));
      ((v1008)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1007)=(v1005)), (&(v1007))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1008), (v1011)))) {
        ((v1012)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1008))));
        (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&(v1004)), (*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((v1001), (v1012)))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1008)));
      }
    }
  return (v1004);
  (id_1945/*op void .call.dtor Vec<char>P slf*/((&(v1004))));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end\n");}

id_1520/*Vec<char>*/ id_1961/*op Vec<char> .call.sub Vec<char>P slf Range<i64> r*/(id_1520/*Vec<char>*/* v1013, id_1511/*Range<i64>*/ v1014) {{
  i64 v1016; /*end*/
  i64 v1015; /*begin*/
  (((v1015)=((&(v1014))->id_1537/*begin*/)), ((v1016)=((&(v1014))->id_1538/*end*/)));
  if ((((v1015))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v1015), (((v1013))->id_1542/*size*/)));
  }
  if ((((v1015))<(((i64)0)))) {
    ((v1015)=((i64)0));
  }
  if ((((v1016))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v1016), (((v1013))->id_1542/*size*/)));
  }
  if ((((v1016))>((((v1013))->id_1542/*size*/)))) {
    ((v1016)=(((v1013))->id_1542/*size*/));
  }
  return (id_1960/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((v1013), (v1015), (v1016)));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf Range<i64> r\n");}

id_1520/*Vec<char>*/ id_1962/*op Vec<char> .call.sub Vec<char>P slf*/(id_1520/*Vec<char>*/* v1017) {{
  return (id_1960/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((v1017), ((i64)0), (((v1017))->id_1542/*size*/)));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf\n");}

bool id_1963/*op bool < Vec<char>R a Vec<char>R b*/(id_1520/*Vec<char>*/* v1018, id_1520/*Vec<char>*/* v1019) {{
  {
      i64 v1027; /*i*/
      id_1513/*RangeIterRange<i64>*/ v1025; /*tmp_rval_1024*/
      id_1512/*RangeIter<i64>*/ v1023; /*__cur*/
      id_1512/*RangeIter<i64>*/ v1026; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1022; /*tmp_rval_1021*/
      id_1513/*RangeIterRange<i64>*/ v1020; /*__range*/
      ((v1020)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1567/*lop i64 min i64 a i64 b*/(((&(*v1018))->id_1542/*size*/), ((&(*v1019))->id_1542/*size*/))))))));
      ((v1026)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1025)=(v1020)), (&(v1025))))))));
      ((v1023)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1022)=(v1020)), (&(v1022))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1023), (v1026)))) {
        ((v1027)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1023))));
        if ((((*id_1959/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1018)), (v1027))))<((*id_1959/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1019)), (v1027)))))) {
          return ((bool)1);
        }
 else if ((((*id_1959/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1019)), (v1027))))<((*id_1959/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1018)), (v1027)))))) {
          return ((bool)0);
        }
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1023)));
      }
    }
  if (((((&(*v1018))->id_1542/*size*/))<(((&(*v1019))->id_1542/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1018))->id_1542/*size*/))>(((&(*v1019))->id_1542/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n");}

void id_1964/*lop void swap charP a charP b*/(char* v1028, char* v1029){
  char v1030; /*t*/
  ((v1030)=(*(v1028)));
  ((*(v1028))=(*(v1029)));
  ((*(v1029))=(v1030));
}

char* id_1965/*lop charP partition charP lo charP hi*/(char* v1031, char* v1032) {{
  char* v1035; /*j*/
  char* v1034; /*i*/
  char* v1033; /*pivot*/
  (((v1033)=((char*)((((i64)(v1032)))-(((((i64)1))*((sizeof(char)))))))), ((v1034)=(v1031)), ((v1035)=(v1031)));
  ((v1035)=(v1031));
  while (((((i64)(v1035)))!=(((i64)(v1033))))) {
    if ((((*(v1035)))<((*(v1033))))) {
      (id_1964/*lop void swap charP a charP b*/((v1034), (v1035)));
      ((v1034)=((char*)((((i64)(v1034)))+(((((i64)1))*((sizeof(char))))))));
    }
    ((v1035)=((char*)((((i64)(v1035)))+(((((i64)1))*((sizeof(char))))))));
  }
  (id_1964/*lop void swap charP a charP b*/((v1034), (v1033)));
  return (v1034);
} panic("reached function end without returning anything lop charP partition charP lo charP hi\n");}

void id_1966/*lop void qsort charP lhs charP rhs*/(char* v1036, char* v1037){
  i64 v1039; /*b*/
  i64 v1038; /*a*/
  ((v1038)=((((i64)(v1037)))-(((i64)(v1036)))));
  ((v1039)=(sizeof(char)));
  if ((((v1038))>((v1039)))) {
    char* v1040; /*pi*/
    ((v1040)=(id_1965/*lop charP partition charP lo charP hi*/((v1036), (v1037))));
    (id_1966/*lop void qsort charP lhs charP rhs*/((v1036), (v1040)));
    ((v1040)=((char*)((((i64)(v1040)))+(((((i64)1))*((sizeof(char))))))));
    (id_1966/*lop void qsort charP lhs charP rhs*/((v1040), (v1037)));
  }
}

void id_1967/*op void .call.sort Vec<char>P slf*/(id_1520/*Vec<char>*/* v1041){
  id_1521/*VecIter<char>*/ v1045; /*tmp_rval_1044*/
  id_1521/*VecIter<char>*/ v1043; /*tmp_rval_1042*/
  (id_1966/*lop void qsort charP lhs charP rhs*/(((&(*(((v1043)=(id_1940/*op VecIter<char> .call.begin Vec<char>P slf*/((v1041)))), (&(v1043)))))->id_1543/*ptr*/), ((&(*(((v1045)=(id_1941/*op VecIter<char> .call.end Vec<char>P slf*/((v1041)))), (&(v1045)))))->id_1543/*ptr*/)));
}

void id_1968/*lop void sort Vec<char>R slf*/(id_1520/*Vec<char>*/* v1046){
  (id_1967/*op void .call.sort Vec<char>P slf*/((&(*v1046))));
}

id_1520/*Vec<char>*/ id_1969/*op Vec<char> .call.map Vec<char>P slf F<char charR> f*/(id_1520/*Vec<char>*/* v1047, char(*v1048)(char*)) {{
  id_1520/*Vec<char>*/ v1049; /*r*/
  ((v1049)=(id_1946/*lop Vec<char> Vec<char> i64 size*/((((v1047))->id_1542/*size*/))));
  {
      id_1512/*RangeIter<i64>*/ v1056; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1055; /*tmp_rval_1054*/
      id_1512/*RangeIter<i64>*/ v1053; /*__cur*/
      i64 v1057; /*i*/
      id_1513/*RangeIterRange<i64>*/ v1052; /*tmp_rval_1051*/
      id_1513/*RangeIterRange<i64>*/ v1050; /*__range*/
      ((v1050)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1047))->id_1542/*size*/))))));
      ((v1056)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1055)=(v1050)), (&(v1055))))))));
      ((v1053)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1052)=(v1050)), (&(v1052))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1053), (v1056)))) {
        ((v1057)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1053))));
        ((*id_1959/*op charR .call.sub Vec<char>P slf i64 id*/((&(v1049)), (v1057)))=((*(v1048))(&(*id_1959/*op charR .call.sub Vec<char>P slf i64 id*/((v1047), (v1057))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1053)));
      }
    }
  return (v1049);
  (id_1945/*op void .call.dtor Vec<char>P slf*/((&(v1049))));
} panic("reached function end without returning anything op Vec<char> .call.map Vec<char>P slf F<char charR> f\n");}

id_1520/*Vec<char>*/ id_1970/*op Vec<char> .call.filter Vec<char>P slf F<bool charR> f*/(id_1520/*Vec<char>*/* v1058, bool(*v1059)(char*)) {{
  id_1520/*Vec<char>*/ v1060; /*r*/
  ((v1060)=(id_1948/*lop Vec<char> Vec<char>*/()));
  {
      i64 v1068; /*i*/
      id_1512/*RangeIter<i64>*/ v1067; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1066; /*tmp_rval_1065*/
      id_1512/*RangeIter<i64>*/ v1064; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1063; /*tmp_rval_1062*/
      id_1513/*RangeIterRange<i64>*/ v1061; /*__range*/
      ((v1061)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1058))->id_1542/*size*/))))));
      ((v1067)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1066)=(v1061)), (&(v1066))))))));
      ((v1064)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1063)=(v1061)), (&(v1063))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1064), (v1067)))) {
        ((v1068)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1064))));
        if (((*(v1059))(&(*id_1959/*op charR .call.sub Vec<char>P slf i64 id*/((v1058), (v1068)))))) {
          (id_1950/*op void += Vec<char>R slf char val*/(&(v1060), (*id_1959/*op charR .call.sub Vec<char>P slf i64 id*/((v1058), (v1068)))));
        }
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1064)));
      }
    }
  return (v1060);
  (id_1945/*op void .call.dtor Vec<char>P slf*/((&(v1060))));
} panic("reached function end without returning anything op Vec<char> .call.filter Vec<char>P slf F<bool charR> f\n");}

id_1523/*Str*/ id_1971/*lop Str Str*/() {{
  id_1523/*Str*/ v1069; /*slf*/
  (((&(v1069))->id_1544/*data*/)=(id_1948/*lop Vec<char> Vec<char>*/()));
  (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1069))->id_1544/*data*/)), ((char)((u8)0))));
  (((&(v1069))->id_1542/*size*/)=((i64)0));
  return (v1069);
} panic("reached function end without returning anything lop Str Str\n");}

void id_1972/*op void .call.dtor StrP slf*/(id_1523/*Str*/* v1070){
  (id_1945/*op void .call.dtor Vec<char>P slf*/((&(((v1070))->id_1544/*data*/))));
}

str id_1973/*op str .call.cstr StrP slf*/(id_1523/*Str*/* v1071) {{
  id_1521/*VecIter<char>*/ v1072; /*it*/
  ((v1072)=(id_1940/*op VecIter<char> .call.begin Vec<char>P slf*/((&(((v1071))->id_1544/*data*/)))));
  return ((str)((&(v1072))->id_1543/*ptr*/));
} panic("reached function end without returning anything op str .call.cstr StrP slf\n");}

id_1522/*VecIterRange<char>*/ id_1974/*lop VecIterRange<char> iter StrR s*/(id_1523/*Str*/* v1073) {{
  return (id_1932/*lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end*/((id_1940/*op VecIter<char> .call.begin Vec<char>P slf*/((&((&(*v1073))->id_1544/*data*/)))), (id_1927/*op VecIter<char> + VecIter<char> slf i64 i*/((id_1940/*op VecIter<char> .call.begin Vec<char>P slf*/((&((&(*v1073))->id_1544/*data*/)))), ((&(*v1073))->id_1542/*size*/)))));
} panic("reached function end without returning anything lop VecIterRange<char> iter StrR s\n");}

char* id_1975/*op charR .call.at StrP slf i64 pos*/(id_1523/*Str*/* v1074, i64 v1075) {{
  return &(*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((&(((v1074))->id_1544/*data*/)), (v1075)));
} panic("reached function end without returning anything op charR .call.at StrP slf i64 pos\n");}

char* id_1976/*op charR .call.sub StrP slf i64 pos*/(id_1523/*Str*/* v1076, i64 v1077) {{
  return &(*id_1934/*op charR .call.at Vec<char>P slf i64 pos*/((&(((v1076))->id_1544/*data*/)), (v1077)));
} panic("reached function end without returning anything op charR .call.sub StrP slf i64 pos\n");}

char* id_1977/*op charP .call.atP StrP slf i64 pos*/(id_1523/*Str*/* v1078, i64 v1079) {{
  return (id_1933/*op charP .call.atP Vec<char>P slf i64 pos*/((&(((v1078))->id_1544/*data*/)), (v1079)));
} panic("reached function end without returning anything op charP .call.atP StrP slf i64 pos\n");}

void id_1978/*op void .call.push_back StrP slf char ch*/(id_1523/*Str*/* v1080, char v1081){
  (id_1939/*op void .call.pop_back Vec<char>P slf*/((&(((v1080))->id_1544/*data*/))));
  (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&(((v1080))->id_1544/*data*/)), (v1081)));
  (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&(((v1080))->id_1544/*data*/)), ((char)((u8)0))));
  (*id_1621/*lop i64R ++ i64R x*/(&(((v1080))->id_1542/*size*/)));
}

void id_1979/*op void .call.pop_back StrP slf*/(id_1523/*Str*/* v1082){
  (id_1939/*op void .call.pop_back Vec<char>P slf*/((&(((v1082))->id_1544/*data*/))));
  (id_1939/*op void .call.pop_back Vec<char>P slf*/((&(((v1082))->id_1544/*data*/))));
  (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&(((v1082))->id_1544/*data*/)), ((char)((u8)0))));
  (*id_1622/*lop i64R -- i64R x*/(&(((v1082))->id_1542/*size*/)));
}

id_1523/*Str*/ id_1980/*lop Str Str str s*/(str v1083) {{
  id_1523/*Str*/ v1084; /*res*/
  ((v1084)=(id_1971/*lop Str Str*/()));
  (id_1939/*op void .call.pop_back Vec<char>P slf*/((&((&(v1084))->id_1544/*data*/))));
  while ((((*((char*)(v1083))))!=(((char)((u8)0))))) {
    (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1084))->id_1544/*data*/)), (*((char*)(v1083)))));
    ((v1083)=((str)((((i64)(v1083)))+(((i64)1)))));
  }
  (id_1938/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1084))->id_1544/*data*/)), ((char)((u8)0))));
  (((&(v1084))->id_1542/*size*/)=((((&((&(v1084))->id_1544/*data*/))->id_1542/*size*/))-(((i64)1))));
  return (v1084);
  (id_1972/*op void .call.dtor StrP slf*/((&(v1084))));
} panic("reached function end without returning anything lop Str Str str s\n");}

id_1523/*Str*/ id_1981/*lop Str Str StrR s*/(id_1523/*Str*/* v1085) {{
  id_1523/*Str*/ v1086; /*slf*/
  ((v1086)=(id_1971/*lop Str Str*/()));
  (((&(v1086))->id_1544/*data*/)=(id_1949/*lop Vec<char> Vec<char> Vec<char>R other*/(&((&(*v1085))->id_1544/*data*/))));
  (((&(v1086))->id_1542/*size*/)=((&(*v1085))->id_1542/*size*/));
  return (v1086);
  (id_1972/*op void .call.dtor StrP slf*/((&(v1086))));
} panic("reached function end without returning anything lop Str Str StrR s\n");}

i64 id_1982/*lop i64 len str s*/(str v1087) {{
  i64 v1088; /*res*/
  ((v1088)=((i64)0));
  while ((((*((char*)(v1087))))!=(((char)((u8)0))))) {
    (*id_1621/*lop i64R ++ i64R x*/(&(v1088)));
    ((v1087)=((str)((((i64)(v1087)))+(((i64)1)))));
  }
  return (v1088);
} panic("reached function end without returning anything lop i64 len str s\n");}

void id_1983/*lop void out StrR s*/(id_1523/*Str*/* v1089){
  (printf("%s\n", (id_1973/*op str .call.cstr StrP slf*/((&(*v1089))))));
}

void id_1984/*lop void put StrR s*/(id_1523/*Str*/* v1090){
  (printf("%s", (id_1973/*op str .call.cstr StrP slf*/((&(*v1090))))));
}

void id_1985/*op void += StrR a char ch*/(id_1523/*Str*/* v1091, char v1092){
  (id_1978/*op void .call.push_back StrP slf char ch*/((&(*v1091)), (v1092)));
}

void id_1986/*op void += StrR a StrR b*/(id_1523/*Str*/* v1093, id_1523/*Str*/* v1094){
  {
      i64 v1102; /*i*/
      id_1512/*RangeIter<i64>*/ v1101; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1100; /*tmp_rval_1099*/
      id_1512/*RangeIter<i64>*/ v1098; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1097; /*tmp_rval_1096*/
      id_1513/*RangeIterRange<i64>*/ v1095; /*__range*/
      ((v1095)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1094))->id_1542/*size*/))))));
      ((v1101)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1100)=(v1095)), (&(v1100))))))));
      ((v1098)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1097)=(v1095)), (&(v1097))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1098), (v1101)))) {
        char v1103; /*ch*/
        ((v1102)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1098))));
        ((v1103)=((char)((i8)115)));
        ((v1103)=(*id_1975/*op charR .call.at StrP slf i64 pos*/((&(*v1094)), (v1102))));
        (id_1985/*op void += StrR a char ch*/(&(*v1093), (v1103)));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1098)));
      }
    }
}

void id_1987/*op void += StrR a str b*/(id_1523/*Str*/* v1104, str v1105){
  i64 v1106; /*len*/
  ((v1106)=(id_1982/*lop i64 len str s*/((v1105))));
  {
      i64 v1114; /*i*/
      id_1512/*RangeIter<i64>*/ v1113; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1112; /*tmp_rval_1111*/
      id_1512/*RangeIter<i64>*/ v1110; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1109; /*tmp_rval_1108*/
      id_1513/*RangeIterRange<i64>*/ v1107; /*__range*/
      ((v1107)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1106))))));
      ((v1113)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1112)=(v1107)), (&(v1112))))))));
      ((v1110)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1109)=(v1107)), (&(v1109))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1110), (v1113)))) {
        ((v1114)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1110))));
        (id_1985/*op void += StrR a char ch*/(&(*v1104), (id_1921/*op char .call.sub strP slf i64 pos*/((&(v1105)), (v1114)))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1110)));
      }
    }
}

id_1523/*Str*/ id_1988/*op Str + StrR a StrR b*/(id_1523/*Str*/* v1115, id_1523/*Str*/* v1116) {{
  id_1523/*Str*/ v1117; /*s*/
  ((v1117)=(id_1981/*lop Str Str StrR s*/(&(*v1115))));
  (id_1986/*op void += StrR a StrR b*/(&(v1117), &(*v1116)));
  return (v1117);
  (id_1972/*op void .call.dtor StrP slf*/((&(v1117))));
} panic("reached function end without returning anything op Str + StrR a StrR b\n");}

id_1523/*Str*/ id_1989/*op Str + str a str b*/(str v1118, str v1119) {{
  id_1523/*Str*/ v1123; /*tmp_rval_1122*/
  id_1523/*Str*/ v1121; /*tmp_rval_1120*/
  (id_1972/*op void .call.dtor StrP slf*/((&(v1121))));
  (id_1972/*op void .call.dtor StrP slf*/((&(v1123))));
  return (id_1988/*op Str + StrR a StrR b*/(&(*(((v1121)=(id_1980/*lop Str Str str s*/((v1118)))), (&(v1121)))), &(*(((v1123)=(id_1980/*lop Str Str str s*/((v1119)))), (&(v1123))))));
  (id_1972/*op void .call.dtor StrP slf*/((&(v1121))));
  (id_1972/*op void .call.dtor StrP slf*/((&(v1123))));
} panic("reached function end without returning anything op Str + str a str b\n");}

id_1501/*Out*/ id_1990/*rop Out < StrR i*/(id_1523/*Str*/* v1124) {{
  (id_1983/*lop void out StrR s*/(&(*v1124)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < StrR i\n");}

id_1501/*Out*/ id_1991/*lop Out < StrR i*/(id_1523/*Str*/* v1125) {{
  ((id_1984/*lop void put StrR s*/(&(*v1125))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < StrR i\n");}

id_1501/*Out*/ id_1992/*op Out < Out o StrR i*/(id_1501/*Out*/ v1126, id_1523/*Str*/* v1127) {{
  ((id_1984/*lop void put StrR s*/(&(*v1127))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o StrR i\n");}

bool id_1993/*op bool < StrR a StrR b*/(id_1523/*Str*/* v1128, id_1523/*Str*/* v1129) {{
  {
      i64 v1137; /*i*/
      id_1513/*RangeIterRange<i64>*/ v1135; /*tmp_rval_1134*/
      id_1512/*RangeIter<i64>*/ v1133; /*__cur*/
      id_1512/*RangeIter<i64>*/ v1136; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1132; /*tmp_rval_1131*/
      id_1513/*RangeIterRange<i64>*/ v1130; /*__range*/
      ((v1130)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1567/*lop i64 min i64 a i64 b*/(((&(*v1128))->id_1542/*size*/), ((&(*v1129))->id_1542/*size*/))))))));
      ((v1136)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1135)=(v1130)), (&(v1135))))))));
      ((v1133)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1132)=(v1130)), (&(v1132))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1133), (v1136)))) {
        ((v1137)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1133))));
        if ((((*id_1976/*op charR .call.sub StrP slf i64 pos*/((&(*v1128)), (v1137))))<((*id_1976/*op charR .call.sub StrP slf i64 pos*/((&(*v1129)), (v1137)))))) {
          return ((bool)1);
        }
 else if ((((*id_1976/*op charR .call.sub StrP slf i64 pos*/((&(*v1129)), (v1137))))<((*id_1976/*op charR .call.sub StrP slf i64 pos*/((&(*v1128)), (v1137)))))) {
          return ((bool)0);
        }
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1133)));
      }
    }
  if (((((&(*v1128))->id_1542/*size*/))<(((&(*v1129))->id_1542/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1128))->id_1542/*size*/))>(((&(*v1129))->id_1542/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < StrR a StrR b\n");}

id_1523/*Str*/ id_1994/*op Str * str s i64 i*/(str v1138, i64 v1139) {{
  id_1523/*Str*/ v1141; /*t*/
  id_1523/*Str*/ v1140; /*slf*/
  ((v1140)=(id_1971/*lop Str Str*/()));
  ((v1141)=(id_1980/*lop Str Str str s*/((v1138))));
  {
      i64 v1149; /*j*/
      id_1513/*RangeIterRange<i64>*/ v1147; /*tmp_rval_1146*/
      id_1512/*RangeIter<i64>*/ v1145; /*__cur*/
      id_1512/*RangeIter<i64>*/ v1148; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1144; /*tmp_rval_1143*/
      id_1513/*RangeIterRange<i64>*/ v1142; /*__range*/
      ((v1142)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1139))))));
      ((v1148)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1147)=(v1142)), (&(v1147))))))));
      ((v1145)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1144)=(v1142)), (&(v1144))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1145), (v1148)))) {
        ((v1149)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1145))));
        (id_1986/*op void += StrR a StrR b*/(&(v1140), &(v1141)));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1145)));
      }
    }
  (id_1972/*op void .call.dtor StrP slf*/((&(v1141))));
  return (v1140);
  (id_1972/*op void .call.dtor StrP slf*/((&(v1140))));
  (id_1972/*op void .call.dtor StrP slf*/((&(v1141))));
  return (id_1971/*lop Str Str*/());
  (id_1972/*op void .call.dtor StrP slf*/((&(v1140))));
  (id_1972/*op void .call.dtor StrP slf*/((&(v1141))));
} panic("reached function end without returning anything op Str * str s i64 i\n");}

id_1523/*Str*/ id_1995/*lop Str $ str s*/(str v1150) {{
  return (id_1980/*lop Str Str str s*/((v1150)));
} panic("reached function end without returning anything lop Str $ str s\n");}

id_1522/*VecIterRange<char>*/ id_1996/*lop VecIterRange<char> iter str s*/(str v1151) {{
  id_1523/*Str*/ v1153; /*tmp_rval_1152*/
  (id_1972/*op void .call.dtor StrP slf*/((&(v1153))));
  return (id_1974/*lop VecIterRange<char> iter StrR s*/(&(*(((v1153)=(id_1980/*lop Str Str str s*/((v1151)))), (&(v1153))))));
  (id_1972/*op void .call.dtor StrP slf*/((&(v1153))));
} panic("reached function end without returning anything lop VecIterRange<char> iter str s\n");}

str id_1997/*lop str frog*/() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
} panic("reached function end without returning anything lop str frog\n");}

f64 id_1998/*lop f64 sqrt f64 x*/(f64 v1154) {{
  f64 v1155; /*z*/
  ((v1155)=((f64)1.000000));
  {
      id_1512/*RangeIter<i64>*/ v1162; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1161; /*tmp_rval_1160*/
      id_1512/*RangeIter<i64>*/ v1159; /*__cur*/
      i64 v1163; /*i*/
      id_1513/*RangeIterRange<i64>*/ v1158; /*tmp_rval_1157*/
      id_1513/*RangeIterRange<i64>*/ v1156; /*__range*/
      ((v1156)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((i64)10))))));
      ((v1162)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1161)=(v1156)), (&(v1161))))))));
      ((v1159)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1158)=(v1156)), (&(v1158))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1159), (v1162)))) {
        ((v1163)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1159))));
        (id_1700/*op void -= f64R a f64 b*/(&(v1155), (((((((v1155))*((v1155))))-((v1154))))/(((((f64)2.000000))*((v1155)))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1159)));
      }
    }
  return (v1155);
} panic("reached function end without returning anything lop f64 sqrt f64 x\n");}

id_1524/*V2*/ id_1999/*lop V2 V2 f64 x f64 y*/(f64 v1164, f64 v1165) {{
  id_1524/*V2*/ v1166; /*slf*/
  (((&(v1166))->id_1545/*x*/)=(v1164));
  (((&(v1166))->id_1546/*y*/)=(v1165));
  return (v1166);
} panic("reached function end without returning anything lop V2 V2 f64 x f64 y\n");}

id_1524/*V2*/ id_2000/*op V2 + V2 a V2 b*/(id_1524/*V2*/ v1167, id_1524/*V2*/ v1168) {{
  (id_1699/*op void += f64R a f64 b*/(&((&(v1167))->id_1545/*x*/), ((&(v1168))->id_1545/*x*/)));
  (id_1699/*op void += f64R a f64 b*/(&((&(v1167))->id_1546/*y*/), ((&(v1168))->id_1546/*y*/)));
  return (v1167);
} panic("reached function end without returning anything op V2 + V2 a V2 b\n");}

id_1524/*V2*/ id_2001/*op V2 * V2 a V2 b*/(id_1524/*V2*/ v1169, id_1524/*V2*/ v1170) {{
  id_1524/*V2*/ v1171; /*res*/
  (((&(v1171))->id_1545/*x*/)=((((((&(v1169))->id_1545/*x*/))*(((&(v1170))->id_1545/*x*/))))-(((((&(v1169))->id_1546/*y*/))*(((&(v1170))->id_1546/*y*/))))));
  (((&(v1171))->id_1546/*y*/)=((((((&(v1169))->id_1545/*x*/))*(((&(v1170))->id_1546/*y*/))))+(((((&(v1169))->id_1546/*y*/))*(((&(v1170))->id_1545/*x*/))))));
  return (v1171);
} panic("reached function end without returning anything op V2 * V2 a V2 b\n");}

f64 id_2002/*lop f64 abs V2 a*/(id_1524/*V2*/ v1172) {{
  return (id_1998/*lop f64 sqrt f64 x*/(((((((&(v1172))->id_1545/*x*/))*(((&(v1172))->id_1545/*x*/))))+(((((&(v1172))->id_1546/*y*/))*(((&(v1172))->id_1546/*y*/)))))));
} panic("reached function end without returning anything lop f64 abs V2 a\n");}

void id_2003/*lop void put V2 a*/(id_1524/*V2*/ v1173){
  (printf("%f", ((&(v1173))->id_1545/*x*/)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1173))->id_1546/*y*/)));
}

void id_2004/*lop void out V2 a*/(id_1524/*V2*/ v1174){
  (printf("%f", ((&(v1174))->id_1545/*x*/)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1174))->id_1546/*y*/)));
  (printf("%s\n", ((str)"")));
}

id_1501/*Out*/ id_2005/*rop Out < V2 i*/(id_1524/*V2*/ v1175) {{
  (id_2004/*lop void out V2 a*/((v1175)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < V2 i\n");}

id_1501/*Out*/ id_2006/*lop Out < V2 i*/(id_1524/*V2*/ v1176) {{
  ((id_2003/*lop void put V2 a*/((v1176))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < V2 i\n");}

id_1501/*Out*/ id_2007/*op Out < Out o V2 i*/(id_1501/*Out*/ v1177, id_1524/*V2*/ v1178) {{
  ((id_2003/*lop void put V2 a*/((v1178))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o V2 i\n");}

id_1525/*Rng*/ id_2008/*lop Rng Rng i64 seed*/(i64 v1179) {{
  id_1525/*Rng*/ v1180; /*slf*/
  (((&(v1180))->id_1547/*seed*/)=(v1179));
  return (v1180);
} panic("reached function end without returning anything lop Rng Rng i64 seed\n");}

id_1525/*Rng*/ id_2009/*lop Rng Rng*/() {{
  return (id_2008/*lop Rng Rng i64 seed*/(((i64)5323)));
} panic("reached function end without returning anything lop Rng Rng\n");}

i64 id_2010/*op i64 .call.call RngP slf*/(id_1525/*Rng*/* v1181) {{
  ((((v1181))->id_1547/*seed*/)=((((((i64)8253729))*((((v1181))->id_1547/*seed*/))))+(((i64)2396403))));
  return (((((v1181))->id_1547/*seed*/))%(((i64)32767)));
} panic("reached function end without returning anything op i64 .call.call RngP slf\n");}

int main(int argc, char *argv[]) {
  id_1534/*Map<i64 i64>*/ v1472; /*m*/
  id_1517/*Vec<i64>*/ v1184; /*v*/
  id_1517/*Vec<i64>*/ v1183; /*tmp_rval_1182*/
  ((v1184)=(id_1898/*lop Vec<i64> Vec<i64> Vec<i64>R other*/(&(*id_1902/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*id_1902/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*id_1902/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*id_1902/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*id_1902/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*id_1902/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*id_1902/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(&(*(((v1183)=(id_1901/*op Vec<i64> ,, i64 a i64 b*/(((i64)1), ((i64)5)))), (&(v1183)))), ((i64)6))), ((i64)1))), ((i64)4))), ((i64)6))), ((i64)87))), ((i64)1))), ((i64)1))))));
  ((v1472)=(id_2094/*lop Map<i64 i64> Map<i64 i64>*/()));
  {
      id_1518/*VecIter<i64>*/ v1479; /*__end*/
      i64 v1480; /*i*/
      id_1519/*VecIterRange<i64>*/ v1478; /*tmp_rval_1477*/
      id_1518/*VecIter<i64>*/ v1476; /*__cur*/
      id_1519/*VecIterRange<i64>*/ v1475; /*tmp_rval_1474*/
      id_1519/*VecIterRange<i64>*/ v1473; /*__range*/
      ((v1473)=(id_1891/*lop VecIterRange<i64> iter Vec<i64>R slf*/(&(v1184))));
      ((v1479)=(id_1880/*op VecIter<i64> .call.end VecIterRange<i64>P slf*/((&(*(((v1478)=(v1473)), (&(v1478))))))));
      ((v1476)=(id_1879/*op VecIter<i64> .call.begin VecIterRange<i64>P slf*/((&(*(((v1475)=(v1473)), (&(v1475))))))));
      while ((id_1877/*op bool != VecIter<i64> a VecIter<i64> b*/((v1476), (v1479)))) {
        ((v1480)=(*id_1878/*lop i64R * VecIter<i64> slf*/((v1476))));
        (*id_1621/*lop i64R ++ i64R x*/(&(*id_2095/*op i64R .call.sub Map<i64 i64>P slf i64R key*/((&(v1472)), &(v1480)))));
        (id_1875/*lop void ++ VecIter<i64>R slf*/(&(v1476)));
      }
    }
  {
      i64 v1491; /*val*/
      i64 v1490; /*key*/
      id_1526/*MapNode<i64 i64>*/ v1489; /*tmp_destructured_1488*/
      id_1529/*AVLIter<MapNode<i64 i64>>*/ v1487; /*__end*/
      id_1529/*AVLIter<MapNode<i64 i64>>*/ v1484; /*__cur*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1486; /*tmp_rval_1485*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1483; /*tmp_rval_1482*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1481; /*__range*/
      ((v1481)=(id_2104/*lop AVLIterRange<MapNode<i64 i64>> iter Map<i64 i64>R m*/(&(v1472))));
      ((v1487)=(id_2037/*op AVLIter<MapNode<i64 i64>> .call.end AVLIterRange<MapNode<i64 i64>>P slf*/((&(*(((v1486)=(v1481)), (&(v1486))))))));
      ((v1484)=(id_2036/*op AVLIter<MapNode<i64 i64>> .call.begin AVLIterRange<MapNode<i64 i64>>P slf*/((&(*(((v1483)=(v1481)), (&(v1483))))))));
      while ((id_2035/*op bool != AVLIter<MapNode<i64 i64>> a AVLIter<MapNode<i64 i64>> b*/((v1484), (v1487)))) {
        (((v1489)=(*id_2033/*lop MapNode<i64 i64>R * AVLIter<MapNode<i64 i64>> it*/((v1484)))), ((v1490)=((&(v1489))->id_1548/*key*/)), ((v1491)=((&(v1489))->id_1539/*val*/)));
        (printf("%lld", (v1490)));
        (printf("%s", ((str)" - ")));
        (printf("%lld\n", (v1491)));
        (id_2034/*lop AVLNode<MapNode<i64 i64>>P ++ AVLIter<MapNode<i64 i64>>R slf*/(&(v1484)));
      }
    }
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v1183))));
  (id_1894/*op void .call.dtor Vec<i64>P slf*/((&(v1184))));
}

id_1526/*MapNode<i64 i64>*/ id_2011/*lop MapNode<i64 i64> MapNode<i64 i64> i64R key i64R val*/(i64* v1185, i64* v1186) {{
  id_1526/*MapNode<i64 i64>*/ v1187; /*slf*/
  (((&(v1187))->id_1548/*key*/)=(*v1185));
  (((&(v1187))->id_1539/*val*/)=(*v1186));
  return (v1187);
} panic("reached function end without returning anything lop MapNode<i64 i64> MapNode<i64 i64> i64R key i64R val\n");}

id_1526/*MapNode<i64 i64>*/ id_2012/*lop MapNode<i64 i64> MapNode<i64 i64>*/() {{
  i64 v1191; /*tmp_rval_1190*/
  i64 v1189; /*tmp_rval_1188*/
  return (id_2011/*lop MapNode<i64 i64> MapNode<i64 i64> i64R key i64R val*/(&(*(((v1189)=(id_1559/*lop i64 i64*/())), (&(v1189)))), &(*(((v1191)=(id_1559/*lop i64 i64*/())), (&(v1191))))));
} panic("reached function end without returning anything lop MapNode<i64 i64> MapNode<i64 i64>\n");}

bool id_2013/*op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b*/(id_1526/*MapNode<i64 i64>*/* v1192, id_1526/*MapNode<i64 i64>*/* v1193) {{
  return ((((&(*v1192))->id_1548/*key*/))<(((&(*v1193))->id_1548/*key*/)));
} panic("reached function end without returning anything op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b\n");}

void id_2014/*lop void put MapNode<i64 i64>R slf*/(id_1526/*MapNode<i64 i64>*/* v1194){
  (printf("%s", ((str)"{")));
  (printf("%lld", ((&(*v1194))->id_1548/*key*/)));
  (printf("%s", ((str)": ")));
  (printf("%lld", ((&(*v1194))->id_1539/*val*/)));
  (printf("%s", ((str)"}")));
}

void id_2015/*lop void out MapNode<i64 i64>R node*/(id_1526/*MapNode<i64 i64>*/* v1195){
  (id_2014/*lop void put MapNode<i64 i64>R slf*/(&(*v1195)));
  (printf("%s\n", ((str)"")));
}

id_1501/*Out*/ id_2016/*rop Out < MapNode<i64 i64>R i*/(id_1526/*MapNode<i64 i64>*/* v1196) {{
  (id_2015/*lop void out MapNode<i64 i64>R node*/(&(*v1196)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < MapNode<i64 i64>R i\n");}

id_1501/*Out*/ id_2017/*lop Out < MapNode<i64 i64>R i*/(id_1526/*MapNode<i64 i64>*/* v1197) {{
  ((id_2014/*lop void put MapNode<i64 i64>R slf*/(&(*v1197))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < MapNode<i64 i64>R i\n");}

id_1501/*Out*/ id_2018/*op Out < Out o MapNode<i64 i64>R i*/(id_1501/*Out*/ v1198, id_1526/*MapNode<i64 i64>*/* v1199) {{
  ((id_2014/*lop void put MapNode<i64 i64>R slf*/(&(*v1199))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o MapNode<i64 i64>R i\n");}

id_1527/*AVLNode<MapNode<i64 i64>>*/ id_2019/*lop AVLNode<MapNode<i64 i64>> AVLNode<MapNode<i64 i64>> MapNode<i64 i64>R val*/(id_1526/*MapNode<i64 i64>*/* v1200) {{
  id_1527/*AVLNode<MapNode<i64 i64>>*/ v1201; /*slf*/
  (((&(v1201))->id_1549/*h*/)=((i64)1));
  (((&(v1201))->id_1539/*val*/)=(*v1200));
  (((&(v1201))->id_1550/*lhs*/)=((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0)));
  (((&(v1201))->id_1552/*rhs*/)=((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0)));
  (((&(v1201))->id_1551/*par*/)=((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0)));
  return (v1201);
} panic("reached function end without returning anything lop AVLNode<MapNode<i64 i64>> AVLNode<MapNode<i64 i64>> MapNode<i64 i64>R val\n");}

id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2020/*lop AVLNode<MapNode<i64 i64>>P new AVLNode<MapNode<i64 i64>> slf*/(id_1527/*AVLNode<MapNode<i64 i64>>*/ v1202) {{
  id_1527/*AVLNode<MapNode<i64 i64>>*/* v1203; /*ptr*/
  ((v1203)=((id_1527/*AVLNode<MapNode<i64 i64>>*/*)(alloc((sizeof(id_1527/*AVLNode<MapNode<i64 i64>>*/))))));
  ((*(v1203))=(v1202));
  return (v1203);
} panic("reached function end without returning anything lop AVLNode<MapNode<i64 i64>>P new AVLNode<MapNode<i64 i64>> slf\n");}

bool id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1204) {{
  return ((((i64)(v1204)))!=(((i64)0)));
} panic("reached function end without returning anything lop bool !! AVLNode<MapNode<i64 i64>>P ptr\n");}

bool id_2022/*lop bool ! AVLNode<MapNode<i64 i64>>P ptr*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1205) {{
  return ((((i64)(v1205)))==(((i64)0)));
} panic("reached function end without returning anything lop bool ! AVLNode<MapNode<i64 i64>>P ptr\n");}

i64 id_2023/*op i64 .call.h AVLNode<MapNode<i64 i64>>P slf*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1206) {{
  if ((id_2022/*lop bool ! AVLNode<MapNode<i64 i64>>P ptr*/((v1206)))) {
    return ((i64)0);
  } else {
    return (((v1206))->id_1549/*h*/);
  }
} panic("reached function end without returning anything op i64 .call.h AVLNode<MapNode<i64 i64>>P slf\n");}

i64 id_2024/*op i64 .call.bf AVLNode<MapNode<i64 i64>>P slf*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1207) {{
  return (((id_2023/*op i64 .call.h AVLNode<MapNode<i64 i64>>P slf*/((((v1207))->id_1552/*rhs*/))))-((id_2023/*op i64 .call.h AVLNode<MapNode<i64 i64>>P slf*/((((v1207))->id_1550/*lhs*/)))));
} panic("reached function end without returning anything op i64 .call.bf AVLNode<MapNode<i64 i64>>P slf\n");}

void id_2025/*op void .call.fix AVLNode<MapNode<i64 i64>>P slf*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1208){
  ((((v1208))->id_1549/*h*/)=((((i64)1))+((id_1566/*lop i64 max i64 a i64 b*/((id_2023/*op i64 .call.h AVLNode<MapNode<i64 i64>>P slf*/((((v1208))->id_1552/*rhs*/))), (id_2023/*op i64 .call.h AVLNode<MapNode<i64 i64>>P slf*/((((v1208))->id_1550/*lhs*/))))))));
}

id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2026/*op AVLNode<MapNode<i64 i64>>P .call.rrot AVLNode<MapNode<i64 i64>>P slf*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1209) {{
  id_1527/*AVLNode<MapNode<i64 i64>>*/* v1210; /*tmp*/
  ((v1210)=(((v1209))->id_1550/*lhs*/));
  ((((v1209))->id_1550/*lhs*/)=(((v1210))->id_1552/*rhs*/));
  ((((v1210))->id_1552/*rhs*/)=(v1209));
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((((v1209))->id_1552/*rhs*/)))) {
    ((((((v1209))->id_1552/*rhs*/))->id_1551/*par*/)=(v1209));
  }
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((((v1209))->id_1550/*lhs*/)))) {
    ((((((v1209))->id_1550/*lhs*/))->id_1551/*par*/)=(v1209));
  }
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((((v1210))->id_1552/*rhs*/)))) {
    ((((((v1210))->id_1552/*rhs*/))->id_1551/*par*/)=(v1210));
  }
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((((v1210))->id_1550/*lhs*/)))) {
    ((((((v1210))->id_1550/*lhs*/))->id_1551/*par*/)=(v1210));
  }
  ((id_2025/*op void .call.fix AVLNode<MapNode<i64 i64>>P slf*/((v1209))), (id_2025/*op void .call.fix AVLNode<MapNode<i64 i64>>P slf*/((v1210))));
  return (v1210);
} panic("reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.rrot AVLNode<MapNode<i64 i64>>P slf\n");}

id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2027/*op AVLNode<MapNode<i64 i64>>P .call.lrot AVLNode<MapNode<i64 i64>>P slf*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1211) {{
  id_1527/*AVLNode<MapNode<i64 i64>>*/* v1212; /*tmp*/
  ((v1212)=(((v1211))->id_1552/*rhs*/));
  ((((v1211))->id_1552/*rhs*/)=(((v1212))->id_1550/*lhs*/));
  ((((v1212))->id_1550/*lhs*/)=(v1211));
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((((v1211))->id_1552/*rhs*/)))) {
    ((((((v1211))->id_1552/*rhs*/))->id_1551/*par*/)=(v1211));
  }
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((((v1211))->id_1550/*lhs*/)))) {
    ((((((v1211))->id_1550/*lhs*/))->id_1551/*par*/)=(v1211));
  }
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((((v1212))->id_1552/*rhs*/)))) {
    ((((((v1212))->id_1552/*rhs*/))->id_1551/*par*/)=(v1212));
  }
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((((v1212))->id_1550/*lhs*/)))) {
    ((((((v1212))->id_1550/*lhs*/))->id_1551/*par*/)=(v1212));
  }
  ((id_2025/*op void .call.fix AVLNode<MapNode<i64 i64>>P slf*/((v1211))), (id_2025/*op void .call.fix AVLNode<MapNode<i64 i64>>P slf*/((v1212))));
  return (v1212);
} panic("reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.lrot AVLNode<MapNode<i64 i64>>P slf\n");}

id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2028/*op AVLNode<MapNode<i64 i64>>P .call.balance AVLNode<MapNode<i64 i64>>P slf*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1213) {{
  (id_2025/*op void .call.fix AVLNode<MapNode<i64 i64>>P slf*/((v1213)));
  if ((((id_2024/*op i64 .call.bf AVLNode<MapNode<i64 i64>>P slf*/((v1213))))==(((i64)2)))) {
    if ((((id_2024/*op i64 .call.bf AVLNode<MapNode<i64 i64>>P slf*/((((v1213))->id_1552/*rhs*/))))<(((i64)0)))) {
      ((((v1213))->id_1552/*rhs*/)=(id_2026/*op AVLNode<MapNode<i64 i64>>P .call.rrot AVLNode<MapNode<i64 i64>>P slf*/((((v1213))->id_1552/*rhs*/))));
    }
    return (id_2027/*op AVLNode<MapNode<i64 i64>>P .call.lrot AVLNode<MapNode<i64 i64>>P slf*/((v1213)));
  }
 else if ((((id_2024/*op i64 .call.bf AVLNode<MapNode<i64 i64>>P slf*/((v1213))))==((-(((i64)2)))))) {
    if ((((id_2024/*op i64 .call.bf AVLNode<MapNode<i64 i64>>P slf*/((((v1213))->id_1550/*lhs*/))))>(((i64)0)))) {
      ((((v1213))->id_1550/*lhs*/)=(id_2027/*op AVLNode<MapNode<i64 i64>>P .call.lrot AVLNode<MapNode<i64 i64>>P slf*/((((v1213))->id_1550/*lhs*/))));
    }
    return (id_2026/*op AVLNode<MapNode<i64 i64>>P .call.rrot AVLNode<MapNode<i64 i64>>P slf*/((v1213)));
  }
  return (v1213);
} panic("reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.balance AVLNode<MapNode<i64 i64>>P slf\n");}

id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2029/*op AVLNode<MapNode<i64 i64>>P .call.insert AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1214, id_1526/*MapNode<i64 i64>*/* v1215) {{
  if ((id_2022/*lop bool ! AVLNode<MapNode<i64 i64>>P ptr*/((v1214)))) {
    return (id_2020/*lop AVLNode<MapNode<i64 i64>>P new AVLNode<MapNode<i64 i64>> slf*/((id_2019/*lop AVLNode<MapNode<i64 i64>> AVLNode<MapNode<i64 i64>> MapNode<i64 i64>R val*/(&(*v1215)))));
  }
 else if ((id_2013/*op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b*/(&(*v1215), &(((v1214))->id_1539/*val*/)))) {
    id_1527/*AVLNode<MapNode<i64 i64>>*/* v1216; /*t*/
    ((v1216)=(id_2029/*op AVLNode<MapNode<i64 i64>>P .call.insert AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/((((v1214))->id_1550/*lhs*/), &(*v1215))));
    ((((v1214))->id_1550/*lhs*/)=(v1216));
    ((((v1216))->id_1551/*par*/)=(v1214));
  }
 else if ((id_2013/*op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b*/(&(((v1214))->id_1539/*val*/), &(*v1215)))) {
    id_1527/*AVLNode<MapNode<i64 i64>>*/* v1217; /*t*/
    ((v1217)=(id_2029/*op AVLNode<MapNode<i64 i64>>P .call.insert AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/((((v1214))->id_1552/*rhs*/), &(*v1215))));
    ((((v1214))->id_1552/*rhs*/)=(v1217));
    ((((v1217))->id_1551/*par*/)=(v1214));
  }
  ((v1214)=(id_2028/*op AVLNode<MapNode<i64 i64>>P .call.balance AVLNode<MapNode<i64 i64>>P slf*/((v1214))));
  ((((v1214))->id_1551/*par*/)=((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0)));
  return (v1214);
} panic("reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.insert AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val\n");}

id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2030/*op AVLNode<MapNode<i64 i64>>P .call.sub AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1218, id_1526/*MapNode<i64 i64>*/* v1219) {{
  id_1527/*AVLNode<MapNode<i64 i64>>*/* v1220; /*ptr*/
  if ((id_2022/*lop bool ! AVLNode<MapNode<i64 i64>>P ptr*/((v1218)))) {
    return ((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0));
  }
  ((v1220)=((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0)));
  if ((id_2013/*op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b*/(&(*v1219), &(((v1218))->id_1539/*val*/)))) {
    ((v1220)=(id_2030/*op AVLNode<MapNode<i64 i64>>P .call.sub AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/((((v1218))->id_1550/*lhs*/), &(*v1219))));
  }
 else if ((id_2013/*op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b*/(&(((v1218))->id_1539/*val*/), &(*v1219)))) {
    ((v1220)=(id_2030/*op AVLNode<MapNode<i64 i64>>P .call.sub AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/((((v1218))->id_1552/*rhs*/), &(*v1219))));
  } else {
    return (v1218);
  }
  return (v1220);
} panic("reached function end without returning anything op AVLNode<MapNode<i64 i64>>P .call.sub AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val\n");}

void id_2031/*op void .call.show AVLNode<MapNode<i64 i64>>P slf StrR prf*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1221, id_1523/*Str*/* v1222){
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/((v1221)))) {
    id_1523/*Str*/ v1224; /*p2*/
    id_1523/*Str*/ v1223; /*p1*/
    ((id_2015/*lop void out MapNode<i64 i64>R node*/(&(((v1221))->id_1539/*val*/))), (id_1984/*lop void put StrR s*/(&(*v1222))), (printf("%s", ((str)"|--"))));
    (((v1223)=(id_1981/*lop Str Str StrR s*/(&(*v1222)))), (id_1987/*op void += StrR a str b*/(&(v1223), ((str)"|  "))));
    (id_2031/*op void .call.show AVLNode<MapNode<i64 i64>>P slf StrR prf*/((((v1221))->id_1550/*lhs*/), &(v1223)));
    ((id_1984/*lop void put StrR s*/(&(*v1222))), (printf("%s", ((str)"'--"))));
    (((v1224)=(id_1981/*lop Str Str StrR s*/(&(*v1222)))), (id_1987/*op void += StrR a str b*/(&(v1224), ((str)"   "))));
    (id_2031/*op void .call.show AVLNode<MapNode<i64 i64>>P slf StrR prf*/((((v1221))->id_1552/*rhs*/), &(v1224)));
    (id_1972/*op void .call.dtor StrP slf*/((&(v1223))));
    (id_1972/*op void .call.dtor StrP slf*/((&(v1224))));
  } else {
    (id_1707/*lop Out < Out o*/((id_1708/*rop Out < str i*/(((str)"null")))));
  }
}

id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2032/*lop AVLIter<MapNode<i64 i64>> AVLIter<MapNode<i64 i64>> AVLNode<MapNode<i64 i64>>P root*/(id_1527/*AVLNode<MapNode<i64 i64>>*/* v1226) {{
  id_1529/*AVLIter<MapNode<i64 i64>>*/ v1227; /*slf*/
  (((&(v1227))->id_1554/*next*/)=(v1226));
  return (v1227);
} panic("reached function end without returning anything lop AVLIter<MapNode<i64 i64>> AVLIter<MapNode<i64 i64>> AVLNode<MapNode<i64 i64>>P root\n");}

id_1526/*MapNode<i64 i64>*/* id_2033/*lop MapNode<i64 i64>R * AVLIter<MapNode<i64 i64>> it*/(id_1529/*AVLIter<MapNode<i64 i64>>*/ v1228) {{
  return &((((&(v1228))->id_1554/*next*/))->id_1539/*val*/);
} panic("reached function end without returning anything lop MapNode<i64 i64>R * AVLIter<MapNode<i64 i64>> it\n");}

id_1527/*AVLNode<MapNode<i64 i64>>*/* id_2034/*lop AVLNode<MapNode<i64 i64>>P ++ AVLIter<MapNode<i64 i64>>R slf*/(id_1529/*AVLIter<MapNode<i64 i64>>*/* v1229) {{
  id_1527/*AVLNode<MapNode<i64 i64>>*/* v1230; /*r*/
  ((v1230)=((&(*v1229))->id_1554/*next*/));
  if ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/(((((&(*v1229))->id_1554/*next*/))->id_1552/*rhs*/)))) {
    (((&(*v1229))->id_1554/*next*/)=((((&(*v1229))->id_1554/*next*/))->id_1552/*rhs*/));
    while ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/(((((&(*v1229))->id_1554/*next*/))->id_1550/*lhs*/)))) {
      (((&(*v1229))->id_1554/*next*/)=((((&(*v1229))->id_1554/*next*/))->id_1550/*lhs*/));
    }
    return (v1230);
  }
  while (((bool)1)) {
    if ((id_2022/*lop bool ! AVLNode<MapNode<i64 i64>>P ptr*/(((((&(*v1229))->id_1554/*next*/))->id_1551/*par*/)))) {
      (((&(*v1229))->id_1554/*next*/)=((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0)));
      return (v1230);
    }
    if (((((i64)((((((&(*v1229))->id_1554/*next*/))->id_1551/*par*/))->id_1550/*lhs*/)))==(((i64)((&(*v1229))->id_1554/*next*/))))) {
      (((&(*v1229))->id_1554/*next*/)=((((&(*v1229))->id_1554/*next*/))->id_1551/*par*/));
      return (v1230);
    }
    (((&(*v1229))->id_1554/*next*/)=((((&(*v1229))->id_1554/*next*/))->id_1551/*par*/));
  }
} panic("reached function end without returning anything lop AVLNode<MapNode<i64 i64>>P ++ AVLIter<MapNode<i64 i64>>R slf\n");}

bool id_2035/*op bool != AVLIter<MapNode<i64 i64>> a AVLIter<MapNode<i64 i64>> b*/(id_1529/*AVLIter<MapNode<i64 i64>>*/ v1231, id_1529/*AVLIter<MapNode<i64 i64>>*/ v1232) {{
  return ((((i64)((&(v1231))->id_1554/*next*/)))!=(((i64)((&(v1232))->id_1554/*next*/))));
} panic("reached function end without returning anything op bool != AVLIter<MapNode<i64 i64>> a AVLIter<MapNode<i64 i64>> b\n");}

id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2036/*op AVLIter<MapNode<i64 i64>> .call.begin AVLIterRange<MapNode<i64 i64>>P slf*/(id_1530/*AVLIterRange<MapNode<i64 i64>>*/* v1236) {{
  return (((v1236))->id_1537/*begin*/);
} panic("reached function end without returning anything op AVLIter<MapNode<i64 i64>> .call.begin AVLIterRange<MapNode<i64 i64>>P slf\n");}

id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2037/*op AVLIter<MapNode<i64 i64>> .call.end AVLIterRange<MapNode<i64 i64>>P slf*/(id_1530/*AVLIterRange<MapNode<i64 i64>>*/* v1237) {{
  return (((v1237))->id_1538/*end*/);
} panic("reached function end without returning anything op AVLIter<MapNode<i64 i64>> .call.end AVLIterRange<MapNode<i64 i64>>P slf\n");}

id_1530/*AVLIterRange<MapNode<i64 i64>>*/ id_2038/*lop AVLIterRange<MapNode<i64 i64>> AVLIterRange<MapNode<i64 i64>> AVLIter<MapNode<i64 i64>> begin AVLIter<MapNode<i64 i64>> end*/(id_1529/*AVLIter<MapNode<i64 i64>>*/ v1238, id_1529/*AVLIter<MapNode<i64 i64>>*/ v1239) {{
  id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1240; /*slf*/
  (((&(v1240))->id_1537/*begin*/)=(v1238));
  (((&(v1240))->id_1538/*end*/)=(v1239));
  return (v1240);
} panic("reached function end without returning anything lop AVLIterRange<MapNode<i64 i64>> AVLIterRange<MapNode<i64 i64>> AVLIter<MapNode<i64 i64>> begin AVLIter<MapNode<i64 i64>> end\n");}

id_1532/*VecIter<MapNode<i64 i64>>*/ id_2039/*lop VecIter<MapNode<i64 i64>> VecIter<MapNode<i64 i64>> MapNode<i64 i64>P ptr*/(id_1526/*MapNode<i64 i64>*/* v1285) {{
  id_1532/*VecIter<MapNode<i64 i64>>*/ v1286; /*slf*/
  (((&(v1286))->id_1543/*ptr*/)=(v1285));
  return (v1286);
} panic("reached function end without returning anything lop VecIter<MapNode<i64 i64>> VecIter<MapNode<i64 i64>> MapNode<i64 i64>P ptr\n");}

void id_2040/*lop void ++ VecIter<MapNode<i64 i64>>R slf*/(id_1532/*VecIter<MapNode<i64 i64>>*/* v1287){
  (((&(*v1287))->id_1543/*ptr*/)=((id_1526/*MapNode<i64 i64>*/*)((((i64)((&(*v1287))->id_1543/*ptr*/)))+(((((i64)1))*((sizeof(id_1526/*MapNode<i64 i64>*/))))))));
}

id_1532/*VecIter<MapNode<i64 i64>>*/ id_2041/*op VecIter<MapNode<i64 i64>> + VecIter<MapNode<i64 i64>> slf i64 i*/(id_1532/*VecIter<MapNode<i64 i64>>*/ v1288, i64 v1289) {{
  (((&(v1288))->id_1543/*ptr*/)=((id_1526/*MapNode<i64 i64>*/*)((((i64)((&(v1288))->id_1543/*ptr*/)))+((((v1289))*((sizeof(id_1526/*MapNode<i64 i64>*/))))))));
  return (v1288);
} panic("reached function end without returning anything op VecIter<MapNode<i64 i64>> + VecIter<MapNode<i64 i64>> slf i64 i\n");}

bool id_2042/*op bool != VecIter<MapNode<i64 i64>> a VecIter<MapNode<i64 i64>> b*/(id_1532/*VecIter<MapNode<i64 i64>>*/ v1290, id_1532/*VecIter<MapNode<i64 i64>>*/ v1291) {{
  return ((((i64)((&(v1290))->id_1543/*ptr*/)))!=(((i64)((&(v1291))->id_1543/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<MapNode<i64 i64>> a VecIter<MapNode<i64 i64>> b\n");}

id_1526/*MapNode<i64 i64>*/* id_2043/*lop MapNode<i64 i64>R * VecIter<MapNode<i64 i64>> slf*/(id_1532/*VecIter<MapNode<i64 i64>>*/ v1292) {{
  return &(*((&(v1292))->id_1543/*ptr*/));
} panic("reached function end without returning anything lop MapNode<i64 i64>R * VecIter<MapNode<i64 i64>> slf\n");}

id_1532/*VecIter<MapNode<i64 i64>>*/ id_2044/*op VecIter<MapNode<i64 i64>> .call.begin VecIterRange<MapNode<i64 i64>>P slf*/(id_1533/*VecIterRange<MapNode<i64 i64>>*/* v1295) {{
  return (((v1295))->id_1537/*begin*/);
} panic("reached function end without returning anything op VecIter<MapNode<i64 i64>> .call.begin VecIterRange<MapNode<i64 i64>>P slf\n");}

id_1532/*VecIter<MapNode<i64 i64>>*/ id_2045/*op VecIter<MapNode<i64 i64>> .call.end VecIterRange<MapNode<i64 i64>>P slf*/(id_1533/*VecIterRange<MapNode<i64 i64>>*/* v1296) {{
  return (((v1296))->id_1538/*end*/);
} panic("reached function end without returning anything op VecIter<MapNode<i64 i64>> .call.end VecIterRange<MapNode<i64 i64>>P slf\n");}

id_1533/*VecIterRange<MapNode<i64 i64>>*/ id_2046/*lop VecIterRange<MapNode<i64 i64>> VecIterRange<MapNode<i64 i64>> VecIter<MapNode<i64 i64>> begin VecIter<MapNode<i64 i64>> end*/(id_1532/*VecIter<MapNode<i64 i64>>*/ v1297, id_1532/*VecIter<MapNode<i64 i64>>*/ v1298) {{
  id_1533/*VecIterRange<MapNode<i64 i64>>*/ v1299; /*slf*/
  (((&(v1299))->id_1537/*begin*/)=(v1297));
  (((&(v1299))->id_1538/*end*/)=(v1298));
  return (v1299);
} panic("reached function end without returning anything lop VecIterRange<MapNode<i64 i64>> VecIterRange<MapNode<i64 i64>> VecIter<MapNode<i64 i64>> begin VecIter<MapNode<i64 i64>> end\n");}

id_1526/*MapNode<i64 i64>*/* id_2047/*op MapNode<i64 i64>P .call.atP Vec<MapNode<i64 i64>>P slf i64 pos*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1249, i64 v1250) {{
  return ((id_1526/*MapNode<i64 i64>*/*)((id_1526/*MapNode<i64 i64>*/*)((((i64)(((v1249))->id_1541/*head*/)))+((((v1250))*((sizeof(id_1526/*MapNode<i64 i64>*/))))))));
} panic("reached function end without returning anything op MapNode<i64 i64>P .call.atP Vec<MapNode<i64 i64>>P slf i64 pos\n");}

id_1526/*MapNode<i64 i64>*/* id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1251, i64 v1252) {{
  return &(*(id_2047/*op MapNode<i64 i64>P .call.atP Vec<MapNode<i64 i64>>P slf i64 pos*/((v1251), (v1252))));
} panic("reached function end without returning anything op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos\n");}

void id_2049/*op void .call.print Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1253){
  (printf("%s", ((str)"[")));
  {
      i64 v1261; /*i*/
      id_1512/*RangeIter<i64>*/ v1260; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1259; /*tmp_rval_1258*/
      id_1512/*RangeIter<i64>*/ v1257; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1256; /*tmp_rval_1255*/
      id_1513/*RangeIterRange<i64>*/ v1254; /*__range*/
      ((v1254)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1253))->id_1542/*size*/))))));
      ((v1260)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1259)=(v1254)), (&(v1259))))))));
      ((v1257)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1256)=(v1254)), (&(v1256))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1257), (v1260)))) {
        ((v1261)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1257))));
        if ((!((!((v1261)))))) {
          (printf("%s", ((str)" ")));
        }
        (id_2014/*lop void put MapNode<i64 i64>R slf*/(&(*(id_2047/*op MapNode<i64 i64>P .call.atP Vec<MapNode<i64 i64>>P slf i64 pos*/((v1253), (v1261))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1257)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_2050/*op void .call.println Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1262){
  {
      i64 v1270; /*i*/
      id_1512/*RangeIter<i64>*/ v1269; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1268; /*tmp_rval_1267*/
      id_1512/*RangeIter<i64>*/ v1266; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1265; /*tmp_rval_1264*/
      id_1513/*RangeIterRange<i64>*/ v1263; /*__range*/
      ((v1263)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1262))->id_1542/*size*/))))));
      ((v1269)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1268)=(v1263)), (&(v1268))))))));
      ((v1266)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1265)=(v1263)), (&(v1265))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1266), (v1269)))) {
        ((v1270)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1266))));
        (id_2015/*lop void out MapNode<i64 i64>R node*/(&(*(id_2047/*op MapNode<i64 i64>P .call.atP Vec<MapNode<i64 i64>>P slf i64 pos*/((v1262), (v1270))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1266)));
      }
    }
}

void id_2051/*op void .call.double_cap Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1271){
  i64 v1272; /*ncap*/
  ((v1272)=(((v1271))->id_1540/*cap*/));
  if ((((v1272))==(((i64)0)))) {
    ((v1272)=((i64)1));
    ((((v1271))->id_1541/*head*/)=((id_1526/*MapNode<i64 i64>*/*)(alloc((sizeof(id_1526/*MapNode<i64 i64>*/))))));
    ((((v1271))->id_1540/*cap*/)=(v1272));
  } else {
    id_1526/*MapNode<i64 i64>*/* v1273; /*new_head*/
    (id_1615/*op void *= i64R a i64 b*/(&(v1272), ((i64)2)));
    ((v1273)=((id_1526/*MapNode<i64 i64>*/*)(alloc((((v1272))*((sizeof(id_1526/*MapNode<i64 i64>*/))))))));
    {
        i64 v1281; /*i*/
        id_1512/*RangeIter<i64>*/ v1280; /*__end*/
        id_1513/*RangeIterRange<i64>*/ v1279; /*tmp_rval_1278*/
        id_1512/*RangeIter<i64>*/ v1277; /*__cur*/
        id_1513/*RangeIterRange<i64>*/ v1276; /*tmp_rval_1275*/
        id_1513/*RangeIterRange<i64>*/ v1274; /*__range*/
        ((v1274)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1271))->id_1542/*size*/))))));
        ((v1280)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1279)=(v1274)), (&(v1279))))))));
        ((v1277)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1276)=(v1274)), (&(v1276))))))));
        while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1277), (v1280)))) {
          ((v1281)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1277))));
          ((*((id_1526/*MapNode<i64 i64>*/*)((((i64)(v1273)))+((((v1281))*((sizeof(id_1526/*MapNode<i64 i64>*/))))))))=(*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((v1271), (v1281))));
          (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1277)));
        }
      }
    (free((void*) ((i64)(((v1271))->id_1541/*head*/))));
    ((((v1271))->id_1541/*head*/)=(v1273));
  }
  ((((v1271))->id_1540/*cap*/)=(v1272));
}

void id_2052/*op void .call.push_back Vec<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1282, id_1526/*MapNode<i64 i64>*/ v1283){
  if ((((((v1282))->id_1542/*size*/))==((((v1282))->id_1540/*cap*/)))) {
    (id_2051/*op void .call.double_cap Vec<MapNode<i64 i64>>P slf*/((v1282)));
  }
  ((*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((v1282), (((v1282))->id_1542/*size*/)))=(v1283));
  (*id_1621/*lop i64R ++ i64R x*/(&(((v1282))->id_1542/*size*/)));
}

void id_2053/*op void .call.pop_back Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1284){
  (*id_1622/*lop i64R -- i64R x*/(&(((v1284))->id_1542/*size*/)));
}

id_1532/*VecIter<MapNode<i64 i64>>*/ id_2054/*op VecIter<MapNode<i64 i64>> .call.begin Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1293) {{
  return (id_2039/*lop VecIter<MapNode<i64 i64>> VecIter<MapNode<i64 i64>> MapNode<i64 i64>P ptr*/((((v1293))->id_1541/*head*/)));
} panic("reached function end without returning anything op VecIter<MapNode<i64 i64>> .call.begin Vec<MapNode<i64 i64>>P slf\n");}

id_1532/*VecIter<MapNode<i64 i64>>*/ id_2055/*op VecIter<MapNode<i64 i64>> .call.end Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1294) {{
  return (id_2039/*lop VecIter<MapNode<i64 i64>> VecIter<MapNode<i64 i64>> MapNode<i64 i64>P ptr*/((id_2047/*op MapNode<i64 i64>P .call.atP Vec<MapNode<i64 i64>>P slf i64 pos*/((v1294), (((v1294))->id_1542/*size*/)))));
} panic("reached function end without returning anything op VecIter<MapNode<i64 i64>> .call.end Vec<MapNode<i64 i64>>P slf\n");}

id_1533/*VecIterRange<MapNode<i64 i64>>*/ id_2056/*lop VecIterRange<MapNode<i64 i64>> iter Vec<MapNode<i64 i64>>R slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1300) {{
  id_1533/*VecIterRange<MapNode<i64 i64>>*/ v1301; /*it*/
  (((&(v1301))->id_1537/*begin*/)=(id_2054/*op VecIter<MapNode<i64 i64>> .call.begin Vec<MapNode<i64 i64>>P slf*/((&(*v1300)))));
  (((&(v1301))->id_1538/*end*/)=(id_2055/*op VecIter<MapNode<i64 i64>> .call.end Vec<MapNode<i64 i64>>P slf*/((&(*v1300)))));
  return (v1301);
} panic("reached function end without returning anything lop VecIterRange<MapNode<i64 i64>> iter Vec<MapNode<i64 i64>>R slf\n");}

id_1526/*MapNode<i64 i64>*/* id_2057/*op MapNode<i64 i64>R .call.front Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1302) {{
  return &(*(((v1302))->id_1541/*head*/));
} panic("reached function end without returning anything op MapNode<i64 i64>R .call.front Vec<MapNode<i64 i64>>P slf\n");}

id_1526/*MapNode<i64 i64>*/* id_2058/*op MapNode<i64 i64>R .call.back Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1303) {{
  return &(*(id_2047/*op MapNode<i64 i64>P .call.atP Vec<MapNode<i64 i64>>P slf i64 pos*/((v1303), (((((v1303))->id_1542/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op MapNode<i64 i64>R .call.back Vec<MapNode<i64 i64>>P slf\n");}

void id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1304){
  if ((!((!(((i64)(((v1304))->id_1541/*head*/))))))) {
    (free((void*) ((i64)(((v1304))->id_1541/*head*/))));
    ((((v1304))->id_1542/*size*/)=((i64)0));
    ((((v1304))->id_1540/*cap*/)=((i64)0));
    ((((v1304))->id_1541/*head*/)=((id_1526/*MapNode<i64 i64>*/*)((i64)0)));
  }
}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2060/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size*/(i64 v1305) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1306; /*slf*/
  (((&(v1306))->id_1541/*head*/)=((id_1526/*MapNode<i64 i64>*/*)((i64)0)));
  (((&(v1306))->id_1542/*size*/)=((i64)0));
  (((&(v1306))->id_1540/*cap*/)=((i64)0));
  while (((((&(v1306))->id_1540/*cap*/))<((v1305)))) {
    (id_2051/*op void .call.double_cap Vec<MapNode<i64 i64>>P slf*/((&(v1306))));
  }
  (((&(v1306))->id_1542/*size*/)=(v1305));
  (((&(v1306))->id_1540/*cap*/)=(v1305));
  {
      i64 v1314; /*i*/
      id_1512/*RangeIter<i64>*/ v1313; /*__end*/
      id_1512/*RangeIter<i64>*/ v1310; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1309; /*tmp_rval_1308*/
      id_1513/*RangeIterRange<i64>*/ v1312; /*tmp_rval_1311*/
      id_1513/*RangeIterRange<i64>*/ v1307; /*__range*/
      ((v1307)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1306))->id_1542/*size*/))))));
      ((v1313)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1312)=(v1307)), (&(v1312))))))));
      ((v1310)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1309)=(v1307)), (&(v1309))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1310), (v1313)))) {
        ((v1314)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1310))));
        ((*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((&(v1306)), (v1314)))=(id_2012/*lop MapNode<i64 i64> MapNode<i64 i64>*/()));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1310)));
      }
    }
  return (v1306);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1306))));
} panic("reached function end without returning anything lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size\n");}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2061/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size MapNode<i64 i64> default*/(i64 v1315, id_1526/*MapNode<i64 i64>*/ v1316) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1317; /*slf*/
  ((v1317)=(id_2060/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size*/((v1315))));
  {
      i64 v1325; /*i*/
      id_1512/*RangeIter<i64>*/ v1324; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1323; /*tmp_rval_1322*/
      id_1512/*RangeIter<i64>*/ v1321; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1320; /*tmp_rval_1319*/
      id_1513/*RangeIterRange<i64>*/ v1318; /*__range*/
      ((v1318)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1317))->id_1542/*size*/))))));
      ((v1324)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1323)=(v1318)), (&(v1323))))))));
      ((v1321)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1320)=(v1318)), (&(v1320))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1321), (v1324)))) {
        ((v1325)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1321))));
        ((*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((&(v1317)), (v1325)))=(v1316));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1321)));
      }
    }
  return (v1317);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1317))));
} panic("reached function end without returning anything lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size MapNode<i64 i64> default\n");}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2062/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>*/() {{
  return (id_2060/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>\n");}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2063/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>R other*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1326) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1327; /*slf*/
  ((v1327)=(id_2060/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size*/(((&(*v1326))->id_1542/*size*/))));
  {
      id_1512/*RangeIter<i64>*/ v1334; /*__end*/
      id_1512/*RangeIter<i64>*/ v1331; /*__cur*/
      i64 v1335; /*i*/
      id_1513/*RangeIterRange<i64>*/ v1330; /*tmp_rval_1329*/
      id_1513/*RangeIterRange<i64>*/ v1333; /*tmp_rval_1332*/
      id_1513/*RangeIterRange<i64>*/ v1328; /*__range*/
      ((v1328)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1326))->id_1542/*size*/))))));
      ((v1334)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1333)=(v1328)), (&(v1333))))))));
      ((v1331)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1330)=(v1328)), (&(v1330))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1331), (v1334)))) {
        ((v1335)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1331))));
        ((*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((&(v1327)), (v1335)))=(*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((&(*v1326)), (v1335))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1331)));
      }
    }
  return (v1327);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1327))));
} panic("reached function end without returning anything lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>R other\n");}

void id_2064/*op void += Vec<MapNode<i64 i64>>R slf MapNode<i64 i64> val*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1336, id_1526/*MapNode<i64 i64>*/ v1337){
  (id_2052/*op void .call.push_back Vec<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/((&(*v1336)), (v1337)));
}

void id_2065/*op void += Vec<MapNode<i64 i64>>R slf Vec<MapNode<i64 i64>>R other*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1338, id_1531/*Vec<MapNode<i64 i64>>*/* v1339){
  {
      i64 v1347; /*i*/
      id_1512/*RangeIter<i64>*/ v1346; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1345; /*tmp_rval_1344*/
      id_1512/*RangeIter<i64>*/ v1343; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1342; /*tmp_rval_1341*/
      id_1513/*RangeIterRange<i64>*/ v1340; /*__range*/
      ((v1340)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1339))->id_1542/*size*/))))));
      ((v1346)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1345)=(v1340)), (&(v1345))))))));
      ((v1343)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1342)=(v1340)), (&(v1342))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1343), (v1346)))) {
        ((v1347)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1343))));
        (id_2052/*op void .call.push_back Vec<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/((&(*v1338)), (*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((&(*v1339)), (v1347)))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1343)));
      }
    }
}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2066/*op Vec<MapNode<i64 i64>> ,, MapNode<i64 i64> a MapNode<i64 i64> b*/(id_1526/*MapNode<i64 i64>*/ v1348, id_1526/*MapNode<i64 i64>*/ v1349) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1350; /*slf*/
  ((v1350)=(id_2062/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>*/()));
  (id_2064/*op void += Vec<MapNode<i64 i64>>R slf MapNode<i64 i64> val*/(&(v1350), (v1348)));
  (id_2064/*op void += Vec<MapNode<i64 i64>>R slf MapNode<i64 i64> val*/(&(v1350), (v1349)));
  return (v1350);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1350))));
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>> ,, MapNode<i64 i64> a MapNode<i64 i64> b\n");}

id_1531/*Vec<MapNode<i64 i64>>*/* id_2067/*op Vec<MapNode<i64 i64>>R ,, Vec<MapNode<i64 i64>>R v MapNode<i64 i64> a*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1351, id_1526/*MapNode<i64 i64>*/ v1352) {{
  (id_2064/*op void += Vec<MapNode<i64 i64>>R slf MapNode<i64 i64> val*/(&(*v1351), (v1352)));
  return &(*v1351);
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>>R ,, Vec<MapNode<i64 i64>>R v MapNode<i64 i64> a\n");}

void id_2068/*lop void put Vec<MapNode<i64 i64>>R slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1353){
  (id_2049/*op void .call.print Vec<MapNode<i64 i64>>P slf*/((&(*v1353))));
}

void id_2069/*lop void out Vec<MapNode<i64 i64>>R slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1354){
  (id_2049/*op void .call.print Vec<MapNode<i64 i64>>P slf*/((&(*v1354))));
  (printf("%s\n", ((str)"")));
}

id_1501/*Out*/ id_2070/*rop Out < Vec<MapNode<i64 i64>>R i*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1355) {{
  (id_2069/*lop void out Vec<MapNode<i64 i64>>R slf*/(&(*v1355)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<MapNode<i64 i64>>R i\n");}

id_1501/*Out*/ id_2071/*lop Out < Vec<MapNode<i64 i64>>R i*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1356) {{
  ((id_2068/*lop void put Vec<MapNode<i64 i64>>R slf*/(&(*v1356))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<MapNode<i64 i64>>R i\n");}

id_1501/*Out*/ id_2072/*op Out < Out o Vec<MapNode<i64 i64>>R i*/(id_1501/*Out*/ v1357, id_1531/*Vec<MapNode<i64 i64>>*/* v1358) {{
  ((id_2068/*lop void put Vec<MapNode<i64 i64>>R slf*/(&(*v1358))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<MapNode<i64 i64>>R i\n");}

id_1526/*MapNode<i64 i64>*/* id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1359, i64 v1360) {{
  if ((((v1360))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v1360), (((v1359))->id_1542/*size*/)));
  }
  return &(*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((v1359), (v1360)));
} panic("reached function end without returning anything op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id\n");}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2074/*op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf i64 begin i64 end*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1361, i64 v1362, i64 v1363) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1364; /*res*/
  ((v1364)=(id_2060/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size*/(((i64)0))));
  {
      i64 v1372; /*i*/
      id_1512/*RangeIter<i64>*/ v1371; /*__end*/
      id_1512/*RangeIter<i64>*/ v1368; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1370; /*tmp_rval_1369*/
      id_1513/*RangeIterRange<i64>*/ v1367; /*tmp_rval_1366*/
      id_1513/*RangeIterRange<i64>*/ v1365; /*__range*/
      ((v1365)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/((v1362), (v1363))))));
      ((v1371)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1370)=(v1365)), (&(v1370))))))));
      ((v1368)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1367)=(v1365)), (&(v1367))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1368), (v1371)))) {
        ((v1372)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1368))));
        (id_2052/*op void .call.push_back Vec<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/((&(v1364)), (*id_2048/*op MapNode<i64 i64>R .call.at Vec<MapNode<i64 i64>>P slf i64 pos*/((v1361), (v1372)))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1368)));
      }
    }
  return (v1364);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1364))));
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf i64 begin i64 end\n");}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2075/*op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf Range<i64> r*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1373, id_1511/*Range<i64>*/ v1374) {{
  i64 v1376; /*end*/
  i64 v1375; /*begin*/
  (((v1375)=((&(v1374))->id_1537/*begin*/)), ((v1376)=((&(v1374))->id_1538/*end*/)));
  if ((((v1375))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v1375), (((v1373))->id_1542/*size*/)));
  }
  if ((((v1375))<(((i64)0)))) {
    ((v1375)=((i64)0));
  }
  if ((((v1376))<(((i64)0)))) {
    (id_1611/*op void += i64R a i64 b*/(&(v1376), (((v1373))->id_1542/*size*/)));
  }
  if ((((v1376))>((((v1373))->id_1542/*size*/)))) {
    ((v1376)=(((v1373))->id_1542/*size*/));
  }
  return (id_2074/*op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf i64 begin i64 end*/((v1373), (v1375), (v1376)));
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf Range<i64> r\n");}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2076/*op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1377) {{
  return (id_2074/*op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf i64 begin i64 end*/((v1377), ((i64)0), (((v1377))->id_1542/*size*/)));
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>> .call.sub Vec<MapNode<i64 i64>>P slf\n");}

bool id_2077/*op bool < Vec<MapNode<i64 i64>>R a Vec<MapNode<i64 i64>>R b*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1378, id_1531/*Vec<MapNode<i64 i64>>*/* v1379) {{
  {
      i64 v1387; /*i*/
      id_1512/*RangeIter<i64>*/ v1386; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1385; /*tmp_rval_1384*/
      id_1512/*RangeIter<i64>*/ v1383; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1382; /*tmp_rval_1381*/
      id_1513/*RangeIterRange<i64>*/ v1380; /*__range*/
      ((v1380)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1567/*lop i64 min i64 a i64 b*/(((&(*v1378))->id_1542/*size*/), ((&(*v1379))->id_1542/*size*/))))))));
      ((v1386)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1385)=(v1380)), (&(v1385))))))));
      ((v1383)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1382)=(v1380)), (&(v1382))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1383), (v1386)))) {
        ((v1387)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1383))));
        if ((id_2013/*op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b*/(&(*id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/((&(*v1378)), (v1387))), &(*id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/((&(*v1379)), (v1387)))))) {
          return ((bool)1);
        }
 else if ((id_2013/*op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b*/(&(*id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/((&(*v1379)), (v1387))), &(*id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/((&(*v1378)), (v1387)))))) {
          return ((bool)0);
        }
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1383)));
      }
    }
  if (((((&(*v1378))->id_1542/*size*/))<(((&(*v1379))->id_1542/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1378))->id_1542/*size*/))>(((&(*v1379))->id_1542/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<MapNode<i64 i64>>R a Vec<MapNode<i64 i64>>R b\n");}

void id_2078/*lop void swap MapNode<i64 i64>P a MapNode<i64 i64>P b*/(id_1526/*MapNode<i64 i64>*/* v1388, id_1526/*MapNode<i64 i64>*/* v1389){
  id_1526/*MapNode<i64 i64>*/ v1390; /*t*/
  ((v1390)=(*(v1388)));
  ((*(v1388))=(*(v1389)));
  ((*(v1389))=(v1390));
}

id_1526/*MapNode<i64 i64>*/* id_2079/*lop MapNode<i64 i64>P partition MapNode<i64 i64>P lo MapNode<i64 i64>P hi*/(id_1526/*MapNode<i64 i64>*/* v1391, id_1526/*MapNode<i64 i64>*/* v1392) {{
  id_1526/*MapNode<i64 i64>*/* v1395; /*j*/
  id_1526/*MapNode<i64 i64>*/* v1394; /*i*/
  id_1526/*MapNode<i64 i64>*/* v1393; /*pivot*/
  (((v1393)=((id_1526/*MapNode<i64 i64>*/*)((((i64)(v1392)))-(((((i64)1))*((sizeof(id_1526/*MapNode<i64 i64>*/)))))))), ((v1394)=(v1391)), ((v1395)=(v1391)));
  ((v1395)=(v1391));
  while (((((i64)(v1395)))!=(((i64)(v1393))))) {
    if ((id_2013/*op bool < MapNode<i64 i64>R a MapNode<i64 i64>R b*/(&(*(v1395)), &(*(v1393))))) {
      (id_2078/*lop void swap MapNode<i64 i64>P a MapNode<i64 i64>P b*/((v1394), (v1395)));
      ((v1394)=((id_1526/*MapNode<i64 i64>*/*)((((i64)(v1394)))+(((((i64)1))*((sizeof(id_1526/*MapNode<i64 i64>*/))))))));
    }
    ((v1395)=((id_1526/*MapNode<i64 i64>*/*)((((i64)(v1395)))+(((((i64)1))*((sizeof(id_1526/*MapNode<i64 i64>*/))))))));
  }
  (id_2078/*lop void swap MapNode<i64 i64>P a MapNode<i64 i64>P b*/((v1394), (v1393)));
  return (v1394);
} panic("reached function end without returning anything lop MapNode<i64 i64>P partition MapNode<i64 i64>P lo MapNode<i64 i64>P hi\n");}

void id_2080/*lop void qsort MapNode<i64 i64>P lhs MapNode<i64 i64>P rhs*/(id_1526/*MapNode<i64 i64>*/* v1396, id_1526/*MapNode<i64 i64>*/* v1397){
  i64 v1399; /*b*/
  i64 v1398; /*a*/
  ((v1398)=((((i64)(v1397)))-(((i64)(v1396)))));
  ((v1399)=(sizeof(id_1526/*MapNode<i64 i64>*/)));
  if ((((v1398))>((v1399)))) {
    id_1526/*MapNode<i64 i64>*/* v1400; /*pi*/
    ((v1400)=(id_2079/*lop MapNode<i64 i64>P partition MapNode<i64 i64>P lo MapNode<i64 i64>P hi*/((v1396), (v1397))));
    (id_2080/*lop void qsort MapNode<i64 i64>P lhs MapNode<i64 i64>P rhs*/((v1396), (v1400)));
    ((v1400)=((id_1526/*MapNode<i64 i64>*/*)((((i64)(v1400)))+(((((i64)1))*((sizeof(id_1526/*MapNode<i64 i64>*/))))))));
    (id_2080/*lop void qsort MapNode<i64 i64>P lhs MapNode<i64 i64>P rhs*/((v1400), (v1397)));
  }
}

void id_2081/*op void .call.sort Vec<MapNode<i64 i64>>P slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1401){
  id_1532/*VecIter<MapNode<i64 i64>>*/ v1405; /*tmp_rval_1404*/
  id_1532/*VecIter<MapNode<i64 i64>>*/ v1403; /*tmp_rval_1402*/
  (id_2080/*lop void qsort MapNode<i64 i64>P lhs MapNode<i64 i64>P rhs*/(((&(*(((v1403)=(id_2054/*op VecIter<MapNode<i64 i64>> .call.begin Vec<MapNode<i64 i64>>P slf*/((v1401)))), (&(v1403)))))->id_1543/*ptr*/), ((&(*(((v1405)=(id_2055/*op VecIter<MapNode<i64 i64>> .call.end Vec<MapNode<i64 i64>>P slf*/((v1401)))), (&(v1405)))))->id_1543/*ptr*/)));
}

void id_2082/*lop void sort Vec<MapNode<i64 i64>>R slf*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1406){
  (id_2081/*op void .call.sort Vec<MapNode<i64 i64>>P slf*/((&(*v1406))));
}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2083/*op Vec<MapNode<i64 i64>> .call.map Vec<MapNode<i64 i64>>P slf F<MapNode<i64 i64> MapNode<i64 i64>R> f*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1407, id_1526/*MapNode<i64 i64>*/(*v1408)(id_1526/*MapNode<i64 i64>*/*)) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1409; /*r*/
  ((v1409)=(id_2060/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>> i64 size*/((((v1407))->id_1542/*size*/))));
  {
      i64 v1417; /*i*/
      id_1512/*RangeIter<i64>*/ v1416; /*__end*/
      id_1512/*RangeIter<i64>*/ v1413; /*__cur*/
      id_1513/*RangeIterRange<i64>*/ v1415; /*tmp_rval_1414*/
      id_1513/*RangeIterRange<i64>*/ v1412; /*tmp_rval_1411*/
      id_1513/*RangeIterRange<i64>*/ v1410; /*__range*/
      ((v1410)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1407))->id_1542/*size*/))))));
      ((v1416)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1415)=(v1410)), (&(v1415))))))));
      ((v1413)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1412)=(v1410)), (&(v1412))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1413), (v1416)))) {
        ((v1417)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1413))));
        ((*id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/((&(v1409)), (v1417)))=((*(v1408))(&(*id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/((v1407), (v1417))))));
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1413)));
      }
    }
  return (v1409);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1409))));
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>> .call.map Vec<MapNode<i64 i64>>P slf F<MapNode<i64 i64> MapNode<i64 i64>R> f\n");}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2084/*op Vec<MapNode<i64 i64>> .call.filter Vec<MapNode<i64 i64>>P slf F<bool MapNode<i64 i64>R> f*/(id_1531/*Vec<MapNode<i64 i64>>*/* v1418, bool(*v1419)(id_1526/*MapNode<i64 i64>*/*)) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1420; /*r*/
  ((v1420)=(id_2062/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>*/()));
  {
      i64 v1428; /*i*/
      id_1512/*RangeIter<i64>*/ v1424; /*__cur*/
      id_1512/*RangeIter<i64>*/ v1427; /*__end*/
      id_1513/*RangeIterRange<i64>*/ v1426; /*tmp_rval_1425*/
      id_1513/*RangeIterRange<i64>*/ v1423; /*tmp_rval_1422*/
      id_1513/*RangeIterRange<i64>*/ v1421; /*__range*/
      ((v1421)=(id_1852/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1842/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1418))->id_1542/*size*/))))));
      ((v1427)=(id_1837/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1426)=(v1421)), (&(v1426))))))));
      ((v1424)=(id_1836/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1423)=(v1421)), (&(v1423))))))));
      while ((id_1835/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1424), (v1427)))) {
        ((v1428)=(id_1834/*lop i64 * RangeIter<i64> slf*/((v1424))));
        if (((*(v1419))(&(*id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/((v1418), (v1428)))))) {
          (id_2064/*op void += Vec<MapNode<i64 i64>>R slf MapNode<i64 i64> val*/(&(v1420), (*id_2073/*op MapNode<i64 i64>R .call.sub Vec<MapNode<i64 i64>>P slf i64 id*/((v1418), (v1428)))));
        }
        (id_1833/*lop void ++ RangeIter<i64>R slf*/(&(v1424)));
      }
    }
  return (v1420);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1420))));
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>> .call.filter Vec<MapNode<i64 i64>>P slf F<bool MapNode<i64 i64>R> f\n");}

id_1528/*AVLTree<MapNode<i64 i64>>*/ id_2085/*lop AVLTree<MapNode<i64 i64>> AVLTree<MapNode<i64 i64>>*/() {{
  id_1528/*AVLTree<MapNode<i64 i64>>*/ v1225; /*slf*/
  (((&(v1225))->id_1553/*root*/)=((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0)));
  return (v1225);
} panic("reached function end without returning anything lop AVLTree<MapNode<i64 i64>> AVLTree<MapNode<i64 i64>>\n");}

id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2086/*op AVLIter<MapNode<i64 i64>> .call.begin AVLTree<MapNode<i64 i64>>P slf*/(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1233) {{
  id_1529/*AVLIter<MapNode<i64 i64>>*/ v1234; /*it*/
  ((v1234)=(id_2032/*lop AVLIter<MapNode<i64 i64>> AVLIter<MapNode<i64 i64>> AVLNode<MapNode<i64 i64>>P root*/((((v1233))->id_1553/*root*/))));
  if ((id_2022/*lop bool ! AVLNode<MapNode<i64 i64>>P ptr*/(((&(v1234))->id_1554/*next*/)))) {
    return (v1234);
  }
  while ((id_2021/*lop bool !! AVLNode<MapNode<i64 i64>>P ptr*/(((((&(v1234))->id_1554/*next*/))->id_1550/*lhs*/)))) {
    (((&(v1234))->id_1554/*next*/)=((((&(v1234))->id_1554/*next*/))->id_1550/*lhs*/));
  }
  return (v1234);
} panic("reached function end without returning anything op AVLIter<MapNode<i64 i64>> .call.begin AVLTree<MapNode<i64 i64>>P slf\n");}

id_1529/*AVLIter<MapNode<i64 i64>>*/ id_2087/*op AVLIter<MapNode<i64 i64>> .call.end AVLTree<MapNode<i64 i64>>P slf*/(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1235) {{
  return (id_2032/*lop AVLIter<MapNode<i64 i64>> AVLIter<MapNode<i64 i64>> AVLNode<MapNode<i64 i64>>P root*/(((id_1527/*AVLNode<MapNode<i64 i64>>*/*)((i64)0))));
} panic("reached function end without returning anything op AVLIter<MapNode<i64 i64>> .call.end AVLTree<MapNode<i64 i64>>P slf\n");}

id_1530/*AVLIterRange<MapNode<i64 i64>>*/ id_2088/*lop AVLIterRange<MapNode<i64 i64>> iter AVLTree<MapNode<i64 i64>>R slf*/(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1241) {{
  id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1242; /*it*/
  (((&(v1242))->id_1537/*begin*/)=(id_2086/*op AVLIter<MapNode<i64 i64>> .call.begin AVLTree<MapNode<i64 i64>>P slf*/((&(*v1241)))));
  (((&(v1242))->id_1538/*end*/)=(id_2087/*op AVLIter<MapNode<i64 i64>> .call.end AVLTree<MapNode<i64 i64>>P slf*/((&(*v1241)))));
  return (v1242);
} panic("reached function end without returning anything lop AVLIterRange<MapNode<i64 i64>> iter AVLTree<MapNode<i64 i64>>R slf\n");}

void id_2089/*op void .call.insert AVLTree<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1243, id_1526/*MapNode<i64 i64>*/ v1244){
  ((((v1243))->id_1553/*root*/)=(id_2029/*op AVLNode<MapNode<i64 i64>>P .call.insert AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/((((v1243))->id_1553/*root*/), &(v1244))));
}

id_1526/*MapNode<i64 i64>*/* id_2090/*op MapNode<i64 i64>R .call.sub AVLTree<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1245, id_1526/*MapNode<i64 i64>*/ v1246) {{
  return &((&(*(id_2030/*op AVLNode<MapNode<i64 i64>>P .call.sub AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/((((v1245))->id_1553/*root*/), &(v1246)))))->id_1539/*val*/);
} panic("reached function end without returning anything op MapNode<i64 i64>R .call.sub AVLTree<MapNode<i64 i64>>P slf MapNode<i64 i64> val\n");}

void id_2091/*op void += AVLTree<MapNode<i64 i64>>R slf MapNode<i64 i64> val*/(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1247, id_1526/*MapNode<i64 i64>*/ v1248){
  (((&(*v1247))->id_1553/*root*/)=(id_2029/*op AVLNode<MapNode<i64 i64>>P .call.insert AVLNode<MapNode<i64 i64>>P slf MapNode<i64 i64>R val*/(((&(*v1247))->id_1553/*root*/), &(v1248))));
}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2092/*op Vec<MapNode<i64 i64>> .call.call AVLTree<MapNode<i64 i64>>P slf*/(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1429) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1430; /*v*/
  ((v1430)=(id_2062/*lop Vec<MapNode<i64 i64>> Vec<MapNode<i64 i64>>*/()));
  {
      id_1526/*MapNode<i64 i64>*/ v1438; /*i*/
      id_1529/*AVLIter<MapNode<i64 i64>>*/ v1437; /*__end*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1436; /*tmp_rval_1435*/
      id_1529/*AVLIter<MapNode<i64 i64>>*/ v1434; /*__cur*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1433; /*tmp_rval_1432*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1431; /*__range*/
      ((v1431)=(id_2088/*lop AVLIterRange<MapNode<i64 i64>> iter AVLTree<MapNode<i64 i64>>R slf*/(&(*(v1429)))));
      ((v1437)=(id_2037/*op AVLIter<MapNode<i64 i64>> .call.end AVLIterRange<MapNode<i64 i64>>P slf*/((&(*(((v1436)=(v1431)), (&(v1436))))))));
      ((v1434)=(id_2036/*op AVLIter<MapNode<i64 i64>> .call.begin AVLIterRange<MapNode<i64 i64>>P slf*/((&(*(((v1433)=(v1431)), (&(v1433))))))));
      while ((id_2035/*op bool != AVLIter<MapNode<i64 i64>> a AVLIter<MapNode<i64 i64>> b*/((v1434), (v1437)))) {
        ((v1438)=(*id_2033/*lop MapNode<i64 i64>R * AVLIter<MapNode<i64 i64>> it*/((v1434))));
        (id_2064/*op void += Vec<MapNode<i64 i64>>R slf MapNode<i64 i64> val*/(&(v1430), (v1438)));
        (id_2034/*lop AVLNode<MapNode<i64 i64>>P ++ AVLIter<MapNode<i64 i64>>R slf*/(&(v1434)));
      }
    }
  return (v1430);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1430))));
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>> .call.call AVLTree<MapNode<i64 i64>>P slf\n");}

void id_2093/*op void .call.show AVLTree<MapNode<i64 i64>>P slf*/(id_1528/*AVLTree<MapNode<i64 i64>>*/* v1439){
  id_1523/*Str*/ v1441; /*tmp_rval_1440*/
  (id_2031/*op void .call.show AVLNode<MapNode<i64 i64>>P slf StrR prf*/((((v1439))->id_1553/*root*/), &(*(((v1441)=(id_1971/*lop Str Str*/())), (&(v1441))))));
  (id_1972/*op void .call.dtor StrP slf*/((&(v1441))));
}

id_1534/*Map<i64 i64>*/ id_2094/*lop Map<i64 i64> Map<i64 i64>*/() {{
  id_1534/*Map<i64 i64>*/ v1442; /*slf*/
  (((&(v1442))->id_1555/*tree*/)=(id_2085/*lop AVLTree<MapNode<i64 i64>> AVLTree<MapNode<i64 i64>>*/()));
  return (v1442);
} panic("reached function end without returning anything lop Map<i64 i64> Map<i64 i64>\n");}

i64* id_2095/*op i64R .call.sub Map<i64 i64>P slf i64R key*/(id_1534/*Map<i64 i64>*/* v1443, i64* v1444) {{
  id_1526/*MapNode<i64 i64>*/ v1446; /*node*/
  i64 v1445; /*val*/
  ((v1445)=(id_1559/*lop i64 i64*/()));
  ((v1446)=(id_2011/*lop MapNode<i64 i64> MapNode<i64 i64> i64R key i64R val*/(&(*v1444), &(v1445))));
  (id_2089/*op void .call.insert AVLTree<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/((&(((v1443))->id_1555/*tree*/)), (v1446)));
  return &((&(*id_2090/*op MapNode<i64 i64>R .call.sub AVLTree<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/((&(((v1443))->id_1555/*tree*/)), (v1446))))->id_1539/*val*/);
} panic("reached function end without returning anything op i64R .call.sub Map<i64 i64>P slf i64R key\n");}

void id_2096/*op void .call.insert Map<i64 i64>P slf i64R key i64R val*/(id_1534/*Map<i64 i64>*/* v1447, i64* v1448, i64* v1449){
  id_1526/*MapNode<i64 i64>*/ v1450; /*node*/
  ((v1450)=(id_2011/*lop MapNode<i64 i64> MapNode<i64 i64> i64R key i64R val*/(&(*v1448), &(*v1449))));
  (id_2089/*op void .call.insert AVLTree<MapNode<i64 i64>>P slf MapNode<i64 i64> val*/((&(((v1447))->id_1555/*tree*/)), (v1450)));
}

id_1531/*Vec<MapNode<i64 i64>>*/ id_2097/*op Vec<MapNode<i64 i64>> .call.call Map<i64 i64>P slf*/(id_1534/*Map<i64 i64>*/* v1451) {{
  id_1531/*Vec<MapNode<i64 i64>>*/ v1452; /*v*/
  ((v1452)=(id_2092/*op Vec<MapNode<i64 i64>> .call.call AVLTree<MapNode<i64 i64>>P slf*/((&(((v1451))->id_1555/*tree*/)))));
  return (v1452);
  (id_2059/*op void .call.dtor Vec<MapNode<i64 i64>>P slf*/((&(v1452))));
} panic("reached function end without returning anything op Vec<MapNode<i64 i64>> .call.call Map<i64 i64>P slf\n");}

void id_2098/*op void .call.print Map<i64 i64>P slf*/(id_1534/*Map<i64 i64>*/* v1453){
  (printf("%s\n", ((str)"{")));
  {
      i64 v1463; /*key*/
      i64 v1464; /*val*/
      id_1526/*MapNode<i64 i64>*/ v1462; /*tmp_destructured_1461*/
      id_1529/*AVLIter<MapNode<i64 i64>>*/ v1460; /*__end*/
      id_1529/*AVLIter<MapNode<i64 i64>>*/ v1457; /*__cur*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1456; /*tmp_rval_1455*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1459; /*tmp_rval_1458*/
      id_1530/*AVLIterRange<MapNode<i64 i64>>*/ v1454; /*__range*/
      ((v1454)=(id_2088/*lop AVLIterRange<MapNode<i64 i64>> iter AVLTree<MapNode<i64 i64>>R slf*/(&(((v1453))->id_1555/*tree*/))));
      ((v1460)=(id_2037/*op AVLIter<MapNode<i64 i64>> .call.end AVLIterRange<MapNode<i64 i64>>P slf*/((&(*(((v1459)=(v1454)), (&(v1459))))))));
      ((v1457)=(id_2036/*op AVLIter<MapNode<i64 i64>> .call.begin AVLIterRange<MapNode<i64 i64>>P slf*/((&(*(((v1456)=(v1454)), (&(v1456))))))));
      while ((id_2035/*op bool != AVLIter<MapNode<i64 i64>> a AVLIter<MapNode<i64 i64>> b*/((v1457), (v1460)))) {
        (((v1462)=(*id_2033/*lop MapNode<i64 i64>R * AVLIter<MapNode<i64 i64>> it*/((v1457)))), ((v1463)=((&(v1462))->id_1548/*key*/)), ((v1464)=((&(v1462))->id_1539/*val*/)));
        (printf("%s", ((str)"  ")));
        (printf("%lld", (v1463)));
        (printf("%s", ((str)": ")));
        (printf("%lld\n", (v1464)));
        (id_2034/*lop AVLNode<MapNode<i64 i64>>P ++ AVLIter<MapNode<i64 i64>>R slf*/(&(v1457)));
      }
    }
  (printf("%s", ((str)"}")));
}

void id_2099/*lop void put Map<i64 i64>R slf*/(id_1534/*Map<i64 i64>*/* v1465){
  (id_2098/*op void .call.print Map<i64 i64>P slf*/((&(*v1465))));
}

void id_2100/*lop void out Map<i64 i64>R slf*/(id_1534/*Map<i64 i64>*/* v1466){
  (id_2098/*op void .call.print Map<i64 i64>P slf*/((&(*v1466))));
  (printf("%s\n", ((str)"")));
}

id_1501/*Out*/ id_2101/*rop Out < Map<i64 i64>R i*/(id_1534/*Map<i64 i64>*/* v1467) {{
  (id_2100/*lop void out Map<i64 i64>R slf*/(&(*v1467)));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Map<i64 i64>R i\n");}

id_1501/*Out*/ id_2102/*lop Out < Map<i64 i64>R i*/(id_1534/*Map<i64 i64>*/* v1468) {{
  ((id_2099/*lop void put Map<i64 i64>R slf*/(&(*v1468))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Map<i64 i64>R i\n");}

id_1501/*Out*/ id_2103/*op Out < Out o Map<i64 i64>R i*/(id_1501/*Out*/ v1469, id_1534/*Map<i64 i64>*/* v1470) {{
  ((id_2099/*lop void put Map<i64 i64>R slf*/(&(*v1470))), (printf("%s", ((str)" "))));
  return (id_1705/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Map<i64 i64>R i\n");}

id_1530/*AVLIterRange<MapNode<i64 i64>>*/ id_2104/*lop AVLIterRange<MapNode<i64 i64>> iter Map<i64 i64>R m*/(id_1534/*Map<i64 i64>*/* v1471) {{
  return (id_2088/*lop AVLIterRange<MapNode<i64 i64>> iter AVLTree<MapNode<i64 i64>>R slf*/(&((&(*v1471))->id_1555/*tree*/)));
} panic("reached function end without returning anything lop AVLIterRange<MapNode<i64 i64>> iter Map<i64 i64>R m\n");}

