#include <stdio.h>
#include <math.h>

#include <quadratic.h>

int find_quad_eq_roots(long double a, long double b, long double c, long double *ans) {

    // если не квадратное уравнение, возвращаем -1
    if (a == 0) {
        return -1;
    }

    // дискриминант
    long double D = b * b - 4 * a * c;

    // дискриминант меньше нуля? корней нет, возвращаем 0
    if (D < 0) {
        return 0;
    }
    // дискриминант равен 0? 1 корень есть, возвращаем 1
    else if (D == 0) {
        ans[0] = -(long double)b / (2 * a);
        ans[1] = ans[0];
        return 1;
    }
    // дискриминант больше 0? 2 корня, ставим по порядку и возвращаем 2
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
