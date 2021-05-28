#include<stdio.h>

int main()
{
    int hora, minuto, segundos,total;
    printf("Qual a hora?\n");
    scanf("%d", &hora);
    total = hora * 3600;
    printf("Qual o minuto?\n");
    scanf("%d", &minuto);
    total = total +(minuto * 60);
    printf("Qual o segundo?\n");
    scanf("%d", &segundos);
    total = total + segundos;
    printf("Total de segundos = %d\n", total);
}



