#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    char c;
    int t, i;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        a=0;
        b=0;
        w=0;
        d=0;
        scanf ("%d", &n);
        for (j=1; j<=n; j++)
        {
            scanf ("%c", &c);
            if (c=='A')
                a++;
            else if (c=='B')
                b++;
            else if (c=='W')
                w++;
            else if (c=='T')
                d++;
        }
        if (b==n)
            printf ("Bwash\n");
        else if (w==n)
            printf ("Wwash\n");
        else if (a==n)
            printf ("Aban\n");
        else if (w==0 && t>0)
            printf ("")
    }
    return 0;
}
