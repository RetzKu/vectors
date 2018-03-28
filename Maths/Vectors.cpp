#include "Vectors.h"
#include <cmath>

/*Vector2 Partition*/
/*Return Lenght of vector*/
float Vec2::Lenght() {return sqrt((x*x) + (y*y));}

/*Return abstract operation*/
Vec2 Vec2::operator-(Vec2 vectors) {return Vec2(x - vectors.x, y - vectors.y);}

/*Return product operation*/
Vec2 Vec2::operator+(Vec2 vectors) { return Vec2(x + vectors.x, y + vectors.y);}

/*Set new x & y for vector*/
void Vec2::operator=(Vec2 vectors) { x = vectors.x; y = vectors.y; } 
void Vec2::operator*(float scale) { x *= scale; y *= scale; }

void printvec(const char* name, const Vec2& vec)
{
	printf("%-12s = <%2.2f, %2.2f>\n", name, vec.x, vec.y);
}
void printvec(const char* name, const Vec3& vec)
{
	printf("%-12s = <%2.2f, %2.2f, %2.2f>\n", name, vec.x, vec.y,vec.z);
}
void printvec(const char* name, const Vec4& vec)
{
	printf("%-12s = <%2.2f, %2.2f, %2.2,%2.2>\n", name, vec.x, vec.y,vec.z, vec.w);
}
void printvec(const char* name, const float& vec)
{
	printf("%-12s = <%2.2f>\n", name,vec);
}

/*Vector3 partition*/
/*Return Lenght of vector*/
float Vec3::Lenght() {return sqrt((x*x) + (y*y) + (z*z));}

/*Return abstract operation*/
Vec3 Vec3::operator-(Vec3 vectors) {return Vec3(x - vectors.x, y - vectors.y, z - vectors.z);}

/*Return product operation*/
Vec3 Vec3::operator+(Vec3 vectors) { return Vec3(x + vectors.x, y + vectors.y, z - vectors.z);}

/*Set new x, y & z for vector*/
void Vec3::operator=(Vec3 vectors)
{
	x = vectors.x;
	y = vectors.y;
	z = vectors.z;
}

void Vec3::operator*(float scale) { x *= scale; y *= scale; z *= scale; }

/*Vector4 partition*/
/*Return Lenght of vector*/
float Vec4::Lenght() {return sqrt((x*x) + (y*y) + (z*z) + (w*w));}

/*Return abstract operation*/
Vec4 Vec4::operator-(Vec4 vectors) {return Vec4(x - vectors.x, y - vectors.y, z - vectors.z, w - vectors.w);}

/*Return product operation*/
Vec4 Vec4::operator+(Vec4 vectors) { return Vec4(x + vectors.x, y + vectors.y, z - vectors.z, w - vectors.w);}

/*Set new x, y & z for vector*/
void Vec4::operator=(Vec4 vectors)
{
	x = vectors.x;
	y = vectors.y;
	z = vectors.z;
	w = vectors.w;
}

void Vec4::operator*(float scale) { y *= scale; x *= scale; z *= scale; w *= scale; }

float Cross(const Vec2& vec1, const Vec2& vec2)
{
	return vec1.x * vec2.y - vec1.y * vec2.x;
}

Vec3 Cross(const Vec3& vec1, const Vec3& vec2)
{
	Vec3 outcome;
	outcome.x = vec1.y*vec2.z - vec1.z*vec2.y;
	outcome.y = vec1.z*vec2.x - vec1.x*vec2.z;
	outcome.z = vec1.x*vec2.y - vec1.y*vec2.x;
	return outcome;
}