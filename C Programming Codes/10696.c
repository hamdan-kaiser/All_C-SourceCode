#include <stdio.h>
int main ()
{
    long long int n, i;
    while(scanf("%lld", &i)==1)
    {
        n=i;
        if (n==0)
            break;
        else
        {
            if (n>100)
            {
                n= n-10;
            }
            else
            {
                n= 91;
            }
        }
        printf("f91(%lld) = %lld\n", i, n);
    }
    return 0;
}

