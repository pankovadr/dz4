#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B, C;
    int result;
    printf("Введите три целых числа A, B и C: ");
    scanf("%d %d %d", &A, &B, &C);

    result = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("Результат проверки гипотезы(1-подтверждена, 0-опровергнута): %d\n", result);
    return 0;
}
