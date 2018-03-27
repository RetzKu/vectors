#include "Vectors.h"
#include <cmath>

/*Vector2 Partition*/
/*Return Lenght of vector*/
float Vec2::Lenght() {return sqrt((this->x ^ 2) + (this->y ^ 2));}

/*Return abstract operation*/
Vec2 Vec2::operator-(Vec2 vectors) {return Vec2(x - vectors.x, y - vectors.y);}

/*Return product operation*/
Vec2 Vec2::operator+(Vec2 vectors) { return Vec2(x + vectors.x, y + vectors.y);}

/*Set new x & y for vector*/
void Vec2::operator=(Vec2 vectors)
{
	x = vectors.x;
	y = vectors.y;
}

void printvec(const char* name, const Vec2& vec)
{
	printf("%-12s = <%2.2f, %2.2f>\n", name, vec.x, vec.y);
}
void printvec(const char* name, const Vec3& vec)
{
	printf("%-12s = <%2.2f, %2.2f, %2.2>\n", name, vec.x, vec.y,vec.z);
}
void printvec(const char* name, const Vec4& vec)
{
	printf("%-12s = <%2.2f, %2.2f, %2.2,%2.2>\n", name, vec.x, vec.y,vec.z, vec.w);
}

/*Vector3 partition*/
/*Return Lenght of vector*/
float Vec3::Lenght() {return sqrt((this->x ^ 2) + (this->y ^ 2) + (this->z ^2));}

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

/*Vector4 partition*/
/*Return Lenght of vector*/
float Vec4::Lenght() {return sqrt((this->x ^ 2) + (this->y ^ 2) + (this->z ^2) + (this->w ^w));}

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
