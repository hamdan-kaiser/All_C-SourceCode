#include <stdio.h>
#include <math.h>

int main ()
{
    long long int n, a, x;
    double sum;
    int t, i;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        printf("Case %d:", i);
        for (x=1; x<n; x++)
        {
            sum= x/sqrt(n-x);
            a= (int)(sum);
            if (a==sum)
            {
                printf(" %lld", x);
            }
        }
        printf("\n");
    }
    return 0;
}
