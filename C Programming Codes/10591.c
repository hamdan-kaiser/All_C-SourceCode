#include <stdio.h>
int main ()
{
    int t, i;
    long long int a, c, n, b, d, sum;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%lld", &a);
        n=a;
        while (1)
        {
            sum=0;
        while (1)
        {
            d= n%10;
            b= n/10;
            c= d*d;
            sum=sum+c;
            if (b==0)
            {
                break;
            }
                n=b;
        }
        if (sum==1)
        {
            printf("Case #%d: %lld is a Happy number.\n",i,a);
                break;
        }
        else if (sum==4)
        {
            printf("Case #%d: %lld is an Unhappy number.\n",i,a);
                break;
        }
            n=sum;
        }
    }
    return 0;
}
