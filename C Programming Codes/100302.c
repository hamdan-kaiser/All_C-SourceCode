#include <stdio.h>
int main ()
{
    long int n, sum, i;
    while (scanf("%ld", &n)==1)
    {
        sum=0;
        for (i=1; i<=n; i++)
        {
            sum= sum+(i*i*i);
        }
        printf("%ld\n", sum);
    }
    return 0;
}
