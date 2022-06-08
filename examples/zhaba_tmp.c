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
struct PROT_id_1415;
typedef struct PROT_id_1415/*IntOpMaker<i8>*/ id_1415/*IntOpMaker<i8>*/;
struct PROT_id_1416;
typedef struct PROT_id_1416/*IntOpMaker<i16>*/ id_1416/*IntOpMaker<i16>*/;
struct PROT_id_1417;
typedef struct PROT_id_1417/*IntOpMaker<i32>*/ id_1417/*IntOpMaker<i32>*/;
struct PROT_id_1418;
typedef struct PROT_id_1418/*IntOpMaker<i64>*/ id_1418/*IntOpMaker<i64>*/;
struct PROT_id_1419;
typedef struct PROT_id_1419/*IntOpMaker<u8>*/ id_1419/*IntOpMaker<u8>*/;
struct PROT_id_1420;
typedef struct PROT_id_1420/*IntOpMaker<u16>*/ id_1420/*IntOpMaker<u16>*/;
struct PROT_id_1421;
typedef struct PROT_id_1421/*IntOpMaker<u32>*/ id_1421/*IntOpMaker<u32>*/;
struct PROT_id_1422;
typedef struct PROT_id_1422/*IntOpMaker<u64>*/ id_1422/*IntOpMaker<u64>*/;
struct PROT_id_1423;
typedef struct PROT_id_1423/*IntOpMaker<char>*/ id_1423/*IntOpMaker<char>*/;
struct PROT_id_1424;
typedef struct PROT_id_1424/*Out*/ id_1424/*Out*/;
struct PROT_id_1425;
typedef struct PROT_id_1425/*Range<i8>*/ id_1425/*Range<i8>*/;
struct PROT_id_1426;
typedef struct PROT_id_1426/*RangeIter<i8>*/ id_1426/*RangeIter<i8>*/;
struct PROT_id_1427;
typedef struct PROT_id_1427/*RangeIterRange<i8>*/ id_1427/*RangeIterRange<i8>*/;
struct PROT_id_1428;
typedef struct PROT_id_1428/*Range<i16>*/ id_1428/*Range<i16>*/;
struct PROT_id_1429;
typedef struct PROT_id_1429/*RangeIter<i16>*/ id_1429/*RangeIter<i16>*/;
struct PROT_id_1430;
typedef struct PROT_id_1430/*RangeIterRange<i16>*/ id_1430/*RangeIterRange<i16>*/;
struct PROT_id_1431;
typedef struct PROT_id_1431/*Range<i32>*/ id_1431/*Range<i32>*/;
struct PROT_id_1432;
typedef struct PROT_id_1432/*RangeIter<i32>*/ id_1432/*RangeIter<i32>*/;
struct PROT_id_1433;
typedef struct PROT_id_1433/*RangeIterRange<i32>*/ id_1433/*RangeIterRange<i32>*/;
struct PROT_id_1434;
typedef struct PROT_id_1434/*Range<i64>*/ id_1434/*Range<i64>*/;
struct PROT_id_1435;
typedef struct PROT_id_1435/*RangeIter<i64>*/ id_1435/*RangeIter<i64>*/;
struct PROT_id_1436;
typedef struct PROT_id_1436/*RangeIterRange<i64>*/ id_1436/*RangeIterRange<i64>*/;
struct PROT_id_1437;
typedef struct PROT_id_1437/*Range<char>*/ id_1437/*Range<char>*/;
struct PROT_id_1438;
typedef struct PROT_id_1438/*RangeIter<char>*/ id_1438/*RangeIter<char>*/;
struct PROT_id_1439;
typedef struct PROT_id_1439/*RangeIterRange<char>*/ id_1439/*RangeIterRange<char>*/;
struct PROT_id_1440;
typedef struct PROT_id_1440/*Vec<i64>*/ id_1440/*Vec<i64>*/;
struct PROT_id_1441;
typedef struct PROT_id_1441/*VecIter<i64>*/ id_1441/*VecIter<i64>*/;
struct PROT_id_1442;
typedef struct PROT_id_1442/*VecIterRange<i64>*/ id_1442/*VecIterRange<i64>*/;
struct PROT_id_1443;
typedef struct PROT_id_1443/*Vec<char>*/ id_1443/*Vec<char>*/;
struct PROT_id_1444;
typedef struct PROT_id_1444/*VecIter<char>*/ id_1444/*VecIter<char>*/;
struct PROT_id_1445;
typedef struct PROT_id_1445/*VecIterRange<char>*/ id_1445/*VecIterRange<char>*/;
struct PROT_id_1446;
typedef struct PROT_id_1446/*Str*/ id_1446/*Str*/;
struct PROT_id_1447;
typedef struct PROT_id_1447/*V2*/ id_1447/*V2*/;
struct PROT_id_1448;
typedef struct PROT_id_1448/*Rng*/ id_1448/*Rng*/;
struct PROT_id_1449;
typedef struct PROT_id_1449/*Vec<Str>*/ id_1449/*Vec<Str>*/;
struct PROT_id_1450;
typedef struct PROT_id_1450/*VecIter<Str>*/ id_1450/*VecIter<Str>*/;
struct PROT_id_1451;
typedef struct PROT_id_1451/*VecIterRange<Str>*/ id_1451/*VecIterRange<Str>*/;

struct PROT_id_1415/*IntOpMaker<i8>*/ {
  bool id_1452;
};
struct PROT_id_1416/*IntOpMaker<i16>*/ {
  bool id_1452/*unused*/;
};
struct PROT_id_1417/*IntOpMaker<i32>*/ {
  bool id_1452/*unused*/;
};
struct PROT_id_1418/*IntOpMaker<i64>*/ {
  bool id_1452/*unused*/;
};
struct PROT_id_1419/*IntOpMaker<u8>*/ {
  bool id_1452/*unused*/;
};
struct PROT_id_1420/*IntOpMaker<u16>*/ {
  bool id_1452/*unused*/;
};
struct PROT_id_1421/*IntOpMaker<u32>*/ {
  bool id_1452/*unused*/;
};
struct PROT_id_1422/*IntOpMaker<u64>*/ {
  bool id_1452/*unused*/;
};
struct PROT_id_1423/*IntOpMaker<char>*/ {
  bool id_1452/*unused*/;
};
struct PROT_id_1424/*Out*/ {
  bool id_1453;
};
struct PROT_id_1425/*Range<i8>*/ {
  i8 id_1454;
  i8 id_1455;
};
struct PROT_id_1426/*RangeIter<i8>*/ {
  i8 id_1456;
};
struct PROT_id_1427/*RangeIterRange<i8>*/ {
  id_1426/*RangeIter<i8>*/ id_1454/*begin*/;
  id_1426/*RangeIter<i8>*/ id_1455/*end*/;
};
struct PROT_id_1428/*Range<i16>*/ {
  i16 id_1454/*begin*/;
  i16 id_1455/*end*/;
};
struct PROT_id_1429/*RangeIter<i16>*/ {
  i16 id_1456/*val*/;
};
struct PROT_id_1430/*RangeIterRange<i16>*/ {
  id_1429/*RangeIter<i16>*/ id_1454/*begin*/;
  id_1429/*RangeIter<i16>*/ id_1455/*end*/;
};
struct PROT_id_1431/*Range<i32>*/ {
  i32 id_1454/*begin*/;
  i32 id_1455/*end*/;
};
struct PROT_id_1432/*RangeIter<i32>*/ {
  i32 id_1456/*val*/;
};
struct PROT_id_1433/*RangeIterRange<i32>*/ {
  id_1432/*RangeIter<i32>*/ id_1454/*begin*/;
  id_1432/*RangeIter<i32>*/ id_1455/*end*/;
};
struct PROT_id_1434/*Range<i64>*/ {
  i64 id_1454/*begin*/;
  i64 id_1455/*end*/;
};
struct PROT_id_1435/*RangeIter<i64>*/ {
  i64 id_1456/*val*/;
};
struct PROT_id_1436/*RangeIterRange<i64>*/ {
  id_1435/*RangeIter<i64>*/ id_1454/*begin*/;
  id_1435/*RangeIter<i64>*/ id_1455/*end*/;
};
struct PROT_id_1437/*Range<char>*/ {
  char id_1454/*begin*/;
  char id_1455/*end*/;
};
struct PROT_id_1438/*RangeIter<char>*/ {
  char id_1456/*val*/;
};
struct PROT_id_1439/*RangeIterRange<char>*/ {
  id_1438/*RangeIter<char>*/ id_1454/*begin*/;
  id_1438/*RangeIter<char>*/ id_1455/*end*/;
};
struct PROT_id_1440/*Vec<i64>*/ {
  i64 id_1457;
  i64* id_1458;
  i64 id_1459;
};
struct PROT_id_1441/*VecIter<i64>*/ {
  i64* id_1460;
};
struct PROT_id_1442/*VecIterRange<i64>*/ {
  id_1441/*VecIter<i64>*/ id_1454/*begin*/;
  id_1441/*VecIter<i64>*/ id_1455/*end*/;
};
struct PROT_id_1443/*Vec<char>*/ {
  i64 id_1457/*cap*/;
  char* id_1458/*head*/;
  i64 id_1459/*size*/;
};
struct PROT_id_1444/*VecIter<char>*/ {
  char* id_1460/*ptr*/;
};
struct PROT_id_1445/*VecIterRange<char>*/ {
  id_1444/*VecIter<char>*/ id_1454/*begin*/;
  id_1444/*VecIter<char>*/ id_1455/*end*/;
};
struct PROT_id_1446/*Str*/ {
  id_1443/*Vec<char>*/ id_1461;
  i64 id_1459/*size*/;
};
struct PROT_id_1447/*V2*/ {
  f64 id_1462;
  f64 id_1463;
};
struct PROT_id_1448/*Rng*/ {
  i64 id_1464;
};
struct PROT_id_1449/*Vec<Str>*/ {
  i64 id_1457/*cap*/;
  id_1446/*Str*/* id_1458/*head*/;
  i64 id_1459/*size*/;
};
struct PROT_id_1450/*VecIter<Str>*/ {
  id_1446/*Str*/* id_1460/*ptr*/;
};
struct PROT_id_1451/*VecIterRange<Str>*/ {
  id_1450/*VecIter<Str>*/ id_1454/*begin*/;
  id_1450/*VecIter<Str>*/ id_1455/*end*/;
};
i8 id_1465();
i16 id_1466();
i32 id_1467();
i64 id_1468();
u8 id_1469();
u16 id_1470();
u32 id_1471();
u64 id_1472();
bool id_1473();
char id_1474();
i64 id_1475(i64 v101, i64 v102);
i64 id_1476(i64 v103, i64 v104);
void id_1477();
void id_1478(i8* v105, i8 v106);
void id_1479(i8* v107, i8 v108);
void id_1480(i8* v109, i8 v110);
void id_1481(i8* v111, i8 v112);
void id_1482(i8* v113, i8 v114);
void id_1483(i8* v115, i8 v116);
void id_1484(i8* v117, i8 v118);
void id_1485(i8* v119, i8 v120);
bool id_1486(i8 v121, i8 v122);
bool id_1487(i8 v123, i8 v124);
i8* id_1488(i8* v125);
i8* id_1489(i8* v126);
i8 id_1490(i8* v127);
i8 id_1491(i8* v129);
void id_1492(i16* v132, i16 v133);
void id_1493(i16* v134, i16 v135);
void id_1494(i16* v136, i16 v137);
void id_1495(i16* v138, i16 v139);
void id_1496(i16* v140, i16 v141);
void id_1497(i16* v142, i16 v143);
void id_1498(i16* v144, i16 v145);
void id_1499(i16* v146, i16 v147);
bool id_1500(i16 v148, i16 v149);
bool id_1501(i16 v150, i16 v151);
i16* id_1502(i16* v152);
i16* id_1503(i16* v153);
i16 id_1504(i16* v154);
i16 id_1505(i16* v156);
void id_1506(i32* v159, i32 v160);
void id_1507(i32* v161, i32 v162);
void id_1508(i32* v163, i32 v164);
void id_1509(i32* v165, i32 v166);
void id_1510(i32* v167, i32 v168);
void id_1511(i32* v169, i32 v170);
void id_1512(i32* v171, i32 v172);
void id_1513(i32* v173, i32 v174);
bool id_1514(i32 v175, i32 v176);
bool id_1515(i32 v177, i32 v178);
i32* id_1516(i32* v179);
i32* id_1517(i32* v180);
i32 id_1518(i32* v181);
i32 id_1519(i32* v183);
void id_1520(i64* v186, i64 v187);
void id_1521(i64* v188, i64 v189);
void id_1522(i64* v190, i64 v191);
void id_1523(i64* v192, i64 v193);
void id_1524(i64* v194, i64 v195);
void id_1525(i64* v196, i64 v197);
void id_1526(i64* v198, i64 v199);
void id_1527(i64* v200, i64 v201);
bool id_1528(i64 v202, i64 v203);
bool id_1529(i64 v204, i64 v205);
i64* id_1530(i64* v206);
i64* id_1531(i64* v207);
i64 id_1532(i64* v208);
i64 id_1533(i64* v210);
void id_1534(u8* v213, u8 v214);
void id_1535(u8* v215, u8 v216);
void id_1536(u8* v217, u8 v218);
void id_1537(u8* v219, u8 v220);
void id_1538(u8* v221, u8 v222);
void id_1539(u8* v223, u8 v224);
void id_1540(u8* v225, u8 v226);
void id_1541(u8* v227, u8 v228);
bool id_1542(u8 v229, u8 v230);
bool id_1543(u8 v231, u8 v232);
u8* id_1544(u8* v233);
u8* id_1545(u8* v234);
u8 id_1546(u8* v235);
u8 id_1547(u8* v237);
void id_1548(u16* v240, u16 v241);
void id_1549(u16* v242, u16 v243);
void id_1550(u16* v244, u16 v245);
void id_1551(u16* v246, u16 v247);
void id_1552(u16* v248, u16 v249);
void id_1553(u16* v250, u16 v251);
void id_1554(u16* v252, u16 v253);
void id_1555(u16* v254, u16 v255);
bool id_1556(u16 v256, u16 v257);
bool id_1557(u16 v258, u16 v259);
u16* id_1558(u16* v260);
u16* id_1559(u16* v261);
u16 id_1560(u16* v262);
u16 id_1561(u16* v264);
void id_1562(u32* v267, u32 v268);
void id_1563(u32* v269, u32 v270);
void id_1564(u32* v271, u32 v272);
void id_1565(u32* v273, u32 v274);
void id_1566(u32* v275, u32 v276);
void id_1567(u32* v277, u32 v278);
void id_1568(u32* v279, u32 v280);
void id_1569(u32* v281, u32 v282);
bool id_1570(u32 v283, u32 v284);
bool id_1571(u32 v285, u32 v286);
u32* id_1572(u32* v287);
u32* id_1573(u32* v288);
u32 id_1574(u32* v289);
u32 id_1575(u32* v291);
void id_1576(u64* v294, u64 v295);
void id_1577(u64* v296, u64 v297);
void id_1578(u64* v298, u64 v299);
void id_1579(u64* v300, u64 v301);
void id_1580(u64* v302, u64 v303);
void id_1581(u64* v304, u64 v305);
void id_1582(u64* v306, u64 v307);
void id_1583(u64* v308, u64 v309);
bool id_1584(u64 v310, u64 v311);
bool id_1585(u64 v312, u64 v313);
u64* id_1586(u64* v314);
u64* id_1587(u64* v315);
u64 id_1588(u64* v316);
u64 id_1589(u64* v318);
void id_1590(char* v321, char v322);
void id_1591(char* v323, char v324);
void id_1592(char* v325, char v326);
void id_1593(char* v327, char v328);
void id_1594(char* v329, char v330);
void id_1595(char* v331, char v332);
void id_1596(char* v333, char v334);
void id_1597(char* v335, char v336);
bool id_1598(char v337, char v338);
bool id_1599(char v339, char v340);
char* id_1600(char* v341);
char* id_1601(char* v342);
char id_1602(char* v343);
char id_1603(char* v345);
void id_1604(f32* v348, f32 v349);
void id_1605(f32* v350, f32 v351);
void id_1606(f32* v352, f32 v353);
void id_1607(f32* v354, f32 v355);
void id_1608(f64* v356, f64 v357);
void id_1609(f64* v358, f64 v359);
void id_1610(f64* v360, f64 v361);
void id_1611(f64* v362, f64 v363);
bool id_1612(bool v364, bool v365);
i64 id_1613(i64 v366, i64 v367);
id_1424/*Out*/ id_1614();
id_1424/*Out*/ id_1615(id_1424/*Out*/ v370, id_1424/*Out*/ v371);
id_1424/*Out*/ id_1616(id_1424/*Out*/ v372);
id_1424/*Out*/ id_1617(str v373);
id_1424/*Out*/ id_1618(str v374);
id_1424/*Out*/ id_1619(id_1424/*Out*/ v375, str v376);
id_1424/*Out*/ id_1620(str* v377);
id_1424/*Out*/ id_1621(id_1424/*Out*/ v378, str* v379);
id_1424/*Out*/ id_1622(char v380);
id_1424/*Out*/ id_1623(char v381);
id_1424/*Out*/ id_1624(id_1424/*Out*/ v382, char v383);
id_1424/*Out*/ id_1625(char* v384);
id_1424/*Out*/ id_1626(id_1424/*Out*/ v385, char* v386);
id_1424/*Out*/ id_1627(i8 v387);
id_1424/*Out*/ id_1628(i8 v388);
id_1424/*Out*/ id_1629(id_1424/*Out*/ v389, i8 v390);
id_1424/*Out*/ id_1630(i8* v391);
id_1424/*Out*/ id_1631(id_1424/*Out*/ v392, i8* v393);
id_1424/*Out*/ id_1632(i16 v394);
id_1424/*Out*/ id_1633(i16 v395);
id_1424/*Out*/ id_1634(id_1424/*Out*/ v396, i16 v397);
id_1424/*Out*/ id_1635(i16* v398);
id_1424/*Out*/ id_1636(id_1424/*Out*/ v399, i16* v400);
id_1424/*Out*/ id_1637(i32 v401);
id_1424/*Out*/ id_1638(i32 v402);
id_1424/*Out*/ id_1639(id_1424/*Out*/ v403, i32 v404);
id_1424/*Out*/ id_1640(i32* v405);
id_1424/*Out*/ id_1641(id_1424/*Out*/ v406, i32* v407);
id_1424/*Out*/ id_1642(i64 v408);
id_1424/*Out*/ id_1643(i64 v409);
id_1424/*Out*/ id_1644(id_1424/*Out*/ v410, i64 v411);
id_1424/*Out*/ id_1645(i64* v412);
id_1424/*Out*/ id_1646(id_1424/*Out*/ v413, i64* v414);
id_1424/*Out*/ id_1647(u8 v415);
id_1424/*Out*/ id_1648(u8 v416);
id_1424/*Out*/ id_1649(id_1424/*Out*/ v417, u8 v418);
id_1424/*Out*/ id_1650(u8* v419);
id_1424/*Out*/ id_1651(id_1424/*Out*/ v420, u8* v421);
id_1424/*Out*/ id_1652(u16 v422);
id_1424/*Out*/ id_1653(u16 v423);
id_1424/*Out*/ id_1654(id_1424/*Out*/ v424, u16 v425);
id_1424/*Out*/ id_1655(u16* v426);
id_1424/*Out*/ id_1656(id_1424/*Out*/ v427, u16* v428);
id_1424/*Out*/ id_1657(u32 v429);
id_1424/*Out*/ id_1658(u32 v430);
id_1424/*Out*/ id_1659(id_1424/*Out*/ v431, u32 v432);
id_1424/*Out*/ id_1660(u32* v433);
id_1424/*Out*/ id_1661(id_1424/*Out*/ v434, u32* v435);
id_1424/*Out*/ id_1662(u64 v436);
id_1424/*Out*/ id_1663(u64 v437);
id_1424/*Out*/ id_1664(id_1424/*Out*/ v438, u64 v439);
id_1424/*Out*/ id_1665(u64* v440);
id_1424/*Out*/ id_1666(id_1424/*Out*/ v441, u64* v442);
id_1424/*Out*/ id_1667(f32 v443);
id_1424/*Out*/ id_1668(f32 v444);
id_1424/*Out*/ id_1669(id_1424/*Out*/ v445, f32 v446);
id_1424/*Out*/ id_1670(f32* v447);
id_1424/*Out*/ id_1671(id_1424/*Out*/ v448, f32* v449);
id_1424/*Out*/ id_1672(f64 v450);
id_1424/*Out*/ id_1673(f64 v451);
id_1424/*Out*/ id_1674(id_1424/*Out*/ v452, f64 v453);
id_1424/*Out*/ id_1675(f64* v454);
id_1424/*Out*/ id_1676(id_1424/*Out*/ v455, f64* v456);
void id_1677();
id_1426/*RangeIter<i8>*/ id_1678(i8 v490);
void id_1679(id_1426/*RangeIter<i8>*/* v492);
i8 id_1680(id_1426/*RangeIter<i8>*/ v493);
bool id_1681(id_1426/*RangeIter<i8>*/ v494, id_1426/*RangeIter<i8>*/ v495);
id_1426/*RangeIter<i8>*/ id_1682(id_1427/*RangeIterRange<i8>*/* v496);
id_1426/*RangeIter<i8>*/ id_1683(id_1427/*RangeIterRange<i8>*/* v497);
id_1427/*RangeIterRange<i8>*/ id_1684(id_1426/*RangeIter<i8>*/ v498, id_1426/*RangeIter<i8>*/ v499);
i8 id_1685(id_1425/*Range<i8>*/* v457);
i8 id_1686(id_1425/*Range<i8>*/* v458);
id_1425/*Range<i8>*/ id_1687(i8 v459, i8 v460);
id_1425/*Range<i8>*/ id_1688(i8 v462, i8 v463);
id_1425/*Range<i8>*/ id_1689(i8 v464, i8 v465);
id_1425/*Range<i8>*/ id_1690(i8 v466);
id_1425/*Range<i8>*/ id_1691(i8 v467);
id_1425/*Range<i8>*/ id_1692(i8 v470);
id_1425/*Range<i8>*/ id_1693(id_1425/*Range<i8>*/ v473);
id_1425/*Range<i8>*/ id_1694(i8 v474, i8 v475);
id_1425/*Range<i8>*/ id_1695(i8 v478);
id_1425/*Range<i8>*/ id_1696(i8 v483);
bool id_1697(i8 v488, id_1425/*Range<i8>*/ v489);
id_1427/*RangeIterRange<i8>*/ id_1698(id_1425/*Range<i8>*/ v501);
id_1429/*RangeIter<i16>*/ id_1699(i16 v536);
void id_1700(id_1429/*RangeIter<i16>*/* v538);
i16 id_1701(id_1429/*RangeIter<i16>*/ v539);
bool id_1702(id_1429/*RangeIter<i16>*/ v540, id_1429/*RangeIter<i16>*/ v541);
id_1429/*RangeIter<i16>*/ id_1703(id_1430/*RangeIterRange<i16>*/* v542);
id_1429/*RangeIter<i16>*/ id_1704(id_1430/*RangeIterRange<i16>*/* v543);
id_1430/*RangeIterRange<i16>*/ id_1705(id_1429/*RangeIter<i16>*/ v544, id_1429/*RangeIter<i16>*/ v545);
i16 id_1706(id_1428/*Range<i16>*/* v503);
i16 id_1707(id_1428/*Range<i16>*/* v504);
id_1428/*Range<i16>*/ id_1708(i16 v505, i16 v506);
id_1428/*Range<i16>*/ id_1709(i16 v508, i16 v509);
id_1428/*Range<i16>*/ id_1710(i16 v510, i16 v511);
id_1428/*Range<i16>*/ id_1711(i16 v512);
id_1428/*Range<i16>*/ id_1712(i16 v513);
id_1428/*Range<i16>*/ id_1713(i16 v516);
id_1428/*Range<i16>*/ id_1714(id_1428/*Range<i16>*/ v519);
id_1428/*Range<i16>*/ id_1715(i16 v520, i16 v521);
id_1428/*Range<i16>*/ id_1716(i16 v524);
id_1428/*Range<i16>*/ id_1717(i16 v529);
bool id_1718(i16 v534, id_1428/*Range<i16>*/ v535);
id_1430/*RangeIterRange<i16>*/ id_1719(id_1428/*Range<i16>*/ v547);
id_1432/*RangeIter<i32>*/ id_1720(i32 v582);
void id_1721(id_1432/*RangeIter<i32>*/* v584);
i32 id_1722(id_1432/*RangeIter<i32>*/ v585);
bool id_1723(id_1432/*RangeIter<i32>*/ v586, id_1432/*RangeIter<i32>*/ v587);
id_1432/*RangeIter<i32>*/ id_1724(id_1433/*RangeIterRange<i32>*/* v588);
id_1432/*RangeIter<i32>*/ id_1725(id_1433/*RangeIterRange<i32>*/* v589);
id_1433/*RangeIterRange<i32>*/ id_1726(id_1432/*RangeIter<i32>*/ v590, id_1432/*RangeIter<i32>*/ v591);
i32 id_1727(id_1431/*Range<i32>*/* v549);
i32 id_1728(id_1431/*Range<i32>*/* v550);
id_1431/*Range<i32>*/ id_1729(i32 v551, i32 v552);
id_1431/*Range<i32>*/ id_1730(i32 v554, i32 v555);
id_1431/*Range<i32>*/ id_1731(i32 v556, i32 v557);
id_1431/*Range<i32>*/ id_1732(i32 v558);
id_1431/*Range<i32>*/ id_1733(i32 v559);
id_1431/*Range<i32>*/ id_1734(i32 v562);
id_1431/*Range<i32>*/ id_1735(id_1431/*Range<i32>*/ v565);
id_1431/*Range<i32>*/ id_1736(i32 v566, i32 v567);
id_1431/*Range<i32>*/ id_1737(i32 v570);
id_1431/*Range<i32>*/ id_1738(i32 v575);
bool id_1739(i32 v580, id_1431/*Range<i32>*/ v581);
id_1433/*RangeIterRange<i32>*/ id_1740(id_1431/*Range<i32>*/ v593);
id_1435/*RangeIter<i64>*/ id_1741(i64 v628);
void id_1742(id_1435/*RangeIter<i64>*/* v630);
i64 id_1743(id_1435/*RangeIter<i64>*/ v631);
bool id_1744(id_1435/*RangeIter<i64>*/ v632, id_1435/*RangeIter<i64>*/ v633);
id_1435/*RangeIter<i64>*/ id_1745(id_1436/*RangeIterRange<i64>*/* v634);
id_1435/*RangeIter<i64>*/ id_1746(id_1436/*RangeIterRange<i64>*/* v635);
id_1436/*RangeIterRange<i64>*/ id_1747(id_1435/*RangeIter<i64>*/ v636, id_1435/*RangeIter<i64>*/ v637);
i64 id_1748(id_1434/*Range<i64>*/* v595);
i64 id_1749(id_1434/*Range<i64>*/* v596);
id_1434/*Range<i64>*/ id_1750(i64 v597, i64 v598);
id_1434/*Range<i64>*/ id_1751(i64 v600, i64 v601);
id_1434/*Range<i64>*/ id_1752(i64 v602, i64 v603);
id_1434/*Range<i64>*/ id_1753(i64 v604);
id_1434/*Range<i64>*/ id_1754(i64 v605);
id_1434/*Range<i64>*/ id_1755(i64 v608);
id_1434/*Range<i64>*/ id_1756(id_1434/*Range<i64>*/ v611);
id_1434/*Range<i64>*/ id_1757(i64 v612, i64 v613);
id_1434/*Range<i64>*/ id_1758(i64 v616);
id_1434/*Range<i64>*/ id_1759(i64 v621);
bool id_1760(i64 v626, id_1434/*Range<i64>*/ v627);
id_1436/*RangeIterRange<i64>*/ id_1761(id_1434/*Range<i64>*/ v639);
id_1438/*RangeIter<char>*/ id_1762(char v674);
void id_1763(id_1438/*RangeIter<char>*/* v676);
char id_1764(id_1438/*RangeIter<char>*/ v677);
bool id_1765(id_1438/*RangeIter<char>*/ v678, id_1438/*RangeIter<char>*/ v679);
id_1438/*RangeIter<char>*/ id_1766(id_1439/*RangeIterRange<char>*/* v680);
id_1438/*RangeIter<char>*/ id_1767(id_1439/*RangeIterRange<char>*/* v681);
id_1439/*RangeIterRange<char>*/ id_1768(id_1438/*RangeIter<char>*/ v682, id_1438/*RangeIter<char>*/ v683);
char id_1769(id_1437/*Range<char>*/* v641);
char id_1770(id_1437/*Range<char>*/* v642);
id_1437/*Range<char>*/ id_1771(char v643, char v644);
id_1437/*Range<char>*/ id_1772(char v646, char v647);
id_1437/*Range<char>*/ id_1773(char v648, char v649);
id_1437/*Range<char>*/ id_1774(char v650);
id_1437/*Range<char>*/ id_1775(char v651);
id_1437/*Range<char>*/ id_1776(char v654);
id_1437/*Range<char>*/ id_1777(id_1437/*Range<char>*/ v657);
id_1437/*Range<char>*/ id_1778(char v658, char v659);
id_1437/*Range<char>*/ id_1779(char v662);
id_1437/*Range<char>*/ id_1780(char v667);
bool id_1781(char v672, id_1437/*Range<char>*/ v673);
id_1439/*RangeIterRange<char>*/ id_1782(id_1437/*Range<char>*/ v685);
id_1441/*VecIter<i64>*/ id_1783(i64* v738);
void id_1784(id_1441/*VecIter<i64>*/* v740);
id_1441/*VecIter<i64>*/ id_1785(id_1441/*VecIter<i64>*/ v741, i64 v742);
bool id_1786(id_1441/*VecIter<i64>*/ v743, id_1441/*VecIter<i64>*/ v744);
i64* id_1787(id_1441/*VecIter<i64>*/ v745);
id_1441/*VecIter<i64>*/ id_1788(id_1442/*VecIterRange<i64>*/* v748);
id_1441/*VecIter<i64>*/ id_1789(id_1442/*VecIterRange<i64>*/* v749);
id_1442/*VecIterRange<i64>*/ id_1790(id_1441/*VecIter<i64>*/ v750, id_1441/*VecIter<i64>*/ v751);
i64* id_1791(id_1440/*Vec<i64>*/* v692, i64 v693);
i64* id_1792(id_1440/*Vec<i64>*/* v694, i64 v695);
void id_1793(id_1440/*Vec<i64>*/* v696);
void id_1794(id_1440/*Vec<i64>*/* v705);
void id_1795(id_1440/*Vec<i64>*/* v714);
void id_1796(id_1440/*Vec<i64>*/* v725, i64 v726);
void id_1797(id_1440/*Vec<i64>*/* v727);
void id_1798(id_1440/*Vec<i64>*/* v728, i64 v729);
id_1441/*VecIter<i64>*/ id_1799(id_1440/*Vec<i64>*/* v746);
id_1441/*VecIter<i64>*/ id_1800(id_1440/*Vec<i64>*/* v747);
id_1442/*VecIterRange<i64>*/ id_1801(id_1440/*Vec<i64>*/* v753);
i64* id_1802(id_1440/*Vec<i64>*/* v755);
i64* id_1803(id_1440/*Vec<i64>*/* v756);
void id_1804(id_1440/*Vec<i64>*/* v757);
id_1440/*Vec<i64>*/ id_1805(i64 v758);
id_1440/*Vec<i64>*/ id_1806(i64 v768, i64 v769);
id_1440/*Vec<i64>*/ id_1807();
id_1440/*Vec<i64>*/ id_1808(id_1440/*Vec<i64>*/* v779);
void id_1809(id_1440/*Vec<i64>*/* v789, i64 v790);
void id_1810(id_1440/*Vec<i64>*/* v791, id_1440/*Vec<i64>*/* v792);
id_1440/*Vec<i64>*/ id_1811(i64 v801, i64 v802);
id_1440/*Vec<i64>*/* id_1812(id_1440/*Vec<i64>*/* v804, i64 v805);
void id_1813(id_1440/*Vec<i64>*/* v806);
void id_1814(id_1440/*Vec<i64>*/* v807);
id_1424/*Out*/ id_1815(id_1440/*Vec<i64>*/* v808);
id_1424/*Out*/ id_1816(id_1440/*Vec<i64>*/* v809);
id_1424/*Out*/ id_1817(id_1424/*Out*/ v810, id_1440/*Vec<i64>*/* v811);
i64* id_1818(id_1440/*Vec<i64>*/* v812, i64 v813);
id_1440/*Vec<i64>*/ id_1819(id_1440/*Vec<i64>*/* v814, i64 v815, i64 v816);
id_1440/*Vec<i64>*/ id_1820(id_1440/*Vec<i64>*/* v826, id_1434/*Range<i64>*/ v827);
id_1440/*Vec<i64>*/ id_1821(id_1440/*Vec<i64>*/* v830);
bool id_1822(id_1440/*Vec<i64>*/* v831, id_1440/*Vec<i64>*/* v832);
void id_1823(i64* v841, i64* v842);
i64* id_1824(i64* v844, i64* v845);
void id_1825(i64* v849, i64* v850);
void id_1826(id_1440/*Vec<i64>*/* v854);
void id_1827(id_1440/*Vec<i64>*/* v859);
id_1440/*Vec<i64>*/ id_1828(id_1440/*Vec<i64>*/* v860, i64(*v861)(i64*));
id_1440/*Vec<i64>*/ id_1829(id_1440/*Vec<i64>*/* v871, bool(*v872)(i64*));
id_1440/*Vec<i64>*/ id_1830(i64 v882, i64 v883);
char id_1831(str* v893, i64 v894);
str id_1832();
bool id_1833(char v896, str v897);
char id_1834(str v898);
id_1444/*VecIter<char>*/ id_1835(char* v945);
void id_1836(id_1444/*VecIter<char>*/* v947);
id_1444/*VecIter<char>*/ id_1837(id_1444/*VecIter<char>*/ v948, i64 v949);
bool id_1838(id_1444/*VecIter<char>*/ v950, id_1444/*VecIter<char>*/ v951);
char* id_1839(id_1444/*VecIter<char>*/ v952);
id_1444/*VecIter<char>*/ id_1840(id_1445/*VecIterRange<char>*/* v955);
id_1444/*VecIter<char>*/ id_1841(id_1445/*VecIterRange<char>*/* v956);
id_1445/*VecIterRange<char>*/ id_1842(id_1444/*VecIter<char>*/ v957, id_1444/*VecIter<char>*/ v958);
char* id_1843(id_1443/*Vec<char>*/* v899, i64 v900);
char* id_1844(id_1443/*Vec<char>*/* v901, i64 v902);
void id_1845(id_1443/*Vec<char>*/* v903);
void id_1846(id_1443/*Vec<char>*/* v912);
void id_1847(id_1443/*Vec<char>*/* v921);
void id_1848(id_1443/*Vec<char>*/* v932, char v933);
void id_1849(id_1443/*Vec<char>*/* v934);
void id_1850(id_1443/*Vec<char>*/* v935, i64 v936);
id_1444/*VecIter<char>*/ id_1851(id_1443/*Vec<char>*/* v953);
id_1444/*VecIter<char>*/ id_1852(id_1443/*Vec<char>*/* v954);
id_1445/*VecIterRange<char>*/ id_1853(id_1443/*Vec<char>*/* v960);
char* id_1854(id_1443/*Vec<char>*/* v962);
char* id_1855(id_1443/*Vec<char>*/* v963);
void id_1856(id_1443/*Vec<char>*/* v964);
id_1443/*Vec<char>*/ id_1857(i64 v965);
id_1443/*Vec<char>*/ id_1858(i64 v975, char v976);
id_1443/*Vec<char>*/ id_1859();
id_1443/*Vec<char>*/ id_1860(id_1443/*Vec<char>*/* v986);
void id_1861(id_1443/*Vec<char>*/* v996, char v997);
void id_1862(id_1443/*Vec<char>*/* v998, id_1443/*Vec<char>*/* v999);
id_1443/*Vec<char>*/ id_1863(char v1008, char v1009);
id_1443/*Vec<char>*/* id_1864(id_1443/*Vec<char>*/* v1011, char v1012);
void id_1865(id_1443/*Vec<char>*/* v1013);
void id_1866(id_1443/*Vec<char>*/* v1014);
id_1424/*Out*/ id_1867(id_1443/*Vec<char>*/* v1015);
id_1424/*Out*/ id_1868(id_1443/*Vec<char>*/* v1016);
id_1424/*Out*/ id_1869(id_1424/*Out*/ v1017, id_1443/*Vec<char>*/* v1018);
char* id_1870(id_1443/*Vec<char>*/* v1019, i64 v1020);
id_1443/*Vec<char>*/ id_1871(id_1443/*Vec<char>*/* v1021, i64 v1022, i64 v1023);
id_1443/*Vec<char>*/ id_1872(id_1443/*Vec<char>*/* v1033, id_1434/*Range<i64>*/ v1034);
id_1443/*Vec<char>*/ id_1873(id_1443/*Vec<char>*/* v1037);
bool id_1874(id_1443/*Vec<char>*/* v1038, id_1443/*Vec<char>*/* v1039);
void id_1875(char* v1048, char* v1049);
char* id_1876(char* v1051, char* v1052);
void id_1877(char* v1056, char* v1057);
void id_1878(id_1443/*Vec<char>*/* v1061);
void id_1879(id_1443/*Vec<char>*/* v1066);
id_1443/*Vec<char>*/ id_1880(id_1443/*Vec<char>*/* v1067, char(*v1068)(char*));
id_1443/*Vec<char>*/ id_1881(id_1443/*Vec<char>*/* v1078, bool(*v1079)(char*));
id_1446/*Str*/ id_1882();
void id_1883(id_1446/*Str*/* v1090);
str id_1884(id_1446/*Str*/* v1091);
id_1445/*VecIterRange<char>*/ id_1885(id_1446/*Str*/* v1093);
char* id_1886(id_1446/*Str*/* v1094, i64 v1095);
char* id_1887(id_1446/*Str*/* v1096, i64 v1097);
char* id_1888(id_1446/*Str*/* v1098, i64 v1099);
void id_1889(id_1446/*Str*/* v1100, char v1101);
void id_1890(id_1446/*Str*/* v1102);
id_1446/*Str*/ id_1891(str v1103);
id_1446/*Str*/ id_1892(id_1446/*Str*/* v1105);
i64 id_1893(str v1107);
void id_1894(id_1446/*Str*/* v1109);
void id_1895(id_1446/*Str*/* v1110);
void id_1896(id_1446/*Str*/* v1111, char v1112);
void id_1897(id_1446/*Str*/* v1113, id_1446/*Str*/* v1114);
void id_1898(id_1446/*Str*/* v1124, str v1125);
id_1446/*Str*/ id_1899(id_1446/*Str*/* v1135, id_1446/*Str*/* v1136);
id_1446/*Str*/ id_1900(str v1138, str v1139);
id_1424/*Out*/ id_1901(id_1446/*Str*/* v1144);
id_1424/*Out*/ id_1902(id_1446/*Str*/* v1145);
id_1424/*Out*/ id_1903(id_1424/*Out*/ v1146, id_1446/*Str*/* v1147);
bool id_1904(id_1446/*Str*/* v1148, id_1446/*Str*/* v1149);
bool id_1905(char v1158, id_1446/*Str*/* v1159);
id_1446/*Str*/ id_1906(str v1168, i64 v1169);
id_1446/*Str*/ id_1907(str v1180);
id_1445/*VecIterRange<char>*/ id_1908(str v1181);
str id_1909();
f64 id_1910(f64 v1184);
id_1447/*V2*/ id_1911(f64 v1194, f64 v1195);
id_1447/*V2*/ id_1912(id_1447/*V2*/ v1197, id_1447/*V2*/ v1198);
id_1447/*V2*/ id_1913(id_1447/*V2*/ v1199, id_1447/*V2*/ v1200);
f64 id_1914(id_1447/*V2*/ v1202);
void id_1915(id_1447/*V2*/ v1203);
void id_1916(id_1447/*V2*/ v1204);
id_1424/*Out*/ id_1917(id_1447/*V2*/ v1205);
id_1424/*Out*/ id_1918(id_1447/*V2*/ v1206);
id_1424/*Out*/ id_1919(id_1424/*Out*/ v1207, id_1447/*V2*/ v1208);
id_1448/*Rng*/ id_1920(i64 v1209);
id_1448/*Rng*/ id_1921();
i64 id_1922(id_1448/*Rng*/* v1211);
void id_1923(i64 v1212, f64 v1213, f64 v1214, f64 v1215);
id_1450/*VecIter<Str>*/ id_1924(id_1446/*Str*/* v1262);
void id_1925(id_1450/*VecIter<Str>*/* v1264);
id_1450/*VecIter<Str>*/ id_1926(id_1450/*VecIter<Str>*/ v1265, i64 v1266);
bool id_1927(id_1450/*VecIter<Str>*/ v1267, id_1450/*VecIter<Str>*/ v1268);
id_1446/*Str*/* id_1928(id_1450/*VecIter<Str>*/ v1269);
id_1450/*VecIter<Str>*/ id_1929(id_1451/*VecIterRange<Str>*/* v1272);
id_1450/*VecIter<Str>*/ id_1930(id_1451/*VecIterRange<Str>*/* v1273);
id_1451/*VecIterRange<Str>*/ id_1931(id_1450/*VecIter<Str>*/ v1274, id_1450/*VecIter<Str>*/ v1275);
id_1446/*Str*/* id_1932(id_1449/*Vec<Str>*/* v1216, i64 v1217);
id_1446/*Str*/* id_1933(id_1449/*Vec<Str>*/* v1218, i64 v1219);
void id_1934(id_1449/*Vec<Str>*/* v1220);
void id_1935(id_1449/*Vec<Str>*/* v1229);
void id_1936(id_1449/*Vec<Str>*/* v1238);
void id_1937(id_1449/*Vec<Str>*/* v1249, id_1446/*Str*/ v1250);
void id_1938(id_1449/*Vec<Str>*/* v1251);
void id_1939(id_1449/*Vec<Str>*/* v1252, i64 v1253);
id_1450/*VecIter<Str>*/ id_1940(id_1449/*Vec<Str>*/* v1270);
id_1450/*VecIter<Str>*/ id_1941(id_1449/*Vec<Str>*/* v1271);
id_1451/*VecIterRange<Str>*/ id_1942(id_1449/*Vec<Str>*/* v1277);
id_1446/*Str*/* id_1943(id_1449/*Vec<Str>*/* v1279);
id_1446/*Str*/* id_1944(id_1449/*Vec<Str>*/* v1280);
void id_1945(id_1449/*Vec<Str>*/* v1281);
id_1449/*Vec<Str>*/ id_1946(i64 v1282);
id_1449/*Vec<Str>*/ id_1947(i64 v1292, id_1446/*Str*/ v1293);
id_1449/*Vec<Str>*/ id_1948();
id_1449/*Vec<Str>*/ id_1949(id_1449/*Vec<Str>*/* v1303);
void id_1950(id_1449/*Vec<Str>*/* v1313, id_1446/*Str*/ v1314);
void id_1951(id_1449/*Vec<Str>*/* v1315, id_1449/*Vec<Str>*/* v1316);
id_1449/*Vec<Str>*/ id_1952(id_1446/*Str*/ v1325, id_1446/*Str*/ v1326);
id_1449/*Vec<Str>*/* id_1953(id_1449/*Vec<Str>*/* v1328, id_1446/*Str*/ v1329);
void id_1954(id_1449/*Vec<Str>*/* v1330);
void id_1955(id_1449/*Vec<Str>*/* v1331);
id_1424/*Out*/ id_1956(id_1449/*Vec<Str>*/* v1332);
id_1424/*Out*/ id_1957(id_1449/*Vec<Str>*/* v1333);
id_1424/*Out*/ id_1958(id_1424/*Out*/ v1334, id_1449/*Vec<Str>*/* v1335);
id_1446/*Str*/* id_1959(id_1449/*Vec<Str>*/* v1336, i64 v1337);
id_1449/*Vec<Str>*/ id_1960(id_1449/*Vec<Str>*/* v1338, i64 v1339, i64 v1340);
id_1449/*Vec<Str>*/ id_1961(id_1449/*Vec<Str>*/* v1350, id_1434/*Range<i64>*/ v1351);
id_1449/*Vec<Str>*/ id_1962(id_1449/*Vec<Str>*/* v1354);
bool id_1963(id_1449/*Vec<Str>*/* v1355, id_1449/*Vec<Str>*/* v1356);
void id_1964(id_1446/*Str*/* v1365, id_1446/*Str*/* v1366);
id_1446/*Str*/* id_1965(id_1446/*Str*/* v1368, id_1446/*Str*/* v1369);
void id_1966(id_1446/*Str*/* v1373, id_1446/*Str*/* v1374);
void id_1967(id_1449/*Vec<Str>*/* v1378);
void id_1968(id_1449/*Vec<Str>*/* v1383);
id_1449/*Vec<Str>*/ id_1969(id_1449/*Vec<Str>*/* v1384, id_1446/*Str*/(*v1385)(id_1446/*Str*/*));
id_1449/*Vec<Str>*/ id_1970(id_1449/*Vec<Str>*/* v1395, bool(*v1396)(id_1446/*Str*/*));
int main(int argc, char *argv[]) ;

