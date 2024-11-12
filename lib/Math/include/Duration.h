#ifndef DURATION_H
#define DURATION_H
#include <iostream>

class Duration {
public:
    int minutes;

    // Constructor declaration
    Duration(int min);

    // Function declaration
    int getMinutes() const;
};

#endif // DURATION_H
