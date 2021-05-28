#include <stdio.h>
#include <string.h>

int main()
{
    int idade, preco = 0;
    char opcao[100] = "";
    do
    {
        puts("Qual é a idade?");
        scanf("%d", &idade);
    if (idade >= 0 && idade <16)
    {
        preco += 10; 
    }else if (idade >= 17 && idade <= 64)
    {
        preco += 17;
    }else if(idade >= 65)
    {
        preco += 10;
    }
    else
    {
        puts("Resposta Inválida");
    }

    puts("Quer comprar mais algum bilhete?");
    scanf("%s", opcao);

    } while (strcmp(opcao,"Não"));
    printf("Preço a pagar: %d\n", preco);
}

