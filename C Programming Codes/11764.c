#include <stdio.h>
int main ()
{
    int t, n, sum1, sum2, i, j, k, l;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        sum1=0;
        sum2=0;
        l=0;
        scanf ("%d", &n);
        for (j=1; j<=n; j++)
        {
            scanf ("%d", &k);
            if (k>l)
            {
                sum1++;
                l=k;
            }
            else if (k<l)
            {
                sum2++;
                l=k;
            }
        }
        printf ("Case %d: %d %d\n", i, (sum1-1), sum2);
    }
    return 0;
}
