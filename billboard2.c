#include <stdio.h>
#include <ctype.h>

int stringLength(char *alfabeto)
{
    int count = 0;
    while (alfabeto[count] != '\0')
        count++;

    return count;
}


char *stringCopy(char alfabetoAlterado[], char alfabetoNormal[])
{
    int count = 0;
    for (count = 0; alfabetoNormal[count] != '\0'; count++)
    {
        alfabetoAlterado[count] = alfabetoNormal[count];
    }
    alfabetoAlterado[count] = '\0';
    return alfabetoAlterado;
    
}


char *alterarTexto(int n, char texto[167])
{
    char textoNovo[167] = {'\0'};
    
    int count = 0, tamanhoPalavra = stringLength(texto),nVezes = 0;
    

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
            stringCopy(texto,textoNovo);
        }
        
        

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
            stringCopy(texto,textoNovo);
        }
        
    }
    return texto;
}


int main()
{
    char op;
    int n, count = 0, count2 = 0, tamanhoTexto;
    char texto[167] = "";
    
    do
    {
        char alfabeto[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char alfabetoCifra[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";


        scanf(" %c", &op);

        if (op == 'r' || op == 's')
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
            printf("%s\n", alterarTexto(n,texto));
            
        }
        break;
    
    case 's':
        if (n < -35 || n > 35)
        {
            puts("Error: out of bound");
        }else
        {
            
            n *= -1;
            alterarTexto(n,alfabetoCifra);
            
            tamanhoTexto = stringLength(texto);

            for (count = 0; count < tamanhoTexto; count++)
            {
                texto[count] = toupper(texto[count]);
                for (count2 = 0; texto[count] != alfabeto[count2]; count2++)
                {
                    if (count2 > 36)
                    {
                        break;
                    } 
                }
                if (count2<36){
                    texto[count] = alfabetoCifra[count2];
                }
            }
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
