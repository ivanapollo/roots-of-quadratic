#ifndef QUADRATIC_H
#define QUADRATIC_H

// вычисляет корни уравнения ax^2 + bx + c = 0, записывает корни в массив по указателю
// возвращает количество корней уравнения или -1, если не квадратное
int find_quad_eq_roots(long double a, long double b, long double c, long double *ans);

#endif // QUADRATIC_H
