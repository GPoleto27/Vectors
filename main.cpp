#include <stdio.h>
#include "Polygon.h"

int main()
{
    Vector3 v1(1, 2, 3);
    Vector3 v2(2, 3, 4);
    Vector3 v3 = v1 + v2;

    Polygon p(v1, v2, v3);

    Vector3 normal = p.getNormal();

    printf("normal length = %g\n", normal.getLength());

    return 0;
}
