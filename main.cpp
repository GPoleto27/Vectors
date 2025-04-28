#include <iostream>
#include "Polygon.h"

int main()
{
    Vector3 v1(1, 2, 3);
    Vector3 v2(2, 3, 4);

    std::cout << "Testing Vector3 operations:" << std::endl;

    Vector3 v3 = v1 + v2;
    std::cout << "v1 + v2 length: " << v3.getLength() << std::endl;

    Vector3 v4 = v2 - v1;
    std::cout << "v2 - v1 length: " << v4.getLength() << std::endl;

    Vector3 v5 = v1 * 2.0;
    std::cout << "v1 * 2 length: " << v5.getLength() << std::endl;

    Vector3 v6 = v2 / 2.0;
    std::cout << "v2 / 2 length: " << v6.getLength() << std::endl;

    Vector3 v1_normalized = v1.normalized();
    std::cout << "v1 normalized length: " << v1_normalized.getLength() << std::endl;

    double dot_product = v1.dot(v2);
    std::cout << "v1 dot v2: " << dot_product << std::endl;

    Vector3 cross_product = v1.cross(v2);
    std::cout << "v1 cross v2 length: " << cross_product.getLength() << std::endl;

    double triple_product = v1.triple(v2, v3);
    std::cout << "v1 triple (v2, v3): " << triple_product << std::endl;

    double cos_angle = v1.cosAngle(v2);
    std::cout << "cos(angle between v1 and v2): " << cos_angle << std::endl;

    double angle = v1.angle(v2);
    std::cout << "angle between v1 and v2 (degrees): " << angle << std::endl;

    std::cout << "\nTesting Polygon operations:" << std::endl;

    Polygon p(v1, v2, v3);

    Vector3 normal = p.getNormal();
    std::cout << "Polygon normal length: " << normal.getLength() << std::endl;

    Vector3 centroid = p.getCentroid();
    std::cout << "Polygon centroid length: " << centroid.getLength() << std::endl;

    double area = p.getArea();
    std::cout << "Polygon area: " << area << std::endl;

    Vector3 ray(0, 0, -1);
    double intensity = p.flatShading(ray);
    std::cout << "Flat shading intensity: " << intensity << std::endl;

    return 0;
}
