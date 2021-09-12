#include <stdio.h>
int main()
{
    long long int n, i, j, k, cube, ans, a, b, sum;
    while (scanf("%lld", &n)==1)
    {
        if (n==0)
            break;
        else
        {
            i=0;
            while (1)
            {
                i=i+1;
                for (j=1; j<=i; j++)
                {
                    a= i*i*i;
                    b= j*j*j;
                    ans= a-b;
                    k= i+j;
                    if (ans==n)
                        break;
                }
                if (ans==n)
                {
                    printf("%lld %lld\n", i, j);
                    break;
                }
            //if (ans==n)
                //printf("%lld %lld\n", j, k);
            if (k>=n)
                {
                    printf("No solution\n");
                    break;
                }
            }
        }
    }
    return 0;
}
