#include <stdio.h>
int main()
{
    long long int a, b, i, n, m;
    while (scanf ("%lld %lld", &a, &b)==2)
    {
        if (a==0 && b==0)
            break;
        else
        {
            m=0;
            i=1;
            while (i<=b)
            {
                n= i*i;
                if (n>=a)
                {
                    if (n==b)
                    {
                        m++;
                        break;
                    }
                    else if (n>b)
                        break;
                    else
                        m++;
                }
                i++;
            }
        }
        printf ("%lld\n", m);
    }
    return 0;
}
