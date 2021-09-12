#include <stdio.h>
int main ()
{
    long long int i, j, sum, a, b, n, c;
    while (scanf("%lld %lld", &i, &j)==2)
    {
        if (i==0 && j==0)
            break;
        sum=0;
        c=0;
        while (i>0 || j>0)
        {
            a= i%10;
            i= i/10;
            b= j%10;
            j= j/10;
            n= a+b+c;
            if (n>9)
            {
                c=n/10;
                sum++;
            }
            else
                c=0;
        }
        if (sum>=1)
        {
            if (sum==1)
                printf("1 carry operation.\n");
            else
                printf("%lld carry operations.\n", sum);
        }
        else
            printf("No carry operation.\n");
    }
    return 0;
}
