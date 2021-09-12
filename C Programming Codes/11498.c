#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    long int k, n, m, x, y, i;
    while (scanf ("%ld", &k)==1)
    {
        if (k==0)
            break;
        scanf ("%ld %ld", &n, &m);
        for (i=1; i<=k; i++)
        {
            scanf ("%ld %ld", &x, &y);
            if (n==x || m==y)
                printf ("divisa\n");
            else if (n>x && m>y)
                printf ("SO\n");
            else if (n<x && m<y)
                printf ("NE\n");
            else if (n>x && m<y)
                printf ("NO\n");
            else
                printf ("SE\n");
        }
    }
    return 0;
}
