#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    int n, i, m, arr[10000], dif[10000], j, temp;
    while (scanf("%d", &n)==1)
    {
        for (i=1; i<=n; i++)
            scanf("%d", &arr[i]);

        for (i=1; i<=n; i++)
            dif[i]= abs(arr[i]-arr[i+1]);

        for (j=1; j<n; j++)
        {
            for (i=1; i<n; i++)
            {
                if (dif[i]>dif[i+1])
                {
                    temp= dif[i];
                    dif[i]= dif[i+1];
                    dif[i+1]= temp;
                }
            }
        }
        m=0;
        for (i=1; i<n; i++)
        {
            if (dif[i]!=i)
                m++;
        }
        if (m==0)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
