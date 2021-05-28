#include <stdio.h>
int main()
{
    int a,b,c,soma;

    puts("Companheiro, coloque o primeiro número");
    scanf("%d", &a);
    puts("Camarada, coloque outro número");
    scanf("%d", &b);
    puts("Chapa, mete aí outro número");
    scanf("%d", &c);

    soma = a+b;
    if (soma < c)
    {
        printf("A=%d\nB=%d\nC=%d\n", a,b,c);
    }
    
}