i8 id_1465/*lop i8 i8*/() {{
  return ((i8)0);
} panic("reached function end without returning anything lop i8 i8\n");}

i16 id_1466/*lop i16 i16*/() {{
  return ((i16)0);
} panic("reached function end without returning anything lop i16 i16\n");}

i32 id_1467/*lop i32 i32*/() {{
  return ((i32)0);
} panic("reached function end without returning anything lop i32 i32\n");}

i64 id_1468/*lop i64 i64*/() {{
  return ((i64)0);
} panic("reached function end without returning anything lop i64 i64\n");}

u8 id_1469/*lop u8 u8*/() {{
  return ((u8)0);
} panic("reached function end without returning anything lop u8 u8\n");}

u16 id_1470/*lop u16 u16*/() {{
  return ((u16)0);
} panic("reached function end without returning anything lop u16 u16\n");}

u32 id_1471/*lop u32 u32*/() {{
  return ((u32)0);
} panic("reached function end without returning anything lop u32 u32\n");}

u64 id_1472/*lop u64 u64*/() {{
  return ((u64)0);
} panic("reached function end without returning anything lop u64 u64\n");}

bool id_1473/*lop bool bool*/() {{
  return ((bool)0);
} panic("reached function end without returning anything lop bool bool\n");}

char id_1474/*lop char char*/() {{
  return ((char)((i8)0));
} panic("reached function end without returning anything lop char char\n");}

i64 id_1475/*lop i64 max i64 a i64 b*/(i64 v101, i64 v102) {{
  if ((((v101))>((v102)))) {
    return (v101);
  } else {
    return (v102);
  }
} panic("reached function end without returning anything lop i64 max i64 a i64 b\n");}

i64 id_1476/*lop i64 min i64 a i64 b*/(i64 v103, i64 v104) {{
  if ((((v103))<((v104)))) {
    return (v103);
  } else {
    return (v104);
  }
} panic("reached function end without returning anything lop i64 min i64 a i64 b\n");}

void id_1477/*lop void intOpMaker*/(){
  id_1422/*IntOpMaker<u64>*/ v320; /*d1*/
  id_1421/*IntOpMaker<u32>*/ v293; /*c1*/
  id_1420/*IntOpMaker<u16>*/ v266; /*b1*/
  id_1419/*IntOpMaker<u8>*/ v239; /*a1*/
  id_1423/*IntOpMaker<char>*/ v347; /*aboba*/
  id_1417/*IntOpMaker<i32>*/ v185; /*c*/
  id_1416/*IntOpMaker<i16>*/ v158; /*b*/
  id_1418/*IntOpMaker<i64>*/ v212; /*d*/
  id_1415/*IntOpMaker<i8>*/ v131; /*a*/
}

void id_1478/*op void += i8R a i8 b*/(i8* v105, i8 v106){
  ((*v105)=(((*v105))+((v106))));
}

void id_1479/*op void -= i8R a i8 b*/(i8* v107, i8 v108){
  ((*v107)=(((*v107))-((v108))));
}

void id_1480/*op void /= i8R a i8 b*/(i8* v109, i8 v110){
  ((*v109)=(((*v109))/((v110))));
}

void id_1481/*op void %= i8R a i8 b*/(i8* v111, i8 v112){
  ((*v111)=(((*v111))%((v112))));
}

void id_1482/*op void *= i8R a i8 b*/(i8* v113, i8 v114){
  ((*v113)=(((*v113))*((v114))));
}

void id_1483/*op void ^= i8R a i8 b*/(i8* v115, i8 v116){
  ((*v115)=(((*v115))^((v116))));
}

void id_1484/*op void &= i8R a i8 b*/(i8* v117, i8 v118){
  ((*v117)=(((*v117))&((v118))));
}

void id_1485/*op void |= i8R a i8 b*/(i8* v119, i8 v120){
  ((*v119)=(((*v119))|((v120))));
}

bool id_1486/*op bool %% i8 a i8 b*/(i8 v121, i8 v122) {{
  return (!((((v121))%((v122)))));
} panic("reached function end without returning anything op bool %% i8 a i8 b\n");}

bool id_1487/*op bool !% i8 a i8 b*/(i8 v123, i8 v124) {{
  return (!((id_1486/*op bool %% i8 a i8 b*/((v123), (v124)))));
} panic("reached function end without returning anything op bool !% i8 a i8 b\n");}

i8* id_1488/*lop i8R ++ i8R x*/(i8* v125) {{
  (id_1478/*op void += i8R a i8 b*/(&(*v125), (((id_1465/*lop i8 i8*/()))-((~((id_1465/*lop i8 i8*/())))))));
  return &(*v125);
} panic("reached function end without returning anything lop i8R ++ i8R x\n");}

i8* id_1489/*lop i8R -- i8R x*/(i8* v126) {{
  (id_1479/*op void -= i8R a i8 b*/(&(*v126), (((id_1465/*lop i8 i8*/()))-((~((id_1465/*lop i8 i8*/())))))));
  return &(*v126);
} panic("reached function end without returning anything lop i8R -- i8R x\n");}

i8 id_1490/*rop i8 ++ i8R x*/(i8* v127) {{
  i8 v128; /*t*/
  ((v128)=(*v127));
  (id_1478/*op void += i8R a i8 b*/(&(*v127), (((id_1465/*lop i8 i8*/()))-((~((id_1465/*lop i8 i8*/())))))));
  return (v128);
} panic("reached function end without returning anything rop i8 ++ i8R x\n");}

i8 id_1491/*rop i8 -- i8R x*/(i8* v129) {{
  i8 v130; /*t*/
  ((v130)=(*v129));
  (id_1479/*op void -= i8R a i8 b*/(&(*v129), (((id_1465/*lop i8 i8*/()))-((~((id_1465/*lop i8 i8*/())))))));
  return (v130);
} panic("reached function end without returning anything rop i8 -- i8R x\n");}

void id_1492/*op void += i16R a i16 b*/(i16* v132, i16 v133){
  ((*v132)=(((*v132))+((v133))));
}

void id_1493/*op void -= i16R a i16 b*/(i16* v134, i16 v135){
  ((*v134)=(((*v134))-((v135))));
}

void id_1494/*op void /= i16R a i16 b*/(i16* v136, i16 v137){
  ((*v136)=(((*v136))/((v137))));
}

void id_1495/*op void %= i16R a i16 b*/(i16* v138, i16 v139){
  ((*v138)=(((*v138))%((v139))));
}

void id_1496/*op void *= i16R a i16 b*/(i16* v140, i16 v141){
  ((*v140)=(((*v140))*((v141))));
}

void id_1497/*op void ^= i16R a i16 b*/(i16* v142, i16 v143){
  ((*v142)=(((*v142))^((v143))));
}

void id_1498/*op void &= i16R a i16 b*/(i16* v144, i16 v145){
  ((*v144)=(((*v144))&((v145))));
}

void id_1499/*op void |= i16R a i16 b*/(i16* v146, i16 v147){
  ((*v146)=(((*v146))|((v147))));
}

bool id_1500/*op bool %% i16 a i16 b*/(i16 v148, i16 v149) {{
  return (!((((v148))%((v149)))));
} panic("reached function end without returning anything op bool %% i16 a i16 b\n");}

bool id_1501/*op bool !% i16 a i16 b*/(i16 v150, i16 v151) {{
  return (!((id_1500/*op bool %% i16 a i16 b*/((v150), (v151)))));
} panic("reached function end without returning anything op bool !% i16 a i16 b\n");}

i16* id_1502/*lop i16R ++ i16R x*/(i16* v152) {{
  (id_1492/*op void += i16R a i16 b*/(&(*v152), (((id_1466/*lop i16 i16*/()))-((~((id_1466/*lop i16 i16*/())))))));
  return &(*v152);
} panic("reached function end without returning anything lop i16R ++ i16R x\n");}

i16* id_1503/*lop i16R -- i16R x*/(i16* v153) {{
  (id_1493/*op void -= i16R a i16 b*/(&(*v153), (((id_1466/*lop i16 i16*/()))-((~((id_1466/*lop i16 i16*/())))))));
  return &(*v153);
} panic("reached function end without returning anything lop i16R -- i16R x\n");}

i16 id_1504/*rop i16 ++ i16R x*/(i16* v154) {{
  i16 v155; /*t*/
  ((v155)=(*v154));
  (id_1492/*op void += i16R a i16 b*/(&(*v154), (((id_1466/*lop i16 i16*/()))-((~((id_1466/*lop i16 i16*/())))))));
  return (v155);
} panic("reached function end without returning anything rop i16 ++ i16R x\n");}

i16 id_1505/*rop i16 -- i16R x*/(i16* v156) {{
  i16 v157; /*t*/
  ((v157)=(*v156));
  (id_1493/*op void -= i16R a i16 b*/(&(*v156), (((id_1466/*lop i16 i16*/()))-((~((id_1466/*lop i16 i16*/())))))));
  return (v157);
} panic("reached function end without returning anything rop i16 -- i16R x\n");}

void id_1506/*op void += i32R a i32 b*/(i32* v159, i32 v160){
  ((*v159)=(((*v159))+((v160))));
}

void id_1507/*op void -= i32R a i32 b*/(i32* v161, i32 v162){
  ((*v161)=(((*v161))-((v162))));
}

void id_1508/*op void /= i32R a i32 b*/(i32* v163, i32 v164){
  ((*v163)=(((*v163))/((v164))));
}

void id_1509/*op void %= i32R a i32 b*/(i32* v165, i32 v166){
  ((*v165)=(((*v165))%((v166))));
}

void id_1510/*op void *= i32R a i32 b*/(i32* v167, i32 v168){
  ((*v167)=(((*v167))*((v168))));
}

void id_1511/*op void ^= i32R a i32 b*/(i32* v169, i32 v170){
  ((*v169)=(((*v169))^((v170))));
}

void id_1512/*op void &= i32R a i32 b*/(i32* v171, i32 v172){
  ((*v171)=(((*v171))&((v172))));
}

void id_1513/*op void |= i32R a i32 b*/(i32* v173, i32 v174){
  ((*v173)=(((*v173))|((v174))));
}

bool id_1514/*op bool %% i32 a i32 b*/(i32 v175, i32 v176) {{
  return (!((((v175))%((v176)))));
} panic("reached function end without returning anything op bool %% i32 a i32 b\n");}

bool id_1515/*op bool !% i32 a i32 b*/(i32 v177, i32 v178) {{
  return (!((id_1514/*op bool %% i32 a i32 b*/((v177), (v178)))));
} panic("reached function end without returning anything op bool !% i32 a i32 b\n");}

i32* id_1516/*lop i32R ++ i32R x*/(i32* v179) {{
  (id_1506/*op void += i32R a i32 b*/(&(*v179), (((id_1467/*lop i32 i32*/()))-((~((id_1467/*lop i32 i32*/())))))));
  return &(*v179);
} panic("reached function end without returning anything lop i32R ++ i32R x\n");}

i32* id_1517/*lop i32R -- i32R x*/(i32* v180) {{
  (id_1507/*op void -= i32R a i32 b*/(&(*v180), (((id_1467/*lop i32 i32*/()))-((~((id_1467/*lop i32 i32*/())))))));
  return &(*v180);
} panic("reached function end without returning anything lop i32R -- i32R x\n");}

i32 id_1518/*rop i32 ++ i32R x*/(i32* v181) {{
  i32 v182; /*t*/
  ((v182)=(*v181));
  (id_1506/*op void += i32R a i32 b*/(&(*v181), (((id_1467/*lop i32 i32*/()))-((~((id_1467/*lop i32 i32*/())))))));
  return (v182);
} panic("reached function end without returning anything rop i32 ++ i32R x\n");}

i32 id_1519/*rop i32 -- i32R x*/(i32* v183) {{
  i32 v184; /*t*/
  ((v184)=(*v183));
  (id_1507/*op void -= i32R a i32 b*/(&(*v183), (((id_1467/*lop i32 i32*/()))-((~((id_1467/*lop i32 i32*/())))))));
  return (v184);
} panic("reached function end without returning anything rop i32 -- i32R x\n");}

void id_1520/*op void += i64R a i64 b*/(i64* v186, i64 v187){
  ((*v186)=(((*v186))+((v187))));
}

void id_1521/*op void -= i64R a i64 b*/(i64* v188, i64 v189){
  ((*v188)=(((*v188))-((v189))));
}

void id_1522/*op void /= i64R a i64 b*/(i64* v190, i64 v191){
  ((*v190)=(((*v190))/((v191))));
}

void id_1523/*op void %= i64R a i64 b*/(i64* v192, i64 v193){
  ((*v192)=(((*v192))%((v193))));
}

void id_1524/*op void *= i64R a i64 b*/(i64* v194, i64 v195){
  ((*v194)=(((*v194))*((v195))));
}

void id_1525/*op void ^= i64R a i64 b*/(i64* v196, i64 v197){
  ((*v196)=(((*v196))^((v197))));
}

void id_1526/*op void &= i64R a i64 b*/(i64* v198, i64 v199){
  ((*v198)=(((*v198))&((v199))));
}

void id_1527/*op void |= i64R a i64 b*/(i64* v200, i64 v201){
  ((*v200)=(((*v200))|((v201))));
}

bool id_1528/*op bool %% i64 a i64 b*/(i64 v202, i64 v203) {{
  return (!((((v202))%((v203)))));
} panic("reached function end without returning anything op bool %% i64 a i64 b\n");}

bool id_1529/*op bool !% i64 a i64 b*/(i64 v204, i64 v205) {{
  return (!((id_1528/*op bool %% i64 a i64 b*/((v204), (v205)))));
} panic("reached function end without returning anything op bool !% i64 a i64 b\n");}

i64* id_1530/*lop i64R ++ i64R x*/(i64* v206) {{
  (id_1520/*op void += i64R a i64 b*/(&(*v206), (((id_1468/*lop i64 i64*/()))-((~((id_1468/*lop i64 i64*/())))))));
  return &(*v206);
} panic("reached function end without returning anything lop i64R ++ i64R x\n");}

i64* id_1531/*lop i64R -- i64R x*/(i64* v207) {{
  (id_1521/*op void -= i64R a i64 b*/(&(*v207), (((id_1468/*lop i64 i64*/()))-((~((id_1468/*lop i64 i64*/())))))));
  return &(*v207);
} panic("reached function end without returning anything lop i64R -- i64R x\n");}

i64 id_1532/*rop i64 ++ i64R x*/(i64* v208) {{
  i64 v209; /*t*/
  ((v209)=(*v208));
  (id_1520/*op void += i64R a i64 b*/(&(*v208), (((id_1468/*lop i64 i64*/()))-((~((id_1468/*lop i64 i64*/())))))));
  return (v209);
} panic("reached function end without returning anything rop i64 ++ i64R x\n");}

i64 id_1533/*rop i64 -- i64R x*/(i64* v210) {{
  i64 v211; /*t*/
  ((v211)=(*v210));
  (id_1521/*op void -= i64R a i64 b*/(&(*v210), (((id_1468/*lop i64 i64*/()))-((~((id_1468/*lop i64 i64*/())))))));
  return (v211);
} panic("reached function end without returning anything rop i64 -- i64R x\n");}

void id_1534/*op void += u8R a u8 b*/(u8* v213, u8 v214){
  ((*v213)=(((*v213))+((v214))));
}

void id_1535/*op void -= u8R a u8 b*/(u8* v215, u8 v216){
  ((*v215)=(((*v215))-((v216))));
}

void id_1536/*op void /= u8R a u8 b*/(u8* v217, u8 v218){
  ((*v217)=(((*v217))/((v218))));
}

void id_1537/*op void %= u8R a u8 b*/(u8* v219, u8 v220){
  ((*v219)=(((*v219))%((v220))));
}

void id_1538/*op void *= u8R a u8 b*/(u8* v221, u8 v222){
  ((*v221)=(((*v221))*((v222))));
}

void id_1539/*op void ^= u8R a u8 b*/(u8* v223, u8 v224){
  ((*v223)=(((*v223))^((v224))));
}

void id_1540/*op void &= u8R a u8 b*/(u8* v225, u8 v226){
  ((*v225)=(((*v225))&((v226))));
}

void id_1541/*op void |= u8R a u8 b*/(u8* v227, u8 v228){
  ((*v227)=(((*v227))|((v228))));
}

bool id_1542/*op bool %% u8 a u8 b*/(u8 v229, u8 v230) {{
  return (!((((v229))%((v230)))));
} panic("reached function end without returning anything op bool %% u8 a u8 b\n");}

