#include <stdio.h>
int main()
{
    int euro;
    float dolares;
    printf("Euros: \n");
    scanf("%d", &euro);
    dolares = euro * 1.23;
    printf("%d euros são %0.2f dólares\n", euro, dolares);
}
