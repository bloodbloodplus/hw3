#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Russian");

    double mmHg;
    double pascal;
    double bar;

    printf("Введите давление в мм рт. ст.: ");
    scanf("%lf", &mmHg);

    pascal = mmHg * 133.322;
    bar = pascal / 100000.0;

    printf("\nРезультаты пересчета:\n");
    printf("Давление в паскалях: %.2f Па\n", pascal);
    printf("Давление в барах: %.6f бар\n", bar);

    return 0;
}