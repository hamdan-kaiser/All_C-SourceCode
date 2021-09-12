#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    double d, u, v, sum;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf", &d, &v, &u);

        if (d==0)
        {
            if (d==0 && u==0 && v==0)
                printf("Case %d: can't determine\n", i);
            else if (v==0 || u==0 || v>=u)
                printf("Case %d: can't determine\n", i);
            else
            {
                sum=0;
                printf("Case %d: %0.3lf\n", i, sum);
            }
        }
        else if (v==0 || u==0 || v>=u)
            printf("Case %d: can't determine\n", i);
        else
        {
            sum= (d/sqrt((u*u)-(v*v)))-(d/u);
            printf("Case %d: %0.3lf\n", i, sum);
        }
    }
    return 0;
}
