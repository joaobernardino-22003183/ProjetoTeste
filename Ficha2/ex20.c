#include <stdio.h>
int main()
{
    int km, litros, consumo;
    printf("Quilómetros que percorreu:\n");
    scanf("%d", &km);
    printf("Litros que consumiu:\n");
    scanf("%d", &litros);
    consumo = km/litros;
    printf("Consumo aos 100km = %d\n", consumo);
}

