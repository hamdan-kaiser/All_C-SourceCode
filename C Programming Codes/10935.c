#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, i, arr[100], j, k, a, l;
    while(scanf("%d", &n)==1)
    {
        if (n==0)
            break;
        a=2;
        for (i=0; i<n; i++)
            arr[i]=i+1;
        l=0;
        j=0;
        printf("Discarded cards:");
        while (n>1)
        {
            if (l>0)
            {
                if (arr[i-2]<=arr[k-1])
                    j=0;
                else
                    j=1;
            }
            k=0;
            if (j==1)
            {
                arr[k]=arr[0];
                k++;
            }
            for (i=j; i<n; i+=2)
            {
                printf(" %d", arr[i]);
                if (n>3)
                    printf(",");
                else
                {
                    if (n>2 && i<n-1)
                        printf(",");
                }

                if (i+1<n)
                {
                    arr[k]=arr[i+1];
                    k++;
                }
            }
            n=k;
            l++;
            j=0;
        }
        printf("\n");
        printf("Remaining card: %d\n", arr[0]);
    }
    return 0;
}
