#include <stdio.h>
int main()
{
    float peso,altura,imc;

    puts("Coloque o seu peso(em kg)");
    scanf("%f", &peso);

    puts("Coloque a sua altura(em m)");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    if (imc < 18.5)
    {
        puts("Abaixo do peso");
    }else if (imc >= 18.5 && imc < 25)
    {
        puts("Peso normal");
    }else if (imc >=25 && imc < 30)
    {
        puts("Acima do peso");
    }else if (imc >= 30)
    {
        puts("obeso");
    }    
}


