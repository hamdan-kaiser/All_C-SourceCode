#include <stdio.h>
int main ()
{
    int a, b, t, i, e, d, f, c, sum;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d %d %d", &e, &f, &c);
        d= e+f;
        sum=0;
        while (d>=c)
        {
            b= d/c;
            a= d%c;
            d= a+b;
            sum= sum+b;
        }
        printf("%d\n", sum);
    }
    return 0;
}
