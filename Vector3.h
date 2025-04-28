#pragma once

#include <cmath>
#include <algorithm>

class Vector3
{
private:
    double x, y, z;

public:
    Vector3();
    Vector3(const double x, const double y, const double z);

    Vector3 operator+(const Vector3 &v1) const;
    Vector3 operator-(const Vector3 &v1) const;
    Vector3 operator*(const double f) const;
    Vector3 operator/(const double f) const;

    Vector3 normalized() const;
    Vector3 cross(const Vector3 &v1) const;
    double dot(const Vector3 &v1) const;
    double triple(const Vector3 &v1, const Vector3 &v2) const;
    double cosAngle(const Vector3 &v1) const;
    double angle(const Vector3 &v1) const;
    double getLength() const;
};
