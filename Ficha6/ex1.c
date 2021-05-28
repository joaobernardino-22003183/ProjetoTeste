#include <stdio.h>

int main()
{
    int x = 5;
    float y = 5.0;

    int * px = &x;
    float * py = &y;

    puts("ENDEREÇO\t\tCONTEÚDO\tINDENTIFICADOR");

    printf("%lu\t\t%d\t\tx\n",(long unsigned) &x, x);
    printf("%lu\t\t%f\ty\n",(long unsigned) &y, y);
    printf("%lu\t\t%lu\tpx\n",(long unsigned) &px,(long unsigned)px);
    printf("%lu\t\t%lu\tpy\n",(long unsigned) &py,(long unsigned)py);
    puts("");
    *py=509;
    *px+=5;
    printf("%lu\t\t%d\t\tx\n",(long unsigned) &x, x);
    printf("%lu\t\t%f\ty\n",(long unsigned) &y, y);
    printf("%lu\t\t%lu\tpx\n",(long unsigned) &px,(long unsigned)px);
    printf("%lu\t\t%lu\tpy\n",(long unsigned) &py,(long unsigned)py);
    return 0;

}


