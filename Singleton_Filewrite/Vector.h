#pragma once
#include "LibSettings.h"
#include <iostream>
#include <fstream>

#define xstr(VAL) str(VAL)
#define str(VAL) #VAL

struct Vector3 {
public:
	float x, y, z;
};

std::fstream& operator<<(std::fstream &fs, const Vector3& val)
{
	fs << "X: " << val.x << ", Y: " << val.y << ", Z: " << val.z << std::endl;
	return fs;
}