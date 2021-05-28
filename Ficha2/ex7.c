#include <stdio.h>
int main()
{
    int dias = 0;
    int horas = 0;
    int minutos = 0;
    int inicial, segundos;
    printf("Introduza o número de segundos\n");
    scanf("%d", &inicial);
    if (inicial >= 86400)
    {
        while (inicial >= 86400)
    {
        inicial = inicial - 86400;
        dias = dias +1;

    }
    }
    if (inicial< 86400 && inicial >= 3600)
    {
        while (inicial >= 3600)
        {
            inicial = inicial -3600;
            horas = horas +1;
        }
        
    }
    if (inicial <3600 && inicial >= 60)
    {
        while (inicial >= 60)
        {
            inicial = inicial - 60;
            minutos = minutos +1;
        }
        
    }
    segundos = inicial;

    printf("Dias = %d, Horas = %d, Minutos = %d, Segundos = %d\n", dias, horas, minutos, segundos);
     
}

