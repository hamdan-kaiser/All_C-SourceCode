#include <stdio.h>
int main()
{
    int arr[10000], i, j, x, k, m, n, sum, l, temp=1100;
    scanf("%d", &n);
    for (l=1; l<=n; l++)
    {
        x=0;
        scanf("%d", &m);
        for (j=0; j<m; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (j=0; j<m-1; j++)
        {
            for (i=j+1; i<m; i++)
            {
                if (arr[j]>arr[i])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                    x++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", x);
    }
    return 0;
}
