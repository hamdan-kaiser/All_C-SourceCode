#include <stdio.h>
#include <math.h>
int main ()
{
    int arr1[20], arr2[20], k=0, i, n;
    while (scanf("%d", &n)==1)
    {
        if (n<0)
            break;
        k++;
        for (i=0; i<12; i++)
            scanf ("%d", &arr1[i]);
        for (i=0; i<12; i++)
            scanf ("%d", &arr2[i]);
        printf ("Case %d:\n", k);
        for (i=0; i<12; i++)
        {
            if (n>=arr2[i])
            {
                printf ("No problem! :D\n");
                n=n-arr2[i]+arr1[i];
            }
            else
            {
                printf ("No problem. :(\n");
                n=n+arr1[i];
            }
        }
    }
    return 0;
}
