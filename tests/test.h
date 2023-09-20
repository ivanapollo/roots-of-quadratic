#ifndef TEST_H
#define TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "quadratic.h"
#include <math.h>
}

long double ans[2] = {0, 0};
int ret = 0;

TEST(quadratic, not_a_quad_eq) {

    ans[0] = 0;
    ans[1] = 0;

    // Не квадратное уравнение, -1 и не трогаем ans
    ret = find_quad_eq_roots(0, 0, 0, ans);
    ASSERT_EQ(ret, -1);
    ASSERT_DOUBLE_EQ(ans[0], 0);
    ASSERT_DOUBLE_EQ(ans[1], 0);

    // Не квадратное уравнение, -1 и не трогаем ans
    ret = find_quad_eq_roots(0, 0, -1, ans);
    ASSERT_EQ(ret, -1);
    ASSERT_DOUBLE_EQ(ans[0], 0);
    ASSERT_DOUBLE_EQ(ans[1], 0);

    // Не квадратное уравнение, -1 и не трогаем ans
    ret = find_quad_eq_roots(0, 1, -1, ans);
    ASSERT_EQ(ret, -1);
    ASSERT_DOUBLE_EQ(ans[0], 0);
    ASSERT_DOUBLE_EQ(ans[1], 0);
}

TEST(quadratic, 0_solutions) {

    ans[0] = 0;
    ans[1] = 0;

    // (x + 1)^2 + 1 = 0, очевидно нет решений
    ret = find_quad_eq_roots(1, 2, 2, ans);
    ASSERT_EQ(ret, 0);
    ASSERT_DOUBLE_EQ(ans[0], 0);
    ASSERT_DOUBLE_EQ(ans[1], 0);
}

TEST(quadratic, 1_solution) {

    ans[0] = 0;
    ans[1] = 0;

    // (x + 1)^2 = 0 <=> x = -1
    ret = find_quad_eq_roots(1, 2, 1, ans);
    ASSERT_EQ(ret, 1);
    ASSERT_DOUBLE_EQ(ans[0], -1);
    ASSERT_DOUBLE_EQ(ans[1], -1);
}

TEST(quadratic, 2_solutions) {

    ans[0] = 0;
    ans[1] = 0;
    long double phi = (1 + sqrtl(5)) / 2;

    // x^2 - x - 1 = 0 <=> x = 1 - phi, x = phi
    ret = find_quad_eq_roots(1, -1, -1, ans);
    ASSERT_EQ(ret, 2);
    ASSERT_DOUBLE_EQ(ans[0], 1 - phi);
    ASSERT_DOUBLE_EQ(ans[1], phi);
}

#endif // TEST_H
