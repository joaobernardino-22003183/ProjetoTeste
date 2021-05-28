#include<stdio.h>

int main(void)
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    a = 5 && 6;
    b = 5 && 0;
    c = 5 > 2;
    d = 5 == 6;
    e = !5;
    f = !0;
    g = 532  1;
    h = 56  1;
    i = 67  0;
    j = 03  50;
    k = 0 || !0;
    l = 50 >> 2;
    m = 100 << 3;
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m);

    return 0;
}