bool id_1543/*op bool !% u8 a u8 b*/(u8 v231, u8 v232) {{
  return (!((id_1542/*op bool %% u8 a u8 b*/((v231), (v232)))));
} panic("reached function end without returning anything op bool !% u8 a u8 b\n");}

u8* id_1544/*lop u8R ++ u8R x*/(u8* v233) {{
  (id_1534/*op void += u8R a u8 b*/(&(*v233), (((id_1469/*lop u8 u8*/()))-((~((id_1469/*lop u8 u8*/())))))));
  return &(*v233);
} panic("reached function end without returning anything lop u8R ++ u8R x\n");}

u8* id_1545/*lop u8R -- u8R x*/(u8* v234) {{
  (id_1535/*op void -= u8R a u8 b*/(&(*v234), (((id_1469/*lop u8 u8*/()))-((~((id_1469/*lop u8 u8*/())))))));
  return &(*v234);
} panic("reached function end without returning anything lop u8R -- u8R x\n");}

u8 id_1546/*rop u8 ++ u8R x*/(u8* v235) {{
  u8 v236; /*t*/
  ((v236)=(*v235));
  (id_1534/*op void += u8R a u8 b*/(&(*v235), (((id_1469/*lop u8 u8*/()))-((~((id_1469/*lop u8 u8*/())))))));
  return (v236);
} panic("reached function end without returning anything rop u8 ++ u8R x\n");}

u8 id_1547/*rop u8 -- u8R x*/(u8* v237) {{
  u8 v238; /*t*/
  ((v238)=(*v237));
  (id_1535/*op void -= u8R a u8 b*/(&(*v237), (((id_1469/*lop u8 u8*/()))-((~((id_1469/*lop u8 u8*/())))))));
  return (v238);
} panic("reached function end without returning anything rop u8 -- u8R x\n");}

void id_1548/*op void += u16R a u16 b*/(u16* v240, u16 v241){
  ((*v240)=(((*v240))+((v241))));
}

void id_1549/*op void -= u16R a u16 b*/(u16* v242, u16 v243){
  ((*v242)=(((*v242))-((v243))));
}

void id_1550/*op void /= u16R a u16 b*/(u16* v244, u16 v245){
  ((*v244)=(((*v244))/((v245))));
}

void id_1551/*op void %= u16R a u16 b*/(u16* v246, u16 v247){
  ((*v246)=(((*v246))%((v247))));
}

void id_1552/*op void *= u16R a u16 b*/(u16* v248, u16 v249){
  ((*v248)=(((*v248))*((v249))));
}

void id_1553/*op void ^= u16R a u16 b*/(u16* v250, u16 v251){
  ((*v250)=(((*v250))^((v251))));
}

void id_1554/*op void &= u16R a u16 b*/(u16* v252, u16 v253){
  ((*v252)=(((*v252))&((v253))));
}

void id_1555/*op void |= u16R a u16 b*/(u16* v254, u16 v255){
  ((*v254)=(((*v254))|((v255))));
}

bool id_1556/*op bool %% u16 a u16 b*/(u16 v256, u16 v257) {{
  return (!((((v256))%((v257)))));
} panic("reached function end without returning anything op bool %% u16 a u16 b\n");}

bool id_1557/*op bool !% u16 a u16 b*/(u16 v258, u16 v259) {{
  return (!((id_1556/*op bool %% u16 a u16 b*/((v258), (v259)))));
} panic("reached function end without returning anything op bool !% u16 a u16 b\n");}

u16* id_1558/*lop u16R ++ u16R x*/(u16* v260) {{
  (id_1548/*op void += u16R a u16 b*/(&(*v260), (((id_1470/*lop u16 u16*/()))-((~((id_1470/*lop u16 u16*/())))))));
  return &(*v260);
} panic("reached function end without returning anything lop u16R ++ u16R x\n");}

u16* id_1559/*lop u16R -- u16R x*/(u16* v261) {{
  (id_1549/*op void -= u16R a u16 b*/(&(*v261), (((id_1470/*lop u16 u16*/()))-((~((id_1470/*lop u16 u16*/())))))));
  return &(*v261);
} panic("reached function end without returning anything lop u16R -- u16R x\n");}

u16 id_1560/*rop u16 ++ u16R x*/(u16* v262) {{
  u16 v263; /*t*/
  ((v263)=(*v262));
  (id_1548/*op void += u16R a u16 b*/(&(*v262), (((id_1470/*lop u16 u16*/()))-((~((id_1470/*lop u16 u16*/())))))));
  return (v263);
} panic("reached function end without returning anything rop u16 ++ u16R x\n");}

u16 id_1561/*rop u16 -- u16R x*/(u16* v264) {{
  u16 v265; /*t*/
  ((v265)=(*v264));
  (id_1549/*op void -= u16R a u16 b*/(&(*v264), (((id_1470/*lop u16 u16*/()))-((~((id_1470/*lop u16 u16*/())))))));
  return (v265);
} panic("reached function end without returning anything rop u16 -- u16R x\n");}

void id_1562/*op void += u32R a u32 b*/(u32* v267, u32 v268){
  ((*v267)=(((*v267))+((v268))));
}

void id_1563/*op void -= u32R a u32 b*/(u32* v269, u32 v270){
  ((*v269)=(((*v269))-((v270))));
}

void id_1564/*op void /= u32R a u32 b*/(u32* v271, u32 v272){
  ((*v271)=(((*v271))/((v272))));
}

void id_1565/*op void %= u32R a u32 b*/(u32* v273, u32 v274){
  ((*v273)=(((*v273))%((v274))));
}

void id_1566/*op void *= u32R a u32 b*/(u32* v275, u32 v276){
  ((*v275)=(((*v275))*((v276))));
}

void id_1567/*op void ^= u32R a u32 b*/(u32* v277, u32 v278){
  ((*v277)=(((*v277))^((v278))));
}

void id_1568/*op void &= u32R a u32 b*/(u32* v279, u32 v280){
  ((*v279)=(((*v279))&((v280))));
}

void id_1569/*op void |= u32R a u32 b*/(u32* v281, u32 v282){
  ((*v281)=(((*v281))|((v282))));
}

bool id_1570/*op bool %% u32 a u32 b*/(u32 v283, u32 v284) {{
  return (!((((v283))%((v284)))));
} panic("reached function end without returning anything op bool %% u32 a u32 b\n");}

bool id_1571/*op bool !% u32 a u32 b*/(u32 v285, u32 v286) {{
  return (!((id_1570/*op bool %% u32 a u32 b*/((v285), (v286)))));
} panic("reached function end without returning anything op bool !% u32 a u32 b\n");}

u32* id_1572/*lop u32R ++ u32R x*/(u32* v287) {{
  (id_1562/*op void += u32R a u32 b*/(&(*v287), (((id_1471/*lop u32 u32*/()))-((~((id_1471/*lop u32 u32*/())))))));
  return &(*v287);
} panic("reached function end without returning anything lop u32R ++ u32R x\n");}

u32* id_1573/*lop u32R -- u32R x*/(u32* v288) {{
  (id_1563/*op void -= u32R a u32 b*/(&(*v288), (((id_1471/*lop u32 u32*/()))-((~((id_1471/*lop u32 u32*/())))))));
  return &(*v288);
} panic("reached function end without returning anything lop u32R -- u32R x\n");}

u32 id_1574/*rop u32 ++ u32R x*/(u32* v289) {{
  u32 v290; /*t*/
  ((v290)=(*v289));
  (id_1562/*op void += u32R a u32 b*/(&(*v289), (((id_1471/*lop u32 u32*/()))-((~((id_1471/*lop u32 u32*/())))))));
  return (v290);
} panic("reached function end without returning anything rop u32 ++ u32R x\n");}

u32 id_1575/*rop u32 -- u32R x*/(u32* v291) {{
  u32 v292; /*t*/
  ((v292)=(*v291));
  (id_1563/*op void -= u32R a u32 b*/(&(*v291), (((id_1471/*lop u32 u32*/()))-((~((id_1471/*lop u32 u32*/())))))));
  return (v292);
} panic("reached function end without returning anything rop u32 -- u32R x\n");}

void id_1576/*op void += u64R a u64 b*/(u64* v294, u64 v295){
  ((*v294)=(((*v294))+((v295))));
}

void id_1577/*op void -= u64R a u64 b*/(u64* v296, u64 v297){
  ((*v296)=(((*v296))-((v297))));
}

void id_1578/*op void /= u64R a u64 b*/(u64* v298, u64 v299){
  ((*v298)=(((*v298))/((v299))));
}

void id_1579/*op void %= u64R a u64 b*/(u64* v300, u64 v301){
  ((*v300)=(((*v300))%((v301))));
}

void id_1580/*op void *= u64R a u64 b*/(u64* v302, u64 v303){
  ((*v302)=(((*v302))*((v303))));
}

void id_1581/*op void ^= u64R a u64 b*/(u64* v304, u64 v305){
  ((*v304)=(((*v304))^((v305))));
}

void id_1582/*op void &= u64R a u64 b*/(u64* v306, u64 v307){
  ((*v306)=(((*v306))&((v307))));
}

void id_1583/*op void |= u64R a u64 b*/(u64* v308, u64 v309){
  ((*v308)=(((*v308))|((v309))));
}

bool id_1584/*op bool %% u64 a u64 b*/(u64 v310, u64 v311) {{
  return (!((((v310))%((v311)))));
} panic("reached function end without returning anything op bool %% u64 a u64 b\n");}

bool id_1585/*op bool !% u64 a u64 b*/(u64 v312, u64 v313) {{
  return (!((id_1584/*op bool %% u64 a u64 b*/((v312), (v313)))));
} panic("reached function end without returning anything op bool !% u64 a u64 b\n");}

u64* id_1586/*lop u64R ++ u64R x*/(u64* v314) {{
  (id_1576/*op void += u64R a u64 b*/(&(*v314), (((id_1472/*lop u64 u64*/()))-((~((id_1472/*lop u64 u64*/())))))));
  return &(*v314);
} panic("reached function end without returning anything lop u64R ++ u64R x\n");}

u64* id_1587/*lop u64R -- u64R x*/(u64* v315) {{
  (id_1577/*op void -= u64R a u64 b*/(&(*v315), (((id_1472/*lop u64 u64*/()))-((~((id_1472/*lop u64 u64*/())))))));
  return &(*v315);
} panic("reached function end without returning anything lop u64R -- u64R x\n");}

u64 id_1588/*rop u64 ++ u64R x*/(u64* v316) {{
  u64 v317; /*t*/
  ((v317)=(*v316));
  (id_1576/*op void += u64R a u64 b*/(&(*v316), (((id_1472/*lop u64 u64*/()))-((~((id_1472/*lop u64 u64*/())))))));
  return (v317);
} panic("reached function end without returning anything rop u64 ++ u64R x\n");}

u64 id_1589/*rop u64 -- u64R x*/(u64* v318) {{
  u64 v319; /*t*/
  ((v319)=(*v318));
  (id_1577/*op void -= u64R a u64 b*/(&(*v318), (((id_1472/*lop u64 u64*/()))-((~((id_1472/*lop u64 u64*/())))))));
  return (v319);
} panic("reached function end without returning anything rop u64 -- u64R x\n");}

void id_1590/*op void += charR a char b*/(char* v321, char v322){
  ((*v321)=(((*v321))+((v322))));
}

void id_1591/*op void -= charR a char b*/(char* v323, char v324){
  ((*v323)=(((*v323))-((v324))));
}

void id_1592/*op void /= charR a char b*/(char* v325, char v326){
  ((*v325)=(((*v325))/((v326))));
}

void id_1593/*op void %= charR a char b*/(char* v327, char v328){
  ((*v327)=(((*v327))%((v328))));
}

void id_1594/*op void *= charR a char b*/(char* v329, char v330){
  ((*v329)=(((*v329))*((v330))));
}

void id_1595/*op void ^= charR a char b*/(char* v331, char v332){
  ((*v331)=(((*v331))^((v332))));
}

void id_1596/*op void &= charR a char b*/(char* v333, char v334){
  ((*v333)=(((*v333))&((v334))));
}

void id_1597/*op void |= charR a char b*/(char* v335, char v336){
  ((*v335)=(((*v335))|((v336))));
}

bool id_1598/*op bool %% char a char b*/(char v337, char v338) {{
  return (!((((v337))%((v338)))));
} panic("reached function end without returning anything op bool %% char a char b\n");}

bool id_1599/*op bool !% char a char b*/(char v339, char v340) {{
  return (!((id_1598/*op bool %% char a char b*/((v339), (v340)))));
} panic("reached function end without returning anything op bool !% char a char b\n");}

char* id_1600/*lop charR ++ charR x*/(char* v341) {{
  (id_1590/*op void += charR a char b*/(&(*v341), (((id_1474/*lop char char*/()))-((~((id_1474/*lop char char*/())))))));
  return &(*v341);
} panic("reached function end without returning anything lop charR ++ charR x\n");}

char* id_1601/*lop charR -- charR x*/(char* v342) {{
  (id_1591/*op void -= charR a char b*/(&(*v342), (((id_1474/*lop char char*/()))-((~((id_1474/*lop char char*/())))))));
  return &(*v342);
} panic("reached function end without returning anything lop charR -- charR x\n");}

char id_1602/*rop char ++ charR x*/(char* v343) {{
  char v344; /*t*/
  ((v344)=(*v343));
  (id_1590/*op void += charR a char b*/(&(*v343), (((id_1474/*lop char char*/()))-((~((id_1474/*lop char char*/())))))));
  return (v344);
} panic("reached function end without returning anything rop char ++ charR x\n");}

char id_1603/*rop char -- charR x*/(char* v345) {{
  char v346; /*t*/
  ((v346)=(*v345));
  (id_1591/*op void -= charR a char b*/(&(*v345), (((id_1474/*lop char char*/()))-((~((id_1474/*lop char char*/())))))));
  return (v346);
} panic("reached function end without returning anything rop char -- charR x\n");}

void id_1604/*op void += f32R a f32 b*/(f32* v348, f32 v349){
  ((*v348)=(((*v348))+((v349))));
}

void id_1605/*op void -= f32R a f32 b*/(f32* v350, f32 v351){
  ((*v350)=(((*v350))-((v351))));
}

void id_1606/*op void /= f32R a f32 b*/(f32* v352, f32 v353){
  ((*v352)=(((*v352))/((v353))));
}

void id_1607/*op void *= f32R a f32 b*/(f32* v354, f32 v355){
  ((*v354)=(((*v354))*((v355))));
}

void id_1608/*op void += f64R a f64 b*/(f64* v356, f64 v357){
  ((*v356)=(((*v356))+((v357))));
}

void id_1609/*op void -= f64R a f64 b*/(f64* v358, f64 v359){
  ((*v358)=(((*v358))-((v359))));
}

void id_1610/*op void /= f64R a f64 b*/(f64* v360, f64 v361){
  ((*v360)=(((*v360))/((v361))));
}

void id_1611/*op void *= f64R a f64 b*/(f64* v362, f64 v363){
  ((*v362)=(((*v362))*((v363))));
}

bool id_1612/*op bool < bool a bool b*/(bool v364, bool v365) {{
  return (((!((v364))))&&((v365)));
} panic("reached function end without returning anything op bool < bool a bool b\n");}

i64 id_1613/*op i64 ** i64 a i64 n*/(i64 v366, i64 v367) {{
  i64 v368; /*res*/
  ((v368)=((i64)1));
  while ((((v367))!=(((i64)0)))) {
    if ((id_1529/*op bool !% i64 a i64 b*/((v367), ((i64)2)))) {
      (id_1524/*op void *= i64R a i64 b*/(&(v368), (v366)));
    }
    (id_1524/*op void *= i64R a i64 b*/(&(v366), (v366)));
    (id_1522/*op void /= i64R a i64 b*/(&(v367), ((i64)2)));
  }
  return (v368);
} panic("reached function end without returning anything op i64 ** i64 a i64 n\n");}

id_1424/*Out*/ id_1614/*lop Out Out*/() {{
  id_1424/*Out*/ v369; /*o*/
  return (v369);
} panic("reached function end without returning anything lop Out Out\n");}

