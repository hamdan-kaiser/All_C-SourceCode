#include <stdio.h>
int main()
{
    long long int i, sum=0;
    while(scanf("%lld", &i)==1)
    {
        sum+=i;
        printf("   %lld\n", sum);
    }
    return 0;
}
