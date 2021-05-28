#include <stdio.h>

int main()
{
    int salario;
    double resultado = 0.0;
    char plano;

    puts("Introduza o salário");
    scanf("%d", &salario);
    puts("Introduza o plano");
    scanf(" %c", &plano);
    switch (plano)
    {
    case 'a':
        resultado = salario +(salario*0.10);
        break;

    case 'b':
        resultado = salario +(salario*0.15);
        break;

    case 'c':
        resultado = salario +(salario*0.20);
        break;    
    
    default: printf("Plano de aumento errado\n");
        
    }
    printf("Salário com aumento = %g\n", resultado);
}

