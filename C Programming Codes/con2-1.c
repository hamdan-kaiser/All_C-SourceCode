#include <stdio.h>
int main ()
{
    int sum=0, i,t, a, c, b;
    sacnf ("%d", &c);
    while (scanf ("%d %d", &a, &b)==2);
    {
        for (t=1; t<=c; t++)
        for (i=a; i<=b; i++)
    {
        if (i%2==1)
            sum= sum+i;
        else
            continue;

        printf ("Case %d: \n", t,sum);
    }

    }

    return 0;
}
