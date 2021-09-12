#include <stdio.h>
#include <math.h>
int main ()
{
    int a, b, t, i, m, n;
    scanf ("%d", &i);
    for (t=1; t<=i; t++)
    {
        scanf ("%d %d", &a, &b);
        m= power (a+1)/2, 2;
        n= power (b+1)/2, 2;
        if (m>n)

            printf ("Case %d: %d\n", t, m-n);
        else
            printf ("Case %d: %d\n", t, n-m);
    }
    return 0;
}

