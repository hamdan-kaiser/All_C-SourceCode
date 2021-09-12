#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long long int n, i, a, x, j, k, arr[10], m;
    while (scanf("%lld", &n)==1)
    {
        m=n;
        a=sqrt(n);
        x=0;
        for (i=2; i<=a; i++)
        {
            if (n%i==0)
            {
                x=1;
                break;
            }
        }
        if (x==1)
            printf("%lld is not prime.\n", m);
        else
        {
            i=0;
            while (n>0)
            {
                arr[i]= n%10;
                i++;
                n=n/10;
            }
            n=0;
            for (j=i-1, k=0; j>=0; j--, k++)
                n+= arr[j]*pow(10,k);

            if (n==m)
                printf("%lld is prime.\n", m);
            else
            {
                a=sqrt(n);
                x=0;
                for (i=2; i<=a; i++)
                {
                    if (n%i==0)
                    {
                        x=1;
                        break;
                    }
                }
                if (x==1)
                    printf("%lld is prime.\n", m);
                else
                    printf("%lld is emirp.\n", m);
            }
        }
    }
    return 0;
}

