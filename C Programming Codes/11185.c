#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    long long int n, i, j, arr[1000];
    while (scanf("%lld", &n)==1)
    {
        if (n<0)
            break;
            if (n==0)
                printf("0");
        i=0;
        while (n!=0)
        {
            arr[i]=n%3;
            i++;
            n=n/3;
        }
        for (j=i-1; j>=0; j--)
            printf("%lld", arr[j]);
        printf("\n");
    }
    return 0;
}
