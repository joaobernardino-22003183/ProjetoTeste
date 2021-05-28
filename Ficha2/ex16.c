#include <stdio.h>
int main()
{
    float numero;
    printf("Introduza o número\n");
    scanf("%f", &numero);
    numero = numero * numero;
    printf("O resultado é %0.3f\n", numero);
}

