#include <stdio.h>
int main ()
{
    int i, t, j;
    long long int n, a, b, c, x, sum;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        sum=0;
        scanf ("%lld", &n);
        for (j=1; j<=n; j++)
        {
            scanf ("%lld %lld %lld", &a, &b, &c);
            x= a*c;
            sum=sum+x;
        }
        printf ("%lld\n", sum);
    }
    return 0;
}
