#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, i, k, sum1, sum2;
    while (scanf("%lld", &n)==1)
    {
        if (n==-1)
            break;
        k= sqrt(2*n);
        for (i=k; i>0; i--)
        {
            sum1= (2*n+i-i*i)%(2*i);
            if (sum1==0)
            {
                sum2= (2*n+i-i*i)/(2*i);
                break;
            }
        }
        printf("%lld = %lld + ... + %lld\n", n, sum2, sum2+i-1);
    }
    return 0;
}
