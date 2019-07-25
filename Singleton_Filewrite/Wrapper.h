#pragma once
#include "Vector.h"
#include "RunnerWrite.h"

#ifdef __cplusplus
extern "C"
{
#endif
	void LIB_API initDLL(char* filePath);

	bool LIB_API writeData(Vector3 posData);
	bool LIB_API writeString(char* data);

	void LIB_API clearDLL();
#ifdef __cplusplus
}
#endif