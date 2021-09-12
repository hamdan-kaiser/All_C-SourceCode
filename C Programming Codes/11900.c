#include <stdio.h>
int main ()
{
    int n, p, q, i, j, t, x, arr[1000], a,  b;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%d %d %d", &n, &p, &q);
        x=0;
        b=1;
        a=0;
        for (j=1; j<=n; j++)
        {
            scanf ("%d", &arr[j]);
            if (n==0 || p==0 || q==0)
                break;
            a= a+arr[j];
            if (b<=p && a<=q)
                    x++;

            b++;
        }
        printf ("Case %d: %d\n", i, x);
    }
    return 0;
}
