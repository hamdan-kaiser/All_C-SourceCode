#include <stdio.h>
int main ()
{
    int n, k, sum, a, b, c,ans;
    while (scanf("%d%d", &n,&k)==2)
    {
        sum=0;
        c=n;
        while (n>=k)
            {
                a= n/k;
                b= n%k;
                n= a+b;
                sum= sum+a;
            }
                ans= c+sum;
                printf ("%d\n", ans);

    }
    return 0;
}

