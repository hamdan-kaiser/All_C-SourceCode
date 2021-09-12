#include <stdio.h>
int main ()
{
    int arr[100], i, j, n, temp;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf ("%d", &arr[i]);
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int start, end, mid, m;
    start= arr[0];
    end= arr[n-1];
    scanf("%d", &m);
    do
    {
        mid= (int)((start+end)/2);
        if (m==arr[mid])
            {
                printf("Found in %d\n", mid+1);
                break;
            }
        else if (m>arr[mid])
            start= mid+1;
        else if (m<arr[mid])
            end= mid-1;
    }
    while (start<=end);
    if (start>end)
        printf ("Failed!");
    return 0;
}
