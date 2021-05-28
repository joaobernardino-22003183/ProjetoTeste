#include <stdio.h>

int main()
{
    int num_1, num_2;
    float resultado=0.0;
    char simbolo;

    puts("Caro amigo, insira um número");
    scanf("%d", &num_1);

    puts("Vai me desculpar o incómodo, mas pode colocar outro");
    scanf("%d", &num_2);
    
    puts("Caríssimo, coloque uma belíssima operação, por favor");
    scanf(" %c", &simbolo);

    switch (simbolo)
    {
    case '+':
        resultado = num_1 + num_2;
        break;
    
    case '-':
        resultado = num_1 - num_2;
        break;

    case '*':
        resultado = num_1 * num_2;
        break; 

    case '/':
        resultado = num_1 / num_2;
        break; 

    default:
        puts("Mas o senhor pode colocar uma operação como deve ser????? Ah ok");
        break;
    }
    printf("E o resultado da sua operação é : %0.0f\n", resultado);
    puts("Xausinho até à próxima");
}

