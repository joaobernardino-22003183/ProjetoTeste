#include <stdio.h>
#define DIM 8

main()
{
    char Galo[DIM][DIM] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

    int i,j;

    Galo[0][0] = 'X';
    Galo[1][1] = 'X';
    Galo[0][2] = '0';
    Galo[2][2] = 'X';
    Galo[3][3] ='X';
    Galo[4][4] ='X';
    Galo[5][5] ='X';
    Galo[6][6] ='X';
    Galo[7][7] ='X';

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            printf("%c %c", Galo[i][j], j == DIM-1?' ':'|');
        }

        if (i != DIM -1)
        {
            printf("\n-------------------\n");
        }
        
        
    }
    

}

