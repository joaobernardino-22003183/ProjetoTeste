#include <stdio.h>
int main()
{
    int valor;
    float primeiro, segundo, terceiro;
    printf("Coloque o valor:\n");
    scanf("%d", &valor);
    primeiro = valor * 0.46;
    segundo = valor * 0.32;
    terceiro = valor * 0.22;
    printf("Primeiro : %0.2f, Segundo : %0.2f, Terceiro : %0.2f\n", primeiro, segundo, terceiro); 
}

