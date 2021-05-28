#include <stdio.h>
#define MAX 64

int main()
{
    char fileName[MAX];
    FILE * fp;

    char Nome[100];
    int Nota;

    float Soma = 0.0;
    float count = 0.0;

    float media;

    puts("Nome do ficheiro");
    gets(fileName);
    
    if (fileName[0] == '\0')
    {
        fputs("Falta especificar o nome do ficheiro\n", stderr);
        return 0;
    }
    
    fp = fopen(fileName,"r");
    if (fp == NULL)
    {
        printf("%s não existe\n", fileName);
        return 1;
    }else
    {   
        while (fscanf(fp, "%s %d", Nome, &Nota) != EOF)
        {
            if(Nota >= 10)
                printf("%s %d\n", Nome,Nota);
    
            Soma += Nota;   
            count ++;  
        }
        
    }

    media = Soma / count;
    printf("%0.2f\n", media);
    fclose(fp);
    return 0;
}

