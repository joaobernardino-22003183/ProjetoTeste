#include <stdio.h>
int main()
{
    int num_1, resto;
    printf("Caríssimo, bota aí um número\n");
    scanf("%d", &num_1);

    resto = num_1 %2;
    switch (resto)
    {
    case 0:
        printf("O número %d é par\n", num_1);
        break;
    
    default:
        printf("O número %d é ímpar\n", num_1);
        break;
    }
}

