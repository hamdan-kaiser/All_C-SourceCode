#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int arr[4000];

int fun(int i, int n)
{
    int sum=0, j;
    for (j=i; j<=n; j+=i)
    {
        if (arr[j]==0)
        {
            arr[j]=1;
            sum++;
        }
    }
    return sum;
}

int main ()
{
    int t, n, p, i, ans, x, m, k;
    scanf("%d", &t);
    for (m=1; m<=t; m++)
    {
        ans=0;
        scanf("%d", &n);
        scanf("%d", &p);
        for (k=6; k<=n; k+=7)
        {
            arr[k]=1;
            arr[k+1]=1;
        }
        for (x=1; x<=p; x++)
        {
            scanf("%d", &i);
            ans+=fun(i,n);
        }
            printf("%d\n", ans);
            memset(arr, 0, 4000);
    }
    return 0;
}
