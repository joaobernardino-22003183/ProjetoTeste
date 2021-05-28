#include <stdio.h>


int main()
{
    int i = 0, j = 0;

    int x = 5, y = 5;

    char ch = '_';

    while (i < x)
    {
        for (j = 0; j < y; j++)
        {
            printf("%c", ch);
        }
        
        printf("\n");
        i++;
        
    }
    return 0;
    
}

