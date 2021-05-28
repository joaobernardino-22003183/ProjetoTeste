#include <stdio.h>
int main()
{
    int codigo, quantidade;
    double preco = 0.0;

    puts("O que deseja?");
    scanf("%d", &codigo);
    
    puts("E vai desejar quantos?");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 100:
        preco = 1.20 * quantidade;
        break;

    case 101:
        preco = 1.30 * quantidade;
        break;

    case 102:
        preco = 1.50 * quantidade;
        break;

    case 103:
        preco = 1.20 * quantidade;
        break;

    case 104:
        preco = 1.30 * quantidade;
        break;                
    
    case 105:
        preco = 1.00 * quantidade;
        break;
    
    default:
        puts("Isso aqui não há, xau zezoca");
        break;
    }  

    printf("O preço é %g\n", preco);
}

