#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <concepts>  

template <typename T>
concept Addable = requires(T a, T b) {
    { a + b } -> std::same_as<T>;
};

template <Addable T>
class MathVector;

template <Addable T>
class MathPoint {
private:
    T _x;

public:
    MathPoint(T x) : _x(x) {}

    T getX() const { return _x; }

    MathPoint<T> operator+(const MathVector<T>& v) const {
        return MathPoint<T>(_x + v.getX());
    }

    MathVector<T> operator-(const MathPoint<T>& other) const {
        return MathVector<T>(_x - other.getX());
    }

    friend std::ostream& operator<<(std::ostream& os, const MathPoint<T>& point) {
        os << "Point(" << point._x << ")";
        return os;
    }
};

#endif // POINT_H
