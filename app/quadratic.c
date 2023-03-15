#include <stdio.h>
#include <math.h>

#include <quadratic.h>

int calc_quad_eq_roots(long *a, long *b, long *c, long double *ans) {

    // считаем дискриминант
    long d = (*b) * (*b) - 4 * (*a) * (*c);

    //
    if (d < 0) {
        return 0;
    }
    else if (d == 0) {
        ans[0] = -(double)(*b) / (2 * (*a));
        ans[1] = ans[0];
        return 1;
    }
    else {
        ans[0] = (-(*b) + sqrtl(d)) / (2 * (*a));
        ans[1] = (-(*b) - sqrtl(d)) / (2 * (*a));
        return 2;
    }
}
