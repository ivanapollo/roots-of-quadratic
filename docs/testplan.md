# Модуль quadratic.c
## Метод find_quad_eq_roots

### Тест №1

- **Цель**: проверить поведение функции на уравнениях, не являющихся квадратными.

- **Тип**: негативный

- **Входные данные**:
    ```c
    // #1
    a = 0; b = 0; c = 0; 
    long double* ans

    // #2
    a = 0; b = 0; c = -1; 
    long double* ans

    // #3
    a = 0; b = 1; c = -1; 
    long double* ans
    ```

- **Ожидаемый результат**: в каждом случае функция возвращает -1, а массив для корней не изменён

- **Описание процесса**: long double ans[2] = {0, 0}

### Тест №2
- **Цель**: проверить поведение функции на квадратном уравнении, не имеющем действительных корней (D < 0)

- **Тип**: позитивный

- **Входные данные**: 
    ```c
    a = 1; b = 2; c = 2; long double *ans 
    ```

- **Ожидаемый результат**: функция возвращает 0, массив для корней не изменён

- **Описание процесса**: long double ans[2] = {0, 0}

### Тест №3
- **Цель**: проверить поведение функции на квадратном уравнении, имеющем один действительный корень (D = 0)

- **Тип**: позитивный

- **Входные данные**: 
    ```c
    a = 1; b = 2; c = 1; long double *ans
    ```

- **Ожидаемый результат**: функция возвращает 1, ans[0] = ans[1] = -1

- **Описание процесса**: long double ans[2] = {0, 0}

### Тест №4
- **Цель**: проверить поведение функции на квадратном уравнении, имеющем два действительных корня (D > 0)

- **Тип**: позитивный

- **Входные данные**: 
    ```c
    // #1
    a = 1; b = -1; c = -1; long double *ans

    // #2
    a = -1; b = -3; c = -2; long double *ans
    ```

- **Ожидаемый результат**:

    1. Функция возвращает 2, ans[0] = 1 — phi, ans[1] = phi
    2. Функция возвращает 2, ans[0] = -2, ans[1] = -1

- **Описание процесса**: 
    ```c
    long double ans[2] = {0, 0}; 
    long double phi = (1 + sqrtl(5)) / 2
    ```