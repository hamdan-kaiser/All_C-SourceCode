#include <stdio.h>
#include <math.h>
int main ()
{
    int arr[50][50], i, j, k, t=0, l, sum, n;
    while (scanf("%d", &n)==1)
    {
        t++;
        if (n==0)
            break;
        else
        {
            for (i=0; i<n; i++)
                for (j=0; j<n; j++)
                    scanf ("%d", &arr[i][j]);

            printf ("Case %d:", t);

            for (i=0, j=n-1; i<=j; i++, j--)
            {
                if (i==j)
                {
                    printf(" %d", arr[i][j]);
                    break;
                }

                    sum=0;
                    for (k=i; k<=j; k++)
                        {
                            sum+= arr[i][k]+arr[k][i]+arr[j][k]+arr[k][j];
                        }

                    sum-= arr[i][i]+arr[i][j]+arr[j][i]+arr[j][j];

                    printf(" %d", sum);
            }
            printf("\n");
        }
    }
    return 0;
}
