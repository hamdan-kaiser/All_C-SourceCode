#include <stdio.h>
int main ()
{
    long i, a, b, sum;
    while (scanf("%ld %ld", &a, &b)==2)
    {
        sum=0;
        if (a==0 && b==100)
            break;
        for (i=a; i<=b; i++)
        {
            if ((i*i)<=b)
                sum= sum+1;
            else
                continue;
        }
        printf ("%ld\n", sum);
    }
    return 0;
}
