#pragma once
#include <cstdio>

class Vec2
{
public:
	Vec2(int x, int y) { this->x = x; this->y = y; }
	float Lenght();
	Vec2 operator-(Vec2 vector);
	Vec2 operator+(Vec2 vector);
	void operator=(Vec2 vector);
	int x;
	int y;
};

class Vec3
{
public:
	Vec3(int x, int y, int z) { this->x = x; this->y = y; this->z = z; }
	float Lenght();
	Vec3 operator-(Vec3 vector);
	Vec3 operator+(Vec3 vector);
	void operator=(Vec3 vector);
	int x;
	int y;
	int z;
};

class Vec4
{
public:
	Vec4(int x, int y, int z, int w) { this->x = x; this->y = y; this->z = z; this->w = w; }
	float Lenght();
	Vec4 operator-(Vec4 vector);
	Vec4 operator+(Vec4 vector);
	void operator=(Vec4 vector);
	int x;
	int y;
	int z;
	int w;
};

void printvec(const char* name, const Vec2& vec);
void printvec(const char* name, const Vec3& vec);
void printvec(const char* name, const Vec4& vec);
