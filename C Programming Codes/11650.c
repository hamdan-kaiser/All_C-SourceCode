#include <stdio.h>
int main ()
{
    int n, i, h1, h2, m1, m2;
    char c;
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf ("%d %c %d", &h1, &c, &m1);
        if ((h1==12 || h1==6) && m1==00)
            h2=h1;
        else
        {
            if (m1==00)
                h2= 12-h1;
                    else
                        h2= 12-(h1+1);
            if (h2<0)
                h2= 12+h2;
            if (h2==0)
                h2=12;
        }
        if (m1==00)
            m2=m1;
        else
            m2= 60-m1;
        if (h2<10)
        {
            if (m2<10)
                printf ("0%d%c0%d\n", h2, c, m2);
            else
                printf ("0%d%c%d\n", h2, c, m2);
        }
        else
        {
            if (m2<10)
                printf ("%d%c0%d\n", h2, c, m2);
            else
                printf ("%d%c%d\n", h2, c, m2);
        }
    }
    return 0;
}
