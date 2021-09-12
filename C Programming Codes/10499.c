#include <stdio.h>
int main()
{
    long long int n, sum;
    char c='%';
    while (scanf("%lld", &n)==1)
    {
        if (n<0)
            break;
        else
        {
            if (n<2)
                sum=0;
            else
                sum= n*25;
        }
        printf("%lld%c\n", sum, c);
    }
    return 0;
}
