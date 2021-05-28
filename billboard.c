#include <stdio.h>
#include <string.h>

int alterarTexto(int n, char texto[167])
{
    char textoNovo[167] = {'\0'};
    
    int count = 0, tamanhoPalavra = strlen(texto),nVezes = 0;
    

    if (n > 0)
    {
        while (nVezes < n)
        {
            count = 0;
            while (count < tamanhoPalavra)
            {
                if (texto[count +1] == '\0')
                {
                    textoNovo[0] = texto[count];
                }else
                {
                    textoNovo[count+1] = texto[count];
                }
                
                count ++;
            }
            nVezes ++;
            strcpy(texto,textoNovo);
        }
        
        return 0;

    }else
    {
        n *=(-1);
        while (nVezes < n)
        {
            count = 0;
            while (count < tamanhoPalavra)
            {
                
                if (texto[count +1] == '\0')
                {
                    textoNovo[count] = texto[0];
                }else
                {
                    textoNovo[count] = texto[count+1];
                }
                
                count ++;
            }
            nVezes ++;
            strcpy(texto,textoNovo);
        }
        return 0;
    }
    return 0;
}

int main()
{
    char op;
    int n;
    char texto[167] = "";

    do
    {
        
        scanf(" %c", &op);

        if (op == 'r')
        {
            scanf("%d %[^\n]s", &n, texto); 
        }
        
        switch (op)
    {
    case 'r':
        if (n == 0)
        {
            puts(texto);
        }else
        {
            alterarTexto(n,texto);
            puts(texto);
        }
        break;
    
    case 'h':
        puts(texto);
        
        break;
    
    case 'q':
        puts("Exiting->");
        break;
    
    default:
        puts("Error: Unknown option");
        break;
    }
     
    } while (op != 'q');

    return 0;
}


