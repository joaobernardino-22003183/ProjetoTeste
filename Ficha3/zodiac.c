#include <stdio.h>

int signos(int diaNasc, int mesNasc)
{
    if (mesNasc == 1)
    {
        if (diaNasc < 20)
        {
            printf("Capricornio\n");
        }else{
            printf("Aquario\n");
        }    
    }else if (mesNasc == 2)
    {
        if (diaNasc < 19)
        {
            printf("Aquario\n");
        }else{
            printf("Peixes\n");
        } 
    }else if (mesNasc == 3)
    {
        if (diaNasc < 21)
        {
            printf("Peixes\n");
        }else{
            printf("Carneiro\n");
        }
    }else if (mesNasc == 4)
    {
        if (diaNasc < 20)
        {
            printf("Carneiro\n");
        }else{
            printf("Touro\n");
        }
    }else if (mesNasc == 5)
    {
        if (diaNasc < 21)
        {
            printf("Touro\n");
        }else {
            printf("Gemeos\n");
        }   
    }else if (mesNasc == 6)
    {
        if (diaNasc < 21)
        {
            printf("Gemeos\n");
        }else{
            printf("Carangueijo\n");
        }    
    }else if (mesNasc == 7)
    {
        if (diaNasc < 23)
        {
            printf("Carangueijo\n");
        }else{
            printf("Leao\n");
        }
    }else if (mesNasc == 8)
    {
        if (diaNasc < 23)
        {
            printf("Leao\n");
        }else{
            printf("Virgem\n");
        }
    }else if (mesNasc == 9)
    {
        if (diaNasc < 23)
        {
            printf("Virgem\n");
        }else{
            printf("Balanca\n");
        }
    }else if (mesNasc == 10)
    {
        if (diaNasc < 23)
        {
            printf("Balanca\n");
        }else{
            printf("Escorpiao\n");
        }
    }else if (mesNasc == 11)
    {
        if (diaNasc < 22)
        {
            printf("Escorpiao\n");
        }else{
            printf("Sagitario\n");
        }
    }else {
        if (diaNasc < 22)
        {
            printf("Sagitario\n");
        }else{
            printf("Capricornio\n");
        }
            
    }
    return 0;
}

int idadeemAnos(int diaNasc, int mesNasc, int anoNasc, int diaAt, int mesAt, int anoAt, int idade)
{
    if (mesNasc > mesAt)
    {  
        idade = anoAt - anoNasc - 1;
        return idade;

    }else if (mesNasc == mesAt)
    {
        if (diaNasc > diaAt)
        {
            idade = anoAt - anoNasc - 1;
            return idade;

        }else{
            idade = anoAt - anoNasc;
            return idade;
        }  
    }else
    {
        idade = anoAt - anoNasc;
        return idade;
    }
    return 0;
}

int aptoTrab(int diaNasc, int mesNasc, int anoNasc, int diaAt, int mesAt, int anoAt, int idade, int mes)
{
    if (idadeemAnos(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade) < 16)
    {
        printf("Nao tem idade para trabalhar\n");
    }else if (idadeemAnos(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade) == 66)
    {
        if (mesNasc == mesAt)
        {
            if (diaNasc > diaAt)
            {
                mes = 11;
                printf("Elegivel para reforma\n");
            }else
            {
                mes = 0;
                printf("Apto para trabalhar\n");
            }  
        }else if (mesNasc > mesAt)
        {
            mes = mesNasc - mesAt;
            if (mes > 5)
            {
                printf("Apto para trabalhar\n");
            }else{
                printf("Elegivel para reforma\n");
            }
        }else{
            mes = mesAt - mesNasc;
            if (mes < 5)
            {
                printf("Apto para trabalhar\n");
            }else{
                printf("Elegivel para reforma\n");
            }
            
        }
    }else if (idadeemAnos(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade) >= 67)
    {
        printf("Elegivel para reforma\n");
    }else{
        printf("Apto para trabalhar\n");
    }
    
    return 0;
}

int dataInferior(int diaNasc, int mesNasc, int anoNasc, int diaAt, int mesAt, int anoAt)
{
    if (anoAt < anoNasc)
    {
        return 0;
    }else if (anoAt == anoNasc)
    {
        if (mesAt < mesNasc)
        {
            return 0;
        }else if (mesAt == mesNasc)
        {
            if (diaAt < diaNasc)
            {
                return 0;
            }
            return 1;
        } 
        return 1; 
    }else{
        return 1;
    }
    return 0;
}

int dataValida(int dia, int mes, int ano)
{    
    if (ano > 1900 && ano <= 2020)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        if (dia > 0 && dia <= 31)
        {
            return 1;
        }
        return 0;
    }else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if (dia > 0 && dia <= 30)
        {
            return 1;
        }
        return 0;
    }else if (mes == 2)
    {
        if ((ano % 4 == 0 && ano % 100 == 0 )|| ano % 400 != 0)
        {
            if (dia > 0 && dia <= 29)
            {
                return 1;
            }
            return 0;    
        }else
        {
            if (dia > 0 && dia <= 28)
            {
                return 1;
            }
            return 0;    
        }
    }
    return 0;
    }
    return 0;
}

int opcaoA(int diaNasc, int mesNasc, int anoNasc, int diaAt, int mesAt, int anoAt, int idade)
{
    printf("%d anos\n", idadeemAnos(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade));
    return 0;
}

int opcaoZ(int diaNasc, int mesNasc)
{
    signos(diaNasc,mesNasc);
    return 0;
}

int opcaoR(int diaNasc, int mesNasc, int anoNasc, int diaAt, int mesAt, int anoAt, int idade, int mes)
{
    aptoTrab(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade,mes);
    return 0;
}

int opcaoT(int diaNasc, int mesNasc, int anoNasc, int diaAt, int mesAt, int anoAt, int idade, int mes)
{
    printf("%d anos\n", idadeemAnos(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade));
    signos(diaNasc,mesNasc);
    aptoTrab(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade,mes);
    return 0;
}

int main()
{
    char opcao;
    int diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade = 0,mes = 0;

    scanf("%c %d %d %d %d %d %d", &opcao,&diaNasc,&mesNasc,&anoNasc,&diaAt,&mesAt,&anoAt);

    if (dataValida(diaNasc, mesNasc, anoNasc) == 1)
    {
        if (dataValida(diaAt, mesAt, anoAt) == 1)
        {
            if (dataInferior(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt) == 1)
            {
                switch (opcao)
                {
                case 'a':
                    opcaoA(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade);
                    break;

                case 'z':
                    opcaoZ(diaNasc,mesNasc);
                    break;    
    
                case 'r':
                    opcaoR(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade,mes);
                    break;

                case 't':
                    opcaoT(diaNasc,mesNasc,anoNasc,diaAt,mesAt,anoAt,idade,mes);
                    break; 
   
                default:
                    printf("Opção Inválida\n");
                    break;
                }
            }else
            {
                puts("Data actual inferior a data de nascimento");
            }
            
        }else
        {
            puts("Data actual invalida");
        }
        
    }else{
        puts("Data de nascimento invalida");
    }
    return 0;
}


