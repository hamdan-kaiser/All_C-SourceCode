#include <stdio.h>
int main ()
{
    long long int i, t, n, a, b, c, sum, sum1,x, m;
    scanf("%lld", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        sum=0;
        m=n;
        while (n>0)
        {
            a= n%10;
            n= n/10;
            sum= sum+a;
        }
        b= m-sum;
        printf("%lld\n", b);
        x=0;
        while (1)
        {
            c=b;
            sum1=0;
            while(c>0)
            {
                a= c%10;
                c= c/10;
                sum1= sum1+a;
            }

            if (sum1==sum)
            {
                b= b-sum1;
                x++;
            }
            else
                break;
        }
        if (x==0)
            printf("%lld\n", x);
        else
            printf("%lld\n", b);
    }
    return 0;
}
