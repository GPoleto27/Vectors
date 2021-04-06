#include "Vector3.h"
#include <math.h>
#define _USE_MATH_DEFINES

Vector3::Vector3()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;

    this->length = 0;
}

Vector3::Vector3(const double x, const double y, const double z)
{
    this->x = x;
    this->y = y;
    this->z = z;

    this->length = sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::operator+(const Vector3 &v1)
{
    double x = this->x + v1.x;
    double y = this->y + v1.y;
    double z = this->z + v1.z;
    Vector3 v(x, y, z);
    return v;
}

Vector3 Vector3::operator-(const Vector3 &v1)
{
    double x = this->x - v1.x;
    double y = this->y - v1.y;
    double z = this->z - v1.z;
    Vector3 v(x, y, z);
    return v;
}

Vector3 Vector3::operator*(const double f)
{
    double x = this->x * f;
    double y = this->y * f;
    double z = this->z * f;
    Vector3 v(x, y, z);
    return v;
}

Vector3 Vector3::operator/(const double f)
{
    double x = this->x / f;
    double y = this->y / f;
    double z = this->z / f;
    Vector3 v(x, y, z);
    return v;
}

Vector3 Vector3::normalized()
{
    x = this->x / this->length;
    y = this->y / this->length;
    z = this->z / this->length;

    Vector3 v(x, y, z);
    return v;
}

Vector3 Vector3::cross(const Vector3 &v1)
{
    double x = this->y * v1.z - this->z * v1.y;
    double y = this->x * v1.z - this->z * v1.x;
    double z = this->x * v1.y - this->y * v1.x;

    Vector3 v(x, -y, z);
    return v;
}

double Vector3::dot(const Vector3 &v1)
{
    double x = this->x * v1.x;
    double y = this->y * v1.y;
    double z = this->z * v1.z;

    return x + y + z;
}

double Vector3::triple(const Vector3 &v1, const Vector3 &v2)
{
    double x = this->x * (v1.y * v2.z - v1.z * v1.y);
    double y = this->y * (v1.x * v2.z - v1.z * v2.x);
    double z = this->z * (v1.x * v2.y - v1.y * v2.x);

    return x - y + z;
}

double Vector3::cosAngle(const Vector3 &v1)
{
    return this->dot(v1) / (this->length * v1.length);
}

double Vector3::angle(const Vector3 &v1)
{
    return acos(cosAngle(v1)) * 180 / M_PI;
}

double Vector3::getLength()
{
    return this->length;
}
