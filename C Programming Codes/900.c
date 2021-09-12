#include <stdio.h>
int main()
{
    long long int n, i, j, arr[100];
    while (scanf("%lld", &n)==1)
    {
        j=n;
        if (n==0)
            break;
        else
        {
            for (i=1; i<=n; i++)
            {
                if (i<=3)
                    arr[i]=i;
                else
                {
                    arr[i]= arr[i-2]+arr[i-1];
                }
            }
            printf("%lld\n", arr[j]);
        }
    }
    return 0;
}
