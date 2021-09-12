#include <stdio.h>
#include <math.h>
#define pi acos(-1)

int main()
{
    double d, v, a, b, c, ans;
    while(scanf("%lf %lf", &d, &v)==2)
    {
        if (d==0 && v==0)
            break;
        else
        {
            a= ((pi*(d/2.00)*(d/2.00)*d)-(3*v)/2)*4;
            ans= pow(a,1.00/3.00);
            printf("%.3lf\n", ans);
        }
    }
    return 0;
}
