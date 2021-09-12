#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[2020];
    long long int t, i, j, n, ln, b, a, c;
    scanf("%lld", &t);
    for (j=1; j<=t; j++)
    {
        scanf("%lld %s", &n, str);
        ln= strlen(str);
        b=0;
        for (i=0; i<ln; i++)
        {
            a= str[i]-'0';
            b= b+a;
            if (b>=n)
            {
                c= b%n;
                b= c*10;
            }
            else
                b=b*10;
        }
        printf("%lld\n", c);
    }
    return 0;
}
