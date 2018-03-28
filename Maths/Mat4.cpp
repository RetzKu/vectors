#include "Mat4.h"
#include <algorithm>
#include <limits>
#include



Mat4::Mat4(float* matrix)
{
	int i = 0;
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (matrix[i] == NULL)
			{
				return;
			}
			col[x][y] = matrix[i];
			i++;
		}
	}
}

Mat4::~Mat4()
{
}
