#include "RunnerWrite.h"
#include "Vector.h"

RunnerWrite::RunnerWrite()
{
}

RunnerWrite::~RunnerWrite()
{
	if (instance != nullptr)
		delete instance;
}

bool RunnerWrite::fileWrite(Vector3 values, std::string fileName)
{
	std::ofstream outFile;
	outFile.open(fileName, std::ios::out | std::ios::app | std::ios::binary);

	outFile << &values;
	outFile.close();
	return true;
}

RunnerWrite * RunnerWrite::getInstance()
{
	if (instance == nullptr)
		instance = new RunnerWrite();

	return instance;
}