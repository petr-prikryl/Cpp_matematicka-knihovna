#include <gtest/gtest.h>
#include "Math.h"

using namespace Math;

TEST(MathTests, Test_Add_Floats) {
    ASSERT_FLOAT_EQ(add(3.5f, 2.5f), 6.0f);
}

TEST(MathTests, Test_Add_Point_By_Number) {
    Math::Point p = {2.0f, 3.0f};
    float num = 1.5f;
    Math::Point result = add(p, num);
    ASSERT_FLOAT_EQ(result.x, 3.5f);
    ASSERT_FLOAT_EQ(result.y, 4.5f);
}

TEST(MathTests, Test_Add_Point_By_Vector) {
    Math::Point p = {1.0f, 2.0f};
    Math::Vector v = {3.0f, 4.0f};
    Math::Point result = add(p, v);
    ASSERT_FLOAT_EQ(result.x, 4.0f);
    ASSERT_FLOAT_EQ(result.y, 6.0f);
}
