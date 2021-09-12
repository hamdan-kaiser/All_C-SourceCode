#include <stdio.h>
int main ()
{
    int arr[1010];
    int n, x, i, j, k, temp;
    while (scanf("%d", &n)==1)
    {
        x=0;
        for (k=0; k<n; k++)
            scanf("%d", &arr[k]);
        for (j=0; j<n; j++)
        {
            for (i=0; i<n-1; i++)
            {
                if (arr[i]>arr[i+1])
                {
                    temp= arr[i];
                    arr[i]= arr[i+1];
                    arr[i+1]= temp;
                    x++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",x);
    }
    return 0;
}
