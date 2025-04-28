#include "Polygon.h"
#include <algorithm>

Polygon::Polygon(const Vector3 &a, const Vector3 &b, const Vector3 &c)
    : a(a), b(b), c(c)
{
    Vector3 v = b - a;
    Vector3 w = c - a;
    Vector3 v_cross_w = v.cross(w);
    this->normal = v_cross_w.normalized();
    this->area = v_cross_w.getLength() / 2;
    this->centroid = (a + b + c) / 3;
}

double Polygon::flatShading(const Vector3 &ray) const
{
    double intensity = normal.cosAngle(ray * -1);
    return std::max(0.0, intensity);
}
