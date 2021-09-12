#include <stdio.h>
#include <math.h>

int main()
{
    long int m, n, t, i, ans;
    scanf("%ld", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%ld %ld", &m, &n);
        ans= (m/3)*(n/3);
        printf("%ld\n", ans);
    }
    return 0;
}
