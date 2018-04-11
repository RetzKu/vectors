#pragma once
#include <initializer_list>
#include "Vectors.h"

class Mat4
{
public:
	template<size_t rows, size_t cols> Mat4(float(&array)[rows][cols])
	{
		if (rows != 4 || cols != 4)
		{
			std::cout << "Not enough values given to mat4" << std::endl;
			return;
		}
		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				values[i][j] = array[i][j];
			}
		}
	}
	~Mat4();

	Vec4 operator*(const Vec4& vec);
	float det();

	float Minor(int row, int column);
private:
	float values[4][4] = { 0 };
};

