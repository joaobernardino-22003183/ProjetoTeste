#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 0, nota = 0, maior;
    int *notas;

    

    puts("Coloque o número de notas");
    scanf("%d", &n);

    notas = (int *) malloc(n*sizeof(int));

    while (count != n)
    {
        puts("Coloque uma nota");
        scanf("%d", &nota);

        if (nota == -1)
        {
            break;
        }
        
        notas[count] = nota;


        if (count > 0)
        {
            if (notas[count] > notas[count -1])
            {
                maior = notas[count];
            }else
            {
                printf("%d\n", notas[count -1]);
            }
            
        }
        count ++;
        
    }

    printf("%d\n", maior);
    
    
    return 0;
}
