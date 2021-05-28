#include <stdio.h>
int main (void)
{
    int centenas;
    int dezenas; 
    int unidades;
    int numero;

    centenas = 3;
    dezenas = 5;
    unidades = 2;

    printf("Estes programa congrega, num numero, %d centenas, %d dezenas e %d unidades\n", centenas, dezenas, unidades);

    numero = centenas*100+dezenas*10+unidades*1;

    printf("Resultado: %d\n", numero);
    return 0;
}