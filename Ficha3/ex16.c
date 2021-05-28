#include <stdio.h>

int main()
{
    unsigned int numFim;
    int count = 0, count2 = 0;
    double count2_1 = 0.0, count2_2 = 0.0, count2_3 = 0.0;
    scanf("%d", &numFim);
    do
    {   
        if (count % 7)
        {
            puts("Buzz");
        }
        if (count >= 10 && count < 100)
        { 
            count2_1 = count/10;
            count2 = count2_1;
            count2_2 = count2_1 - count2;
            count2_3 = count2_2 * 10;
            if (count2 == count2_3)
            {
                puts("Buzz");
            }
        }
        
        count ++;
       
    } while (count < numFim +1);
}