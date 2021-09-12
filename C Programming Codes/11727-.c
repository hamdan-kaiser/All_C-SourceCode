#include <stdio.h>
int main ()
{
    int t, a, b, c, i;
    scanf ("%d\n", &i);
    for (t=1; t<=i; t++)
    {
        scanf ("%d %d %d", &a, &b, &c);
    {
        if ((a>b && b>c) || (c>b && b>a))
            printf ("Case %d: %d\n", t, b);
        else if ((b>a && a>c) || (c>a && a>b))
            printf ("Case %d: %d\n", t, a);
        else
            printf ("Case %d: %d\n", t, c);
    }
    }

    return 0;
}
