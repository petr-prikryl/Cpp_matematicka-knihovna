#ifndef VECTOR_H
#define VECTOR_H


#include "Point.h"
#include <iostream>

// Použití stejného konceptu Addable
template <Addable T>
class MathVector {
private:
    T _x;

public:
    MathVector(T x) : _x(x) {}

    T getX() const { return _x; }

    MathVector<T> operator+(const MathVector<T>& other) const {
        return MathVector<T>(_x + other._x);
    }

    MathVector<T> operator-(const MathPoint<T>& other) const {
        return MathVector<T>(_x - other.getX());
    }

    friend std::ostream& operator<<(std::ostream& os, const MathVector<T>& vector) {
        os << "Vector(" << vector._x << ")";
        return os;
    }
};

#endif // VECTOR_H
