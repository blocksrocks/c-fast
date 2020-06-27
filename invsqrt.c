#include "invsqrt.h"

float invsqrt(float x) {
	int i = 0x5F3759DF - (*(long*)&x >> 1);
	float y = *(float*)&i;
	y *= 1.5f - 0.5f*x*y*y;//iter 1
	//y *= 1.5f - 0.5f*x*y*y;//iter 2
	return y;
}