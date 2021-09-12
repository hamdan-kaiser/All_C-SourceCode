#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main()
{
    double sum, r, n;
    while(scanf("%lf %lf", &r, &n)!=EOF)
    {
        sum= .5*n*r*r*sin((2*pi)/n);
        printf("%.3lf\n", sum);
    }
    return 0;
}
