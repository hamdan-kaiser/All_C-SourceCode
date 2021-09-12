#include <stdio.h>
int main()
{
    long long int i,n,cas;
    num[0]=0;
    i=1;
    while (i<=1000000000000000000)
    {
        num[i]=num[i/2]+(i%2);
        i++;
    }
    scanf("%lld",&cas);
    while(cas--)
    {
        scanf("%lld",&n);
        printf("%lld\n",num[n]);
    }
    return 0;
}
