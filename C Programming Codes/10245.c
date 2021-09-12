#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double arr1[50000], arr2[50000], ans, sum;
    int i, j, k, n;
    while (scanf("%d", &n)==1)
    {
        if (n==0)
            break;
        else
        {
            ans=11100;
            for (i=0; i<n; i++)
                scanf ("%lf %lf", &arr1[i], &arr2[i]);
            for (j=0, k=j+1; j<n; j++, k++)
            {
                    sum= sqrt(((arr1[j]-arr1[k])*(arr1[j]-arr1[k]))+((arr2[j]-arr2[k])*(arr2[j]-arr2[k])));
                    if (sum<=ans)
                        ans=sum;
            }
            if (ans>10000)
                printf("INFINITY\n");
            else
                printf("%.4lf\n", ans);
        }
    }
    return 0;
}
