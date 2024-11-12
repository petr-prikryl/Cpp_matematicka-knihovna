#include <gtest/gtest.h>
#include "Time22.h"
#include "Duration.h"
#include <iostream>
#include <ostream>

TEST(TimeTest, AdditionOfMinutes) {
    Time t1(2024, 12, 11, 7, 30);  // 2024-12-11 07:30
    Duration d1(30);  // 30 minut

    Time t2 = t1 + d1;
    // Očekáváme 2024-12-11 08:00
    ASSERT_EQ(t2.year, 2024);
    ASSERT_EQ(t2.month, 12);
    ASSERT_EQ(t2.day, 11);
    ASSERT_EQ(t2.hour, 8);
    ASSERT_EQ(t2.minute, 0);
}

TEST(TimeTest, AdditionCrossDay) {
    Time t1(2024, 12, 11, 23, 40);  // 2024-12-11 23:40
    Duration d1(40);  // 40 minut

    Time t2 = t1 + d1;
    // Očekáváme 2024-12-12 00:20
    ASSERT_EQ(t2.year, 2024);
    ASSERT_EQ(t2.month, 12);
    ASSERT_EQ(t2.day, 12);
    ASSERT_EQ(t2.hour, 0);
    ASSERT_EQ(t2.minute, 20);
}

TEST(TimeTest, AdditionCrossMonth) {
    Time t1(2024, 12, 30, 23, 40);  // 2024-12-30 23:40
    Duration d1(40);  // 40 minut

    Time t2 = t1 + d1;
    // Očekáváme 2025-01-01 00:20
    ASSERT_EQ(t2.year, 2025);
    ASSERT_EQ(t2.month, 1);
    ASSERT_EQ(t2.day, 1);
    ASSERT_EQ(t2.hour, 0);
    ASSERT_EQ(t2.minute, 20);
}

TEST(DurationTest, Constructor) {
    Duration d(45);  // 45 minut
    ASSERT_EQ(d.getMinutes(), 45);
}
