#include <stdio.h>
#define MAX 64

int main()
{
    char fileName[MAX];
    FILE * fp;

    int numeros[4] = {4,2,56,39}; 

    puts("Nome do ficheiro");
    gets(fileName);
    
    if (fileName[0] == '\0')
    {
        fputs("Falta especificar o nome do ficheiro\n", stderr);
        return 0;
    }
    
    fp = fopen(fileName,"wb");
    if (fp == NULL)
    {
        printf("%s não existe\n", fileName);
        return 1;
    }else
    {   
        fwrite(numeros, sizeof(int), 4, fp);

        
    }

    fclose(fp);
    return 0;
}    

