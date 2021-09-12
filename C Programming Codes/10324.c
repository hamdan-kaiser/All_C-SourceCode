#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str [1000010];
    long long int i, j, k, a, m, n, ln, t, l, x=0, y;
    while (gets(str))
    {
        x++;
        ln= strlen(str);
        if (ln==0)
            break;
        if (str[0]==EOF)
            break;
        scanf ("%lld", &t);
        printf ("Case %lld:\n", x);
        for (l=1; l<=t; l++)
        {
            scanf ("%lld %lld", &i, &j);
            a=0;
            if (i<=j)
            {
                m=i;
                n=j;
            }
            else
            {
                m=j;
                n=i;
            }
            for (k=m, y=n; k<=(n+m)/2; k++, y--)
            {
                if (m==n)
                    break;
                if (k<n)
                {
                    if (str[k]!=str[y])
                    {
                        a=1;
                        break;
                    }
                }
                if (k==(n+m)/2)
                {
                    if (str[k]!=str[y+1])
                    {
                        a=1;
                        break;
                    }
                }
            }
            if (a==1)
                printf ("No\n");
            else
                printf ("Yes\n");
        }
        getchar();
    }
    return 0;
}
