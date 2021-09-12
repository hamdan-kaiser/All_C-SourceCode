#include <stdio.h>
int main ()
{
    long long int a, m, n, x, sum;
    double b;
    while (scanf("%lld", &m)!=EOF)
    {
        n=0;
        a=0;
        sum=0;
        while (sum!=m)
        {
            a++;
            n= (n*10)+a;
            if (a<10)
                sum= sum+1;
            else if (a>=10 && a<100)
                sum= sum+2;
            else if (a>=100 && a<1000)
                sum= sum+3;
            else if (a>=1000 && a<10000)
                sum= sum+4;
            else if (a>=10000 && a<100000)
                sum= sum+5;
            else if (a>=100000 && a<1000000)
                sum= sum+6;
            else if (a>=1000000 && a<10000000)
                sum= sum+7;
            else if (a>=10000000 && a<100000000)
                sum= sum+8;

            if (sum==m)
            {
                x= n%10;
                break;
            }
        }
        printf ("%lld\n", x);
    }
    return 0;
}
