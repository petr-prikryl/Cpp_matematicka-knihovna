#include <SimpleMath.h>
#include <gtest/gtest.h>
#include <list>


TEST(MojeTesty, Test_Adder_Adds_Integers) {
    ASSERT_EQ(add(5, 6), 11); 
}

TEST(MojeTesty, Test_Divide_DivisionByZero) {
    ASSERT_EQ(divide(10, 0), 0);
}

TEST(MojeTesty, Test_StranaC_Calculates_Hypotenuse) {
    ASSERT_EQ(stranaC(3, 4), 5);
}

TEST(MojeTesty, Test_Fibonacci_CorrectResult) {
    ASSERT_EQ(fibonacci(5), 5);
}

TEST(MojeTesty, Test_Factorial_CorrectResult) {
    ASSERT_EQ(faktorialN(5), 120);
}

TEST(MojeTesty, Test_SumList_CorrectResult) {
    std::list<int> lst = {1, 3, 5};
    ASSERT_EQ(sumList(lst), 9); 
}
    
TEST(MojeTesty, Test_ProductList_CorrectResult) {
    std::list<int> lst = {1, 3, 5};
    ASSERT_EQ(productList(lst), 15); 
}