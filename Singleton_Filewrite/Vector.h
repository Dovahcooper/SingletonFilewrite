#pragma once
#include "LibSettings.h"
#include <iostream>

#define xstr(VAL) str(VAL)
#define str(VAL) #VAL

struct Vector3 {
	float x, y, z;
};

std::ostream& operator<<(std::ostream os, const Vector3& val)
{
	os << "X: " << val.x << ", Y: " << val.y << ", Z: " << val.z << std::endl;
	return os;
}