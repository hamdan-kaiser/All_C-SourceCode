#include <stdio.h>
#include <string.h>
int main()
{
    long long int a, b, c, d, l, i, x;
    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &l)==5)
    {
        if (a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        else
        {
            x=0;
            for (i=0; i<=l; i++)
            {
                if (((i*i*a)+(b*i)+c)%d==0)
                    x++;
            }
            printf("%lld\n", x);
        }
    }
    return 0;
}
