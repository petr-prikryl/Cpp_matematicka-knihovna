  C++ Mathematical Library

C++ Mathematical Library
========================

This project is a C++ library that provides functionality for working with dates and times, including the ability to add durations to specific times and handle overflows like month and day transitions. The library includes two main classes: `Time` and `Duration`, and demonstrates the use of operator overloading to add durations to times.

Features
--------

*   **Time Class**: Represents a specific point in time with year, month, day, hour, and minute.
*   **Duration Class**: Represents a duration of time in minutes.
*   **Operator Overloading**: Supports adding `Duration` to `Time` using the `+` operator.
*   **Formatted Output**: The `Time` class prints times with zero-padding for hours, minutes, days, and months.

File Structure
--------------

The project is organized as follows:

*   `include/Time22.h`: Header file for the `Time` class.
*   `src/Time22.cpp`: Implementation of the `Time` class.
*   `include/Duration.h`: Header file for the `Duration` class.
*   `src/Duration.cpp`: Implementation of the `Duration` class.
*   `main.cpp`: Demonstrates how to use the `Time` and `Duration` classes with test cases.

Classes and Methods
-------------------

### `Time` Class

The `Time` class represents a point in time with the following attributes:

*   `year`, `month`, `day`, `hour`, `minute`

#### Constructor

    Time(int y, int m, int d, int h, int min);

Initializes a `Time` object with the specified year, month, day, hour, and minute.

#### Operator Overloading

    Time operator+(const Duration& duration) const;

Adds a `Duration` to a `Time` object, handling overflow of minutes, hours, days, and months.

#### Methods

    void print() const;

Prints the `Time` in `YYYY-MM-DD HH:MM` format.

### `Duration` Class

The `Duration` class represents a duration in minutes.

#### Constructor

    Duration(int min);

Initializes a `Duration` object with the specified number of minutes.

#### Methods

    int getMinutes() const;

Returns the number of minutes stored in the `Duration` object.

Example Usage
-------------

    #include "Time22.h"
    #include "Duration.h"
    
    int main() {
        // Test adding 30 minutes to a time
        Time t1(2024, 12, 11, 7, 30);  // 2024-12-11 07:30
        Duration d1(30);  // 30 minutes
    
        Time t2 = t1 + d1;
        std::cout << "New time after adding 30 minutes: ";
        t2.print();  // Expected output: 2024-12-11 08:00
    
        // Test moving to the next day
        Time t3(2024, 12, 11, 23, 40);  // 2024-12-11 23:40
        Duration d2(40);  // 40 minutes
    
        Time t4 = t3 + d2;
        std::cout << "New time after adding 40 minutes: ";
        t4.print();  // Expected output: 2024-12-12 00:20
    
        // Test moving to the next month
        Time t5(2024, 12, 30, 23, 40);  // 2024-12-30 23:40
        Duration d3(40);  // 40 minutes
    
        Time t6 = t5 + d3;
        std::cout << "New time after adding 40 minutes: ";
        t6.print();  // Expected output: 2025-01-01 00:20
    
        return 0;
    }
    

Compilation and Building
------------------------

1\. Clone or download the repository.

2\. Navigate to the project directory and run the following commands to build the project.

    mkdir build
    cd build
    cmake ..
    make
    

3\. Run the executable `my_main.exe` generated in the `build` folder:

    ./my_main.exe
    

### Expected Output:

    
    New time after adding 30 minutes: 2024-12-11 08:00
    New time after adding 40 minutes: 2024-12-12 00:20
    New time after adding 40 minutes: 2025-01-01 00:20
    

License
-------

This project is licensed under the MIT License - see the `LICENSE` file for details.
