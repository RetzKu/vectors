#include "Mat4.h"
#include <algorithm>
#include <limits>
#include <iostream>


Mat4::~Mat4()
{
}

Vec4 Mat4::operator*(const Vec4& vec)
{
	Vec4 outcome;
	outcome.x = (values[0][0] * vec.x + values[0][1] * vec.y + values[0][2] * vec.z + values[0][3] * vec.w);
	outcome.y = (values[1][0] * vec.x + values[1][1] * vec.y + values[1][2] * vec.z + values[1][3] * vec.w);
	outcome.z = (values[2][0] * vec.x + values[2][1] * vec.y + values[2][2] * vec.z + values[2][3] * vec.w);
	outcome.w = (values[3][0] * vec.x + values[3][1] * vec.y + values[3][2] * vec.z + values[3][3] * vec.w);
	return outcome;
}

float Mat4::Minor(int row, int column)
{
	int curRow = 0;
	int curCol = 0;

	float minor[3][3] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if (i != row && j != column)
			{
				if (curCol == 3)
				{
					curCol = 0;
					curRow += 1;
				}
				minor[curRow][curCol] = values[i][j];
				curCol += 1;
			}
		}
	}
	std::cout << "pause point";
	return 0;
}
float Mat4::det()
{
	float outcome = 0;
	return outcome;
}