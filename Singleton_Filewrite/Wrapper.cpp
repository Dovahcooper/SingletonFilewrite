#include "Wrapper.h"

RunnerWrite* dataWriter;

void LIB_API initDLL(char * filePath)
{
	dataWriter = RunnerWrite::getInstance(filePath);
}

bool LIB_API writeData(Vector3 posData)
{
	return dataWriter->fileWrite(posData);
}

bool LIB_API writeString(char * data)
{
	return dataWriter->fileWrite(data);
}

void LIB_API clearDLL()
{
	delete dataWriter;
}