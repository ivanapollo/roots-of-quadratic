#include <stdio.h>
#include <math.h>

#include <quadratic.h>

int find_quad_eq_roots(long double a, long double b, long double c, long double *ans) {

    if (a == 0) {
        return -1;
    }

    long double D = b * b - 4 * a * c;

    if (D < 0) {
        return 0;
    }
    else if (D == 0) {
        ans[0] = -(long double)b / (2 * a);
        ans[1] = ans[0];
        return 1;
    }
    else {
        ans[0] = (-b - sqrtl(D)) / (2 * a);
        ans[1] = (-b + sqrtl(D)) / (2 * a);

        if (ans[0] > ans[1]) {
            long double t;
            t = ans[1];
            ans[1] = ans[0];
            ans[0] = t;
        }

        return 2;
    }
}
