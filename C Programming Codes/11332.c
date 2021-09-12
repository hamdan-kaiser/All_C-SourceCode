#include <stdio.h>
int main ()
{
    long long int n, sum, i, a, b;
    while (scanf("%lld", &n)==1)
    {
        if (n==0)
            break;
        else if (n>=10)
        {
            while (n>9)
            {
                sum= 0;
                while ((n/10)>0)
                {
                    a= n/10;
                    b= n%10;
                    sum= sum+b;
                    n=a;
                }
                sum= sum+a;
                if (sum<10)
                    {
                        printf("%lld\n", sum);
                    }
                n=sum;
            }
        }
        else
        {
            printf("%lld\n", n);
        }
    }
    return 0;
}
