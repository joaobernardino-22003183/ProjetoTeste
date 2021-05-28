#include <stdio.h>
#define MAX 64

int main()
{
    char fileName[MAX];
    FILE * fp;
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
        printf("%s existe e foi corretamente aberto\n", fileName);
        return 0;
    }
    fclose(fp);
    return 0;
}

