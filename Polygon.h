#pragma once
#include "Vector3.h"

class Polygon
{
private:
    Vector3 a, b, c, centroid, normal;
    double area;

public:
    Polygon() = default;
    Polygon(const Vector3 &a, const Vector3 &b, const Vector3 &c);

    Vector3 getNormal() const { return normal; }
    Vector3 getCentroid() const { return centroid; }
    double getArea() const { return area; }

    double flatShading(const Vector3 &ray) const;
};
