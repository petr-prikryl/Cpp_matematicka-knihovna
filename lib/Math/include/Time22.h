#ifndef TIME22_H
#define TIME22_H

#include <iostream>

class Duration; 

class Time {
public:
    int year, month, day, hour, minute;

    Time(int y, int m, int d, int h, int min);

    Time operator+(const Duration& duration) const;

    void print() const;
};

#endif // TIME22_H
