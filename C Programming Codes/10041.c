#include <stdio.h>
int main()
{
    int arr[1000], t, i, j, k, temp, n, sum, a;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d", &n);
        for (j=0; j<n; j++)
            scanf("%d", &arr[j]);
        for (j=0; j<n; j++)
        {
            for (k=0; k<n-1; k++)
            {
                if (arr[k]>arr[k+1])
                {
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;
                }
            }
        }
        a= n/2;
        for (j=0, k=n-1; j<a; j++, k--)
            sum+=arr[k]-arr[j];
        printf("%d\n", sum);
    }
    return 0;
}
