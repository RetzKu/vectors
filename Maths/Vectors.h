#pragma once
#include <cstdio>

class Vec2
{
public:
	Vec2() {};
	Vec2(float x, float y) { this->x = x; this->y = y; }
	float Lenght();
	Vec2 operator-(Vec2 vector);
	Vec2 operator+(Vec2 vector);
	void operator=(Vec2 vector);
	void operator*(float scale);
	float x = 0;
	float y = 0;
};

class Vec3
{
public:
	Vec3() {};
	Vec3(float x, float y, float z) { this->x = x; this->y = y; this->z = z; }
	float Lenght();
	Vec3 operator-(Vec3 vector);
	Vec3 operator+(Vec3 vector);
	void operator=(Vec3 vector);
	void operator*(float scale);
	float x = 0;
	float y = 0;
	float z = 0;
};

class Vec4
{
public:
	Vec4() {};
	Vec4(float x, float y, float z, float w) { this->x = x; this->y = y; this->z = z; this->w = w; }
	float Lenght();
	Vec4 operator-(Vec4 vector);
	Vec4 operator+(Vec4 vector);
	void operator=(Vec4 vector);
	void operator*(float scale);
	float x = 0;
	float y = 0;
	float z = 0;
	float w = 0;
};

void printvec(const char* name, const Vec2& vec);
void printvec(const char* name, const Vec3& vec);
void printvec(const char* name, const Vec4& vec);
void printvec(const char* name, const float& vec);

float Cross(const Vec2& vec1, const Vec2& vec2);
Vec3 Cross(const Vec3& vec1, const Vec3& vec2);
