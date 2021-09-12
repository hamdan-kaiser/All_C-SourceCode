#include <stdio.h>
int main ()
{
    int i, t, n;
    long long int sum, a, b;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%d", &n);
        sum= (((((n*567)/9)+7492)*235)/47)-498;
        a= sum/10;
        b= a%10;
        if (b<0)
        b= b*-1;
        printf ("%lld\n", b);
    }
    return 0;
}
