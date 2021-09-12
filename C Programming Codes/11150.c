#include <stdio.h>
int main ()
{
    int a, b, c, d, e, f, n, ans1, ans2, sum;
    while (scanf ("%d", &n)==1)
    {
        sum= 0;
        d= n+1;
        while (d>=3)
        {
            e= d/3;
            f= d%3;
            d= e+f;
            sum= sum+e;
        }
        ans1= n+sum;
        sum=0;
        c=n;
        while (n>=3)
        {
            a= n/3;
            b= n%3;
            n= a+b;
            sum= sum+a;
        }
        ans2= c+sum;

        if (ans1>=ans2)
            printf ("%d\n", ans1);
        else
            printf ("%d\n", ans2);
    }
    return 0;
}
