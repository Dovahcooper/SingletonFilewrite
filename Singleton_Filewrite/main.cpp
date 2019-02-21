#include "RunnerWrite.h"
#include "Vector.h"

int main()
{
	RunnerWrite* fileWrite = RunnerWrite::getInstance();

	Vector3 vec3;
	vec3.x = 10.f;
	vec3.y = 3.f;
	vec3.z = 22.f;

	fileWrite->fileWrite(vec3);

	delete fileWrite;

	system("pause");

	return 0;
}