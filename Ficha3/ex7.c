#include <stdio.h>
int main()
{
    int num_1, resto;

    puts("Introduza um número");
    scanf("%d", &num_1);

    resto = num_1 % 5;
    switch (resto)
    {
    case 0:
        puts("A divisão é perfeita!");
        break;

    case 1:
        puts("A outra é perfeita, mas esta é graciosa!");
        break;

    case 2:
        puts("A divisão é belíssima!");
        break; 

    case 3:
        puts("A divisão é encantadora!");
        break;  

    case 4:
        puts("A divisão é deslumbrante!");
        break;  

    default:
        puts("pOiS:(");
        break;
    }
}