id_1424/*Out*/ id_1615/*op Out < Out a Out b*/(id_1424/*Out*/ v370, id_1424/*Out*/ v371) {{
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out a Out b\n");}

id_1424/*Out*/ id_1616/*lop Out < Out o*/(id_1424/*Out*/ v372) {{
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Out o\n");}

id_1424/*Out*/ id_1617/*rop Out < str i*/(str v373) {{
  (printf("%s\n", (v373)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < str i\n");}

id_1424/*Out*/ id_1618/*lop Out < str i*/(str v374) {{
  ((printf("%s", (v374))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < str i\n");}

id_1424/*Out*/ id_1619/*op Out < Out o str i*/(id_1424/*Out*/ v375, str v376) {{
  ((printf("%s", (v376))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o str i\n");}

id_1424/*Out*/ id_1620/*lop Out > strR i*/(str* v377) {{
  ((*v377)=(in_str()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > strR i\n");}

id_1424/*Out*/ id_1621/*op Out > Out o strR i*/(id_1424/*Out*/ v378, str* v379) {{
  ((*v379)=(in_str()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o strR i\n");}

id_1424/*Out*/ id_1622/*rop Out < char i*/(char v380) {{
  (printf("%c\n", (v380)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < char i\n");}

id_1424/*Out*/ id_1623/*lop Out < char i*/(char v381) {{
  ((printf("%c", (v381))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < char i\n");}

id_1424/*Out*/ id_1624/*op Out < Out o char i*/(id_1424/*Out*/ v382, char v383) {{
  ((printf("%c", (v383))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o char i\n");}

id_1424/*Out*/ id_1625/*lop Out > charR i*/(char* v384) {{
  ((*v384)=(in_char()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > charR i\n");}

id_1424/*Out*/ id_1626/*op Out > Out o charR i*/(id_1424/*Out*/ v385, char* v386) {{
  ((*v386)=(in_char()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o charR i\n");}

id_1424/*Out*/ id_1627/*rop Out < i8 i*/(i8 v387) {{
  (printf("%d\n", (v387)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i8 i\n");}

id_1424/*Out*/ id_1628/*lop Out < i8 i*/(i8 v388) {{
  ((printf("%d", (v388))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i8 i\n");}

id_1424/*Out*/ id_1629/*op Out < Out o i8 i*/(id_1424/*Out*/ v389, i8 v390) {{
  ((printf("%d", (v390))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i8 i\n");}

id_1424/*Out*/ id_1630/*lop Out > i8R i*/(i8* v391) {{
  ((*v391)=(in_i8()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i8R i\n");}

id_1424/*Out*/ id_1631/*op Out > Out o i8R i*/(id_1424/*Out*/ v392, i8* v393) {{
  ((*v393)=(in_i8()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i8R i\n");}

id_1424/*Out*/ id_1632/*rop Out < i16 i*/(i16 v394) {{
  (printf("%hd\n", (v394)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i16 i\n");}

id_1424/*Out*/ id_1633/*lop Out < i16 i*/(i16 v395) {{
  ((printf("%hd", (v395))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i16 i\n");}

id_1424/*Out*/ id_1634/*op Out < Out o i16 i*/(id_1424/*Out*/ v396, i16 v397) {{
  ((printf("%hd", (v397))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i16 i\n");}

id_1424/*Out*/ id_1635/*lop Out > i16R i*/(i16* v398) {{
  ((*v398)=(in_i16()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i16R i\n");}

id_1424/*Out*/ id_1636/*op Out > Out o i16R i*/(id_1424/*Out*/ v399, i16* v400) {{
  ((*v400)=(in_i16()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i16R i\n");}

id_1424/*Out*/ id_1637/*rop Out < i32 i*/(i32 v401) {{
  (printf("%d\n", (v401)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i32 i\n");}

id_1424/*Out*/ id_1638/*lop Out < i32 i*/(i32 v402) {{
  ((printf("%d", (v402))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i32 i\n");}

id_1424/*Out*/ id_1639/*op Out < Out o i32 i*/(id_1424/*Out*/ v403, i32 v404) {{
  ((printf("%d", (v404))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i32 i\n");}

id_1424/*Out*/ id_1640/*lop Out > i32R i*/(i32* v405) {{
  ((*v405)=(in_i32()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i32R i\n");}

id_1424/*Out*/ id_1641/*op Out > Out o i32R i*/(id_1424/*Out*/ v406, i32* v407) {{
  ((*v407)=(in_i32()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i32R i\n");}

id_1424/*Out*/ id_1642/*rop Out < i64 i*/(i64 v408) {{
  (printf("%lld\n", (v408)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < i64 i\n");}

id_1424/*Out*/ id_1643/*lop Out < i64 i*/(i64 v409) {{
  ((printf("%lld", (v409))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < i64 i\n");}

id_1424/*Out*/ id_1644/*op Out < Out o i64 i*/(id_1424/*Out*/ v410, i64 v411) {{
  ((printf("%lld", (v411))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o i64 i\n");}

id_1424/*Out*/ id_1645/*lop Out > i64R i*/(i64* v412) {{
  ((*v412)=(in_i64()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > i64R i\n");}

id_1424/*Out*/ id_1646/*op Out > Out o i64R i*/(id_1424/*Out*/ v413, i64* v414) {{
  ((*v414)=(in_i64()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o i64R i\n");}

id_1424/*Out*/ id_1647/*rop Out < u8 i*/(u8 v415) {{
  (printf("%d\n", (v415)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u8 i\n");}

id_1424/*Out*/ id_1648/*lop Out < u8 i*/(u8 v416) {{
  ((printf("%d", (v416))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u8 i\n");}

id_1424/*Out*/ id_1649/*op Out < Out o u8 i*/(id_1424/*Out*/ v417, u8 v418) {{
  ((printf("%d", (v418))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u8 i\n");}

id_1424/*Out*/ id_1650/*lop Out > u8R i*/(u8* v419) {{
  ((*v419)=(in_u8()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u8R i\n");}

id_1424/*Out*/ id_1651/*op Out > Out o u8R i*/(id_1424/*Out*/ v420, u8* v421) {{
  ((*v421)=(in_u8()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u8R i\n");}

id_1424/*Out*/ id_1652/*rop Out < u16 i*/(u16 v422) {{
  (printf("%hd\n", (v422)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u16 i\n");}

id_1424/*Out*/ id_1653/*lop Out < u16 i*/(u16 v423) {{
  ((printf("%hd", (v423))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u16 i\n");}

id_1424/*Out*/ id_1654/*op Out < Out o u16 i*/(id_1424/*Out*/ v424, u16 v425) {{
  ((printf("%hd", (v425))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u16 i\n");}

id_1424/*Out*/ id_1655/*lop Out > u16R i*/(u16* v426) {{
  ((*v426)=(in_u16()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u16R i\n");}

id_1424/*Out*/ id_1656/*op Out > Out o u16R i*/(id_1424/*Out*/ v427, u16* v428) {{
  ((*v428)=(in_u16()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u16R i\n");}

id_1424/*Out*/ id_1657/*rop Out < u32 i*/(u32 v429) {{
  (printf("%u\n", (v429)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u32 i\n");}

id_1424/*Out*/ id_1658/*lop Out < u32 i*/(u32 v430) {{
  ((printf("%u", (v430))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u32 i\n");}

id_1424/*Out*/ id_1659/*op Out < Out o u32 i*/(id_1424/*Out*/ v431, u32 v432) {{
  ((printf("%u", (v432))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u32 i\n");}

id_1424/*Out*/ id_1660/*lop Out > u32R i*/(u32* v433) {{
  ((*v433)=(in_u32()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u32R i\n");}

id_1424/*Out*/ id_1661/*op Out > Out o u32R i*/(id_1424/*Out*/ v434, u32* v435) {{
  ((*v435)=(in_u32()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u32R i\n");}

id_1424/*Out*/ id_1662/*rop Out < u64 i*/(u64 v436) {{
  (printf("%llu\n", (v436)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < u64 i\n");}

id_1424/*Out*/ id_1663/*lop Out < u64 i*/(u64 v437) {{
  ((printf("%llu", (v437))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < u64 i\n");}

id_1424/*Out*/ id_1664/*op Out < Out o u64 i*/(id_1424/*Out*/ v438, u64 v439) {{
  ((printf("%llu", (v439))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o u64 i\n");}

id_1424/*Out*/ id_1665/*lop Out > u64R i*/(u64* v440) {{
  ((*v440)=(in_u64()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > u64R i\n");}

id_1424/*Out*/ id_1666/*op Out > Out o u64R i*/(id_1424/*Out*/ v441, u64* v442) {{
  ((*v442)=(in_u64()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o u64R i\n");}

id_1424/*Out*/ id_1667/*rop Out < f32 i*/(f32 v443) {{
  (printf("%f\n", (v443)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < f32 i\n");}

id_1424/*Out*/ id_1668/*lop Out < f32 i*/(f32 v444) {{
  ((printf("%f", (v444))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < f32 i\n");}

id_1424/*Out*/ id_1669/*op Out < Out o f32 i*/(id_1424/*Out*/ v445, f32 v446) {{
  ((printf("%f", (v446))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o f32 i\n");}

id_1424/*Out*/ id_1670/*lop Out > f32R i*/(f32* v447) {{
  ((*v447)=(in_f32()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > f32R i\n");}

id_1424/*Out*/ id_1671/*op Out > Out o f32R i*/(id_1424/*Out*/ v448, f32* v449) {{
  ((*v449)=(in_f32()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o f32R i\n");}

id_1424/*Out*/ id_1672/*rop Out < f64 i*/(f64 v450) {{
  (printf("%f\n", (v450)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < f64 i\n");}

id_1424/*Out*/ id_1673/*lop Out < f64 i*/(f64 v451) {{
  ((printf("%f", (v451))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < f64 i\n");}

id_1424/*Out*/ id_1674/*op Out < Out o f64 i*/(id_1424/*Out*/ v452, f64 v453) {{
  ((printf("%f", (v453))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o f64 i\n");}

id_1424/*Out*/ id_1675/*lop Out > f64R i*/(f64* v454) {{
  ((*v454)=(in_f64()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out > f64R i\n");}

id_1424/*Out*/ id_1676/*op Out > Out o f64R i*/(id_1424/*Out*/ v455, f64* v456) {{
  ((*v456)=(in_f64()));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out > Out o f64R i\n");}

void id_1677/*lop void rangeMaker*/(){
  id_1436/*RangeIterRange<i64>*/ v690; /*d1*/
  id_1433/*RangeIterRange<i32>*/ v689; /*c1*/
  id_1430/*RangeIterRange<i16>*/ v688; /*b1*/
  id_1427/*RangeIterRange<i8>*/ v687; /*a1*/
  id_1437/*Range<char>*/ v686; /*e*/
  id_1431/*Range<i32>*/ v594; /*c*/
  id_1439/*RangeIterRange<char>*/ v691; /*e1*/
  id_1428/*Range<i16>*/ v548; /*b*/
  id_1434/*Range<i64>*/ v640; /*d*/
  id_1425/*Range<i8>*/ v502; /*a*/
}

id_1426/*RangeIter<i8>*/ id_1678/*lop RangeIter<i8> RangeIter<i8> i8 val*/(i8 v490) {{
  id_1426/*RangeIter<i8>*/ v491; /*slf*/
  (((&(v491))->id_1456/*val*/)=(v490));
  return (v491);
} panic("reached function end without returning anything lop RangeIter<i8> RangeIter<i8> i8 val\n");}

void id_1679/*lop void ++ RangeIter<i8>R slf*/(id_1426/*RangeIter<i8>*/* v492){
  (*id_1488/*lop i8R ++ i8R x*/(&((&(*v492))->id_1456/*val*/)));
}

i8 id_1680/*lop i8 * RangeIter<i8> slf*/(id_1426/*RangeIter<i8>*/ v493) {{
  return ((&(v493))->id_1456/*val*/);
} panic("reached function end without returning anything lop i8 * RangeIter<i8> slf\n");}

bool id_1681/*op bool != RangeIter<i8> a RangeIter<i8> b*/(id_1426/*RangeIter<i8>*/ v494, id_1426/*RangeIter<i8>*/ v495) {{
  return ((((&(v494))->id_1456/*val*/))!=(((&(v495))->id_1456/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i8> a RangeIter<i8> b\n");}

id_1426/*RangeIter<i8>*/ id_1682/*op RangeIter<i8> .call.begin RangeIterRange<i8>P slf*/(id_1427/*RangeIterRange<i8>*/* v496) {{
  return (((v496))->id_1454/*begin*/);
} panic("reached function end without returning anything op RangeIter<i8> .call.begin RangeIterRange<i8>P slf\n");}

id_1426/*RangeIter<i8>*/ id_1683/*op RangeIter<i8> .call.end RangeIterRange<i8>P slf*/(id_1427/*RangeIterRange<i8>*/* v497) {{
  return (((v497))->id_1455/*end*/);
} panic("reached function end without returning anything op RangeIter<i8> .call.end RangeIterRange<i8>P slf\n");}

id_1427/*RangeIterRange<i8>*/ id_1684/*lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end*/(id_1426/*RangeIter<i8>*/ v498, id_1426/*RangeIter<i8>*/ v499) {{
  id_1427/*RangeIterRange<i8>*/ v500; /*slf*/
  (((&(v500))->id_1454/*begin*/)=(v498));
  (((&(v500))->id_1455/*end*/)=(v499));
  return (v500);
} panic("reached function end without returning anything lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end\n");}

i8 id_1685/*op i8 .call.begin Range<i8>P slf*/(id_1425/*Range<i8>*/* v457) {{
  return (((v457))->id_1454/*begin*/);
} panic("reached function end without returning anything op i8 .call.begin Range<i8>P slf\n");}

i8 id_1686/*op i8 .call.end Range<i8>P slf*/(id_1425/*Range<i8>*/* v458) {{
  return (((v458))->id_1455/*end*/);
} panic("reached function end without returning anything op i8 .call.end Range<i8>P slf\n");}

id_1425/*Range<i8>*/ id_1687/*lop Range<i8> Range<i8> i8 begin i8 end*/(i8 v459, i8 v460) {{
  id_1425/*Range<i8>*/ v461; /*slf*/
  (((&(v461))->id_1454/*begin*/)=(v459));
  (((&(v461))->id_1455/*end*/)=(v460));
  return (v461);
} panic("reached function end without returning anything lop Range<i8> Range<i8> i8 begin i8 end\n");}

id_1425/*Range<i8>*/ id_1688/*op Range<i8> .. i8 begin i8 end*/(i8 v462, i8 v463) {{
  return (id_1687/*lop Range<i8> Range<i8> i8 begin i8 end*/((v462), (v463)));
} panic("reached function end without returning anything op Range<i8> .. i8 begin i8 end\n");}

id_1425/*Range<i8>*/ id_1689/*op Range<i8> ..- i8 begin i8 end*/(i8 v464, i8 v465) {{
  return (id_1688/*op Range<i8> .. i8 begin i8 end*/((v464), (-((v465)))));
} panic("reached function end without returning anything op Range<i8> ..- i8 begin i8 end\n");}

id_1425/*Range<i8>*/ id_1690/*rop Range<i8> .. i8 begin*/(i8 v466) {{
  return (id_1688/*op Range<i8> .. i8 begin i8 end*/((v466), (~((id_1465/*lop i8 i8*/())))));
} panic("reached function end without returning anything rop Range<i8> .. i8 begin\n");}

id_1425/*Range<i8>*/ id_1691/*lop Range<i8> .. i8 end*/(i8 v467) {{
  i8 v469; /*tmp_rval_468*/
  return (id_1688/*op Range<i8> .. i8 begin i8 end*/((*id_1488/*lop i8R ++ i8R x*/(&(*(((v469)=(~((id_1465/*lop i8 i8*/())))), (&(v469)))))), (v467)));
} panic("reached function end without returning anything lop Range<i8> .. i8 end\n");}

id_1425/*Range<i8>*/ id_1692/*lop Range<i8> ..- i8 end*/(i8 v470) {{
  i8 v472; /*tmp_rval_471*/
  return (id_1688/*op Range<i8> .. i8 begin i8 end*/((*id_1488/*lop i8R ++ i8R x*/(&(*(((v472)=(~((id_1465/*lop i8 i8*/())))), (&(v472)))))), (-((v470)))));
} panic("reached function end without returning anything lop Range<i8> ..- i8 end\n");}

id_1425/*Range<i8>*/ id_1693/*lop Range<i8> - Range<i8> r*/(id_1425/*Range<i8>*/ v473) {{
  return (id_1688/*op Range<i8> .. i8 begin i8 end*/((-(((&(v473))->id_1454/*begin*/))), ((&(v473))->id_1455/*end*/)));
} panic("reached function end without returning anything lop Range<i8> - Range<i8> r\n");}

id_1425/*Range<i8>*/ id_1694/*op Range<i8> ..= i8 begin i8 end*/(i8 v474, i8 v475) {{
  i8 v477; /*tmp_rval_476*/
  return (id_1688/*op Range<i8> .. i8 begin i8 end*/((v474), (((v475))+((*id_1488/*lop i8R ++ i8R x*/(&(*(((v477)=(id_1465/*lop i8 i8*/())), (&(v477))))))))));
} panic("reached function end without returning anything op Range<i8> ..= i8 begin i8 end\n");}

id_1425/*Range<i8>*/ id_1695/*lop Range<i8> ..= i8 end*/(i8 v478) {{
  i8 v482; /*tmp_rval_481*/
  i8 v480; /*tmp_rval_479*/
  return (id_1688/*op Range<i8> .. i8 begin i8 end*/((*id_1488/*lop i8R ++ i8R x*/(&(*(((v480)=(~((id_1465/*lop i8 i8*/())))), (&(v480)))))), (((v478))+((*id_1488/*lop i8R ++ i8R x*/(&(*(((v482)=(~((id_1465/*lop i8 i8*/())))), (&(v482))))))))));
} panic("reached function end without returning anything lop Range<i8> ..= i8 end\n");}

id_1425/*Range<i8>*/ id_1696/*lop Range<i8> ..=- i8 end*/(i8 v483) {{
  i8 v487; /*tmp_rval_486*/
  i8 v485; /*tmp_rval_484*/
  return (id_1688/*op Range<i8> .. i8 begin i8 end*/((*id_1488/*lop i8R ++ i8R x*/(&(*(((v485)=(~((id_1465/*lop i8 i8*/())))), (&(v485)))))), (((-((v483))))+((*id_1488/*lop i8R ++ i8R x*/(&(*(((v487)=(~((id_1465/*lop i8 i8*/())))), (&(v487))))))))));
} panic("reached function end without returning anything lop Range<i8> ..=- i8 end\n");}

bool id_1697/*op bool == i8 i Range<i8> r*/(i8 v488, id_1425/*Range<i8>*/ v489) {{
  if (((((&(v489))->id_1454/*begin*/))<(((&(v489))->id_1455/*end*/)))) {
    return ((((((&(v489))->id_1454/*begin*/))<=((v488))))&&((((v488))<(((&(v489))->id_1455/*end*/)))));
  } else {
    return ((((((&(v489))->id_1455/*end*/))<=((v488))))&&((((v488))<(((&(v489))->id_1454/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i8 i Range<i8> r\n");}

id_1427/*RangeIterRange<i8>*/ id_1698/*lop RangeIterRange<i8> iter Range<i8> r*/(id_1425/*Range<i8>*/ v501) {{
  return (id_1684/*lop RangeIterRange<i8> RangeIterRange<i8> RangeIter<i8> begin RangeIter<i8> end*/((id_1678/*lop RangeIter<i8> RangeIter<i8> i8 val*/(((&(v501))->id_1454/*begin*/))), (id_1678/*lop RangeIter<i8> RangeIter<i8> i8 val*/(((&(v501))->id_1455/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i8> iter Range<i8> r\n");}

id_1429/*RangeIter<i16>*/ id_1699/*lop RangeIter<i16> RangeIter<i16> i16 val*/(i16 v536) {{
  id_1429/*RangeIter<i16>*/ v537; /*slf*/
  (((&(v537))->id_1456/*val*/)=(v536));
  return (v537);
} panic("reached function end without returning anything lop RangeIter<i16> RangeIter<i16> i16 val\n");}

void id_1700/*lop void ++ RangeIter<i16>R slf*/(id_1429/*RangeIter<i16>*/* v538){
  (*id_1502/*lop i16R ++ i16R x*/(&((&(*v538))->id_1456/*val*/)));
}

i16 id_1701/*lop i16 * RangeIter<i16> slf*/(id_1429/*RangeIter<i16>*/ v539) {{
  return ((&(v539))->id_1456/*val*/);
} panic("reached function end without returning anything lop i16 * RangeIter<i16> slf\n");}

bool id_1702/*op bool != RangeIter<i16> a RangeIter<i16> b*/(id_1429/*RangeIter<i16>*/ v540, id_1429/*RangeIter<i16>*/ v541) {{
  return ((((&(v540))->id_1456/*val*/))!=(((&(v541))->id_1456/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i16> a RangeIter<i16> b\n");}

id_1429/*RangeIter<i16>*/ id_1703/*op RangeIter<i16> .call.begin RangeIterRange<i16>P slf*/(id_1430/*RangeIterRange<i16>*/* v542) {{
  return (((v542))->id_1454/*begin*/);
} panic("reached function end without returning anything op RangeIter<i16> .call.begin RangeIterRange<i16>P slf\n");}

id_1429/*RangeIter<i16>*/ id_1704/*op RangeIter<i16> .call.end RangeIterRange<i16>P slf*/(id_1430/*RangeIterRange<i16>*/* v543) {{
  return (((v543))->id_1455/*end*/);
} panic("reached function end without returning anything op RangeIter<i16> .call.end RangeIterRange<i16>P slf\n");}

id_1430/*RangeIterRange<i16>*/ id_1705/*lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end*/(id_1429/*RangeIter<i16>*/ v544, id_1429/*RangeIter<i16>*/ v545) {{
  id_1430/*RangeIterRange<i16>*/ v546; /*slf*/
  (((&(v546))->id_1454/*begin*/)=(v544));
  (((&(v546))->id_1455/*end*/)=(v545));
  return (v546);
} panic("reached function end without returning anything lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end\n");}

i16 id_1706/*op i16 .call.begin Range<i16>P slf*/(id_1428/*Range<i16>*/* v503) {{
  return (((v503))->id_1454/*begin*/);
} panic("reached function end without returning anything op i16 .call.begin Range<i16>P slf\n");}

i16 id_1707/*op i16 .call.end Range<i16>P slf*/(id_1428/*Range<i16>*/* v504) {{
  return (((v504))->id_1455/*end*/);
} panic("reached function end without returning anything op i16 .call.end Range<i16>P slf\n");}

id_1428/*Range<i16>*/ id_1708/*lop Range<i16> Range<i16> i16 begin i16 end*/(i16 v505, i16 v506) {{
  id_1428/*Range<i16>*/ v507; /*slf*/
  (((&(v507))->id_1454/*begin*/)=(v505));
  (((&(v507))->id_1455/*end*/)=(v506));
  return (v507);
} panic("reached function end without returning anything lop Range<i16> Range<i16> i16 begin i16 end\n");}

id_1428/*Range<i16>*/ id_1709/*op Range<i16> .. i16 begin i16 end*/(i16 v508, i16 v509) {{
  return (id_1708/*lop Range<i16> Range<i16> i16 begin i16 end*/((v508), (v509)));
} panic("reached function end without returning anything op Range<i16> .. i16 begin i16 end\n");}

id_1428/*Range<i16>*/ id_1710/*op Range<i16> ..- i16 begin i16 end*/(i16 v510, i16 v511) {{
  return (id_1709/*op Range<i16> .. i16 begin i16 end*/((v510), (-((v511)))));
} panic("reached function end without returning anything op Range<i16> ..- i16 begin i16 end\n");}

id_1428/*Range<i16>*/ id_1711/*rop Range<i16> .. i16 begin*/(i16 v512) {{
  return (id_1709/*op Range<i16> .. i16 begin i16 end*/((v512), (~((id_1466/*lop i16 i16*/())))));
} panic("reached function end without returning anything rop Range<i16> .. i16 begin\n");}

id_1428/*Range<i16>*/ id_1712/*lop Range<i16> .. i16 end*/(i16 v513) {{
  i16 v515; /*tmp_rval_514*/
  return (id_1709/*op Range<i16> .. i16 begin i16 end*/((*id_1502/*lop i16R ++ i16R x*/(&(*(((v515)=(~((id_1466/*lop i16 i16*/())))), (&(v515)))))), (v513)));
} panic("reached function end without returning anything lop Range<i16> .. i16 end\n");}

id_1428/*Range<i16>*/ id_1713/*lop Range<i16> ..- i16 end*/(i16 v516) {{
  i16 v518; /*tmp_rval_517*/
  return (id_1709/*op Range<i16> .. i16 begin i16 end*/((*id_1502/*lop i16R ++ i16R x*/(&(*(((v518)=(~((id_1466/*lop i16 i16*/())))), (&(v518)))))), (-((v516)))));
} panic("reached function end without returning anything lop Range<i16> ..- i16 end\n");}

id_1428/*Range<i16>*/ id_1714/*lop Range<i16> - Range<i16> r*/(id_1428/*Range<i16>*/ v519) {{
  return (id_1709/*op Range<i16> .. i16 begin i16 end*/((-(((&(v519))->id_1454/*begin*/))), ((&(v519))->id_1455/*end*/)));
} panic("reached function end without returning anything lop Range<i16> - Range<i16> r\n");}

id_1428/*Range<i16>*/ id_1715/*op Range<i16> ..= i16 begin i16 end*/(i16 v520, i16 v521) {{
  i16 v523; /*tmp_rval_522*/
  return (id_1709/*op Range<i16> .. i16 begin i16 end*/((v520), (((v521))+((*id_1502/*lop i16R ++ i16R x*/(&(*(((v523)=(id_1466/*lop i16 i16*/())), (&(v523))))))))));
} panic("reached function end without returning anything op Range<i16> ..= i16 begin i16 end\n");}

id_1428/*Range<i16>*/ id_1716/*lop Range<i16> ..= i16 end*/(i16 v524) {{
  i16 v528; /*tmp_rval_527*/
  i16 v526; /*tmp_rval_525*/
  return (id_1709/*op Range<i16> .. i16 begin i16 end*/((*id_1502/*lop i16R ++ i16R x*/(&(*(((v526)=(~((id_1466/*lop i16 i16*/())))), (&(v526)))))), (((v524))+((*id_1502/*lop i16R ++ i16R x*/(&(*(((v528)=(~((id_1466/*lop i16 i16*/())))), (&(v528))))))))));
} panic("reached function end without returning anything lop Range<i16> ..= i16 end\n");}

id_1428/*Range<i16>*/ id_1717/*lop Range<i16> ..=- i16 end*/(i16 v529) {{
  i16 v533; /*tmp_rval_532*/
  i16 v531; /*tmp_rval_530*/
  return (id_1709/*op Range<i16> .. i16 begin i16 end*/((*id_1502/*lop i16R ++ i16R x*/(&(*(((v531)=(~((id_1466/*lop i16 i16*/())))), (&(v531)))))), (((-((v529))))+((*id_1502/*lop i16R ++ i16R x*/(&(*(((v533)=(~((id_1466/*lop i16 i16*/())))), (&(v533))))))))));
} panic("reached function end without returning anything lop Range<i16> ..=- i16 end\n");}

bool id_1718/*op bool == i16 i Range<i16> r*/(i16 v534, id_1428/*Range<i16>*/ v535) {{
  if (((((&(v535))->id_1454/*begin*/))<(((&(v535))->id_1455/*end*/)))) {
    return ((((((&(v535))->id_1454/*begin*/))<=((v534))))&&((((v534))<(((&(v535))->id_1455/*end*/)))));
  } else {
    return ((((((&(v535))->id_1455/*end*/))<=((v534))))&&((((v534))<(((&(v535))->id_1454/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i16 i Range<i16> r\n");}

id_1430/*RangeIterRange<i16>*/ id_1719/*lop RangeIterRange<i16> iter Range<i16> r*/(id_1428/*Range<i16>*/ v547) {{
  return (id_1705/*lop RangeIterRange<i16> RangeIterRange<i16> RangeIter<i16> begin RangeIter<i16> end*/((id_1699/*lop RangeIter<i16> RangeIter<i16> i16 val*/(((&(v547))->id_1454/*begin*/))), (id_1699/*lop RangeIter<i16> RangeIter<i16> i16 val*/(((&(v547))->id_1455/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i16> iter Range<i16> r\n");}

id_1432/*RangeIter<i32>*/ id_1720/*lop RangeIter<i32> RangeIter<i32> i32 val*/(i32 v582) {{
  id_1432/*RangeIter<i32>*/ v583; /*slf*/
  (((&(v583))->id_1456/*val*/)=(v582));
  return (v583);
} panic("reached function end without returning anything lop RangeIter<i32> RangeIter<i32> i32 val\n");}

void id_1721/*lop void ++ RangeIter<i32>R slf*/(id_1432/*RangeIter<i32>*/* v584){
  (*id_1516/*lop i32R ++ i32R x*/(&((&(*v584))->id_1456/*val*/)));
}

i32 id_1722/*lop i32 * RangeIter<i32> slf*/(id_1432/*RangeIter<i32>*/ v585) {{
  return ((&(v585))->id_1456/*val*/);
} panic("reached function end without returning anything lop i32 * RangeIter<i32> slf\n");}

bool id_1723/*op bool != RangeIter<i32> a RangeIter<i32> b*/(id_1432/*RangeIter<i32>*/ v586, id_1432/*RangeIter<i32>*/ v587) {{
  return ((((&(v586))->id_1456/*val*/))!=(((&(v587))->id_1456/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i32> a RangeIter<i32> b\n");}

id_1432/*RangeIter<i32>*/ id_1724/*op RangeIter<i32> .call.begin RangeIterRange<i32>P slf*/(id_1433/*RangeIterRange<i32>*/* v588) {{
  return (((v588))->id_1454/*begin*/);
} panic("reached function end without returning anything op RangeIter<i32> .call.begin RangeIterRange<i32>P slf\n");}

id_1432/*RangeIter<i32>*/ id_1725/*op RangeIter<i32> .call.end RangeIterRange<i32>P slf*/(id_1433/*RangeIterRange<i32>*/* v589) {{
  return (((v589))->id_1455/*end*/);
} panic("reached function end without returning anything op RangeIter<i32> .call.end RangeIterRange<i32>P slf\n");}

id_1433/*RangeIterRange<i32>*/ id_1726/*lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end*/(id_1432/*RangeIter<i32>*/ v590, id_1432/*RangeIter<i32>*/ v591) {{
  id_1433/*RangeIterRange<i32>*/ v592; /*slf*/
  (((&(v592))->id_1454/*begin*/)=(v590));
  (((&(v592))->id_1455/*end*/)=(v591));
  return (v592);
} panic("reached function end without returning anything lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end\n");}

i32 id_1727/*op i32 .call.begin Range<i32>P slf*/(id_1431/*Range<i32>*/* v549) {{
  return (((v549))->id_1454/*begin*/);
} panic("reached function end without returning anything op i32 .call.begin Range<i32>P slf\n");}

i32 id_1728/*op i32 .call.end Range<i32>P slf*/(id_1431/*Range<i32>*/* v550) {{
  return (((v550))->id_1455/*end*/);
} panic("reached function end without returning anything op i32 .call.end Range<i32>P slf\n");}

id_1431/*Range<i32>*/ id_1729/*lop Range<i32> Range<i32> i32 begin i32 end*/(i32 v551, i32 v552) {{
  id_1431/*Range<i32>*/ v553; /*slf*/
  (((&(v553))->id_1454/*begin*/)=(v551));
  (((&(v553))->id_1455/*end*/)=(v552));
  return (v553);
} panic("reached function end without returning anything lop Range<i32> Range<i32> i32 begin i32 end\n");}

id_1431/*Range<i32>*/ id_1730/*op Range<i32> .. i32 begin i32 end*/(i32 v554, i32 v555) {{
  return (id_1729/*lop Range<i32> Range<i32> i32 begin i32 end*/((v554), (v555)));
} panic("reached function end without returning anything op Range<i32> .. i32 begin i32 end\n");}

id_1431/*Range<i32>*/ id_1731/*op Range<i32> ..- i32 begin i32 end*/(i32 v556, i32 v557) {{
  return (id_1730/*op Range<i32> .. i32 begin i32 end*/((v556), (-((v557)))));
} panic("reached function end without returning anything op Range<i32> ..- i32 begin i32 end\n");}

id_1431/*Range<i32>*/ id_1732/*rop Range<i32> .. i32 begin*/(i32 v558) {{
  return (id_1730/*op Range<i32> .. i32 begin i32 end*/((v558), (~((id_1467/*lop i32 i32*/())))));
} panic("reached function end without returning anything rop Range<i32> .. i32 begin\n");}

id_1431/*Range<i32>*/ id_1733/*lop Range<i32> .. i32 end*/(i32 v559) {{
  i32 v561; /*tmp_rval_560*/
  return (id_1730/*op Range<i32> .. i32 begin i32 end*/((*id_1516/*lop i32R ++ i32R x*/(&(*(((v561)=(~((id_1467/*lop i32 i32*/())))), (&(v561)))))), (v559)));
} panic("reached function end without returning anything lop Range<i32> .. i32 end\n");}

id_1431/*Range<i32>*/ id_1734/*lop Range<i32> ..- i32 end*/(i32 v562) {{
  i32 v564; /*tmp_rval_563*/
  return (id_1730/*op Range<i32> .. i32 begin i32 end*/((*id_1516/*lop i32R ++ i32R x*/(&(*(((v564)=(~((id_1467/*lop i32 i32*/())))), (&(v564)))))), (-((v562)))));
} panic("reached function end without returning anything lop Range<i32> ..- i32 end\n");}

id_1431/*Range<i32>*/ id_1735/*lop Range<i32> - Range<i32> r*/(id_1431/*Range<i32>*/ v565) {{
  return (id_1730/*op Range<i32> .. i32 begin i32 end*/((-(((&(v565))->id_1454/*begin*/))), ((&(v565))->id_1455/*end*/)));
} panic("reached function end without returning anything lop Range<i32> - Range<i32> r\n");}

id_1431/*Range<i32>*/ id_1736/*op Range<i32> ..= i32 begin i32 end*/(i32 v566, i32 v567) {{
  i32 v569; /*tmp_rval_568*/
  return (id_1730/*op Range<i32> .. i32 begin i32 end*/((v566), (((v567))+((*id_1516/*lop i32R ++ i32R x*/(&(*(((v569)=(id_1467/*lop i32 i32*/())), (&(v569))))))))));
} panic("reached function end without returning anything op Range<i32> ..= i32 begin i32 end\n");}

id_1431/*Range<i32>*/ id_1737/*lop Range<i32> ..= i32 end*/(i32 v570) {{
  i32 v574; /*tmp_rval_573*/
  i32 v572; /*tmp_rval_571*/
  return (id_1730/*op Range<i32> .. i32 begin i32 end*/((*id_1516/*lop i32R ++ i32R x*/(&(*(((v572)=(~((id_1467/*lop i32 i32*/())))), (&(v572)))))), (((v570))+((*id_1516/*lop i32R ++ i32R x*/(&(*(((v574)=(~((id_1467/*lop i32 i32*/())))), (&(v574))))))))));
} panic("reached function end without returning anything lop Range<i32> ..= i32 end\n");}

id_1431/*Range<i32>*/ id_1738/*lop Range<i32> ..=- i32 end*/(i32 v575) {{
  i32 v579; /*tmp_rval_578*/
  i32 v577; /*tmp_rval_576*/
  return (id_1730/*op Range<i32> .. i32 begin i32 end*/((*id_1516/*lop i32R ++ i32R x*/(&(*(((v577)=(~((id_1467/*lop i32 i32*/())))), (&(v577)))))), (((-((v575))))+((*id_1516/*lop i32R ++ i32R x*/(&(*(((v579)=(~((id_1467/*lop i32 i32*/())))), (&(v579))))))))));
} panic("reached function end without returning anything lop Range<i32> ..=- i32 end\n");}

bool id_1739/*op bool == i32 i Range<i32> r*/(i32 v580, id_1431/*Range<i32>*/ v581) {{
  if (((((&(v581))->id_1454/*begin*/))<(((&(v581))->id_1455/*end*/)))) {
    return ((((((&(v581))->id_1454/*begin*/))<=((v580))))&&((((v580))<(((&(v581))->id_1455/*end*/)))));
  } else {
    return ((((((&(v581))->id_1455/*end*/))<=((v580))))&&((((v580))<(((&(v581))->id_1454/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i32 i Range<i32> r\n");}

id_1433/*RangeIterRange<i32>*/ id_1740/*lop RangeIterRange<i32> iter Range<i32> r*/(id_1431/*Range<i32>*/ v593) {{
  return (id_1726/*lop RangeIterRange<i32> RangeIterRange<i32> RangeIter<i32> begin RangeIter<i32> end*/((id_1720/*lop RangeIter<i32> RangeIter<i32> i32 val*/(((&(v593))->id_1454/*begin*/))), (id_1720/*lop RangeIter<i32> RangeIter<i32> i32 val*/(((&(v593))->id_1455/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i32> iter Range<i32> r\n");}

id_1435/*RangeIter<i64>*/ id_1741/*lop RangeIter<i64> RangeIter<i64> i64 val*/(i64 v628) {{
  id_1435/*RangeIter<i64>*/ v629; /*slf*/
  (((&(v629))->id_1456/*val*/)=(v628));
  return (v629);
} panic("reached function end without returning anything lop RangeIter<i64> RangeIter<i64> i64 val\n");}

void id_1742/*lop void ++ RangeIter<i64>R slf*/(id_1435/*RangeIter<i64>*/* v630){
  (*id_1530/*lop i64R ++ i64R x*/(&((&(*v630))->id_1456/*val*/)));
}

i64 id_1743/*lop i64 * RangeIter<i64> slf*/(id_1435/*RangeIter<i64>*/ v631) {{
  return ((&(v631))->id_1456/*val*/);
} panic("reached function end without returning anything lop i64 * RangeIter<i64> slf\n");}

bool id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/(id_1435/*RangeIter<i64>*/ v632, id_1435/*RangeIter<i64>*/ v633) {{
  return ((((&(v632))->id_1456/*val*/))!=(((&(v633))->id_1456/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<i64> a RangeIter<i64> b\n");}

id_1435/*RangeIter<i64>*/ id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/(id_1436/*RangeIterRange<i64>*/* v634) {{
  return (((v634))->id_1454/*begin*/);
} panic("reached function end without returning anything op RangeIter<i64> .call.begin RangeIterRange<i64>P slf\n");}

id_1435/*RangeIter<i64>*/ id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/(id_1436/*RangeIterRange<i64>*/* v635) {{
  return (((v635))->id_1455/*end*/);
} panic("reached function end without returning anything op RangeIter<i64> .call.end RangeIterRange<i64>P slf\n");}

id_1436/*RangeIterRange<i64>*/ id_1747/*lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end*/(id_1435/*RangeIter<i64>*/ v636, id_1435/*RangeIter<i64>*/ v637) {{
  id_1436/*RangeIterRange<i64>*/ v638; /*slf*/
  (((&(v638))->id_1454/*begin*/)=(v636));
  (((&(v638))->id_1455/*end*/)=(v637));
  return (v638);
} panic("reached function end without returning anything lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end\n");}

i64 id_1748/*op i64 .call.begin Range<i64>P slf*/(id_1434/*Range<i64>*/* v595) {{
  return (((v595))->id_1454/*begin*/);
} panic("reached function end without returning anything op i64 .call.begin Range<i64>P slf\n");}

i64 id_1749/*op i64 .call.end Range<i64>P slf*/(id_1434/*Range<i64>*/* v596) {{
  return (((v596))->id_1455/*end*/);
} panic("reached function end without returning anything op i64 .call.end Range<i64>P slf\n");}

id_1434/*Range<i64>*/ id_1750/*lop Range<i64> Range<i64> i64 begin i64 end*/(i64 v597, i64 v598) {{
  id_1434/*Range<i64>*/ v599; /*slf*/
  (((&(v599))->id_1454/*begin*/)=(v597));
  (((&(v599))->id_1455/*end*/)=(v598));
  return (v599);
} panic("reached function end without returning anything lop Range<i64> Range<i64> i64 begin i64 end\n");}

id_1434/*Range<i64>*/ id_1751/*op Range<i64> .. i64 begin i64 end*/(i64 v600, i64 v601) {{
  return (id_1750/*lop Range<i64> Range<i64> i64 begin i64 end*/((v600), (v601)));
} panic("reached function end without returning anything op Range<i64> .. i64 begin i64 end\n");}

id_1434/*Range<i64>*/ id_1752/*op Range<i64> ..- i64 begin i64 end*/(i64 v602, i64 v603) {{
  return (id_1751/*op Range<i64> .. i64 begin i64 end*/((v602), (-((v603)))));
} panic("reached function end without returning anything op Range<i64> ..- i64 begin i64 end\n");}

id_1434/*Range<i64>*/ id_1753/*rop Range<i64> .. i64 begin*/(i64 v604) {{
  return (id_1751/*op Range<i64> .. i64 begin i64 end*/((v604), (~((id_1468/*lop i64 i64*/())))));
} panic("reached function end without returning anything rop Range<i64> .. i64 begin\n");}

id_1434/*Range<i64>*/ id_1754/*lop Range<i64> .. i64 end*/(i64 v605) {{
  i64 v607; /*tmp_rval_606*/
  return (id_1751/*op Range<i64> .. i64 begin i64 end*/((*id_1530/*lop i64R ++ i64R x*/(&(*(((v607)=(~((id_1468/*lop i64 i64*/())))), (&(v607)))))), (v605)));
} panic("reached function end without returning anything lop Range<i64> .. i64 end\n");}

id_1434/*Range<i64>*/ id_1755/*lop Range<i64> ..- i64 end*/(i64 v608) {{
  i64 v610; /*tmp_rval_609*/
  return (id_1751/*op Range<i64> .. i64 begin i64 end*/((*id_1530/*lop i64R ++ i64R x*/(&(*(((v610)=(~((id_1468/*lop i64 i64*/())))), (&(v610)))))), (-((v608)))));
} panic("reached function end without returning anything lop Range<i64> ..- i64 end\n");}

id_1434/*Range<i64>*/ id_1756/*lop Range<i64> - Range<i64> r*/(id_1434/*Range<i64>*/ v611) {{
  return (id_1751/*op Range<i64> .. i64 begin i64 end*/((-(((&(v611))->id_1454/*begin*/))), ((&(v611))->id_1455/*end*/)));
} panic("reached function end without returning anything lop Range<i64> - Range<i64> r\n");}

id_1434/*Range<i64>*/ id_1757/*op Range<i64> ..= i64 begin i64 end*/(i64 v612, i64 v613) {{
  i64 v615; /*tmp_rval_614*/
  return (id_1751/*op Range<i64> .. i64 begin i64 end*/((v612), (((v613))+((*id_1530/*lop i64R ++ i64R x*/(&(*(((v615)=(id_1468/*lop i64 i64*/())), (&(v615))))))))));
} panic("reached function end without returning anything op Range<i64> ..= i64 begin i64 end\n");}

id_1434/*Range<i64>*/ id_1758/*lop Range<i64> ..= i64 end*/(i64 v616) {{
  i64 v620; /*tmp_rval_619*/
  i64 v618; /*tmp_rval_617*/
  return (id_1751/*op Range<i64> .. i64 begin i64 end*/((*id_1530/*lop i64R ++ i64R x*/(&(*(((v618)=(~((id_1468/*lop i64 i64*/())))), (&(v618)))))), (((v616))+((*id_1530/*lop i64R ++ i64R x*/(&(*(((v620)=(~((id_1468/*lop i64 i64*/())))), (&(v620))))))))));
} panic("reached function end without returning anything lop Range<i64> ..= i64 end\n");}

id_1434/*Range<i64>*/ id_1759/*lop Range<i64> ..=- i64 end*/(i64 v621) {{
  i64 v625; /*tmp_rval_624*/
  i64 v623; /*tmp_rval_622*/
  return (id_1751/*op Range<i64> .. i64 begin i64 end*/((*id_1530/*lop i64R ++ i64R x*/(&(*(((v623)=(~((id_1468/*lop i64 i64*/())))), (&(v623)))))), (((-((v621))))+((*id_1530/*lop i64R ++ i64R x*/(&(*(((v625)=(~((id_1468/*lop i64 i64*/())))), (&(v625))))))))));
} panic("reached function end without returning anything lop Range<i64> ..=- i64 end\n");}

bool id_1760/*op bool == i64 i Range<i64> r*/(i64 v626, id_1434/*Range<i64>*/ v627) {{
  if (((((&(v627))->id_1454/*begin*/))<(((&(v627))->id_1455/*end*/)))) {
    return ((((((&(v627))->id_1454/*begin*/))<=((v626))))&&((((v626))<(((&(v627))->id_1455/*end*/)))));
  } else {
    return ((((((&(v627))->id_1455/*end*/))<=((v626))))&&((((v626))<(((&(v627))->id_1454/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == i64 i Range<i64> r\n");}

id_1436/*RangeIterRange<i64>*/ id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/(id_1434/*Range<i64>*/ v639) {{
  return (id_1747/*lop RangeIterRange<i64> RangeIterRange<i64> RangeIter<i64> begin RangeIter<i64> end*/((id_1741/*lop RangeIter<i64> RangeIter<i64> i64 val*/(((&(v639))->id_1454/*begin*/))), (id_1741/*lop RangeIter<i64> RangeIter<i64> i64 val*/(((&(v639))->id_1455/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<i64> iter Range<i64> r\n");}

id_1438/*RangeIter<char>*/ id_1762/*lop RangeIter<char> RangeIter<char> char val*/(char v674) {{
  id_1438/*RangeIter<char>*/ v675; /*slf*/
  (((&(v675))->id_1456/*val*/)=(v674));
  return (v675);
} panic("reached function end without returning anything lop RangeIter<char> RangeIter<char> char val\n");}

void id_1763/*lop void ++ RangeIter<char>R slf*/(id_1438/*RangeIter<char>*/* v676){
  (*id_1600/*lop charR ++ charR x*/(&((&(*v676))->id_1456/*val*/)));
}

char id_1764/*lop char * RangeIter<char> slf*/(id_1438/*RangeIter<char>*/ v677) {{
  return ((&(v677))->id_1456/*val*/);
} panic("reached function end without returning anything lop char * RangeIter<char> slf\n");}

bool id_1765/*op bool != RangeIter<char> a RangeIter<char> b*/(id_1438/*RangeIter<char>*/ v678, id_1438/*RangeIter<char>*/ v679) {{
  return ((((&(v678))->id_1456/*val*/))!=(((&(v679))->id_1456/*val*/)));
} panic("reached function end without returning anything op bool != RangeIter<char> a RangeIter<char> b\n");}

id_1438/*RangeIter<char>*/ id_1766/*op RangeIter<char> .call.begin RangeIterRange<char>P slf*/(id_1439/*RangeIterRange<char>*/* v680) {{
  return (((v680))->id_1454/*begin*/);
} panic("reached function end without returning anything op RangeIter<char> .call.begin RangeIterRange<char>P slf\n");}

id_1438/*RangeIter<char>*/ id_1767/*op RangeIter<char> .call.end RangeIterRange<char>P slf*/(id_1439/*RangeIterRange<char>*/* v681) {{
  return (((v681))->id_1455/*end*/);
} panic("reached function end without returning anything op RangeIter<char> .call.end RangeIterRange<char>P slf\n");}

id_1439/*RangeIterRange<char>*/ id_1768/*lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end*/(id_1438/*RangeIter<char>*/ v682, id_1438/*RangeIter<char>*/ v683) {{
  id_1439/*RangeIterRange<char>*/ v684; /*slf*/
  (((&(v684))->id_1454/*begin*/)=(v682));
  (((&(v684))->id_1455/*end*/)=(v683));
  return (v684);
} panic("reached function end without returning anything lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end\n");}

char id_1769/*op char .call.begin Range<char>P slf*/(id_1437/*Range<char>*/* v641) {{
  return (((v641))->id_1454/*begin*/);
} panic("reached function end without returning anything op char .call.begin Range<char>P slf\n");}

char id_1770/*op char .call.end Range<char>P slf*/(id_1437/*Range<char>*/* v642) {{
  return (((v642))->id_1455/*end*/);
} panic("reached function end without returning anything op char .call.end Range<char>P slf\n");}

id_1437/*Range<char>*/ id_1771/*lop Range<char> Range<char> char begin char end*/(char v643, char v644) {{
  id_1437/*Range<char>*/ v645; /*slf*/
  (((&(v645))->id_1454/*begin*/)=(v643));
  (((&(v645))->id_1455/*end*/)=(v644));
  return (v645);
} panic("reached function end without returning anything lop Range<char> Range<char> char begin char end\n");}

id_1437/*Range<char>*/ id_1772/*op Range<char> .. char begin char end*/(char v646, char v647) {{
  return (id_1771/*lop Range<char> Range<char> char begin char end*/((v646), (v647)));
} panic("reached function end without returning anything op Range<char> .. char begin char end\n");}

id_1437/*Range<char>*/ id_1773/*op Range<char> ..- char begin char end*/(char v648, char v649) {{
  return (id_1772/*op Range<char> .. char begin char end*/((v648), (-((v649)))));
} panic("reached function end without returning anything op Range<char> ..- char begin char end\n");}

id_1437/*Range<char>*/ id_1774/*rop Range<char> .. char begin*/(char v650) {{
  return (id_1772/*op Range<char> .. char begin char end*/((v650), (~((id_1474/*lop char char*/())))));
} panic("reached function end without returning anything rop Range<char> .. char begin\n");}

id_1437/*Range<char>*/ id_1775/*lop Range<char> .. char end*/(char v651) {{
  char v653; /*tmp_rval_652*/
  return (id_1772/*op Range<char> .. char begin char end*/((*id_1600/*lop charR ++ charR x*/(&(*(((v653)=(~((id_1474/*lop char char*/())))), (&(v653)))))), (v651)));
} panic("reached function end without returning anything lop Range<char> .. char end\n");}

id_1437/*Range<char>*/ id_1776/*lop Range<char> ..- char end*/(char v654) {{
  char v656; /*tmp_rval_655*/
  return (id_1772/*op Range<char> .. char begin char end*/((*id_1600/*lop charR ++ charR x*/(&(*(((v656)=(~((id_1474/*lop char char*/())))), (&(v656)))))), (-((v654)))));
} panic("reached function end without returning anything lop Range<char> ..- char end\n");}

id_1437/*Range<char>*/ id_1777/*lop Range<char> - Range<char> r*/(id_1437/*Range<char>*/ v657) {{
  return (id_1772/*op Range<char> .. char begin char end*/((-(((&(v657))->id_1454/*begin*/))), ((&(v657))->id_1455/*end*/)));
} panic("reached function end without returning anything lop Range<char> - Range<char> r\n");}

id_1437/*Range<char>*/ id_1778/*op Range<char> ..= char begin char end*/(char v658, char v659) {{
  char v661; /*tmp_rval_660*/
  return (id_1772/*op Range<char> .. char begin char end*/((v658), (((v659))+((*id_1600/*lop charR ++ charR x*/(&(*(((v661)=(id_1474/*lop char char*/())), (&(v661))))))))));
} panic("reached function end without returning anything op Range<char> ..= char begin char end\n");}

id_1437/*Range<char>*/ id_1779/*lop Range<char> ..= char end*/(char v662) {{
  char v666; /*tmp_rval_665*/
  char v664; /*tmp_rval_663*/
  return (id_1772/*op Range<char> .. char begin char end*/((*id_1600/*lop charR ++ charR x*/(&(*(((v664)=(~((id_1474/*lop char char*/())))), (&(v664)))))), (((v662))+((*id_1600/*lop charR ++ charR x*/(&(*(((v666)=(~((id_1474/*lop char char*/())))), (&(v666))))))))));
} panic("reached function end without returning anything lop Range<char> ..= char end\n");}

id_1437/*Range<char>*/ id_1780/*lop Range<char> ..=- char end*/(char v667) {{
  char v671; /*tmp_rval_670*/
  char v669; /*tmp_rval_668*/
  return (id_1772/*op Range<char> .. char begin char end*/((*id_1600/*lop charR ++ charR x*/(&(*(((v669)=(~((id_1474/*lop char char*/())))), (&(v669)))))), (((-((v667))))+((*id_1600/*lop charR ++ charR x*/(&(*(((v671)=(~((id_1474/*lop char char*/())))), (&(v671))))))))));
} panic("reached function end without returning anything lop Range<char> ..=- char end\n");}

bool id_1781/*op bool == char i Range<char> r*/(char v672, id_1437/*Range<char>*/ v673) {{
  if (((((&(v673))->id_1454/*begin*/))<(((&(v673))->id_1455/*end*/)))) {
    return ((((((&(v673))->id_1454/*begin*/))<=((v672))))&&((((v672))<(((&(v673))->id_1455/*end*/)))));
  } else {
    return ((((((&(v673))->id_1455/*end*/))<=((v672))))&&((((v672))<(((&(v673))->id_1454/*begin*/)))));
  }
} panic("reached function end without returning anything op bool == char i Range<char> r\n");}

id_1439/*RangeIterRange<char>*/ id_1782/*lop RangeIterRange<char> iter Range<char> r*/(id_1437/*Range<char>*/ v685) {{
  return (id_1768/*lop RangeIterRange<char> RangeIterRange<char> RangeIter<char> begin RangeIter<char> end*/((id_1762/*lop RangeIter<char> RangeIter<char> char val*/(((&(v685))->id_1454/*begin*/))), (id_1762/*lop RangeIter<char> RangeIter<char> char val*/(((&(v685))->id_1455/*end*/)))));
} panic("reached function end without returning anything lop RangeIterRange<char> iter Range<char> r\n");}

id_1441/*VecIter<i64>*/ id_1783/*lop VecIter<i64> VecIter<i64> i64P ptr*/(i64* v738) {{
  id_1441/*VecIter<i64>*/ v739; /*slf*/
  (((&(v739))->id_1460/*ptr*/)=(v738));
  return (v739);
} panic("reached function end without returning anything lop VecIter<i64> VecIter<i64> i64P ptr\n");}

void id_1784/*lop void ++ VecIter<i64>R slf*/(id_1441/*VecIter<i64>*/* v740){
  (((&(*v740))->id_1460/*ptr*/)=((i64*)((((i64)((&(*v740))->id_1460/*ptr*/)))+(((((i64)1))*((sizeof(i64))))))));
}

id_1441/*VecIter<i64>*/ id_1785/*op VecIter<i64> + VecIter<i64> slf i64 i*/(id_1441/*VecIter<i64>*/ v741, i64 v742) {{
  (((&(v741))->id_1460/*ptr*/)=((i64*)((((i64)((&(v741))->id_1460/*ptr*/)))+((((v742))*((sizeof(i64))))))));
  return (v741);
} panic("reached function end without returning anything op VecIter<i64> + VecIter<i64> slf i64 i\n");}

bool id_1786/*op bool != VecIter<i64> a VecIter<i64> b*/(id_1441/*VecIter<i64>*/ v743, id_1441/*VecIter<i64>*/ v744) {{
  return ((((i64)((&(v743))->id_1460/*ptr*/)))!=(((i64)((&(v744))->id_1460/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<i64> a VecIter<i64> b\n");}

i64* id_1787/*lop i64R * VecIter<i64> slf*/(id_1441/*VecIter<i64>*/ v745) {{
  return &(*((&(v745))->id_1460/*ptr*/));
} panic("reached function end without returning anything lop i64R * VecIter<i64> slf\n");}

id_1441/*VecIter<i64>*/ id_1788/*op VecIter<i64> .call.begin VecIterRange<i64>P slf*/(id_1442/*VecIterRange<i64>*/* v748) {{
  return (((v748))->id_1454/*begin*/);
} panic("reached function end without returning anything op VecIter<i64> .call.begin VecIterRange<i64>P slf\n");}

id_1441/*VecIter<i64>*/ id_1789/*op VecIter<i64> .call.end VecIterRange<i64>P slf*/(id_1442/*VecIterRange<i64>*/* v749) {{
  return (((v749))->id_1455/*end*/);
} panic("reached function end without returning anything op VecIter<i64> .call.end VecIterRange<i64>P slf\n");}

id_1442/*VecIterRange<i64>*/ id_1790/*lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end*/(id_1441/*VecIter<i64>*/ v750, id_1441/*VecIter<i64>*/ v751) {{
  id_1442/*VecIterRange<i64>*/ v752; /*slf*/
  (((&(v752))->id_1454/*begin*/)=(v750));
  (((&(v752))->id_1455/*end*/)=(v751));
  return (v752);
} panic("reached function end without returning anything lop VecIterRange<i64> VecIterRange<i64> VecIter<i64> begin VecIter<i64> end\n");}

i64* id_1791/*op i64P .call.atP Vec<i64>P slf i64 pos*/(id_1440/*Vec<i64>*/* v692, i64 v693) {{
  return ((i64*)((i64*)((((i64)(((v692))->id_1458/*head*/)))+((((v693))*((sizeof(i64))))))));
} panic("reached function end without returning anything op i64P .call.atP Vec<i64>P slf i64 pos\n");}

i64* id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/(id_1440/*Vec<i64>*/* v694, i64 v695) {{
  return &(*(id_1791/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v694), (v695))));
} panic("reached function end without returning anything op i64R .call.at Vec<i64>P slf i64 pos\n");}

void id_1793/*op void .call.print Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v696){
  (printf("%s", ((str)"[")));
  {
      i64 v704; /*i*/
      id_1435/*RangeIter<i64>*/ v703; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v702; /*tmp_rval_701*/
      id_1435/*RangeIter<i64>*/ v700; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v699; /*tmp_rval_698*/
      id_1436/*RangeIterRange<i64>*/ v697; /*__range*/
      ((v697)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v696))->id_1459/*size*/))))));
      ((v703)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v702)=(v697)), (&(v702))))))));
      ((v700)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v699)=(v697)), (&(v699))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v700), (v703)))) {
        ((v704)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v700))));
        if ((!((!((v704)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%lld", (*(id_1791/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v696), (v704))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v700)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_1794/*op void .call.println Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v705){
  {
      i64 v713; /*i*/
      id_1435/*RangeIter<i64>*/ v712; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v711; /*tmp_rval_710*/
      id_1435/*RangeIter<i64>*/ v709; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v708; /*tmp_rval_707*/
      id_1436/*RangeIterRange<i64>*/ v706; /*__range*/
      ((v706)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v705))->id_1459/*size*/))))));
      ((v712)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v711)=(v706)), (&(v711))))))));
      ((v709)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v708)=(v706)), (&(v708))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v709), (v712)))) {
        ((v713)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v709))));
        (printf("%lld\n", (*(id_1791/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v705), (v713))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v709)));
      }
    }
}

void id_1795/*op void .call.double_cap Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v714){
  i64 v715; /*ncap*/
  ((v715)=(((v714))->id_1457/*cap*/));
  if ((((v715))==(((i64)0)))) {
    ((v715)=((i64)1));
    ((((v714))->id_1458/*head*/)=((i64*)(alloc((sizeof(i64))))));
    ((((v714))->id_1457/*cap*/)=(v715));
  } else {
    i64* v716; /*new_head*/
    (id_1524/*op void *= i64R a i64 b*/(&(v715), ((i64)2)));
    ((v716)=((i64*)(alloc((((v715))*((sizeof(i64))))))));
    {
        i64 v724; /*i*/
        id_1435/*RangeIter<i64>*/ v723; /*__end*/
        id_1436/*RangeIterRange<i64>*/ v722; /*tmp_rval_721*/
        id_1435/*RangeIter<i64>*/ v720; /*__cur*/
        id_1436/*RangeIterRange<i64>*/ v719; /*tmp_rval_718*/
        id_1436/*RangeIterRange<i64>*/ v717; /*__range*/
        ((v717)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v714))->id_1459/*size*/))))));
        ((v723)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v722)=(v717)), (&(v722))))))));
        ((v720)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v719)=(v717)), (&(v719))))))));
        while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v720), (v723)))) {
          ((v724)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v720))));
          ((*((i64*)((((i64)(v716)))+((((v724))*((sizeof(i64))))))))=(*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((v714), (v724))));
          (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v720)));
        }
      }
    (free((void*) ((i64)(((v714))->id_1458/*head*/))));
    ((((v714))->id_1458/*head*/)=(v716));
  }
  ((((v714))->id_1457/*cap*/)=(v715));
}

void id_1796/*op void .call.push_back Vec<i64>P slf i64 val*/(id_1440/*Vec<i64>*/* v725, i64 v726){
  if ((((((v725))->id_1459/*size*/))==((((v725))->id_1457/*cap*/)))) {
    (id_1795/*op void .call.double_cap Vec<i64>P slf*/((v725)));
  }
  ((*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((v725), (((v725))->id_1459/*size*/)))=(v726));
  (*id_1530/*lop i64R ++ i64R x*/(&(((v725))->id_1459/*size*/)));
}

void id_1797/*op void .call.pop_back Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v727){
  (*id_1531/*lop i64R -- i64R x*/(&(((v727))->id_1459/*size*/)));
}

void id_1798/*op void .call.erase Vec<i64>P slf i64 pos*/(id_1440/*Vec<i64>*/* v728, i64 v729){
  {
      i64 v737; /*i*/
      id_1435/*RangeIter<i64>*/ v736; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v735; /*tmp_rval_734*/
      id_1435/*RangeIter<i64>*/ v733; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v732; /*tmp_rval_731*/
      id_1436/*RangeIterRange<i64>*/ v730; /*__range*/
      ((v730)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/((((v729))+(((i64)1))), (((v728))->id_1459/*size*/))))));
      ((v736)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v735)=(v730)), (&(v735))))))));
      ((v733)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v732)=(v730)), (&(v732))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v733), (v736)))) {
        ((v737)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v733))));
        ((*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((v728), (((v737))-(((i64)1)))))=(*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((v728), (v737))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v733)));
      }
    }
  (id_1797/*op void .call.pop_back Vec<i64>P slf*/((v728)));
}

id_1441/*VecIter<i64>*/ id_1799/*op VecIter<i64> .call.begin Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v746) {{
  return (id_1783/*lop VecIter<i64> VecIter<i64> i64P ptr*/((((v746))->id_1458/*head*/)));
} panic("reached function end without returning anything op VecIter<i64> .call.begin Vec<i64>P slf\n");}

id_1441/*VecIter<i64>*/ id_1800/*op VecIter<i64> .call.end Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v747) {{
  return (id_1783/*lop VecIter<i64> VecIter<i64> i64P ptr*/((id_1791/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v747), (((v747))->id_1459/*size*/)))));
} panic("reached function end without returning anything op VecIter<i64> .call.end Vec<i64>P slf\n");}

id_1442/*VecIterRange<i64>*/ id_1801/*lop VecIterRange<i64> iter Vec<i64>R slf*/(id_1440/*Vec<i64>*/* v753) {{
  id_1442/*VecIterRange<i64>*/ v754; /*it*/
  (((&(v754))->id_1454/*begin*/)=(id_1799/*op VecIter<i64> .call.begin Vec<i64>P slf*/((&(*v753)))));
  (((&(v754))->id_1455/*end*/)=(id_1800/*op VecIter<i64> .call.end Vec<i64>P slf*/((&(*v753)))));
  return (v754);
} panic("reached function end without returning anything lop VecIterRange<i64> iter Vec<i64>R slf\n");}

i64* id_1802/*op i64R .call.front Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v755) {{
  return &(*(((v755))->id_1458/*head*/));
} panic("reached function end without returning anything op i64R .call.front Vec<i64>P slf\n");}

i64* id_1803/*op i64R .call.back Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v756) {{
  return &(*(id_1791/*op i64P .call.atP Vec<i64>P slf i64 pos*/((v756), (((((v756))->id_1459/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op i64R .call.back Vec<i64>P slf\n");}

void id_1804/*op void .call.dtor Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v757){
  if ((!((!(((i64)(((v757))->id_1458/*head*/))))))) {
    (free((void*) ((i64)(((v757))->id_1458/*head*/))));
    ((((v757))->id_1459/*size*/)=((i64)0));
    ((((v757))->id_1457/*cap*/)=((i64)0));
    ((((v757))->id_1458/*head*/)=((i64*)((i64)0)));
  }
}

id_1440/*Vec<i64>*/ id_1805/*lop Vec<i64> Vec<i64> i64 size*/(i64 v758) {{
  id_1440/*Vec<i64>*/ v759; /*slf*/
  (((&(v759))->id_1458/*head*/)=((i64*)((i64)0)));
  (((&(v759))->id_1459/*size*/)=((i64)0));
  (((&(v759))->id_1457/*cap*/)=((i64)0));
  while (((((&(v759))->id_1457/*cap*/))<((v758)))) {
    (id_1795/*op void .call.double_cap Vec<i64>P slf*/((&(v759))));
  }
  (((&(v759))->id_1459/*size*/)=(v758));
  (((&(v759))->id_1457/*cap*/)=(v758));
  {
      i64 v767; /*i*/
      id_1435/*RangeIter<i64>*/ v766; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v765; /*tmp_rval_764*/
      id_1435/*RangeIter<i64>*/ v763; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v762; /*tmp_rval_761*/
      id_1436/*RangeIterRange<i64>*/ v760; /*__range*/
      ((v760)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v759))->id_1459/*size*/))))));
      ((v766)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v765)=(v760)), (&(v765))))))));
      ((v763)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v762)=(v760)), (&(v762))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v763), (v766)))) {
        ((v767)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v763))));
        ((*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v759)), (v767)))=(id_1468/*lop i64 i64*/()));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v763)));
      }
    }
  return (v759);
  (id_1804/*op void .call.dtor Vec<i64>P slf*/((&(v759))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> i64 size\n");}

id_1440/*Vec<i64>*/ id_1806/*lop Vec<i64> Vec<i64> i64 size i64 default*/(i64 v768, i64 v769) {{
  id_1440/*Vec<i64>*/ v770; /*slf*/
  ((v770)=(id_1805/*lop Vec<i64> Vec<i64> i64 size*/((v768))));
  {
      i64 v778; /*i*/
      id_1436/*RangeIterRange<i64>*/ v776; /*tmp_rval_775*/
      id_1435/*RangeIter<i64>*/ v774; /*__cur*/
      id_1435/*RangeIter<i64>*/ v777; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v773; /*tmp_rval_772*/
      id_1436/*RangeIterRange<i64>*/ v771; /*__range*/
      ((v771)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v770))->id_1459/*size*/))))));
      ((v777)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v776)=(v771)), (&(v776))))))));
      ((v774)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v773)=(v771)), (&(v773))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v774), (v777)))) {
        ((v778)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v774))));
        ((*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v770)), (v778)))=(v769));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v774)));
      }
    }
  return (v770);
  (id_1804/*op void .call.dtor Vec<i64>P slf*/((&(v770))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> i64 size i64 default\n");}

id_1440/*Vec<i64>*/ id_1807/*lop Vec<i64> Vec<i64>*/() {{
  return (id_1805/*lop Vec<i64> Vec<i64> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64>\n");}

id_1440/*Vec<i64>*/ id_1808/*lop Vec<i64> Vec<i64> Vec<i64>R other*/(id_1440/*Vec<i64>*/* v779) {{
  id_1440/*Vec<i64>*/ v780; /*slf*/
  ((v780)=(id_1805/*lop Vec<i64> Vec<i64> i64 size*/(((&(*v779))->id_1459/*size*/))));
  {
      i64 v788; /*i*/
      id_1435/*RangeIter<i64>*/ v787; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v786; /*tmp_rval_785*/
      id_1435/*RangeIter<i64>*/ v784; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v783; /*tmp_rval_782*/
      id_1436/*RangeIterRange<i64>*/ v781; /*__range*/
      ((v781)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v779))->id_1459/*size*/))))));
      ((v787)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v786)=(v781)), (&(v786))))))));
      ((v784)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v783)=(v781)), (&(v783))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v784), (v787)))) {
        ((v788)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v784))));
        ((*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v780)), (v788)))=(*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(*v779)), (v788))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v784)));
      }
    }
  return (v780);
  (id_1804/*op void .call.dtor Vec<i64>P slf*/((&(v780))));
} panic("reached function end without returning anything lop Vec<i64> Vec<i64> Vec<i64>R other\n");}

void id_1809/*op void += Vec<i64>R slf i64 val*/(id_1440/*Vec<i64>*/* v789, i64 v790){
  (id_1796/*op void .call.push_back Vec<i64>P slf i64 val*/((&(*v789)), (v790)));
}

void id_1810/*op void += Vec<i64>R slf Vec<i64>R other*/(id_1440/*Vec<i64>*/* v791, id_1440/*Vec<i64>*/* v792){
  {
      i64 v800; /*i*/
      id_1435/*RangeIter<i64>*/ v799; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v798; /*tmp_rval_797*/
      id_1435/*RangeIter<i64>*/ v796; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v795; /*tmp_rval_794*/
      id_1436/*RangeIterRange<i64>*/ v793; /*__range*/
      ((v793)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v792))->id_1459/*size*/))))));
      ((v799)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v798)=(v793)), (&(v798))))))));
      ((v796)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v795)=(v793)), (&(v795))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v796), (v799)))) {
        ((v800)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v796))));
        (id_1796/*op void .call.push_back Vec<i64>P slf i64 val*/((&(*v791)), (*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(*v792)), (v800)))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v796)));
      }
    }
}

id_1440/*Vec<i64>*/ id_1811/*op Vec<i64> ,, i64 a i64 b*/(i64 v801, i64 v802) {{
  id_1440/*Vec<i64>*/ v803; /*slf*/
  ((v803)=(id_1807/*lop Vec<i64> Vec<i64>*/()));
  (id_1809/*op void += Vec<i64>R slf i64 val*/(&(v803), (v801)));
  (id_1809/*op void += Vec<i64>R slf i64 val*/(&(v803), (v802)));
  return (v803);
  (id_1804/*op void .call.dtor Vec<i64>P slf*/((&(v803))));
} panic("reached function end without returning anything op Vec<i64> ,, i64 a i64 b\n");}

id_1440/*Vec<i64>*/* id_1812/*op Vec<i64>R ,, Vec<i64>R v i64 a*/(id_1440/*Vec<i64>*/* v804, i64 v805) {{
  (id_1809/*op void += Vec<i64>R slf i64 val*/(&(*v804), (v805)));
  return &(*v804);
} panic("reached function end without returning anything op Vec<i64>R ,, Vec<i64>R v i64 a\n");}

void id_1813/*lop void put Vec<i64>R slf*/(id_1440/*Vec<i64>*/* v806){
  (id_1793/*op void .call.print Vec<i64>P slf*/((&(*v806))));
}

void id_1814/*lop void out Vec<i64>R slf*/(id_1440/*Vec<i64>*/* v807){
  (id_1793/*op void .call.print Vec<i64>P slf*/((&(*v807))));
  (printf("%s\n", ((str)"")));
}

id_1424/*Out*/ id_1815/*rop Out < Vec<i64>R i*/(id_1440/*Vec<i64>*/* v808) {{
  (id_1814/*lop void out Vec<i64>R slf*/(&(*v808)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<i64>R i\n");}

id_1424/*Out*/ id_1816/*lop Out < Vec<i64>R i*/(id_1440/*Vec<i64>*/* v809) {{
  ((id_1813/*lop void put Vec<i64>R slf*/(&(*v809))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<i64>R i\n");}

id_1424/*Out*/ id_1817/*op Out < Out o Vec<i64>R i*/(id_1424/*Out*/ v810, id_1440/*Vec<i64>*/* v811) {{
  ((id_1813/*lop void put Vec<i64>R slf*/(&(*v811))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<i64>R i\n");}

i64* id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/(id_1440/*Vec<i64>*/* v812, i64 v813) {{
  if ((((v813))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v813), (((v812))->id_1459/*size*/)));
  }
  return &(*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((v812), (v813)));
} panic("reached function end without returning anything op i64R .call.sub Vec<i64>P slf i64 id\n");}

id_1440/*Vec<i64>*/ id_1819/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/(id_1440/*Vec<i64>*/* v814, i64 v815, i64 v816) {{
  id_1440/*Vec<i64>*/ v817; /*res*/
  ((v817)=(id_1805/*lop Vec<i64> Vec<i64> i64 size*/(((i64)0))));
  {
      i64 v825; /*i*/
      id_1435/*RangeIter<i64>*/ v824; /*__end*/
      id_1435/*RangeIter<i64>*/ v821; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v820; /*tmp_rval_819*/
      id_1436/*RangeIterRange<i64>*/ v823; /*tmp_rval_822*/
      id_1436/*RangeIterRange<i64>*/ v818; /*__range*/
      ((v818)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/((v815), (v816))))));
      ((v824)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v823)=(v818)), (&(v823))))))));
      ((v821)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v820)=(v818)), (&(v820))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v821), (v824)))) {
        ((v825)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v821))));
        (id_1796/*op void .call.push_back Vec<i64>P slf i64 val*/((&(v817)), (*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((v814), (v825)))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v821)));
      }
    }
  return (v817);
  (id_1804/*op void .call.dtor Vec<i64>P slf*/((&(v817))));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end\n");}

id_1440/*Vec<i64>*/ id_1820/*op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r*/(id_1440/*Vec<i64>*/* v826, id_1434/*Range<i64>*/ v827) {{
  i64 v829; /*end*/
  i64 v828; /*begin*/
  (((v828)=((&(v827))->id_1454/*begin*/)), ((v829)=((&(v827))->id_1455/*end*/)));
  if ((((v828))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v828), (((v826))->id_1459/*size*/)));
  }
  if ((((v828))<(((i64)0)))) {
    ((v828)=((i64)0));
  }
  if ((((v829))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v829), (((v826))->id_1459/*size*/)));
  }
  if ((((v829))>((((v826))->id_1459/*size*/)))) {
    ((v829)=(((v826))->id_1459/*size*/));
  }
  return (id_1819/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((v826), (v828), (v829)));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf Range<i64> r\n");}

id_1440/*Vec<i64>*/ id_1821/*op Vec<i64> .call.sub Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v830) {{
  return (id_1819/*op Vec<i64> .call.sub Vec<i64>P slf i64 begin i64 end*/((v830), ((i64)0), (((v830))->id_1459/*size*/)));
} panic("reached function end without returning anything op Vec<i64> .call.sub Vec<i64>P slf\n");}

bool id_1822/*op bool < Vec<i64>R a Vec<i64>R b*/(id_1440/*Vec<i64>*/* v831, id_1440/*Vec<i64>*/* v832) {{
  {
      i64 v840; /*i*/
      id_1435/*RangeIter<i64>*/ v839; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v838; /*tmp_rval_837*/
      id_1435/*RangeIter<i64>*/ v836; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v835; /*tmp_rval_834*/
      id_1436/*RangeIterRange<i64>*/ v833; /*__range*/
      ((v833)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1476/*lop i64 min i64 a i64 b*/(((&(*v831))->id_1459/*size*/), ((&(*v832))->id_1459/*size*/))))))));
      ((v839)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v838)=(v833)), (&(v838))))))));
      ((v836)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v835)=(v833)), (&(v835))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v836), (v839)))) {
        ((v840)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v836))));
        if ((((*id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v831)), (v840))))<((*id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v832)), (v840)))))) {
          return ((bool)1);
        }
 else if ((((*id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v832)), (v840))))<((*id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(*v831)), (v840)))))) {
          return ((bool)0);
        }
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v836)));
      }
    }
  if (((((&(*v831))->id_1459/*size*/))<(((&(*v832))->id_1459/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v831))->id_1459/*size*/))>(((&(*v832))->id_1459/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<i64>R a Vec<i64>R b\n");}

void id_1823/*lop void swap i64P a i64P b*/(i64* v841, i64* v842){
  i64 v843; /*t*/
  ((v843)=(*(v841)));
  ((*(v841))=(*(v842)));
  ((*(v842))=(v843));
}

i64* id_1824/*lop i64P partition i64P lo i64P hi*/(i64* v844, i64* v845) {{
  i64* v848; /*j*/
  i64* v847; /*i*/
  i64* v846; /*pivot*/
  (((v846)=((i64*)((((i64)(v845)))-(((((i64)1))*((sizeof(i64)))))))), ((v847)=(v844)), ((v848)=(v844)));
  ((v848)=(v844));
  while (((((i64)(v848)))!=(((i64)(v846))))) {
    if ((((*(v848)))<((*(v846))))) {
      (id_1823/*lop void swap i64P a i64P b*/((v847), (v848)));
      ((v847)=((i64*)((((i64)(v847)))+(((((i64)1))*((sizeof(i64))))))));
    }
    ((v848)=((i64*)((((i64)(v848)))+(((((i64)1))*((sizeof(i64))))))));
  }
  (id_1823/*lop void swap i64P a i64P b*/((v847), (v846)));
  return (v847);
} panic("reached function end without returning anything lop i64P partition i64P lo i64P hi\n");}

void id_1825/*lop void qsort i64P lhs i64P rhs*/(i64* v849, i64* v850){
  i64 v852; /*b*/
  i64 v851; /*a*/
  ((v851)=((((i64)(v850)))-(((i64)(v849)))));
  ((v852)=(sizeof(i64)));
  if ((((v851))>((v852)))) {
    i64* v853; /*pi*/
    ((v853)=(id_1824/*lop i64P partition i64P lo i64P hi*/((v849), (v850))));
    (id_1825/*lop void qsort i64P lhs i64P rhs*/((v849), (v853)));
    ((v853)=((i64*)((((i64)(v853)))+(((((i64)1))*((sizeof(i64))))))));
    (id_1825/*lop void qsort i64P lhs i64P rhs*/((v853), (v850)));
  }
}

void id_1826/*op void .call.sort Vec<i64>P slf*/(id_1440/*Vec<i64>*/* v854){
  id_1441/*VecIter<i64>*/ v858; /*tmp_rval_857*/
  id_1441/*VecIter<i64>*/ v856; /*tmp_rval_855*/
  (id_1825/*lop void qsort i64P lhs i64P rhs*/(((&(*(((v856)=(id_1799/*op VecIter<i64> .call.begin Vec<i64>P slf*/((v854)))), (&(v856)))))->id_1460/*ptr*/), ((&(*(((v858)=(id_1800/*op VecIter<i64> .call.end Vec<i64>P slf*/((v854)))), (&(v858)))))->id_1460/*ptr*/)));
}

void id_1827/*lop void sort Vec<i64>R slf*/(id_1440/*Vec<i64>*/* v859){
  (id_1826/*op void .call.sort Vec<i64>P slf*/((&(*v859))));
}

id_1440/*Vec<i64>*/ id_1828/*op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f*/(id_1440/*Vec<i64>*/* v860, i64(*v861)(i64*)) {{
  id_1440/*Vec<i64>*/ v862; /*r*/
  ((v862)=(id_1805/*lop Vec<i64> Vec<i64> i64 size*/((((v860))->id_1459/*size*/))));
  {
      id_1435/*RangeIter<i64>*/ v869; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v868; /*tmp_rval_867*/
      id_1435/*RangeIter<i64>*/ v866; /*__cur*/
      i64 v870; /*i*/
      id_1436/*RangeIterRange<i64>*/ v865; /*tmp_rval_864*/
      id_1436/*RangeIterRange<i64>*/ v863; /*__range*/
      ((v863)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v860))->id_1459/*size*/))))));
      ((v869)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v868)=(v863)), (&(v868))))))));
      ((v866)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v865)=(v863)), (&(v865))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v866), (v869)))) {
        ((v870)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v866))));
        ((*id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/((&(v862)), (v870)))=((*(v861))(&(*id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/((v860), (v870))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v866)));
      }
    }
  return (v862);
  (id_1804/*op void .call.dtor Vec<i64>P slf*/((&(v862))));
} panic("reached function end without returning anything op Vec<i64> .call.map Vec<i64>P slf F<i64 i64R> f\n");}

id_1440/*Vec<i64>*/ id_1829/*op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f*/(id_1440/*Vec<i64>*/* v871, bool(*v872)(i64*)) {{
  id_1440/*Vec<i64>*/ v873; /*r*/
  ((v873)=(id_1807/*lop Vec<i64> Vec<i64>*/()));
  {
      i64 v881; /*i*/
      id_1435/*RangeIter<i64>*/ v880; /*__end*/
      id_1435/*RangeIter<i64>*/ v877; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v879; /*tmp_rval_878*/
      id_1436/*RangeIterRange<i64>*/ v876; /*tmp_rval_875*/
      id_1436/*RangeIterRange<i64>*/ v874; /*__range*/
      ((v874)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v871))->id_1459/*size*/))))));
      ((v880)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v879)=(v874)), (&(v879))))))));
      ((v877)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v876)=(v874)), (&(v876))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v877), (v880)))) {
        ((v881)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v877))));
        if (((*(v872))(&(*id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/((v871), (v881)))))) {
          (id_1809/*op void += Vec<i64>R slf i64 val*/(&(v873), (*id_1818/*op i64R .call.sub Vec<i64>P slf i64 id*/((v871), (v881)))));
        }
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v877)));
      }
    }
  return (v873);
  (id_1804/*op void .call.dtor Vec<i64>P slf*/((&(v873))));
} panic("reached function end without returning anything op Vec<i64> .call.filter Vec<i64>P slf F<bool i64R> f\n");}

id_1440/*Vec<i64>*/ id_1830/*lop Vec<i64> iota i64 begin i64 end*/(i64 v882, i64 v883) {{
  id_1440/*Vec<i64>*/ v884; /*v*/
  ((v884)=(id_1805/*lop Vec<i64> Vec<i64> i64 size*/((((v883))-((v882))))));
  {
      id_1435/*RangeIter<i64>*/ v891; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v890; /*tmp_rval_889*/
      id_1435/*RangeIter<i64>*/ v888; /*__cur*/
      i64 v892; /*i*/
      id_1436/*RangeIterRange<i64>*/ v887; /*tmp_rval_886*/
      id_1436/*RangeIterRange<i64>*/ v885; /*__range*/
      ((v885)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/((v882), (v883))))));
      ((v891)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v890)=(v885)), (&(v890))))))));
      ((v888)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v887)=(v885)), (&(v887))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v888), (v891)))) {
        ((v892)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v888))));
        ((*id_1792/*op i64R .call.at Vec<i64>P slf i64 pos*/((&(v884)), (((v892))-((v882)))))=(v892));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v888)));
      }
    }
  return (v884);
  (id_1804/*op void .call.dtor Vec<i64>P slf*/((&(v884))));
} panic("reached function end without returning anything lop Vec<i64> iota i64 begin i64 end\n");}

char id_1831/*op char .call.sub strP slf i64 pos*/(str* v893, i64 v894) {{
  return (*((char*)((((i64)(*(v893))))+((v894)))));
} panic("reached function end without returning anything op char .call.sub strP slf i64 pos\n");}

str id_1832/*lop str str*/() {{
  u8* v895; /*ptr*/
  ((v895)=((u8*)(alloc(((i64)1)))));
  ((*(v895))=((u8)0));
  return ((str)(v895));
} panic("reached function end without returning anything lop str str\n");}

bool id_1833/*op bool == char ch str s*/(char v896, str v897) {{
  return (((v896))==((id_1831/*op char .call.sub strP slf i64 pos*/((&(v897)), ((i64)0)))));
} panic("reached function end without returning anything op bool == char ch str s\n");}

char id_1834/*lop char chr str s*/(str v898) {{
  return (id_1831/*op char .call.sub strP slf i64 pos*/((&(v898)), ((i64)0)));
} panic("reached function end without returning anything lop char chr str s\n");}

id_1444/*VecIter<char>*/ id_1835/*lop VecIter<char> VecIter<char> charP ptr*/(char* v945) {{
  id_1444/*VecIter<char>*/ v946; /*slf*/
  (((&(v946))->id_1460/*ptr*/)=(v945));
  return (v946);
} panic("reached function end without returning anything lop VecIter<char> VecIter<char> charP ptr\n");}

void id_1836/*lop void ++ VecIter<char>R slf*/(id_1444/*VecIter<char>*/* v947){
  (((&(*v947))->id_1460/*ptr*/)=((char*)((((i64)((&(*v947))->id_1460/*ptr*/)))+(((((i64)1))*((sizeof(char))))))));
}

id_1444/*VecIter<char>*/ id_1837/*op VecIter<char> + VecIter<char> slf i64 i*/(id_1444/*VecIter<char>*/ v948, i64 v949) {{
  (((&(v948))->id_1460/*ptr*/)=((char*)((((i64)((&(v948))->id_1460/*ptr*/)))+((((v949))*((sizeof(char))))))));
  return (v948);
} panic("reached function end without returning anything op VecIter<char> + VecIter<char> slf i64 i\n");}

bool id_1838/*op bool != VecIter<char> a VecIter<char> b*/(id_1444/*VecIter<char>*/ v950, id_1444/*VecIter<char>*/ v951) {{
  return ((((i64)((&(v950))->id_1460/*ptr*/)))!=(((i64)((&(v951))->id_1460/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<char> a VecIter<char> b\n");}

char* id_1839/*lop charR * VecIter<char> slf*/(id_1444/*VecIter<char>*/ v952) {{
  return &(*((&(v952))->id_1460/*ptr*/));
} panic("reached function end without returning anything lop charR * VecIter<char> slf\n");}

id_1444/*VecIter<char>*/ id_1840/*op VecIter<char> .call.begin VecIterRange<char>P slf*/(id_1445/*VecIterRange<char>*/* v955) {{
  return (((v955))->id_1454/*begin*/);
} panic("reached function end without returning anything op VecIter<char> .call.begin VecIterRange<char>P slf\n");}

id_1444/*VecIter<char>*/ id_1841/*op VecIter<char> .call.end VecIterRange<char>P slf*/(id_1445/*VecIterRange<char>*/* v956) {{
  return (((v956))->id_1455/*end*/);
} panic("reached function end without returning anything op VecIter<char> .call.end VecIterRange<char>P slf\n");}

id_1445/*VecIterRange<char>*/ id_1842/*lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end*/(id_1444/*VecIter<char>*/ v957, id_1444/*VecIter<char>*/ v958) {{
  id_1445/*VecIterRange<char>*/ v959; /*slf*/
  (((&(v959))->id_1454/*begin*/)=(v957));
  (((&(v959))->id_1455/*end*/)=(v958));
  return (v959);
} panic("reached function end without returning anything lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end\n");}

char* id_1843/*op charP .call.atP Vec<char>P slf i64 pos*/(id_1443/*Vec<char>*/* v899, i64 v900) {{
  return ((char*)((char*)((((i64)(((v899))->id_1458/*head*/)))+((((v900))*((sizeof(char))))))));
} panic("reached function end without returning anything op charP .call.atP Vec<char>P slf i64 pos\n");}

char* id_1844/*op charR .call.at Vec<char>P slf i64 pos*/(id_1443/*Vec<char>*/* v901, i64 v902) {{
  return &(*(id_1843/*op charP .call.atP Vec<char>P slf i64 pos*/((v901), (v902))));
} panic("reached function end without returning anything op charR .call.at Vec<char>P slf i64 pos\n");}

void id_1845/*op void .call.print Vec<char>P slf*/(id_1443/*Vec<char>*/* v903){
  (printf("%s", ((str)"[")));
  {
      i64 v911; /*i*/
      id_1435/*RangeIter<i64>*/ v910; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v909; /*tmp_rval_908*/
      id_1435/*RangeIter<i64>*/ v907; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v906; /*tmp_rval_905*/
      id_1436/*RangeIterRange<i64>*/ v904; /*__range*/
      ((v904)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v903))->id_1459/*size*/))))));
      ((v910)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v909)=(v904)), (&(v909))))))));
      ((v907)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v906)=(v904)), (&(v906))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v907), (v910)))) {
        ((v911)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v907))));
        if ((!((!((v911)))))) {
          (printf("%s", ((str)" ")));
        }
        (printf("%c", (*(id_1843/*op charP .call.atP Vec<char>P slf i64 pos*/((v903), (v911))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v907)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_1846/*op void .call.println Vec<char>P slf*/(id_1443/*Vec<char>*/* v912){
  {
      i64 v920; /*i*/
      id_1435/*RangeIter<i64>*/ v919; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v918; /*tmp_rval_917*/
      id_1435/*RangeIter<i64>*/ v916; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v915; /*tmp_rval_914*/
      id_1436/*RangeIterRange<i64>*/ v913; /*__range*/
      ((v913)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v912))->id_1459/*size*/))))));
      ((v919)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v918)=(v913)), (&(v918))))))));
      ((v916)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v915)=(v913)), (&(v915))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v916), (v919)))) {
        ((v920)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v916))));
        (printf("%c\n", (*(id_1843/*op charP .call.atP Vec<char>P slf i64 pos*/((v912), (v920))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v916)));
      }
    }
}

