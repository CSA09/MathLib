#include <gtest/gtest.h>
#include "../operations.h"

TEST(MathOperationsTest, TestSum) {
    ASSERT_EQ(10, sumar(7, 3));
    ASSERT_EQ(0, sumar(-5, 5));
    ASSERT_EQ(-8, sumar(-5, -3));
}

TEST(MathOperationsTest, Testrestarion) {
    ASSERT_EQ(4, restar(7, 3));
    ASSERT_EQ(-10, restar(-5, 5));
    ASSERT_EQ(-2, restar(-5, -3));
}

TEST(MathOperationsTest, TestMultiplication) {
    ASSERT_EQ(21, multiplicar(7, 3));
    ASSERT_EQ(-25, multiplicar(-5, 5));
    ASSERT_EQ(15, multiplicar(-5, -3));
}

TEST(MathOperationsTest, TestDivision) {
    ASSERT_EQ(2, dividir(6, 3));
    ASSERT_EQ(-1, dividir(-5, 5));
    ASSERT_EQ(1, dividir(-5, -5));
}

TEST(MathOperationsTest, TestDivisionByZero) {
    ASSERT_THROW(dividir(5, 0), std::runtime_error);
}