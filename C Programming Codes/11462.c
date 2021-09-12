#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void quicksort(long long int [2000005], long long int, long long int);
long long int n, i, arr[2000005];
int main()
{
    while (scanf("%lld", &n)!=EOF)
    {
        if (n==0)
            break;
        for (i=0; i<n; i++)
            scanf("%lld", &arr[i]);

        quicksort(arr,0,n-1);

        for (i=0; i<n; i++)
        {
            if (i>0)
                printf(" %lld", arr[i]);
            else
                printf("%lld", arr[i]);
        }
        printf("\n");
    }
    return 0;
}

void quicksort(long long int arr[2000005], long long int a, long long int b)
{
    long long int x, i, j, temp;
    if (a<b)
    {
        x=a;
        i=a;
        j=b;
        while (i<j)
        {
            while (arr[i]<=arr[x] && i<b)
                i++;
            while (arr[j]>arr[x])
                j--;
            if (i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[x];
        arr[x]=arr[j];
        arr[j]=temp;
        quicksort(arr,a,j-1);
        quicksort(arr,j+1,b);
    }
}


