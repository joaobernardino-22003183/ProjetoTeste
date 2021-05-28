#include <stdio.h>
#include <string.h>

void menu()
{
    puts("+-----------------------------------------------------");
    puts("read <filename>     - read input file");
    puts("show                - show the mine map");
    puts("trigger <x> <y>     - trigger mine at <x> <y>");
    puts("plant <x> <y>       - place armed mine at <x> <y>");
    puts("export <filename>   - save file with current map");
    puts("quit                - exit program");
    puts("sos                 - show menu");
    puts("+-----------------------------------------------------");
}

int validar(int cordenadaX, int cordenadaY) /* Função que valida as cordenadas */
{
    if (cordenadaX >= 0 && cordenadaX <= 24)
    {
        if (cordenadaY >= 0 && cordenadaY <= 24)
        {
            return 1;
        }else{
            return 0;
        }  
    }
    return 0;  
}

void mapaGeral(char mapa[25][25]) /* Função que cria o Mapa Inicial */
{
    int i = 0, j = 0, maximo=25;

    for (i = 0; i < maximo; i++)
    {
        for (j = 0; j < maximo; j++)
        {
            mapa[i][j] = '_';
        }
    }
}

void show(char mapa[25][25]) /* Função que cria o Mapa com as intruções dadas */
{
    int x, y;

    for (x = 0; x < 25; x++)
    {
        for ( y = 0; y < 25; y++)
        {
            printf("%c", mapa[x][y]);
        }
        printf("\n");         
    }
}

void trigger(char mapa[25][25], int cordenadaX, int cordenadaY)  /* Função que passa uma bomba do estado armed para o estado off */
{
    if (validar(cordenadaX, cordenadaY) == 1)
    {
        if (mapa[cordenadaX][cordenadaY] == '.')
        {
            mapa[cordenadaX][cordenadaY] = '*';

        }else if (mapa[cordenadaX][cordenadaY] == '_')
        {
            puts("No mine at specified coordinate");
        }
    }else
    {
        puts("Invalid coordinate");
    }
}

void plant(char mapa[25][25], int cordenadaX, int cordenadaY)   /* Função que planta uma bomba em estado armed */
{
    if (validar(cordenadaX, cordenadaY) == 1)
    {
        if (mapa[cordenadaX][cordenadaY] == '*' || mapa[cordenadaX][cordenadaY] == '_')
        {
            mapa[cordenadaX][cordenadaY] = '.';
        }
    }else
    {
        puts("Invalid coordinate");
    }
}

int read(char fileName[100],char mapa[25][25]) /* Função que recebe o ficheiro e contrói o mapa */ 
{
    char linha[100];
    FILE * fp;
    int tamanho1, tamanho2, cordenadaX = 0, cordenadaY = 0, primeiraLinha = 1, scanner;
    char simbolo = ' '; 


    mapaGeral(mapa);

    fp = fopen(fileName,"r");
            
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }  

    while (fgets(linha, 100, fp))
    {
        if (linha[0] == '\n' || linha[0] == '#')
        {
            continue;
        }   
        if (primeiraLinha == 1)
        {
            sscanf(linha,"%d %d", &tamanho1, &tamanho2);

            if (tamanho1 == 25 && tamanho2 == 25)
            {
                primeiraLinha = 0;
                continue;
            }else{
                puts("File is corrupted");
                mapaGeral(mapa);
                return 0;
            }
        }
        
        scanner = sscanf(linha, "%c %d %d", &simbolo, &cordenadaX, &cordenadaY);

        if (scanner != 3)
        {
            puts("File is corrupted");
            mapaGeral(mapa);
            return 0;
        }
        
        if(validar(cordenadaX,cordenadaY) == 0){
            puts("File is corrupted");
            mapaGeral(mapa);
            return 0;
        }
        if (simbolo == '.' || simbolo == '*')
        { 
            mapa[cordenadaX][cordenadaY] = simbolo;
        }else{
            puts("File is corrupted");
            mapaGeral(mapa);
            return 0;
        }
    }

    fclose(fp);
    return 0;
}

void limpeza() /* Função que limpa o buffer */
{
    char buffer[100];

    fgets(buffer,100,stdin);
}

void export(char fileName[100], char mapa[25][25]) /* Função que cria um ficheiro e insere a informação do mapa */
{
    int dimensaoX = 25, dimensaoY = 25, entrada,i, j;
    FILE * fp;
    
    fp = fopen(fileName,"w"); 
    entrada = 1;  

    if (entrada == 1)
    {
        entrada ++;
        fprintf(fp, "%d %d\n", dimensaoX, dimensaoY);
    }
    
    for (i = 0; i < 25; i++)
    {
        for (j = 0; j < 25; j++)
        {
            if (mapa[i][j] == '.')
            {
                fprintf(fp, ". %d %d\n", i,j);

            }else if (mapa[i][j] == '*')
            {   
                fprintf(fp, "* %d %d\n", i,j);
            }
        }
    }
    fclose(fp);
             
}

int main()
{
    char opcao[100];
    char fileName[100];
    char mapa[25][25];

    int cordenadaX = 0, cordenadaY = 0,enquanto = 2;

    menu();
    
    mapaGeral(mapa);

    do
    {
        printf(">");
        scanf("%s", opcao);

        if (strcmp(opcao, "read") == 0)
        {
            scanf("%s", fileName);
            read(fileName, mapa);

        }else if (strcmp(opcao, "show") == 0)
        {
            show(mapa);

        }else if(strcmp(opcao, "trigger") == 0)
        {
            scanf("%d %d", &cordenadaX, &cordenadaY);
            trigger(mapa, cordenadaX, cordenadaY);
            
        }else if (strcmp(opcao, "plant") == 0)
        {
            scanf("%d %d", &cordenadaX, &cordenadaY);
            plant(mapa, cordenadaX, cordenadaY); 

        }else if (strcmp(opcao, "export") == 0)
        {
            scanf("%s", fileName);
            export(fileName, mapa);
            
        }else if (strcmp(opcao, "quit") == 0)
        {
            return 0;

        }else if (strcmp(opcao, "sos") == 0)
        {
            menu();

        }else
        {
            puts("Invalid command!");

        }
        limpeza();
    } while (enquanto);
    
    return 0;  
}

