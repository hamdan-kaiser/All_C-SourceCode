#include <stdio.h>
#include <math.h>
int main()
{
    long long int s, d, a;
    while (scanf("%lld %lld", &s, &d)==2)
    {
        a=0;
        while (a<d)
        {
            a+=s;
            s++;
        }
        printf("%lld\n", s-1);
    }
    return 0;
}
