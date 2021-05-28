#include<stdio.h>
int main()
{
    int a,b,c,d,media;
    printf("Nota 1\n");
    scanf("%d", &a);
    printf("Nota 2\n");
    scanf("%d", &b);
    printf("Nota 3\n");
    scanf("%d", &c);
    printf("Nota 4\n");
    scanf("%d", &d);
    media = (a+b+c+d)/4;
    printf("Média = %d\n", media);
}

