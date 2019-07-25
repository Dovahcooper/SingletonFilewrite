#include "RunnerWrite.h"
#include "Vector.h"

int main(int argc, char **argv)
{
	RunnerWrite* fileWrite = fileWrite->getInstance();

	Vector3 vec3;
	vec3.x = 10.f;
	vec3.y = 3.f;
	vec3.z = 22.f;

	fileWrite->fileWrite("New Runner Data\n");
	fileWrite->fileWrite(vec3);
	fileWrite->fileWrite("\nEnd Runner Data");

	delete fileWrite;

	system("pause");

	return 0;
}