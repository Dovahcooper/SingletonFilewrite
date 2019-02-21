#pragma once
#include "LibSettings.h"
#include <string>

struct Vector3;

class LIB_API RunnerWrite
{
public:
	~RunnerWrite();

	bool fileWrite(Vector3 values, std::string fileName = "RunnerPositionData.txt");

	RunnerWrite* getInstance();

private:
	RunnerWrite();
	RunnerWrite* instance;
};

