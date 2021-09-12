#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi acos(-1)
int main()
{
    double x1, x2, y1, y2, cmd, enf, a, ans;
    while (scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &cmd, &enf)!=EOF)
    {
        a= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        ans= a*((1/tan((cmd*pi)/180))+(1/tan((enf*pi)/180)));
        printf("%.3lf\n", ans);
    }
    return 0;
}
