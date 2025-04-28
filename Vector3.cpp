#include "Vector3.h"

Vector3::Vector3() : x(0), y(0), z(0) {}
Vector3::Vector3(const double x, const double y, const double z)
    : x(x), y(y), z(z) {}

Vector3 Vector3::operator+(const Vector3 &v1) const
{
    double x = this->x + v1.x;
    double y = this->y + v1.y;
    double z = this->z + v1.z;
    return Vector3(x, y, z);
}

Vector3 Vector3::operator-(const Vector3 &v1) const
{
    double x = this->x - v1.x;
    double y = this->y - v1.y;
    double z = this->z - v1.z;
    return Vector3(x, y, z);
}

Vector3 Vector3::operator*(const double f) const
{
    double x = this->x * f;
    double y = this->y * f;
    double z = this->z * f;
    return Vector3(x, y, z);
}

Vector3 Vector3::operator/(const double f) const
{
    double x = this->x / f;
    double y = this->y / f;
    double z = this->z / f;
    return Vector3(x, y, z);
}

Vector3 Vector3::normalized() const
{
    double length = this->getLength();

    return (length == 0) ? Vector3(0, 0, 0) : (*this) / length;
}

Vector3 Vector3::cross(const Vector3 &v1) const
{
    double x = this->y * v1.z - this->z * v1.y;
    double y = this->z * v1.x - this->x * v1.z;
    double z = this->x * v1.y - this->y * v1.x;

    Vector3 v(x, y, z);
    return v;
}

double Vector3::dot(const Vector3 &v1) const
{
    double x = this->x * v1.x;
    double y = this->y * v1.y;
    double z = this->z * v1.z;

    return x + y + z;
}

double Vector3::triple(const Vector3 &v1, const Vector3 &v2) const
{
    return this->dot(v1.cross(v2));
}

double Vector3::cosAngle(const Vector3 &v1) const
{
    double lengthProduct = this->getLength() * v1.getLength();
    return (lengthProduct == 0) ? 0 : (this->dot(v1) / lengthProduct);
}

double Vector3::angle(const Vector3 &v1) const
{
    double cosA = this->cosAngle(v1);
    // Clamp to avoid NaNs due to floating point errors
    cosA = std::max(-1.0, std::min(1.0, cosA));
    return std::acos(cosA) * (180.0 / M_PI);
}

double Vector3::getLength() const
{
    return std::sqrt(x * x + y * y + z * z);
}
