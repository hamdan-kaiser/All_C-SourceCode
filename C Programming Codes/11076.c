#include <stdio.h>
#include <math.h>
int main ()
{
    unsigned long long int t, arr[20100], i, j, k, a, sum, n;
    while (scanf("%lld", &t)==1)
    {
        if (t==0)
            break;
        else
        {
            n=t;
            sum=0;
            for (i=0; i<t; i++)
                scanf ("%lld", &arr[i]);
            for (i=0; i<t/2; i++)
            {
                for (j=i+1; j<t; j++)
                {
                    if (arr[i]==arr[j])
                        n--;
                }
            }
            for (i=0; i<t; i++)
            {
                a=0;
                for (j=1, k=1; j<=t; j++, k*=10)
                    a+= arr[i]*k*(n-1);
                sum+=a;
            }
            printf ("%lld\n", sum);
        }
    }
    return 0;
}
