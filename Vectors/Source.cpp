#include <iostream>
#include "Vectors.h"

int main()
{
	Vec2 temp(1, 2);
	temp - Vec2(3, 2);
	
	std::cout << "X: " << temp.x << " Y: " << temp.y << std::endl;
	system("pause");
	return 0;
}