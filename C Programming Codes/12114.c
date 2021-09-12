#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int b, s, i;
    i=0;
    while (scanf("%lld %lld", &b, &s)==2)
    {
        i++;
        if (b==0 && s==0)
            break;
        if (b==1)
            printf ("Case %lld: :-\\\n", i);
        else if (b<=s)
            printf ("Case %lld: :-|\n", i);
        else
            printf ("Case %lld: :-(\n", i);
    }
    return 0;
}
