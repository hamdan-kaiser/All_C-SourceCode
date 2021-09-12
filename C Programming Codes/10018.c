#include <stdio.h>
#include <math.h>
int main ()
{
    long long int n, t, m, sum, a, c;
    scanf("%lld", &t);
    while (t>0)
    {
        scanf("%lld", &n);
        m=n;
        c=0;
        while (1)
        {
            sum=0;
            while (m>0)
            {
                a= m%10;
                m= m/10;
                sum= sum*10+a;
            }
            if (sum==n)
                break;
            else
            {
                m= sum+n;
                n= m;
                c++;
            }
        }
        t--;
        printf("%lld %lld\n", c, sum);
    }
    return 0;
}
