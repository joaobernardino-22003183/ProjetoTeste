#include <stdio.h>
int main()
{
    int idade;
    int menos_20 = 0;
    int mais_50 = 0;
    
    do
    {
        
        puts("Introduza a sua idade!");
        scanf("%d", &idade);

        if (idade > 0)
        {
           if (idade < 21)
        {
             menos_20 ++;
        }
        if (idade > 50)
        {
            mais_50 ++;
        } 
        }
          
    } while (idade != -99);
    
     printf("Total de pessoas com menos de 21 anos: %d;\nTotal de pessoas com mais de 50 anos:%d\n", menos_20,mais_50); 
}

