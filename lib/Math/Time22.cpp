#include "Time22.h"
#include "Duration.h"
#include <iostream>

// Constructor definition
Time::Time(int y, int m, int d, int h, int min) 
    : year(y), month(m), day(d), hour(h), minute(min) {}

// Operator+ definition
Time Time::operator+(const Duration& duration) const {
    int newMinute = minute + duration.getMinutes();
    int newHour = hour + newMinute / 60;
    newMinute = newMinute % 60;

    int newDay = day + newHour / 24;
    newHour = newHour % 24;

    int newMonth = month + newDay / 30; 
    newDay = newDay % 30;

    int newYear = year + newMonth / 12;
    newMonth = newMonth % 12;

    if (newMonth == 0) {
        newMonth = 12;
        newYear--;
    }

    if (newDay == 0) {
        newDay = 30;
        newMonth--;
    }

    return Time(newYear, newMonth, newDay, newHour, newMinute);
}


// print function definition
void Time::print() const {
    std::cout << year << "-"
              << (month < 10 ? "0" : "") << month << "-" 
              << (day < 10 ? "0" : "") << day << " "     
              << (hour < 10 ? "0" : "") << hour << ":"   
              << (minute < 10 ? "0" : "") << minute      
              << std::endl;
}

