#include <stdio.h>
int main ()
{
    int t, i, j, arr[1010];
    double ans, n, avg, x, sum;
    char c='%';
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        sum=0;
        x=0;
        scanf ("%lf", &n);
        for (j=1; j<=n; j++)
        {
            scanf ("%d", &arr[j]);
            sum += arr[j];
        }
        avg= sum/n;
        for (j=1; j<=n; j++)
        {
            if (arr[j]>avg)
                x++;
        }
        ans= (x/n)*100;
        printf ("%0.3lf%c\n", ans, c);
    }
    return 0;
}
