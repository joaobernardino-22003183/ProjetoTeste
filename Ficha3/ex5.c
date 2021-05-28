#include <stdio.h>

int main()
{
    int mes;

    puts("Qual é o mês?");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        puts("Mês :Janeiro");
        break;
    case 2:
        puts("Mês : Fevereiro");
        break;
    case 3:
        puts("Mês : Março");
        break;
    case 4:
        puts("Mês : April");
        break;
    case 5:
        puts("Mês : Maio");
        break;
    case 6:
        puts("Mês : Junho");
        break;
    case 7:
        puts("Mês : Julho");
        break;
    case 8:
        puts("Mês : Agosto");
        break;
    case 9:
        printf("Mês : Setembro");
        break;
    case 10:
        printf("Mês : Outubro");
        break;
    case 11:
        printf("Mês : Novembro");
        break;
    case 12:
        printf("Mês : Dezembro");
        break;
                                               
    default:
        printf("Esse mês não existe!!!!!\n");
        break;
    }
}

