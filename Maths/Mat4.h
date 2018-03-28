#pragma once
class Mat4
{
public:
	Mat4(float* matrix);
	~Mat4();
	float col[4][4] = { 0 };
};