void id_1847/*op void .call.double_cap Vec<char>P slf*/(id_1443/*Vec<char>*/* v921){
  i64 v922; /*ncap*/
  ((v922)=(((v921))->id_1457/*cap*/));
  if ((((v922))==(((i64)0)))) {
    ((v922)=((i64)1));
    ((((v921))->id_1458/*head*/)=((char*)(alloc((sizeof(char))))));
    ((((v921))->id_1457/*cap*/)=(v922));
  } else {
    char* v923; /*new_head*/
    (id_1524/*op void *= i64R a i64 b*/(&(v922), ((i64)2)));
    ((v923)=((char*)(alloc((((v922))*((sizeof(char))))))));
    {
        i64 v931; /*i*/
        id_1435/*RangeIter<i64>*/ v930; /*__end*/
        id_1436/*RangeIterRange<i64>*/ v929; /*tmp_rval_928*/
        id_1435/*RangeIter<i64>*/ v927; /*__cur*/
        id_1436/*RangeIterRange<i64>*/ v926; /*tmp_rval_925*/
        id_1436/*RangeIterRange<i64>*/ v924; /*__range*/
        ((v924)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v921))->id_1459/*size*/))))));
        ((v930)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v929)=(v924)), (&(v929))))))));
        ((v927)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v926)=(v924)), (&(v926))))))));
        while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v927), (v930)))) {
          ((v931)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v927))));
          ((*((char*)((((i64)(v923)))+((((v931))*((sizeof(char))))))))=(*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((v921), (v931))));
          (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v927)));
        }
      }
    (free((void*) ((i64)(((v921))->id_1458/*head*/))));
    ((((v921))->id_1458/*head*/)=(v923));
  }
  ((((v921))->id_1457/*cap*/)=(v922));
}

