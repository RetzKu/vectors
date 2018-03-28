#include <iostream>
#include "Vectors.h"
#include <cstdlib>
#include "Mat4.h"

int main()
{
	Vec3 temp(1, 2,3);
	printvec("vec3", temp);
	temp = temp - Vec3(1, 1, 1);
	printvec("vec3", temp);
	float ar[] = { 3,2,2,2,2 };
	Mat4 lol(ar);

	printvec("Vec2 cross", Cross(Vec2(1,2), Vec2(3, 2)));
	printvec("Vec3 cross", Cross(Vec3(1, 2, 3), Vec3(4, 4, 5)));
	system("pause");
	return 0;
}