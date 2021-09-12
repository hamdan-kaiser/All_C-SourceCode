#include <stdio.h>
int  main ()
{
    int i, t, l, j, k, sum;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%d", &k);
        sum=0;
        for (j=1; j<=k; j++)
        {
            scanf ("%d", &l);
            if (j==(k/2)+1)
                sum= l;
        }
        printf ("Case %d: %d\n", i,sum);
    }
    return 0;
}

