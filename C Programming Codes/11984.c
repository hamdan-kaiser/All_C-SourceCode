#include <stdio.h>
int main ()
{
    int t, i;
    double ans, a, c, d;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%lf %lf", &c, &d);
        a= ((9*c)/5)+32;
        ans= (((a+d)-32)/9)*5;
        printf ("Case %d: %.2lf\n", i, ans);
    }
    return 0;
}
