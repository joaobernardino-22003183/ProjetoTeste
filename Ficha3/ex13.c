#include <stdio.h>

int main()
{
    int count = 0;
    int soma = 0;
    do
    {
        soma += count;
        ++count;
    } while (count <= 10);
    printf("%d\n", soma);

}

