#include <stdio.h>
int main ()
{
    int a, b, c, i, j, k, l, m, x, n;
    scanf ("%d", &a);
    for (i=1; i<=a; i++)
    {
        scanf ("%d %d", &b, &c);
        for (j=1; j<=c; j++)
        {
            n=1;
            for (k=1; k<(2*b); k++)
            {
                if (k<=b)
                {
                    for (l=1; l<=k; l++)
                    {
                        printf("%d", k);
                    }
                }
                if (k>b)
                {
                    x=b-n;
                    for (m=1; m<=x; m++)
                    {
                        printf("%d", x);
                    }
                    n++;
                }
                    printf("\n");
            }
            if (i==a && j==c)
                break;
            else
                printf("\n");
        }
    }
    return 0;
}
