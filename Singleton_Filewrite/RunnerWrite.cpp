#include "RunnerWrite.h"
#include "Vector.h"

RunnerWrite* RunnerWrite::instance;

std::ofstream& operator<<(std::ofstream &fs, const Vector3& val)
{
	fs << "X: " << val.x << ", Y: " << val.y << ", Z: " << val.z << std::endl;
	return fs;
}

RunnerWrite::RunnerWrite(std::string filePath)
{
	fileName = filePath;
}

RunnerWrite::~RunnerWrite()
{
	if (instance != nullptr)
		instance = nullptr;
}

bool RunnerWrite::fileWrite(Vector3 values)
{
	fileWriter.open(fileName, std::ios::out | std::ios::app | std::ios::binary);

	if (fileWriter.is_open()){
		fileWriter << values;
		fileWriter.close();
		return true;
	}
	else
	{
		return false;
	}
}

bool RunnerWrite::fileWrite(std::string msg)
{
	fileWriter.open(fileName, std::ios::out | std::ios::app | std::ios::binary);

	if (fileWriter.is_open()) {
		fileWriter << msg << std::endl;
		fileWriter.close();
		return true;
	}
	else
	{
		return false;
	}
}

RunnerWrite * RunnerWrite::getInstance(std::string filePath)
{
	if (instance == nullptr)
		instance = new RunnerWrite(filePath);

	return instance;
}