#pragma once
#include "LibSettings.h"
#include <string>

struct Vector3;

class LIB_API RunnerWrite
{
public:
	~RunnerWrite();

	bool fileWrite(Vector3 values, std::string fileName = "RunnerPositionData.txt");
	bool fileWrite(std::string msg, std::string fileName = "RunnerPositionData.txt");

	static RunnerWrite* getInstance();

private:
	RunnerWrite();
	static RunnerWrite* instance;
};

