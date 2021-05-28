#include <stdio.h>

int main()
{
    double num_1;
    int somatorio = 0,count = 0;
    double media = 0.0;
    do
    {
        puts("Introduza um número");
        scanf("%lg", &num_1);

        if (num_1 > 0)
        {
            somatorio += num_1 ; 
            media += (double) num_1/count;
            count ++;
        }
        
        
    } while (num_1 >= 0);

    printf("Somatório = %d;\nMédia = %g;\nValores lidos = %d\n", somatorio, media,count);   
}

