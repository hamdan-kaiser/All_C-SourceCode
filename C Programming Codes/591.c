#include <stdio.h>
#include <string.h>
int main ()
{
    int arr[100000], i, sum, n, ans, avg, num=1;
    while (scanf("%d", &n)==1)
    {
        if (n==0)
            break;
        else
        {
            sum=0;
            ans=0;
            for (i=0; i<n; i++)
            {
                scanf("%d", &arr[i]);
                sum = sum+arr[i];
            }
            avg= sum/n;
            for (i=0; i<n; i++)
            {
                if (arr[i]>avg)
                    ans=ans+(arr[i]-avg);
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n", num, ans);
            num++;
        }
    }
    return 0;
}
