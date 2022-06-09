#include <stdio.h>
#include "valist.c"

// @zh-type ["bool _", "FILE"]

// @zh-fn ["fn FILEP fopen str filename str mode", "fopen"]
// @zh-fn ["fn i32 fclose FILEP f", "fclose"]
// @zh-fn ["fn int fseek FILEP stream int offset int origin", "fseek"]
// @zh-fn ["fn char fgetc FILEP f", "fgetc"]
// @zh-fn ["fn int ftell FILEP f", "ftell"]

// @zh-fn ["fn int SEEK_SET", "GET_SEEK_SET"]
#define GET_SEEK_SET() SEEK_SET
// @zh-fn ["fn int SEEK_END", "GET_SEEK_END"]
#define GET_SEEK_END() SEEK_END
// @zh-fn ["fn int SEEK_CUR", "GET_SEEK_CUR"]
#define GET_SEEK_CUR() SEEK_CUR

// @zh-fn ["fn printf str s VA_LIST list", "printf"]