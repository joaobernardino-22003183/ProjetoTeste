#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 0;
    int *notas;
    float media = 0.0, nota = 0.0;

    puts("Coloque o número de notas");
    scanf("%d", &n);

    notas = (int *) malloc(n*sizeof(int));

    while (count != n)
    {
        puts("Coloque uma nota");
        scanf("%f", &nota);

        notas[count] = nota;
        media += nota / 2;

        count++;
        
    }

    printf("%0.2f\n", media);

    return 0;
}
