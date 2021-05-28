#include <stdio.h>
int main()
{
    int num1,negativo1;
    unsigned int num2, num3,negativo2,negativo3;

    printf("Wellcome to number informer v1\n");

    printf("Please insert Number 1 in Decimal:\n");
    scanf("%d", &num1);

    printf("Please insert Number 2 in Hexadecimal:\n");
    scanf("%x", &num2);

    printf("Please insert Number 3 in Octal:\n");
    scanf("%o", &num3);

    negativo1 = num1 * -1;
    negativo2 = num2 * -1;
    negativo3 = num3 * -1;

    printf("+-----+--------+------+--------+--------+------+--------+\n");
    printf("| Nr. | Dec    | Hex  | Oct    | -Dec   | -Hex | -Oct   |\n");
    printf("+-----+--------+------+--------+--------+------+--------+\n");
    printf("| 1   | %06hd | %04hX | %06ho | %06hd | %04hx | %06ho |\n", num1,num1,num1,negativo1,negativo1,negativo1);
    printf("| 2   | %06hd | %04hX | %06ho | %06hd | %04hx | %06ho |\n", num2,num2,num2,negativo2,negativo2,negativo2);
    printf("| 3   | %06hd | %04hX | %06ho | %06hd | %04hx | %06ho |\n", num3,num3,num3,negativo3,negativo3,negativo3);
    printf("+-----+--------+------+--------+--------+------+--------+");

    return 0;
}

