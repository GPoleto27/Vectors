#ifndef VECTOR3_INCLUDED
#define VECTOR3_INCLUDED

class Vector3
{
private:
    double x, y, z, length;

public:
    Vector3();
    Vector3(const double x, const double y, const double z);
    Vector3 operator+(const Vector3 &v1);
    Vector3 operator-(const Vector3 &v1);
    Vector3 operator*(const double f);
    Vector3 operator/(const double f);
    Vector3 normalized();
    Vector3 cross(const Vector3 &v1);
    double dot(const Vector3 &v1);
    double triple(const Vector3 &v1, const Vector3 &v2);
    double cosAngle(const Vector3 &v1);
    double angle(const Vector3 &v1);
    double getLength();
};

#endif
