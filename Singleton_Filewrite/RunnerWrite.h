#pragma once
#include "LibSettings.h"
#include <string>
#include <fstream>

struct Vector3;

class LIB_API RunnerWrite
{
public:
	~RunnerWrite();

	bool fileWrite(Vector3 values);
	bool fileWrite(std::string msg);

	static RunnerWrite* getInstance(std::string filePath = "RunnerPositionData.ggg");

private:
	RunnerWrite(std::string filePath);
	static RunnerWrite* instance;

	std::ofstream fileWriter;
	std::string fileName;
};