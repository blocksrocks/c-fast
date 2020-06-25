#include "abs.h"
#include "tdefs.h"

u8 abs8(s8 x) {
	u8 m = x >> 7;
	return (x^m) - m;
}

u16 abs16(s16 x) {
	u16 m = x >> 15;
	return (x^m) - m;
}

u32 abs32(s32 x) {
	u32 m = x >> 31;
	return (x^m) - m;
}
