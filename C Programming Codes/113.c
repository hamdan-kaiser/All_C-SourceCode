#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    long long int k, sum, ln, i, num, res;
    double j, n;
    char str[1000];
    while(1)
    {
        k=1;
        sum=0;
        scanf("%lf", &n);
        scanf("%s", str);
        ln=strlen(str);
        for (i=(ln-1); i>=0; i--)
        {
            num= str[i]-'0';
            sum= sum+(num*k);
            k= k*10;
        }
        printf("%lld\n", sum);
        res= pow(sum,1/n);
        printf("%lld\n", res);
    }
    return 0;
}
