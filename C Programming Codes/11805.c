#include <stdio.h>
int main ()
{
    int a, b, t, i, n, k, p;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d %d %d", &n, &k, &p);
            a= k+p;
            b= (k+p)%n;
            if (a<=n)
                printf ("Case %d: %d\n", i, a);
                else if (b%n==0)
                printf ("Case %d: %d\n", i, n);
            else
                printf ("Case %d: %d\n", i, b);
    }
    return 0;
}
