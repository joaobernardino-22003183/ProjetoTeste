# include <stdio.h>
int main() 
{
    short valor= 100; 
    int tamanho;

    tamanho = sizeof(valor);
    
    printf("Um short int : %d\n",valor); 
    printf("espaco de memoria ocupado: %d bytes\n", tamanho);
    return 0;
}


