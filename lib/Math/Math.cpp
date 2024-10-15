// Math.cpp
#include "Math.h"

namespace Math {

    float add(float a, float b) {
        return a + b;
    }

    Point add(Point p, float num) {
        return {p.x + num, p.y + num};
    }

    Point add(Point p, Vector v) {
        return {p.x + v.dx, p.y + v.dy};
    }

} // namespace Math
