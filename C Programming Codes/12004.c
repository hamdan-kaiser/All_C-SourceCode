#include <stdio.h>
int main()
{
    long int n, t, i, sum;
    scanf("%ld\n", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%ld", &n);
        sum= (n*(n-1))/2;
        if (sum%2==0)
            printf("Case %ld: %ld\n", i, sum/2);
        else
            printf("Case %ld: %ld/2\n", i, sum);
    }
    return 0;
}
