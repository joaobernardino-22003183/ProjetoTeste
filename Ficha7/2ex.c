#include <stdio.h>
#define MAX 64

int main()
{
    char fileName[MAX], fileName2[MAX];
    FILE * fp;
    FILE * fpcopy;

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
        puts("Nome do segundo ficheiro");
        gets(fileName2);

        fpcopy = fopen(fileName2,"w");


        if (fpcopy == NULL)
        {
            printf("%s não existe\n", fileName);
            return 1;
        }else
        {
            char ch;
            while((ch=fgetc(fp))!=EOF)
            {
                fputc(ch,fpcopy);
            }
            fclose(fp);
            fclose(fpcopy);
        }
    return 0;
    }
    
}