void id_1848/*op void .call.push_back Vec<char>P slf char val*/(id_1443/*Vec<char>*/* v932, char v933){
  if ((((((v932))->id_1459/*size*/))==((((v932))->id_1457/*cap*/)))) {
    (id_1847/*op void .call.double_cap Vec<char>P slf*/((v932)));
  }
  ((*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((v932), (((v932))->id_1459/*size*/)))=(v933));
  (*id_1530/*lop i64R ++ i64R x*/(&(((v932))->id_1459/*size*/)));
}

void id_1849/*op void .call.pop_back Vec<char>P slf*/(id_1443/*Vec<char>*/* v934){
  (*id_1531/*lop i64R -- i64R x*/(&(((v934))->id_1459/*size*/)));
}

void id_1850/*op void .call.erase Vec<char>P slf i64 pos*/(id_1443/*Vec<char>*/* v935, i64 v936){
  {
      i64 v944; /*i*/
      id_1435/*RangeIter<i64>*/ v943; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v942; /*tmp_rval_941*/
      id_1435/*RangeIter<i64>*/ v940; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v939; /*tmp_rval_938*/
      id_1436/*RangeIterRange<i64>*/ v937; /*__range*/
      ((v937)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/((((v936))+(((i64)1))), (((v935))->id_1459/*size*/))))));
      ((v943)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v942)=(v937)), (&(v942))))))));
      ((v940)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v939)=(v937)), (&(v939))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v940), (v943)))) {
        ((v944)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v940))));
        ((*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((v935), (((v944))-(((i64)1)))))=(*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((v935), (v944))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v940)));
      }
    }
  (id_1849/*op void .call.pop_back Vec<char>P slf*/((v935)));
}

id_1444/*VecIter<char>*/ id_1851/*op VecIter<char> .call.begin Vec<char>P slf*/(id_1443/*Vec<char>*/* v953) {{
  return (id_1835/*lop VecIter<char> VecIter<char> charP ptr*/((((v953))->id_1458/*head*/)));
} panic("reached function end without returning anything op VecIter<char> .call.begin Vec<char>P slf\n");}

id_1444/*VecIter<char>*/ id_1852/*op VecIter<char> .call.end Vec<char>P slf*/(id_1443/*Vec<char>*/* v954) {{
  return (id_1835/*lop VecIter<char> VecIter<char> charP ptr*/((id_1843/*op charP .call.atP Vec<char>P slf i64 pos*/((v954), (((v954))->id_1459/*size*/)))));
} panic("reached function end without returning anything op VecIter<char> .call.end Vec<char>P slf\n");}

id_1445/*VecIterRange<char>*/ id_1853/*lop VecIterRange<char> iter Vec<char>R slf*/(id_1443/*Vec<char>*/* v960) {{
  id_1445/*VecIterRange<char>*/ v961; /*it*/
  (((&(v961))->id_1454/*begin*/)=(id_1851/*op VecIter<char> .call.begin Vec<char>P slf*/((&(*v960)))));
  (((&(v961))->id_1455/*end*/)=(id_1852/*op VecIter<char> .call.end Vec<char>P slf*/((&(*v960)))));
  return (v961);
} panic("reached function end without returning anything lop VecIterRange<char> iter Vec<char>R slf\n");}

char* id_1854/*op charR .call.front Vec<char>P slf*/(id_1443/*Vec<char>*/* v962) {{
  return &(*(((v962))->id_1458/*head*/));
} panic("reached function end without returning anything op charR .call.front Vec<char>P slf\n");}

char* id_1855/*op charR .call.back Vec<char>P slf*/(id_1443/*Vec<char>*/* v963) {{
  return &(*(id_1843/*op charP .call.atP Vec<char>P slf i64 pos*/((v963), (((((v963))->id_1459/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op charR .call.back Vec<char>P slf\n");}

void id_1856/*op void .call.dtor Vec<char>P slf*/(id_1443/*Vec<char>*/* v964){
  if ((!((!(((i64)(((v964))->id_1458/*head*/))))))) {
    (free((void*) ((i64)(((v964))->id_1458/*head*/))));
    ((((v964))->id_1459/*size*/)=((i64)0));
    ((((v964))->id_1457/*cap*/)=((i64)0));
    ((((v964))->id_1458/*head*/)=((char*)((i64)0)));
  }
}

id_1443/*Vec<char>*/ id_1857/*lop Vec<char> Vec<char> i64 size*/(i64 v965) {{
  id_1443/*Vec<char>*/ v966; /*slf*/
  (((&(v966))->id_1458/*head*/)=((char*)((i64)0)));
  (((&(v966))->id_1459/*size*/)=((i64)0));
  (((&(v966))->id_1457/*cap*/)=((i64)0));
  while (((((&(v966))->id_1457/*cap*/))<((v965)))) {
    (id_1847/*op void .call.double_cap Vec<char>P slf*/((&(v966))));
  }
  (((&(v966))->id_1459/*size*/)=(v965));
  (((&(v966))->id_1457/*cap*/)=(v965));
  {
      id_1435/*RangeIter<i64>*/ v973; /*__end*/
      i64 v974; /*i*/
      id_1436/*RangeIterRange<i64>*/ v972; /*tmp_rval_971*/
      id_1435/*RangeIter<i64>*/ v970; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v969; /*tmp_rval_968*/
      id_1436/*RangeIterRange<i64>*/ v967; /*__range*/
      ((v967)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v966))->id_1459/*size*/))))));
      ((v973)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v972)=(v967)), (&(v972))))))));
      ((v970)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v969)=(v967)), (&(v969))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v970), (v973)))) {
        ((v974)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v970))));
        ((*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((&(v966)), (v974)))=(id_1474/*lop char char*/()));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v970)));
      }
    }
  return (v966);
  (id_1856/*op void .call.dtor Vec<char>P slf*/((&(v966))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> i64 size\n");}

id_1443/*Vec<char>*/ id_1858/*lop Vec<char> Vec<char> i64 size char default*/(i64 v975, char v976) {{
  id_1443/*Vec<char>*/ v977; /*slf*/
  ((v977)=(id_1857/*lop Vec<char> Vec<char> i64 size*/((v975))));
  {
      i64 v985; /*i*/
      id_1435/*RangeIter<i64>*/ v984; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v983; /*tmp_rval_982*/
      id_1435/*RangeIter<i64>*/ v981; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v980; /*tmp_rval_979*/
      id_1436/*RangeIterRange<i64>*/ v978; /*__range*/
      ((v978)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v977))->id_1459/*size*/))))));
      ((v984)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v983)=(v978)), (&(v983))))))));
      ((v981)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v980)=(v978)), (&(v980))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v981), (v984)))) {
        ((v985)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v981))));
        ((*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((&(v977)), (v985)))=(v976));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v981)));
      }
    }
  return (v977);
  (id_1856/*op void .call.dtor Vec<char>P slf*/((&(v977))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> i64 size char default\n");}

id_1443/*Vec<char>*/ id_1859/*lop Vec<char> Vec<char>*/() {{
  return (id_1857/*lop Vec<char> Vec<char> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<char> Vec<char>\n");}

id_1443/*Vec<char>*/ id_1860/*lop Vec<char> Vec<char> Vec<char>R other*/(id_1443/*Vec<char>*/* v986) {{
  id_1443/*Vec<char>*/ v987; /*slf*/
  ((v987)=(id_1857/*lop Vec<char> Vec<char> i64 size*/(((&(*v986))->id_1459/*size*/))));
  {
      i64 v995; /*i*/
      id_1435/*RangeIter<i64>*/ v994; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v993; /*tmp_rval_992*/
      id_1435/*RangeIter<i64>*/ v991; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v990; /*tmp_rval_989*/
      id_1436/*RangeIterRange<i64>*/ v988; /*__range*/
      ((v988)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v986))->id_1459/*size*/))))));
      ((v994)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v993)=(v988)), (&(v993))))))));
      ((v991)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v990)=(v988)), (&(v990))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v991), (v994)))) {
        ((v995)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v991))));
        ((*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((&(v987)), (v995)))=(*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((&(*v986)), (v995))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v991)));
      }
    }
  return (v987);
  (id_1856/*op void .call.dtor Vec<char>P slf*/((&(v987))));
} panic("reached function end without returning anything lop Vec<char> Vec<char> Vec<char>R other\n");}

void id_1861/*op void += Vec<char>R slf char val*/(id_1443/*Vec<char>*/* v996, char v997){
  (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&(*v996)), (v997)));
}

void id_1862/*op void += Vec<char>R slf Vec<char>R other*/(id_1443/*Vec<char>*/* v998, id_1443/*Vec<char>*/* v999){
  {
      i64 v1007; /*i*/
      id_1435/*RangeIter<i64>*/ v1006; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1005; /*tmp_rval_1004*/
      id_1435/*RangeIter<i64>*/ v1003; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1002; /*tmp_rval_1001*/
      id_1436/*RangeIterRange<i64>*/ v1000; /*__range*/
      ((v1000)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v999))->id_1459/*size*/))))));
      ((v1006)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1005)=(v1000)), (&(v1005))))))));
      ((v1003)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1002)=(v1000)), (&(v1002))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1003), (v1006)))) {
        ((v1007)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1003))));
        (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&(*v998)), (*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((&(*v999)), (v1007)))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1003)));
      }
    }
}

id_1443/*Vec<char>*/ id_1863/*op Vec<char> ,, char a char b*/(char v1008, char v1009) {{
  id_1443/*Vec<char>*/ v1010; /*slf*/
  ((v1010)=(id_1859/*lop Vec<char> Vec<char>*/()));
  (id_1861/*op void += Vec<char>R slf char val*/(&(v1010), (v1008)));
  (id_1861/*op void += Vec<char>R slf char val*/(&(v1010), (v1009)));
  return (v1010);
  (id_1856/*op void .call.dtor Vec<char>P slf*/((&(v1010))));
} panic("reached function end without returning anything op Vec<char> ,, char a char b\n");}

id_1443/*Vec<char>*/* id_1864/*op Vec<char>R ,, Vec<char>R v char a*/(id_1443/*Vec<char>*/* v1011, char v1012) {{
  (id_1861/*op void += Vec<char>R slf char val*/(&(*v1011), (v1012)));
  return &(*v1011);
} panic("reached function end without returning anything op Vec<char>R ,, Vec<char>R v char a\n");}

void id_1865/*lop void put Vec<char>R slf*/(id_1443/*Vec<char>*/* v1013){
  (id_1845/*op void .call.print Vec<char>P slf*/((&(*v1013))));
}

void id_1866/*lop void out Vec<char>R slf*/(id_1443/*Vec<char>*/* v1014){
  (id_1845/*op void .call.print Vec<char>P slf*/((&(*v1014))));
  (printf("%s\n", ((str)"")));
}

id_1424/*Out*/ id_1867/*rop Out < Vec<char>R i*/(id_1443/*Vec<char>*/* v1015) {{
  (id_1866/*lop void out Vec<char>R slf*/(&(*v1015)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<char>R i\n");}

id_1424/*Out*/ id_1868/*lop Out < Vec<char>R i*/(id_1443/*Vec<char>*/* v1016) {{
  ((id_1865/*lop void put Vec<char>R slf*/(&(*v1016))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<char>R i\n");}

id_1424/*Out*/ id_1869/*op Out < Out o Vec<char>R i*/(id_1424/*Out*/ v1017, id_1443/*Vec<char>*/* v1018) {{
  ((id_1865/*lop void put Vec<char>R slf*/(&(*v1018))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<char>R i\n");}

char* id_1870/*op charR .call.sub Vec<char>P slf i64 id*/(id_1443/*Vec<char>*/* v1019, i64 v1020) {{
  if ((((v1020))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v1020), (((v1019))->id_1459/*size*/)));
  }
  return &(*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((v1019), (v1020)));
} panic("reached function end without returning anything op charR .call.sub Vec<char>P slf i64 id\n");}

id_1443/*Vec<char>*/ id_1871/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/(id_1443/*Vec<char>*/* v1021, i64 v1022, i64 v1023) {{
  id_1443/*Vec<char>*/ v1024; /*res*/
  ((v1024)=(id_1857/*lop Vec<char> Vec<char> i64 size*/(((i64)0))));
  {
      i64 v1032; /*i*/
      id_1435/*RangeIter<i64>*/ v1031; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1030; /*tmp_rval_1029*/
      id_1435/*RangeIter<i64>*/ v1028; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1027; /*tmp_rval_1026*/
      id_1436/*RangeIterRange<i64>*/ v1025; /*__range*/
      ((v1025)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/((v1022), (v1023))))));
      ((v1031)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1030)=(v1025)), (&(v1030))))))));
      ((v1028)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1027)=(v1025)), (&(v1027))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1028), (v1031)))) {
        ((v1032)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1028))));
        (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&(v1024)), (*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((v1021), (v1032)))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1028)));
      }
    }
  return (v1024);
  (id_1856/*op void .call.dtor Vec<char>P slf*/((&(v1024))));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end\n");}

id_1443/*Vec<char>*/ id_1872/*op Vec<char> .call.sub Vec<char>P slf Range<i64> r*/(id_1443/*Vec<char>*/* v1033, id_1434/*Range<i64>*/ v1034) {{
  i64 v1036; /*end*/
  i64 v1035; /*begin*/
  (((v1035)=((&(v1034))->id_1454/*begin*/)), ((v1036)=((&(v1034))->id_1455/*end*/)));
  if ((((v1035))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v1035), (((v1033))->id_1459/*size*/)));
  }
  if ((((v1035))<(((i64)0)))) {
    ((v1035)=((i64)0));
  }
  if ((((v1036))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v1036), (((v1033))->id_1459/*size*/)));
  }
  if ((((v1036))>((((v1033))->id_1459/*size*/)))) {
    ((v1036)=(((v1033))->id_1459/*size*/));
  }
  return (id_1871/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((v1033), (v1035), (v1036)));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf Range<i64> r\n");}

id_1443/*Vec<char>*/ id_1873/*op Vec<char> .call.sub Vec<char>P slf*/(id_1443/*Vec<char>*/* v1037) {{
  return (id_1871/*op Vec<char> .call.sub Vec<char>P slf i64 begin i64 end*/((v1037), ((i64)0), (((v1037))->id_1459/*size*/)));
} panic("reached function end without returning anything op Vec<char> .call.sub Vec<char>P slf\n");}

bool id_1874/*op bool < Vec<char>R a Vec<char>R b*/(id_1443/*Vec<char>*/* v1038, id_1443/*Vec<char>*/* v1039) {{
  {
      i64 v1047; /*i*/
      id_1435/*RangeIter<i64>*/ v1046; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1045; /*tmp_rval_1044*/
      id_1435/*RangeIter<i64>*/ v1043; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1042; /*tmp_rval_1041*/
      id_1436/*RangeIterRange<i64>*/ v1040; /*__range*/
      ((v1040)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1476/*lop i64 min i64 a i64 b*/(((&(*v1038))->id_1459/*size*/), ((&(*v1039))->id_1459/*size*/))))))));
      ((v1046)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1045)=(v1040)), (&(v1045))))))));
      ((v1043)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1042)=(v1040)), (&(v1042))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1043), (v1046)))) {
        ((v1047)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1043))));
        if ((((*id_1870/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1038)), (v1047))))<((*id_1870/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1039)), (v1047)))))) {
          return ((bool)1);
        }
 else if ((((*id_1870/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1039)), (v1047))))<((*id_1870/*op charR .call.sub Vec<char>P slf i64 id*/((&(*v1038)), (v1047)))))) {
          return ((bool)0);
        }
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1043)));
      }
    }
  if (((((&(*v1038))->id_1459/*size*/))<(((&(*v1039))->id_1459/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1038))->id_1459/*size*/))>(((&(*v1039))->id_1459/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<char>R a Vec<char>R b\n");}

void id_1875/*lop void swap charP a charP b*/(char* v1048, char* v1049){
  char v1050; /*t*/
  ((v1050)=(*(v1048)));
  ((*(v1048))=(*(v1049)));
  ((*(v1049))=(v1050));
}

char* id_1876/*lop charP partition charP lo charP hi*/(char* v1051, char* v1052) {{
  char* v1055; /*j*/
  char* v1054; /*i*/
  char* v1053; /*pivot*/
  (((v1053)=((char*)((((i64)(v1052)))-(((((i64)1))*((sizeof(char)))))))), ((v1054)=(v1051)), ((v1055)=(v1051)));
  ((v1055)=(v1051));
  while (((((i64)(v1055)))!=(((i64)(v1053))))) {
    if ((((*(v1055)))<((*(v1053))))) {
      (id_1875/*lop void swap charP a charP b*/((v1054), (v1055)));
      ((v1054)=((char*)((((i64)(v1054)))+(((((i64)1))*((sizeof(char))))))));
    }
    ((v1055)=((char*)((((i64)(v1055)))+(((((i64)1))*((sizeof(char))))))));
  }
  (id_1875/*lop void swap charP a charP b*/((v1054), (v1053)));
  return (v1054);
} panic("reached function end without returning anything lop charP partition charP lo charP hi\n");}

void id_1877/*lop void qsort charP lhs charP rhs*/(char* v1056, char* v1057){
  i64 v1059; /*b*/
  i64 v1058; /*a*/
  ((v1058)=((((i64)(v1057)))-(((i64)(v1056)))));
  ((v1059)=(sizeof(char)));
  if ((((v1058))>((v1059)))) {
    char* v1060; /*pi*/
    ((v1060)=(id_1876/*lop charP partition charP lo charP hi*/((v1056), (v1057))));
    (id_1877/*lop void qsort charP lhs charP rhs*/((v1056), (v1060)));
    ((v1060)=((char*)((((i64)(v1060)))+(((((i64)1))*((sizeof(char))))))));
    (id_1877/*lop void qsort charP lhs charP rhs*/((v1060), (v1057)));
  }
}

void id_1878/*op void .call.sort Vec<char>P slf*/(id_1443/*Vec<char>*/* v1061){
  id_1444/*VecIter<char>*/ v1065; /*tmp_rval_1064*/
  id_1444/*VecIter<char>*/ v1063; /*tmp_rval_1062*/
  (id_1877/*lop void qsort charP lhs charP rhs*/(((&(*(((v1063)=(id_1851/*op VecIter<char> .call.begin Vec<char>P slf*/((v1061)))), (&(v1063)))))->id_1460/*ptr*/), ((&(*(((v1065)=(id_1852/*op VecIter<char> .call.end Vec<char>P slf*/((v1061)))), (&(v1065)))))->id_1460/*ptr*/)));
}

void id_1879/*lop void sort Vec<char>R slf*/(id_1443/*Vec<char>*/* v1066){
  (id_1878/*op void .call.sort Vec<char>P slf*/((&(*v1066))));
}

id_1443/*Vec<char>*/ id_1880/*op Vec<char> .call.map Vec<char>P slf F<char charR> f*/(id_1443/*Vec<char>*/* v1067, char(*v1068)(char*)) {{
  id_1443/*Vec<char>*/ v1069; /*r*/
  ((v1069)=(id_1857/*lop Vec<char> Vec<char> i64 size*/((((v1067))->id_1459/*size*/))));
  {
      i64 v1077; /*i*/
      id_1435/*RangeIter<i64>*/ v1076; /*__end*/
      id_1435/*RangeIter<i64>*/ v1073; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1075; /*tmp_rval_1074*/
      id_1436/*RangeIterRange<i64>*/ v1072; /*tmp_rval_1071*/
      id_1436/*RangeIterRange<i64>*/ v1070; /*__range*/
      ((v1070)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1067))->id_1459/*size*/))))));
      ((v1076)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1075)=(v1070)), (&(v1075))))))));
      ((v1073)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1072)=(v1070)), (&(v1072))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1073), (v1076)))) {
        ((v1077)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1073))));
        ((*id_1870/*op charR .call.sub Vec<char>P slf i64 id*/((&(v1069)), (v1077)))=((*(v1068))(&(*id_1870/*op charR .call.sub Vec<char>P slf i64 id*/((v1067), (v1077))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1073)));
      }
    }
  return (v1069);
  (id_1856/*op void .call.dtor Vec<char>P slf*/((&(v1069))));
} panic("reached function end without returning anything op Vec<char> .call.map Vec<char>P slf F<char charR> f\n");}

