﻿
#include "Vector3D.h" // для создания объекта класса Vector3D
#include "Point3D.h" // для создания объекта класса Point3D

int main()
{
    Point3D p(3.0, 4.0, 5.0);
    Vector3D v(3.0, 3.0, -2.0);

    p.print();
    p.moveByVector(v);
    p.print();

    return 0;
}