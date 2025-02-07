#include <gtest/gtest.h>
#include "../factorial.h"

// Comentario para push

TEST(MathCombinatoricsTest, TestFactorial) {
    ASSERT_EQ(1, factorial(0));
    ASSERT_EQ(1, factorial(1));
    ASSERT_EQ(2, factorial(2));
    ASSERT_EQ(6, factorial(3));
    ASSERT_EQ(24, factorial(4));
    ASSERT_EQ(120, factorial(5));
}

TEST(MathCombinatoricsTest, TestFactorialNegative) {
    ASSERT_THROW(factorial(-1), std::runtime_error);
}

TEST(MathCombinatoricsTest, TestCombination) {
    ASSERT_EQ(1, combination(5, 0));
    ASSERT_EQ(5, combination(5, 1));
    ASSERT_EQ(10, combination(5, 2));
    ASSERT_EQ(10, combination(5, 3));
    ASSERT_EQ(5, combination(5, 4));
    ASSERT_EQ(1, combination(5, 5));
}

TEST(MathCombinatoricsTest, TestCombinationInvalid) {
    ASSERT_THROW(combination(5, 6), std::runtime_error);
    ASSERT_THROW(combination(-5, 3), std::runtime_error);
}