id_1443/*Vec<char>*/ id_1881/*op Vec<char> .call.filter Vec<char>P slf F<bool charR> f*/(id_1443/*Vec<char>*/* v1078, bool(*v1079)(char*)) {{
  id_1443/*Vec<char>*/ v1080; /*r*/
  ((v1080)=(id_1859/*lop Vec<char> Vec<char>*/()));
  {
      i64 v1088; /*i*/
      id_1435/*RangeIter<i64>*/ v1087; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1086; /*tmp_rval_1085*/
      id_1435/*RangeIter<i64>*/ v1084; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1083; /*tmp_rval_1082*/
      id_1436/*RangeIterRange<i64>*/ v1081; /*__range*/
      ((v1081)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1078))->id_1459/*size*/))))));
      ((v1087)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1086)=(v1081)), (&(v1086))))))));
      ((v1084)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1083)=(v1081)), (&(v1083))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1084), (v1087)))) {
        ((v1088)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1084))));
        if (((*(v1079))(&(*id_1870/*op charR .call.sub Vec<char>P slf i64 id*/((v1078), (v1088)))))) {
          (id_1861/*op void += Vec<char>R slf char val*/(&(v1080), (*id_1870/*op charR .call.sub Vec<char>P slf i64 id*/((v1078), (v1088)))));
        }
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1084)));
      }
    }
  return (v1080);
  (id_1856/*op void .call.dtor Vec<char>P slf*/((&(v1080))));
} panic("reached function end without returning anything op Vec<char> .call.filter Vec<char>P slf F<bool charR> f\n");}

id_1446/*Str*/ id_1882/*lop Str Str*/() {{
  id_1446/*Str*/ v1089; /*slf*/
  (((&(v1089))->id_1461/*data*/)=(id_1859/*lop Vec<char> Vec<char>*/()));
  (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1089))->id_1461/*data*/)), ((char)((u8)0))));
  (((&(v1089))->id_1459/*size*/)=((i64)0));
  return (v1089);
} panic("reached function end without returning anything lop Str Str\n");}

void id_1883/*op void .call.dtor StrP slf*/(id_1446/*Str*/* v1090){
  (id_1856/*op void .call.dtor Vec<char>P slf*/((&(((v1090))->id_1461/*data*/))));
}

str id_1884/*op str .call.cstr StrP slf*/(id_1446/*Str*/* v1091) {{
  id_1444/*VecIter<char>*/ v1092; /*it*/
  ((v1092)=(id_1851/*op VecIter<char> .call.begin Vec<char>P slf*/((&(((v1091))->id_1461/*data*/)))));
  return ((str)((&(v1092))->id_1460/*ptr*/));
} panic("reached function end without returning anything op str .call.cstr StrP slf\n");}

id_1445/*VecIterRange<char>*/ id_1885/*lop VecIterRange<char> iter StrR s*/(id_1446/*Str*/* v1093) {{
  return (id_1842/*lop VecIterRange<char> VecIterRange<char> VecIter<char> begin VecIter<char> end*/((id_1851/*op VecIter<char> .call.begin Vec<char>P slf*/((&((&(*v1093))->id_1461/*data*/)))), (id_1837/*op VecIter<char> + VecIter<char> slf i64 i*/((id_1851/*op VecIter<char> .call.begin Vec<char>P slf*/((&((&(*v1093))->id_1461/*data*/)))), ((&(*v1093))->id_1459/*size*/)))));
} panic("reached function end without returning anything lop VecIterRange<char> iter StrR s\n");}

char* id_1886/*op charR .call.at StrP slf i64 pos*/(id_1446/*Str*/* v1094, i64 v1095) {{
  return &(*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((&(((v1094))->id_1461/*data*/)), (v1095)));
} panic("reached function end without returning anything op charR .call.at StrP slf i64 pos\n");}

char* id_1887/*op charR .call.sub StrP slf i64 pos*/(id_1446/*Str*/* v1096, i64 v1097) {{
  return &(*id_1844/*op charR .call.at Vec<char>P slf i64 pos*/((&(((v1096))->id_1461/*data*/)), (v1097)));
} panic("reached function end without returning anything op charR .call.sub StrP slf i64 pos\n");}

char* id_1888/*op charP .call.atP StrP slf i64 pos*/(id_1446/*Str*/* v1098, i64 v1099) {{
  return (id_1843/*op charP .call.atP Vec<char>P slf i64 pos*/((&(((v1098))->id_1461/*data*/)), (v1099)));
} panic("reached function end without returning anything op charP .call.atP StrP slf i64 pos\n");}

void id_1889/*op void .call.push_back StrP slf char ch*/(id_1446/*Str*/* v1100, char v1101){
  (id_1849/*op void .call.pop_back Vec<char>P slf*/((&(((v1100))->id_1461/*data*/))));
  (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&(((v1100))->id_1461/*data*/)), (v1101)));
  (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&(((v1100))->id_1461/*data*/)), ((char)((u8)0))));
  (*id_1530/*lop i64R ++ i64R x*/(&(((v1100))->id_1459/*size*/)));
}

void id_1890/*op void .call.pop_back StrP slf*/(id_1446/*Str*/* v1102){
  (id_1849/*op void .call.pop_back Vec<char>P slf*/((&(((v1102))->id_1461/*data*/))));
  (id_1849/*op void .call.pop_back Vec<char>P slf*/((&(((v1102))->id_1461/*data*/))));
  (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&(((v1102))->id_1461/*data*/)), ((char)((u8)0))));
  (*id_1531/*lop i64R -- i64R x*/(&(((v1102))->id_1459/*size*/)));
}

id_1446/*Str*/ id_1891/*lop Str Str str s*/(str v1103) {{
  id_1446/*Str*/ v1104; /*res*/
  ((v1104)=(id_1882/*lop Str Str*/()));
  (id_1849/*op void .call.pop_back Vec<char>P slf*/((&((&(v1104))->id_1461/*data*/))));
  while ((((*((char*)(v1103))))!=(((char)((u8)0))))) {
    (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1104))->id_1461/*data*/)), (*((char*)(v1103)))));
    ((v1103)=((str)((((i64)(v1103)))+(((i64)1)))));
  }
  (id_1848/*op void .call.push_back Vec<char>P slf char val*/((&((&(v1104))->id_1461/*data*/)), ((char)((u8)0))));
  (((&(v1104))->id_1459/*size*/)=((((&((&(v1104))->id_1461/*data*/))->id_1459/*size*/))-(((i64)1))));
  return (v1104);
  (id_1883/*op void .call.dtor StrP slf*/((&(v1104))));
} panic("reached function end without returning anything lop Str Str str s\n");}

id_1446/*Str*/ id_1892/*lop Str Str StrR s*/(id_1446/*Str*/* v1105) {{
  id_1446/*Str*/ v1106; /*slf*/
  ((v1106)=(id_1882/*lop Str Str*/()));
  (((&(v1106))->id_1461/*data*/)=(id_1860/*lop Vec<char> Vec<char> Vec<char>R other*/(&((&(*v1105))->id_1461/*data*/))));
  (((&(v1106))->id_1459/*size*/)=((&(*v1105))->id_1459/*size*/));
  return (v1106);
  (id_1883/*op void .call.dtor StrP slf*/((&(v1106))));
} panic("reached function end without returning anything lop Str Str StrR s\n");}

i64 id_1893/*lop i64 len str s*/(str v1107) {{
  i64 v1108; /*res*/
  ((v1108)=((i64)0));
  while ((((*((char*)(v1107))))!=(((char)((u8)0))))) {
    (*id_1530/*lop i64R ++ i64R x*/(&(v1108)));
    ((v1107)=((str)((((i64)(v1107)))+(((i64)1)))));
  }
  return (v1108);
} panic("reached function end without returning anything lop i64 len str s\n");}

void id_1894/*lop void out StrR s*/(id_1446/*Str*/* v1109){
  (printf("%s\n", (id_1884/*op str .call.cstr StrP slf*/((&(*v1109))))));
}

void id_1895/*lop void put StrR s*/(id_1446/*Str*/* v1110){
  (printf("%s", (id_1884/*op str .call.cstr StrP slf*/((&(*v1110))))));
}

void id_1896/*op void += StrR a char ch*/(id_1446/*Str*/* v1111, char v1112){
  (id_1889/*op void .call.push_back StrP slf char ch*/((&(*v1111)), (v1112)));
}

void id_1897/*op void += StrR a StrR b*/(id_1446/*Str*/* v1113, id_1446/*Str*/* v1114){
  {
      i64 v1122; /*i*/
      id_1435/*RangeIter<i64>*/ v1121; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1120; /*tmp_rval_1119*/
      id_1435/*RangeIter<i64>*/ v1118; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1117; /*tmp_rval_1116*/
      id_1436/*RangeIterRange<i64>*/ v1115; /*__range*/
      ((v1115)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1114))->id_1459/*size*/))))));
      ((v1121)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1120)=(v1115)), (&(v1120))))))));
      ((v1118)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1117)=(v1115)), (&(v1117))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1118), (v1121)))) {
        char v1123; /*ch*/
        ((v1122)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1118))));
        ((v1123)=((char)((i8)115)));
        ((v1123)=(*id_1886/*op charR .call.at StrP slf i64 pos*/((&(*v1114)), (v1122))));
        (id_1896/*op void += StrR a char ch*/(&(*v1113), (v1123)));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1118)));
      }
    }
}

void id_1898/*op void += StrR a str b*/(id_1446/*Str*/* v1124, str v1125){
  i64 v1126; /*len*/
  ((v1126)=(id_1893/*lop i64 len str s*/((v1125))));
  {
      i64 v1134; /*i*/
      id_1435/*RangeIter<i64>*/ v1133; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1132; /*tmp_rval_1131*/
      id_1435/*RangeIter<i64>*/ v1130; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1129; /*tmp_rval_1128*/
      id_1436/*RangeIterRange<i64>*/ v1127; /*__range*/
      ((v1127)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1126))))));
      ((v1133)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1132)=(v1127)), (&(v1132))))))));
      ((v1130)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1129)=(v1127)), (&(v1129))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1130), (v1133)))) {
        ((v1134)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1130))));
        (id_1896/*op void += StrR a char ch*/(&(*v1124), (id_1831/*op char .call.sub strP slf i64 pos*/((&(v1125)), (v1134)))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1130)));
      }
    }
}

id_1446/*Str*/ id_1899/*op Str + StrR a StrR b*/(id_1446/*Str*/* v1135, id_1446/*Str*/* v1136) {{
  id_1446/*Str*/ v1137; /*s*/
  ((v1137)=(id_1892/*lop Str Str StrR s*/(&(*v1135))));
  (id_1897/*op void += StrR a StrR b*/(&(v1137), &(*v1136)));
  return (v1137);
  (id_1883/*op void .call.dtor StrP slf*/((&(v1137))));
} panic("reached function end without returning anything op Str + StrR a StrR b\n");}

id_1446/*Str*/ id_1900/*op Str + str a str b*/(str v1138, str v1139) {{
  id_1446/*Str*/ v1143; /*tmp_rval_1142*/
  id_1446/*Str*/ v1141; /*tmp_rval_1140*/
  (id_1883/*op void .call.dtor StrP slf*/((&(v1141))));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1143))));
  return (id_1899/*op Str + StrR a StrR b*/(&(*(((v1141)=(id_1891/*lop Str Str str s*/((v1138)))), (&(v1141)))), &(*(((v1143)=(id_1891/*lop Str Str str s*/((v1139)))), (&(v1143))))));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1141))));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1143))));
} panic("reached function end without returning anything op Str + str a str b\n");}

id_1424/*Out*/ id_1901/*rop Out < StrR i*/(id_1446/*Str*/* v1144) {{
  (id_1894/*lop void out StrR s*/(&(*v1144)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < StrR i\n");}

id_1424/*Out*/ id_1902/*lop Out < StrR i*/(id_1446/*Str*/* v1145) {{
  ((id_1895/*lop void put StrR s*/(&(*v1145))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < StrR i\n");}

id_1424/*Out*/ id_1903/*op Out < Out o StrR i*/(id_1424/*Out*/ v1146, id_1446/*Str*/* v1147) {{
  ((id_1895/*lop void put StrR s*/(&(*v1147))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o StrR i\n");}

bool id_1904/*op bool < StrR a StrR b*/(id_1446/*Str*/* v1148, id_1446/*Str*/* v1149) {{
  {
      i64 v1157; /*i*/
      id_1435/*RangeIter<i64>*/ v1156; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1155; /*tmp_rval_1154*/
      id_1435/*RangeIter<i64>*/ v1153; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1152; /*tmp_rval_1151*/
      id_1436/*RangeIterRange<i64>*/ v1150; /*__range*/
      ((v1150)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1476/*lop i64 min i64 a i64 b*/(((&(*v1148))->id_1459/*size*/), ((&(*v1149))->id_1459/*size*/))))))));
      ((v1156)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1155)=(v1150)), (&(v1155))))))));
      ((v1153)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1152)=(v1150)), (&(v1152))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1153), (v1156)))) {
        ((v1157)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1153))));
        if ((((*id_1887/*op charR .call.sub StrP slf i64 pos*/((&(*v1148)), (v1157))))<((*id_1887/*op charR .call.sub StrP slf i64 pos*/((&(*v1149)), (v1157)))))) {
          return ((bool)1);
        }
 else if ((((*id_1887/*op charR .call.sub StrP slf i64 pos*/((&(*v1149)), (v1157))))<((*id_1887/*op charR .call.sub StrP slf i64 pos*/((&(*v1148)), (v1157)))))) {
          return ((bool)0);
        }
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1153)));
      }
    }
  if (((((&(*v1148))->id_1459/*size*/))<(((&(*v1149))->id_1459/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1148))->id_1459/*size*/))>(((&(*v1149))->id_1459/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < StrR a StrR b\n");}

bool id_1905/*op bool in char c StrR s*/(char v1158, id_1446/*Str*/* v1159) {{
  {
      char v1167; /*i*/
      id_1444/*VecIter<char>*/ v1166; /*__end*/
      id_1445/*VecIterRange<char>*/ v1165; /*tmp_rval_1164*/
      id_1444/*VecIter<char>*/ v1163; /*__cur*/
      id_1445/*VecIterRange<char>*/ v1162; /*tmp_rval_1161*/
      id_1445/*VecIterRange<char>*/ v1160; /*__range*/
      ((v1160)=(id_1885/*lop VecIterRange<char> iter StrR s*/(&(*v1159))));
      ((v1166)=(id_1841/*op VecIter<char> .call.end VecIterRange<char>P slf*/((&(*(((v1165)=(v1160)), (&(v1165))))))));
      ((v1163)=(id_1840/*op VecIter<char> .call.begin VecIterRange<char>P slf*/((&(*(((v1162)=(v1160)), (&(v1162))))))));
      while ((id_1838/*op bool != VecIter<char> a VecIter<char> b*/((v1163), (v1166)))) {
        ((v1167)=(*id_1839/*lop charR * VecIter<char> slf*/((v1163))));
        if ((((v1167))==((v1158)))) {
          return ((bool)1);
        }
        (id_1836/*lop void ++ VecIter<char>R slf*/(&(v1163)));
      }
    }
  return ((bool)0);
} panic("reached function end without returning anything op bool in char c StrR s\n");}

id_1446/*Str*/ id_1906/*op Str * str s i64 i*/(str v1168, i64 v1169) {{
  id_1446/*Str*/ v1171; /*t*/
  id_1446/*Str*/ v1170; /*slf*/
  ((v1170)=(id_1882/*lop Str Str*/()));
  ((v1171)=(id_1891/*lop Str Str str s*/((v1168))));
  {
      i64 v1179; /*j*/
      id_1435/*RangeIter<i64>*/ v1178; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1177; /*tmp_rval_1176*/
      id_1435/*RangeIter<i64>*/ v1175; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1174; /*tmp_rval_1173*/
      id_1436/*RangeIterRange<i64>*/ v1172; /*__range*/
      ((v1172)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (v1169))))));
      ((v1178)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1177)=(v1172)), (&(v1177))))))));
      ((v1175)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1174)=(v1172)), (&(v1174))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1175), (v1178)))) {
        ((v1179)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1175))));
        (id_1897/*op void += StrR a StrR b*/(&(v1170), &(v1171)));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1175)));
      }
    }
  (id_1883/*op void .call.dtor StrP slf*/((&(v1171))));
  return (v1170);
  (id_1883/*op void .call.dtor StrP slf*/((&(v1170))));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1171))));
  return (id_1882/*lop Str Str*/());
  (id_1883/*op void .call.dtor StrP slf*/((&(v1170))));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1171))));
} panic("reached function end without returning anything op Str * str s i64 i\n");}

id_1446/*Str*/ id_1907/*lop Str $ str s*/(str v1180) {{
  return (id_1891/*lop Str Str str s*/((v1180)));
} panic("reached function end without returning anything lop Str $ str s\n");}

id_1445/*VecIterRange<char>*/ id_1908/*lop VecIterRange<char> iter str s*/(str v1181) {{
  id_1446/*Str*/ v1183; /*tmp_rval_1182*/
  (id_1883/*op void .call.dtor StrP slf*/((&(v1183))));
  return (id_1885/*lop VecIterRange<char> iter StrR s*/(&(*(((v1183)=(id_1891/*lop Str Str str s*/((v1181)))), (&(v1183))))));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1183))));
} panic("reached function end without returning anything lop VecIterRange<char> iter str s\n");}

str id_1909/*lop str frog*/() {{
  return ((str)"         _____\n       /       \\__\n     /             \\\n   /   ^    ^        |\n  |     ..            |\n  /|        _/       / \n / .\\_____/         /\n/U\\|    \\___|   |__/\n            /  /\n            |/U\\ ");
} panic("reached function end without returning anything lop str frog\n");}

f64 id_1910/*lop f64 zh_sqrt f64 x*/(f64 v1184) {{
  f64 v1185; /*z*/
  ((v1185)=((f64)1.000000));
  {
      i64 v1193; /*i*/
      id_1435/*RangeIter<i64>*/ v1192; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1191; /*tmp_rval_1190*/
      id_1435/*RangeIter<i64>*/ v1189; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1188; /*tmp_rval_1187*/
      id_1436/*RangeIterRange<i64>*/ v1186; /*__range*/
      ((v1186)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((i64)10))))));
      ((v1192)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1191)=(v1186)), (&(v1191))))))));
      ((v1189)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1188)=(v1186)), (&(v1188))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1189), (v1192)))) {
        ((v1193)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1189))));
        (id_1609/*op void -= f64R a f64 b*/(&(v1185), (((((((v1185))*((v1185))))-((v1184))))/(((((f64)2.000000))*((v1185)))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1189)));
      }
    }
  return (v1185);
} panic("reached function end without returning anything lop f64 zh_sqrt f64 x\n");}

id_1447/*V2*/ id_1911/*lop V2 V2 f64 x f64 y*/(f64 v1194, f64 v1195) {{
  id_1447/*V2*/ v1196; /*slf*/
  (((&(v1196))->id_1462/*x*/)=(v1194));
  (((&(v1196))->id_1463/*y*/)=(v1195));
  return (v1196);
} panic("reached function end without returning anything lop V2 V2 f64 x f64 y\n");}

id_1447/*V2*/ id_1912/*op V2 + V2 a V2 b*/(id_1447/*V2*/ v1197, id_1447/*V2*/ v1198) {{
  (id_1608/*op void += f64R a f64 b*/(&((&(v1197))->id_1462/*x*/), ((&(v1198))->id_1462/*x*/)));
  (id_1608/*op void += f64R a f64 b*/(&((&(v1197))->id_1463/*y*/), ((&(v1198))->id_1463/*y*/)));
  return (v1197);
} panic("reached function end without returning anything op V2 + V2 a V2 b\n");}

id_1447/*V2*/ id_1913/*op V2 * V2 a V2 b*/(id_1447/*V2*/ v1199, id_1447/*V2*/ v1200) {{
  id_1447/*V2*/ v1201; /*res*/
  (((&(v1201))->id_1462/*x*/)=((((((&(v1199))->id_1462/*x*/))*(((&(v1200))->id_1462/*x*/))))-(((((&(v1199))->id_1463/*y*/))*(((&(v1200))->id_1463/*y*/))))));
  (((&(v1201))->id_1463/*y*/)=((((((&(v1199))->id_1462/*x*/))*(((&(v1200))->id_1463/*y*/))))+(((((&(v1199))->id_1463/*y*/))*(((&(v1200))->id_1462/*x*/))))));
  return (v1201);
} panic("reached function end without returning anything op V2 * V2 a V2 b\n");}

f64 id_1914/*lop f64 abs V2 a*/(id_1447/*V2*/ v1202) {{
  return (id_1910/*lop f64 zh_sqrt f64 x*/(((((((&(v1202))->id_1462/*x*/))*(((&(v1202))->id_1462/*x*/))))+(((((&(v1202))->id_1463/*y*/))*(((&(v1202))->id_1463/*y*/)))))));
} panic("reached function end without returning anything lop f64 abs V2 a\n");}

void id_1915/*lop void put V2 a*/(id_1447/*V2*/ v1203){
  (printf("%f", ((&(v1203))->id_1462/*x*/)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1203))->id_1463/*y*/)));
}

void id_1916/*lop void out V2 a*/(id_1447/*V2*/ v1204){
  (printf("%f", ((&(v1204))->id_1462/*x*/)));
  (printf("%s", ((str)" ")));
  (printf("%f", ((&(v1204))->id_1463/*y*/)));
  (printf("%s\n", ((str)"")));
}

id_1424/*Out*/ id_1917/*rop Out < V2 i*/(id_1447/*V2*/ v1205) {{
  (id_1916/*lop void out V2 a*/((v1205)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < V2 i\n");}

id_1424/*Out*/ id_1918/*lop Out < V2 i*/(id_1447/*V2*/ v1206) {{
  ((id_1915/*lop void put V2 a*/((v1206))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < V2 i\n");}

id_1424/*Out*/ id_1919/*op Out < Out o V2 i*/(id_1424/*Out*/ v1207, id_1447/*V2*/ v1208) {{
  ((id_1915/*lop void put V2 a*/((v1208))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o V2 i\n");}

id_1448/*Rng*/ id_1920/*lop Rng Rng i64 seed*/(i64 v1209) {{
  id_1448/*Rng*/ v1210; /*slf*/
  (((&(v1210))->id_1464/*seed*/)=(v1209));
  return (v1210);
} panic("reached function end without returning anything lop Rng Rng i64 seed\n");}

id_1448/*Rng*/ id_1921/*lop Rng Rng*/() {{
  return (id_1920/*lop Rng Rng i64 seed*/(((i64)5323)));
} panic("reached function end without returning anything lop Rng Rng\n");}

i64 id_1922/*op i64 .call.call RngP slf*/(id_1448/*Rng*/* v1211) {{
  ((((v1211))->id_1464/*seed*/)=((((((i64)8253729))*((((v1211))->id_1464/*seed*/))))+(((i64)2396403))));
  return (((((v1211))->id_1464/*seed*/))%(((i64)32767)));
} panic("reached function end without returning anything op i64 .call.call RngP slf\n");}

void id_1923/*lop void mandelbrot i64 steps f64 ox f64 oy f64 scale*/(i64 v1212, f64 v1213, f64 v1214, f64 v1215){
  f64 v1407; /*y*/
  id_1449/*Vec<Str>*/ v1406; /*v*/
  ((v1406)=(id_1948/*lop Vec<Str> Vec<Str>*/()));
  ((v1407)=(((v1214))-(((((f64)1.000000))*((v1215))))));
  while ((((v1407))<((((v1214))+(((((f64)1.000000))*((v1215)))))))) {
    f64 v1409; /*x*/
    id_1446/*Str*/ v1408; /*s*/
    ((v1408)=(id_1882/*lop Str Str*/()));
    ((v1409)=(((v1213))-(((((f64)1.000000))*((v1215))))));
    while ((((v1409))<((((v1213))+(((((f64)1.000000))*((v1215)))))))) {
      i64 v1413; /*i*/
      bool v1412; /*f*/
      id_1447/*V2*/ v1411; /*c*/
      id_1447/*V2*/ v1410; /*z*/
      (((v1410)=(id_1911/*lop V2 V2 f64 x f64 y*/(((f64)0.000000), ((f64)0.000000)))), ((v1411)=(id_1911/*lop V2 V2 f64 x f64 y*/((v1409), (v1407)))));
      ((v1412)=((bool)1));
      ((v1413)=((i64)0));
      while ((((((v1413))<((v1212))))&&((v1412)))) {
        ((v1410)=(id_1912/*op V2 + V2 a V2 b*/((id_1913/*op V2 * V2 a V2 b*/((v1410), (v1410))), (v1411))));
        if ((((id_1914/*lop f64 abs V2 a*/((v1410))))>(((f64)2.000000)))) {
          ((v1412)=((bool)0));
        }
        (id_1520/*op void += i64R a i64 b*/(&(v1413), ((i64)1)));
      }
      if ((v1412)) {
        (id_1898/*op void += StrR a str b*/(&(v1408), ((str)"*")));
      } else {
        (id_1898/*op void += StrR a str b*/(&(v1408), ((str)" ")));
      }
      (id_1608/*op void += f64R a f64 b*/(&(v1409), ((((f64)0.050000))*((v1215)))));
    }
    (id_1950/*op void += Vec<Str>R slf Str val*/(&(v1406), (v1408)));
    (id_1883/*op void .call.dtor StrP slf*/((&(v1408))));
    (id_1608/*op void += f64R a f64 b*/(&(v1407), ((((f64)0.100000))*((v1215)))));
  }
  (id_1935/*op void .call.println Vec<Str>P slf*/((&(v1406))));
  (id_1945/*op void .call.dtor Vec<Str>P slf*/((&(v1406))));
}

id_1450/*VecIter<Str>*/ id_1924/*lop VecIter<Str> VecIter<Str> StrP ptr*/(id_1446/*Str*/* v1262) {{
  id_1450/*VecIter<Str>*/ v1263; /*slf*/
  (((&(v1263))->id_1460/*ptr*/)=(v1262));
  return (v1263);
} panic("reached function end without returning anything lop VecIter<Str> VecIter<Str> StrP ptr\n");}

void id_1925/*lop void ++ VecIter<Str>R slf*/(id_1450/*VecIter<Str>*/* v1264){
  (((&(*v1264))->id_1460/*ptr*/)=((id_1446/*Str*/*)((((i64)((&(*v1264))->id_1460/*ptr*/)))+(((((i64)1))*((sizeof(id_1446/*Str*/))))))));
}

id_1450/*VecIter<Str>*/ id_1926/*op VecIter<Str> + VecIter<Str> slf i64 i*/(id_1450/*VecIter<Str>*/ v1265, i64 v1266) {{
  (((&(v1265))->id_1460/*ptr*/)=((id_1446/*Str*/*)((((i64)((&(v1265))->id_1460/*ptr*/)))+((((v1266))*((sizeof(id_1446/*Str*/))))))));
  return (v1265);
} panic("reached function end without returning anything op VecIter<Str> + VecIter<Str> slf i64 i\n");}

bool id_1927/*op bool != VecIter<Str> a VecIter<Str> b*/(id_1450/*VecIter<Str>*/ v1267, id_1450/*VecIter<Str>*/ v1268) {{
  return ((((i64)((&(v1267))->id_1460/*ptr*/)))!=(((i64)((&(v1268))->id_1460/*ptr*/))));
} panic("reached function end without returning anything op bool != VecIter<Str> a VecIter<Str> b\n");}

id_1446/*Str*/* id_1928/*lop StrR * VecIter<Str> slf*/(id_1450/*VecIter<Str>*/ v1269) {{
  return &(*((&(v1269))->id_1460/*ptr*/));
} panic("reached function end without returning anything lop StrR * VecIter<Str> slf\n");}

id_1450/*VecIter<Str>*/ id_1929/*op VecIter<Str> .call.begin VecIterRange<Str>P slf*/(id_1451/*VecIterRange<Str>*/* v1272) {{
  return (((v1272))->id_1454/*begin*/);
} panic("reached function end without returning anything op VecIter<Str> .call.begin VecIterRange<Str>P slf\n");}

id_1450/*VecIter<Str>*/ id_1930/*op VecIter<Str> .call.end VecIterRange<Str>P slf*/(id_1451/*VecIterRange<Str>*/* v1273) {{
  return (((v1273))->id_1455/*end*/);
} panic("reached function end without returning anything op VecIter<Str> .call.end VecIterRange<Str>P slf\n");}

id_1451/*VecIterRange<Str>*/ id_1931/*lop VecIterRange<Str> VecIterRange<Str> VecIter<Str> begin VecIter<Str> end*/(id_1450/*VecIter<Str>*/ v1274, id_1450/*VecIter<Str>*/ v1275) {{
  id_1451/*VecIterRange<Str>*/ v1276; /*slf*/
  (((&(v1276))->id_1454/*begin*/)=(v1274));
  (((&(v1276))->id_1455/*end*/)=(v1275));
  return (v1276);
} panic("reached function end without returning anything lop VecIterRange<Str> VecIterRange<Str> VecIter<Str> begin VecIter<Str> end\n");}

id_1446/*Str*/* id_1932/*op StrP .call.atP Vec<Str>P slf i64 pos*/(id_1449/*Vec<Str>*/* v1216, i64 v1217) {{
  return ((id_1446/*Str*/*)((id_1446/*Str*/*)((((i64)(((v1216))->id_1458/*head*/)))+((((v1217))*((sizeof(id_1446/*Str*/))))))));
} panic("reached function end without returning anything op StrP .call.atP Vec<Str>P slf i64 pos\n");}

id_1446/*Str*/* id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/(id_1449/*Vec<Str>*/* v1218, i64 v1219) {{
  return &(*(id_1932/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1218), (v1219))));
} panic("reached function end without returning anything op StrR .call.at Vec<Str>P slf i64 pos\n");}

void id_1934/*op void .call.print Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1220){
  (printf("%s", ((str)"[")));
  {
      i64 v1228; /*i*/
      id_1435/*RangeIter<i64>*/ v1227; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1226; /*tmp_rval_1225*/
      id_1435/*RangeIter<i64>*/ v1224; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1223; /*tmp_rval_1222*/
      id_1436/*RangeIterRange<i64>*/ v1221; /*__range*/
      ((v1221)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1220))->id_1459/*size*/))))));
      ((v1227)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1226)=(v1221)), (&(v1226))))))));
      ((v1224)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1223)=(v1221)), (&(v1223))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1224), (v1227)))) {
        ((v1228)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1224))));
        if ((!((!((v1228)))))) {
          (printf("%s", ((str)" ")));
        }
        (id_1895/*lop void put StrR s*/(&(*(id_1932/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1220), (v1228))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1224)));
      }
    }
  (printf("%s", ((str)"]")));
}

