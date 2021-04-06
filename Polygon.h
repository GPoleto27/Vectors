#ifndef POLYGON_INCLUDED
#define POLYGON_INCLUDED
#include "Vector3.h"

class Polygon
{
private:
    Vector3 a, b, c, centroid, normal;
    double area;

public:
    Polygon();
    Polygon(Vector3 &a, Vector3 &b, Vector3 &c);
    Vector3 getNormal();
    double flatShading(Vector3 &ray);
};

#endif
