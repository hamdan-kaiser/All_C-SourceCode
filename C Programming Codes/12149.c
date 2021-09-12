#include <stdio.h>
int main ()
{
    long long int n, ans;
    while (scanf("%lld", &n)==1)
    {
        if (n==0)
            break;
        else
        {
            ans= (n*(n+1)*((2*n)+1))/6;
            printf("%lld\n", ans);
        }
    }
    return 0;
}
