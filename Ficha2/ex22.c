#include <stdio.h>
int main()
{
    float a,b,soma,multi,subt,subt2,divi,divi2;
    printf("Introduza um número\n");
    scanf("%f", &a);
    printf("Introduza outro número\n");
    scanf("%f", &b);
    soma = a+b;
    subt = a-b;    
    subt2 = b-a;
    multi = a*b;
    divi = a/b;
    divi2 = b/a;
    printf("a+b = %f\na-b=%f\nb-a=%f\na*b=%f\na/b=%0.2f\nb/a=%0.2f\n", soma,subt,subt2,multi,divi,divi2);
}

