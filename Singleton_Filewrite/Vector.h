#pragma once
#include "LibSettings.h"

#define xstr(VAL) str(VAL)
#define str(VAL) #VAL

struct LIB_API Vector3 {
public:
	float x, y, z;
};