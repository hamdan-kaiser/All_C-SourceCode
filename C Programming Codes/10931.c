#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    long long int n, i, ans, arr[1000], j, a;
    while(scanf("%lld", &n)==1)
    {
        if (n==0)
            break;
        i=0;
        while (n>0)
        {
            a=n%2;
            n=n/2;
            arr[i]=a;
            i++;
        }
        printf("The parity of ");
        ans=0;
        for (j=i-1; j>=0; j--)
        {
            printf("%lld", arr[j]);
            if (arr[j]==1)
                ans++;
        }
        printf(" is %lld (mod 2).\n", ans);
    }
    return 0;
}