void id_1935/*op void .call.println Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1229){
  {
      i64 v1237; /*i*/
      id_1435/*RangeIter<i64>*/ v1236; /*__end*/
      id_1435/*RangeIter<i64>*/ v1233; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1232; /*tmp_rval_1231*/
      id_1436/*RangeIterRange<i64>*/ v1235; /*tmp_rval_1234*/
      id_1436/*RangeIterRange<i64>*/ v1230; /*__range*/
      ((v1230)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1229))->id_1459/*size*/))))));
      ((v1236)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1235)=(v1230)), (&(v1235))))))));
      ((v1233)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1232)=(v1230)), (&(v1232))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1233), (v1236)))) {
        ((v1237)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1233))));
        (id_1894/*lop void out StrR s*/(&(*(id_1932/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1229), (v1237))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1233)));
      }
    }
}

void id_1936/*op void .call.double_cap Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1238){
  i64 v1239; /*ncap*/
  ((v1239)=(((v1238))->id_1457/*cap*/));
  if ((((v1239))==(((i64)0)))) {
    ((v1239)=((i64)1));
    ((((v1238))->id_1458/*head*/)=((id_1446/*Str*/*)(alloc((sizeof(id_1446/*Str*/))))));
    ((((v1238))->id_1457/*cap*/)=(v1239));
  } else {
    id_1446/*Str*/* v1240; /*new_head*/
    (id_1524/*op void *= i64R a i64 b*/(&(v1239), ((i64)2)));
    ((v1240)=((id_1446/*Str*/*)(alloc((((v1239))*((sizeof(id_1446/*Str*/))))))));
    {
        i64 v1248; /*i*/
        id_1435/*RangeIter<i64>*/ v1247; /*__end*/
        id_1436/*RangeIterRange<i64>*/ v1246; /*tmp_rval_1245*/
        id_1435/*RangeIter<i64>*/ v1244; /*__cur*/
        id_1436/*RangeIterRange<i64>*/ v1243; /*tmp_rval_1242*/
        id_1436/*RangeIterRange<i64>*/ v1241; /*__range*/
        ((v1241)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1238))->id_1459/*size*/))))));
        ((v1247)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1246)=(v1241)), (&(v1246))))))));
        ((v1244)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1243)=(v1241)), (&(v1243))))))));
        while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1244), (v1247)))) {
          ((v1248)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1244))));
          ((*((id_1446/*Str*/*)((((i64)(v1240)))+((((v1248))*((sizeof(id_1446/*Str*/))))))))=(id_1892/*lop Str Str StrR s*/(&(*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1238), (v1248))))));
          (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1244)));
        }
      }
    (free((void*) ((i64)(((v1238))->id_1458/*head*/))));
    ((((v1238))->id_1458/*head*/)=(v1240));
  }
  ((((v1238))->id_1457/*cap*/)=(v1239));
}

void id_1937/*op void .call.push_back Vec<Str>P slf Str val*/(id_1449/*Vec<Str>*/* v1249, id_1446/*Str*/ v1250){
  if ((((((v1249))->id_1459/*size*/))==((((v1249))->id_1457/*cap*/)))) {
    (id_1936/*op void .call.double_cap Vec<Str>P slf*/((v1249)));
  }
  ((*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1249), (((v1249))->id_1459/*size*/)))=(id_1892/*lop Str Str StrR s*/(&(v1250))));
  (*id_1530/*lop i64R ++ i64R x*/(&(((v1249))->id_1459/*size*/)));
}

void id_1938/*op void .call.pop_back Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1251){
  (*id_1531/*lop i64R -- i64R x*/(&(((v1251))->id_1459/*size*/)));
}

void id_1939/*op void .call.erase Vec<Str>P slf i64 pos*/(id_1449/*Vec<Str>*/* v1252, i64 v1253){
  {
      i64 v1261; /*i*/
      id_1435/*RangeIter<i64>*/ v1260; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1259; /*tmp_rval_1258*/
      id_1435/*RangeIter<i64>*/ v1257; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1256; /*tmp_rval_1255*/
      id_1436/*RangeIterRange<i64>*/ v1254; /*__range*/
      ((v1254)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/((((v1253))+(((i64)1))), (((v1252))->id_1459/*size*/))))));
      ((v1260)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1259)=(v1254)), (&(v1259))))))));
      ((v1257)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1256)=(v1254)), (&(v1256))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1257), (v1260)))) {
        ((v1261)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1257))));
        ((*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1252), (((v1261))-(((i64)1)))))=(id_1892/*lop Str Str StrR s*/(&(*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1252), (v1261))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1257)));
      }
    }
  (id_1938/*op void .call.pop_back Vec<Str>P slf*/((v1252)));
}

id_1450/*VecIter<Str>*/ id_1940/*op VecIter<Str> .call.begin Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1270) {{
  return (id_1924/*lop VecIter<Str> VecIter<Str> StrP ptr*/((((v1270))->id_1458/*head*/)));
} panic("reached function end without returning anything op VecIter<Str> .call.begin Vec<Str>P slf\n");}

id_1450/*VecIter<Str>*/ id_1941/*op VecIter<Str> .call.end Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1271) {{
  return (id_1924/*lop VecIter<Str> VecIter<Str> StrP ptr*/((id_1932/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1271), (((v1271))->id_1459/*size*/)))));
} panic("reached function end without returning anything op VecIter<Str> .call.end Vec<Str>P slf\n");}

id_1451/*VecIterRange<Str>*/ id_1942/*lop VecIterRange<Str> iter Vec<Str>R slf*/(id_1449/*Vec<Str>*/* v1277) {{
  id_1451/*VecIterRange<Str>*/ v1278; /*it*/
  (((&(v1278))->id_1454/*begin*/)=(id_1940/*op VecIter<Str> .call.begin Vec<Str>P slf*/((&(*v1277)))));
  (((&(v1278))->id_1455/*end*/)=(id_1941/*op VecIter<Str> .call.end Vec<Str>P slf*/((&(*v1277)))));
  return (v1278);
} panic("reached function end without returning anything lop VecIterRange<Str> iter Vec<Str>R slf\n");}

id_1446/*Str*/* id_1943/*op StrR .call.front Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1279) {{
  return &(*(((v1279))->id_1458/*head*/));
} panic("reached function end without returning anything op StrR .call.front Vec<Str>P slf\n");}

id_1446/*Str*/* id_1944/*op StrR .call.back Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1280) {{
  return &(*(id_1932/*op StrP .call.atP Vec<Str>P slf i64 pos*/((v1280), (((((v1280))->id_1459/*size*/))-(((i64)1))))));
} panic("reached function end without returning anything op StrR .call.back Vec<Str>P slf\n");}

void id_1945/*op void .call.dtor Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1281){
  if ((!((!(((i64)(((v1281))->id_1458/*head*/))))))) {
    (free((void*) ((i64)(((v1281))->id_1458/*head*/))));
    ((((v1281))->id_1459/*size*/)=((i64)0));
    ((((v1281))->id_1457/*cap*/)=((i64)0));
    ((((v1281))->id_1458/*head*/)=((id_1446/*Str*/*)((i64)0)));
  }
}

id_1449/*Vec<Str>*/ id_1946/*lop Vec<Str> Vec<Str> i64 size*/(i64 v1282) {{
  id_1449/*Vec<Str>*/ v1283; /*slf*/
  (((&(v1283))->id_1458/*head*/)=((id_1446/*Str*/*)((i64)0)));
  (((&(v1283))->id_1459/*size*/)=((i64)0));
  (((&(v1283))->id_1457/*cap*/)=((i64)0));
  while (((((&(v1283))->id_1457/*cap*/))<((v1282)))) {
    (id_1936/*op void .call.double_cap Vec<Str>P slf*/((&(v1283))));
  }
  (((&(v1283))->id_1459/*size*/)=(v1282));
  (((&(v1283))->id_1457/*cap*/)=(v1282));
  {
      i64 v1291; /*i*/
      id_1435/*RangeIter<i64>*/ v1290; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1289; /*tmp_rval_1288*/
      id_1435/*RangeIter<i64>*/ v1287; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1286; /*tmp_rval_1285*/
      id_1436/*RangeIterRange<i64>*/ v1284; /*__range*/
      ((v1284)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1283))->id_1459/*size*/))))));
      ((v1290)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1289)=(v1284)), (&(v1289))))))));
      ((v1287)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1286)=(v1284)), (&(v1286))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1287), (v1290)))) {
        ((v1291)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1287))));
        ((*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1283)), (v1291)))=(id_1882/*lop Str Str*/()));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1287)));
      }
    }
  return (v1283);
  (id_1945/*op void .call.dtor Vec<Str>P slf*/((&(v1283))));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> i64 size\n");}

id_1449/*Vec<Str>*/ id_1947/*lop Vec<Str> Vec<Str> i64 size Str default*/(i64 v1292, id_1446/*Str*/ v1293) {{
  id_1449/*Vec<Str>*/ v1294; /*slf*/
  ((v1294)=(id_1946/*lop Vec<Str> Vec<Str> i64 size*/((v1292))));
  {
      i64 v1302; /*i*/
      id_1435/*RangeIter<i64>*/ v1301; /*__end*/
      id_1435/*RangeIter<i64>*/ v1298; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1300; /*tmp_rval_1299*/
      id_1436/*RangeIterRange<i64>*/ v1297; /*tmp_rval_1296*/
      id_1436/*RangeIterRange<i64>*/ v1295; /*__range*/
      ((v1295)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(v1294))->id_1459/*size*/))))));
      ((v1301)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1300)=(v1295)), (&(v1300))))))));
      ((v1298)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1297)=(v1295)), (&(v1297))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1298), (v1301)))) {
        ((v1302)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1298))));
        ((*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1294)), (v1302)))=(id_1892/*lop Str Str StrR s*/(&(v1293))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1298)));
      }
    }
  (id_1883/*op void .call.dtor StrP slf*/((&(v1293))));
  return (v1294);
  (id_1945/*op void .call.dtor Vec<Str>P slf*/((&(v1294))));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> i64 size Str default\n");}

id_1449/*Vec<Str>*/ id_1948/*lop Vec<Str> Vec<Str>*/() {{
  return (id_1946/*lop Vec<Str> Vec<Str> i64 size*/(((i64)0)));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str>\n");}

id_1449/*Vec<Str>*/ id_1949/*lop Vec<Str> Vec<Str> Vec<Str>R other*/(id_1449/*Vec<Str>*/* v1303) {{
  id_1449/*Vec<Str>*/ v1304; /*slf*/
  ((v1304)=(id_1946/*lop Vec<Str> Vec<Str> i64 size*/(((&(*v1303))->id_1459/*size*/))));
  {
      i64 v1312; /*i*/
      id_1435/*RangeIter<i64>*/ v1311; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1310; /*tmp_rval_1309*/
      id_1435/*RangeIter<i64>*/ v1308; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1307; /*tmp_rval_1306*/
      id_1436/*RangeIterRange<i64>*/ v1305; /*__range*/
      ((v1305)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1303))->id_1459/*size*/))))));
      ((v1311)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1310)=(v1305)), (&(v1310))))))));
      ((v1308)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1307)=(v1305)), (&(v1307))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1308), (v1311)))) {
        ((v1312)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1308))));
        ((*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(v1304)), (v1312)))=(id_1892/*lop Str Str StrR s*/(&(*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(*v1303)), (v1312))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1308)));
      }
    }
  return (v1304);
  (id_1945/*op void .call.dtor Vec<Str>P slf*/((&(v1304))));
} panic("reached function end without returning anything lop Vec<Str> Vec<Str> Vec<Str>R other\n");}

void id_1950/*op void += Vec<Str>R slf Str val*/(id_1449/*Vec<Str>*/* v1313, id_1446/*Str*/ v1314){
  (id_1937/*op void .call.push_back Vec<Str>P slf Str val*/((&(*v1313)), (v1314)));
}

void id_1951/*op void += Vec<Str>R slf Vec<Str>R other*/(id_1449/*Vec<Str>*/* v1315, id_1449/*Vec<Str>*/* v1316){
  {
      i64 v1324; /*i*/
      id_1435/*RangeIter<i64>*/ v1323; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1322; /*tmp_rval_1321*/
      id_1435/*RangeIter<i64>*/ v1320; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1319; /*tmp_rval_1318*/
      id_1436/*RangeIterRange<i64>*/ v1317; /*__range*/
      ((v1317)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), ((&(*v1316))->id_1459/*size*/))))));
      ((v1323)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1322)=(v1317)), (&(v1322))))))));
      ((v1320)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1319)=(v1317)), (&(v1319))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1320), (v1323)))) {
        ((v1324)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1320))));
        (id_1937/*op void .call.push_back Vec<Str>P slf Str val*/((&(*v1315)), (*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((&(*v1316)), (v1324)))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1320)));
      }
    }
}

id_1449/*Vec<Str>*/ id_1952/*op Vec<Str> ,, Str a Str b*/(id_1446/*Str*/ v1325, id_1446/*Str*/ v1326) {{
  id_1449/*Vec<Str>*/ v1327; /*slf*/
  ((v1327)=(id_1948/*lop Vec<Str> Vec<Str>*/()));
  (id_1950/*op void += Vec<Str>R slf Str val*/(&(v1327), (v1325)));
  (id_1950/*op void += Vec<Str>R slf Str val*/(&(v1327), (v1326)));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1325))));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1326))));
  return (v1327);
  (id_1945/*op void .call.dtor Vec<Str>P slf*/((&(v1327))));
} panic("reached function end without returning anything op Vec<Str> ,, Str a Str b\n");}

id_1449/*Vec<Str>*/* id_1953/*op Vec<Str>R ,, Vec<Str>R v Str a*/(id_1449/*Vec<Str>*/* v1328, id_1446/*Str*/ v1329) {{
  (id_1950/*op void += Vec<Str>R slf Str val*/(&(*v1328), (v1329)));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1329))));
  return &(*v1328);
} panic("reached function end without returning anything op Vec<Str>R ,, Vec<Str>R v Str a\n");}

void id_1954/*lop void put Vec<Str>R slf*/(id_1449/*Vec<Str>*/* v1330){
  (id_1934/*op void .call.print Vec<Str>P slf*/((&(*v1330))));
}

void id_1955/*lop void out Vec<Str>R slf*/(id_1449/*Vec<Str>*/* v1331){
  (id_1934/*op void .call.print Vec<Str>P slf*/((&(*v1331))));
  (printf("%s\n", ((str)"")));
}

id_1424/*Out*/ id_1956/*rop Out < Vec<Str>R i*/(id_1449/*Vec<Str>*/* v1332) {{
  (id_1955/*lop void out Vec<Str>R slf*/(&(*v1332)));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything rop Out < Vec<Str>R i\n");}

id_1424/*Out*/ id_1957/*lop Out < Vec<Str>R i*/(id_1449/*Vec<Str>*/* v1333) {{
  ((id_1954/*lop void put Vec<Str>R slf*/(&(*v1333))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything lop Out < Vec<Str>R i\n");}

id_1424/*Out*/ id_1958/*op Out < Out o Vec<Str>R i*/(id_1424/*Out*/ v1334, id_1449/*Vec<Str>*/* v1335) {{
  ((id_1954/*lop void put Vec<Str>R slf*/(&(*v1335))), (printf("%s", ((str)" "))));
  return (id_1614/*lop Out Out*/());
} panic("reached function end without returning anything op Out < Out o Vec<Str>R i\n");}

id_1446/*Str*/* id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/(id_1449/*Vec<Str>*/* v1336, i64 v1337) {{
  if ((((v1337))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v1337), (((v1336))->id_1459/*size*/)));
  }
  return &(*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1336), (v1337)));
} panic("reached function end without returning anything op StrR .call.sub Vec<Str>P slf i64 id\n");}

id_1449/*Vec<Str>*/ id_1960/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/(id_1449/*Vec<Str>*/* v1338, i64 v1339, i64 v1340) {{
  id_1449/*Vec<Str>*/ v1341; /*res*/
  ((v1341)=(id_1946/*lop Vec<Str> Vec<Str> i64 size*/(((i64)0))));
  {
      i64 v1349; /*i*/
      id_1435/*RangeIter<i64>*/ v1348; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1347; /*tmp_rval_1346*/
      id_1435/*RangeIter<i64>*/ v1345; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1344; /*tmp_rval_1343*/
      id_1436/*RangeIterRange<i64>*/ v1342; /*__range*/
      ((v1342)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/((v1339), (v1340))))));
      ((v1348)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1347)=(v1342)), (&(v1347))))))));
      ((v1345)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1344)=(v1342)), (&(v1344))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1345), (v1348)))) {
        ((v1349)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1345))));
        (id_1937/*op void .call.push_back Vec<Str>P slf Str val*/((&(v1341)), (*id_1933/*op StrR .call.at Vec<Str>P slf i64 pos*/((v1338), (v1349)))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1345)));
      }
    }
  return (v1341);
  (id_1945/*op void .call.dtor Vec<Str>P slf*/((&(v1341))));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end\n");}

id_1449/*Vec<Str>*/ id_1961/*op Vec<Str> .call.sub Vec<Str>P slf Range<i64> r*/(id_1449/*Vec<Str>*/* v1350, id_1434/*Range<i64>*/ v1351) {{
  i64 v1353; /*end*/
  i64 v1352; /*begin*/
  (((v1352)=((&(v1351))->id_1454/*begin*/)), ((v1353)=((&(v1351))->id_1455/*end*/)));
  if ((((v1352))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v1352), (((v1350))->id_1459/*size*/)));
  }
  if ((((v1352))<(((i64)0)))) {
    ((v1352)=((i64)0));
  }
  if ((((v1353))<(((i64)0)))) {
    (id_1520/*op void += i64R a i64 b*/(&(v1353), (((v1350))->id_1459/*size*/)));
  }
  if ((((v1353))>((((v1350))->id_1459/*size*/)))) {
    ((v1353)=(((v1350))->id_1459/*size*/));
  }
  return (id_1960/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/((v1350), (v1352), (v1353)));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf Range<i64> r\n");}

id_1449/*Vec<Str>*/ id_1962/*op Vec<Str> .call.sub Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1354) {{
  return (id_1960/*op Vec<Str> .call.sub Vec<Str>P slf i64 begin i64 end*/((v1354), ((i64)0), (((v1354))->id_1459/*size*/)));
} panic("reached function end without returning anything op Vec<Str> .call.sub Vec<Str>P slf\n");}

bool id_1963/*op bool < Vec<Str>R a Vec<Str>R b*/(id_1449/*Vec<Str>*/* v1355, id_1449/*Vec<Str>*/* v1356) {{
  {
      i64 v1364; /*i*/
      id_1435/*RangeIter<i64>*/ v1363; /*__end*/
      id_1436/*RangeIterRange<i64>*/ v1362; /*tmp_rval_1361*/
      id_1435/*RangeIter<i64>*/ v1360; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1359; /*tmp_rval_1358*/
      id_1436/*RangeIterRange<i64>*/ v1357; /*__range*/
      ((v1357)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (id_1476/*lop i64 min i64 a i64 b*/(((&(*v1355))->id_1459/*size*/), ((&(*v1356))->id_1459/*size*/))))))));
      ((v1363)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1362)=(v1357)), (&(v1362))))))));
      ((v1360)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1359)=(v1357)), (&(v1359))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1360), (v1363)))) {
        ((v1364)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1360))));
        if ((id_1904/*op bool < StrR a StrR b*/(&(*id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1355)), (v1364))), &(*id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1356)), (v1364)))))) {
          return ((bool)1);
        }
 else if ((id_1904/*op bool < StrR a StrR b*/(&(*id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1356)), (v1364))), &(*id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(*v1355)), (v1364)))))) {
          return ((bool)0);
        }
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1360)));
      }
    }
  if (((((&(*v1355))->id_1459/*size*/))<(((&(*v1356))->id_1459/*size*/)))) {
    return ((bool)1);
  }
 else if (((((&(*v1355))->id_1459/*size*/))>(((&(*v1356))->id_1459/*size*/)))) {
    return ((bool)0);
  }
  return ((bool)0);
} panic("reached function end without returning anything op bool < Vec<Str>R a Vec<Str>R b\n");}

void id_1964/*lop void swap StrP a StrP b*/(id_1446/*Str*/* v1365, id_1446/*Str*/* v1366){
  id_1446/*Str*/ v1367; /*t*/
  ((v1367)=(*(v1365)));
  ((*(v1365))=(id_1892/*lop Str Str StrR s*/(&(*(v1366)))));
  ((*(v1366))=(id_1892/*lop Str Str StrR s*/(&(v1367))));
  (id_1883/*op void .call.dtor StrP slf*/((&(v1367))));
}

id_1446/*Str*/* id_1965/*lop StrP partition StrP lo StrP hi*/(id_1446/*Str*/* v1368, id_1446/*Str*/* v1369) {{
  id_1446/*Str*/* v1372; /*j*/
  id_1446/*Str*/* v1371; /*i*/
  id_1446/*Str*/* v1370; /*pivot*/
  (((v1370)=((id_1446/*Str*/*)((((i64)(v1369)))-(((((i64)1))*((sizeof(id_1446/*Str*/)))))))), ((v1371)=(v1368)), ((v1372)=(v1368)));
  ((v1372)=(v1368));
  while (((((i64)(v1372)))!=(((i64)(v1370))))) {
    if ((id_1904/*op bool < StrR a StrR b*/(&(*(v1372)), &(*(v1370))))) {
      (id_1964/*lop void swap StrP a StrP b*/((v1371), (v1372)));
      ((v1371)=((id_1446/*Str*/*)((((i64)(v1371)))+(((((i64)1))*((sizeof(id_1446/*Str*/))))))));
    }
    ((v1372)=((id_1446/*Str*/*)((((i64)(v1372)))+(((((i64)1))*((sizeof(id_1446/*Str*/))))))));
  }
  (id_1964/*lop void swap StrP a StrP b*/((v1371), (v1370)));
  return (v1371);
} panic("reached function end without returning anything lop StrP partition StrP lo StrP hi\n");}

void id_1966/*lop void qsort StrP lhs StrP rhs*/(id_1446/*Str*/* v1373, id_1446/*Str*/* v1374){
  i64 v1376; /*b*/
  i64 v1375; /*a*/
  ((v1375)=((((i64)(v1374)))-(((i64)(v1373)))));
  ((v1376)=(sizeof(id_1446/*Str*/)));
  if ((((v1375))>((v1376)))) {
    id_1446/*Str*/* v1377; /*pi*/
    ((v1377)=(id_1965/*lop StrP partition StrP lo StrP hi*/((v1373), (v1374))));
    (id_1966/*lop void qsort StrP lhs StrP rhs*/((v1373), (v1377)));
    ((v1377)=((id_1446/*Str*/*)((((i64)(v1377)))+(((((i64)1))*((sizeof(id_1446/*Str*/))))))));
    (id_1966/*lop void qsort StrP lhs StrP rhs*/((v1377), (v1374)));
  }
}

void id_1967/*op void .call.sort Vec<Str>P slf*/(id_1449/*Vec<Str>*/* v1378){
  id_1450/*VecIter<Str>*/ v1382; /*tmp_rval_1381*/
  id_1450/*VecIter<Str>*/ v1380; /*tmp_rval_1379*/
  (id_1966/*lop void qsort StrP lhs StrP rhs*/(((&(*(((v1380)=(id_1940/*op VecIter<Str> .call.begin Vec<Str>P slf*/((v1378)))), (&(v1380)))))->id_1460/*ptr*/), ((&(*(((v1382)=(id_1941/*op VecIter<Str> .call.end Vec<Str>P slf*/((v1378)))), (&(v1382)))))->id_1460/*ptr*/)));
}

void id_1968/*lop void sort Vec<Str>R slf*/(id_1449/*Vec<Str>*/* v1383){
  (id_1967/*op void .call.sort Vec<Str>P slf*/((&(*v1383))));
}

id_1449/*Vec<Str>*/ id_1969/*op Vec<Str> .call.map Vec<Str>P slf F<Str StrR> f*/(id_1449/*Vec<Str>*/* v1384, id_1446/*Str*/(*v1385)(id_1446/*Str*/*)) {{
  id_1449/*Vec<Str>*/ v1386; /*r*/
  ((v1386)=(id_1946/*lop Vec<Str> Vec<Str> i64 size*/((((v1384))->id_1459/*size*/))));
  {
      id_1435/*RangeIter<i64>*/ v1393; /*__end*/
      i64 v1394; /*i*/
      id_1436/*RangeIterRange<i64>*/ v1392; /*tmp_rval_1391*/
      id_1435/*RangeIter<i64>*/ v1390; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1389; /*tmp_rval_1388*/
      id_1436/*RangeIterRange<i64>*/ v1387; /*__range*/
      ((v1387)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1384))->id_1459/*size*/))))));
      ((v1393)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1392)=(v1387)), (&(v1392))))))));
      ((v1390)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1389)=(v1387)), (&(v1389))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1390), (v1393)))) {
        ((v1394)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1390))));
        ((*id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/((&(v1386)), (v1394)))=((*(v1385))(&(*id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1384), (v1394))))));
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1390)));
      }
    }
  return (v1386);
  (id_1945/*op void .call.dtor Vec<Str>P slf*/((&(v1386))));
} panic("reached function end without returning anything op Vec<Str> .call.map Vec<Str>P slf F<Str StrR> f\n");}

id_1449/*Vec<Str>*/ id_1970/*op Vec<Str> .call.filter Vec<Str>P slf F<bool StrR> f*/(id_1449/*Vec<Str>*/* v1395, bool(*v1396)(id_1446/*Str*/*)) {{
  id_1449/*Vec<Str>*/ v1397; /*r*/
  ((v1397)=(id_1948/*lop Vec<Str> Vec<Str>*/()));
  {
      id_1435/*RangeIter<i64>*/ v1404; /*__end*/
      i64 v1405; /*i*/
      id_1436/*RangeIterRange<i64>*/ v1403; /*tmp_rval_1402*/
      id_1435/*RangeIter<i64>*/ v1401; /*__cur*/
      id_1436/*RangeIterRange<i64>*/ v1400; /*tmp_rval_1399*/
      id_1436/*RangeIterRange<i64>*/ v1398; /*__range*/
      ((v1398)=(id_1761/*lop RangeIterRange<i64> iter Range<i64> r*/((id_1751/*op Range<i64> .. i64 begin i64 end*/(((i64)0), (((v1395))->id_1459/*size*/))))));
      ((v1404)=(id_1746/*op RangeIter<i64> .call.end RangeIterRange<i64>P slf*/((&(*(((v1403)=(v1398)), (&(v1403))))))));
      ((v1401)=(id_1745/*op RangeIter<i64> .call.begin RangeIterRange<i64>P slf*/((&(*(((v1400)=(v1398)), (&(v1400))))))));
      while ((id_1744/*op bool != RangeIter<i64> a RangeIter<i64> b*/((v1401), (v1404)))) {
        ((v1405)=(id_1743/*lop i64 * RangeIter<i64> slf*/((v1401))));
        if (((*(v1396))(&(*id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1395), (v1405)))))) {
          (id_1950/*op void += Vec<Str>R slf Str val*/(&(v1397), (*id_1959/*op StrR .call.sub Vec<Str>P slf i64 id*/((v1395), (v1405)))));
        }
        (id_1742/*lop void ++ RangeIter<i64>R slf*/(&(v1401)));
      }
    }
  return (v1397);
  (id_1945/*op void .call.dtor Vec<Str>P slf*/((&(v1397))));
} panic("reached function end without returning anything op Vec<Str> .call.filter Vec<Str>P slf F<bool StrR> f\n");}

int main(int argc, char *argv[]) {
  f64 v1414; /*scale*/
  (id_1616/*lop Out < Out o*/((id_1617/*rop Out < str i*/(((str)"Mandelbrot set:")))));
  (id_1923/*lop void mandelbrot i64 steps f64 ox f64 oy f64 scale*/(((i64)50), (-(((f64)0.750000))), ((f64)0.000000), ((f64)1.300000)));
  (id_1616/*lop Out < Out o*/((id_1617/*rop Out < str i*/(((str)"Zooming [-1.39, 0.0]:")))));
  ((v1414)=((f64)2.000000));
  while ((((v1414))>(((f64)0.050000)))) {
    (id_1923/*lop void mandelbrot i64 steps f64 ox f64 oy f64 scale*/(((i64)50), (-(((f64)1.390000))), ((f64)0.000000), (v1414)));
    (id_1611/*op void *= f64R a f64 b*/(&(v1414), ((f64)0.500000)));
  }
}

