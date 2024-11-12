// Math.h
#pragma once
#include "Point.h"
#include "Vector.h"
#include <iostream>
namespace Math {

    struct Point {
        float x, y;
    };

    struct Vector {
        float dx, dy;
    };

    
    float add(float a, float b);

    
    Point add(Point p, float num);

    
    Point add(Point p, Vector v);

} // namespace Math
