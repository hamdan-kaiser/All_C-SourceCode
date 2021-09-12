#include <stdio.h>
int main()
{
    long int r, n, a, d, t, b, i;
    t=1;
    while (scanf("%ld %ld", &r, &n)==2)
    {
        if (r==0 && n==0)
            break;
        else
        {
            if (r>(n*27))
                printf("Case %ld: impossible\n", t);
            else
            {
                for (i=1; i<=27; i++)
                {
                    if (r<=(n*i))
                        break;
                }
                printf("Case %ld: %ld\n", t, i-1);
            }
        }
        t++;
    }
    return 0;
}
