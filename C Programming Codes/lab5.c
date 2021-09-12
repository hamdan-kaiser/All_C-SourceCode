#include <stdio.h>
int main ()
{
    int a, b, n;
    for (a=1,b=1,n=1; a*a<=1000,b<=1000,n<=20; a++,b=b*2,n++)
    {
        printf ("%d%d", a*a, b);
    }
    return 0;
}
