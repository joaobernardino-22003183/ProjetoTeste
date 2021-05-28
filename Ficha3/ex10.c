#include <stdio.h>
int main()
{
    int num_1 =0;
    int total;

    puts("Zezoca, put the number faxavor!");
    scanf("%d", &num_1);
    
    if (num_1 < 0)
    {
        total = num_1 * 3;
        printf("O RESULTADO É : %d\n", total);
    }else{
        total = num_1 * 2;
        printf("O RESULTADO É : %d\n", total);
    }

}

