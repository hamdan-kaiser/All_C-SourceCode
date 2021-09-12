#include <stdio.h>
#include <math.h>

int main ()
{
    long long int n, i, sum, ans, arr[110];
    printf("PERFECTION OUTPUT\n");
    while (scanf("%lld", &n)==1)
    {
        if (n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        sum=0;
        if (n<=11)
        {
            if (n==4)
                printf ("%5.0lld  ABUNDANT\n", n);
            else if (n==6)
                printf ("%5.0lld  PERFECT\n", n);
            else
                printf ("%5.0lld  DEFICIENT\n", n);
        }
        else
        {
            for (i=1; i<=n/4; i++)
            {
                if (i==1)
                {
                    sum= sum+i;
                }
                else
                {
                    if (n%i==0)
                        sum= sum+i+(n/i);
                    if (sum>n || sum==n)
                        break;
                }
            }
            if (sum==n)
                printf ("%5.0lld  PERFECT\n", n);
            else if (sum>n)
                printf ("%5.0lld  ABUNDANT\n", n);
            else
                printf ("%5.0lld  DEFICIENT\n", n);
        }
    }
    return 0;
}
