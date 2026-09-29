#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B, C;
    int condition;

    printf("Введите три целых числа A, B и C: ");
    scanf("%d %d %d", &A, &B, &C);

    condition = (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0);

    if (condition)
    {
        printf("Гипотеза подтверждается\n");
    }
    else
    {
        printf("Гипотеза не подтверждается\n");
    }

    return 0;
}