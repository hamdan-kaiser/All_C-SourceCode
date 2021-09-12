#include <stdio.h>
int main ()
{
    long long a, b;
    long c;
    while (scanf ("%lld %lld", &a, &b)==2)
    {
        if (a>b)
        {
            c= a-b;
            printf ("%ld\n", c);
        }
        else
        {
            c=b-a;
            printf ("%ld\n", c);
        }
    }
    return 0;
}
