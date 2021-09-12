#include <stdio.h>
int main ()
{
    int i, j, k, sum=0;
    scanf ("%d %d", &i, &j);
    if (i<j)
    {
        for (k=i ; k<=j; k+3)
    {
        sum= sum+k;
    }
    printf ("%d\n", sum);
    }
    else
    {
        for (k=i ; k<=j; k+3)
    {
        sum= sum+k;
    }
    printf ("%d\n", sum);
    }


    return 0;
    }
