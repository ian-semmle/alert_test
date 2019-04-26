
int vbaq;

void fun_baq(int vbaq) {
}

#define FUNX fun_xxx2
#define NAMEX vxxx2
#include "a.h"
#undef NAMEX
#undef FUNX

#define FUNX fun_xxx1
#define NAMEX vxxx1
#include "a.h"
#undef NAMEX
#undef FUNX

#define FUNY fun_yyy2
#define NAMEY vyyy2
#include "b.h"
#undef NAMEY
#undef FUNY

#define FUNY fun_yyy1
#define NAMEY vyyy1
#include "b.h"
#undef NAMEY
#undef FUNY

#define FUNY fun_yyy3
#define NAMEY vyyy3
#include "b.h"
#undef NAMEY
#undef FUNY

