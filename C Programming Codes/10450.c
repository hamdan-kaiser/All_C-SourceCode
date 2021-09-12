#include <stdio.h>
#include <math.h>
int main()
{
    long long int t, i, j, a, n, b, ans;
    scanf("%lld", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        if (n<0)
            printf("Scenario #%lld:\n0\n\n", i);
        else
        {
            a=1;
            ans=1;
            for (j=1; j<=n; j++)
            {
                if (j>2)
                    a=b;
                if (j>1)
                    b=ans;
                ans+=a;
            }
            printf("Scenario #%lld:\n%lld\n\n", i, ans);
        }
    }
    return 0;
}
