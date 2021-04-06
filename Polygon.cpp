#include "Polygon.h"

Polygon::Polygon()
{
    this->a = Vector3();
    this->b = Vector3();
    this->c = Vector3();

    this->normal = Vector3();
    this->centroid = Vector3();
    this->area = 0;
}

Polygon::Polygon(Vector3 &a, Vector3 &b, Vector3 &c)
{
    this->a = a;
    this->b = b;
    this->c = c;
    Vector3 v = b - a;
    Vector3 w = c - a;

    this->normal = (v).cross(w);
    this->area = this->normal.getLength() / 2;
    this->centroid = (a + b + c) / 3;
}

Vector3 Polygon::getNormal()
{
    return this->normal;
}

double Polygon::flatShading(Vector3 &ray)
{
    double intensity = normal.cosAngle(ray * -1);
    return intensity < 0 ? 0 : intensity;
}
