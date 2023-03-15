#include <stdio.h>

#include <quadratic.h>

long double ans[2] = {0, 0};

int main()
{
    // ax^2 + bx + c = 0
    long a, b, c;

    printf("Введите коэффициенты квадратного уравнения:\n");

    printf("a = ");
    scanf("%ld", &a);

    printf("b = ");
    scanf("%ld", &b);

    printf("c = ");
    scanf("%ld", &c);

    if (!a) {
        fprintf(stderr, "Не квадратное уравнение, старший коэффициент равен нулю.\n");
        return 0;
    }

    // Вызываем функцию, которая посчитает корни соответствующего уравнения
    int returnValue = calc_quad_eq_roots(&a, &b, &c, ans);

    if (returnValue == 2) {
        printf("2 корня: %Lf %Lf\n", ans[0], ans[1]);
    } else if (returnValue == 1) {
        printf("1 корень: %Lf\n", ans[0]);
    } else {
        printf("Нет корней в действительных числах.\n");
    }

    return 0;
}
