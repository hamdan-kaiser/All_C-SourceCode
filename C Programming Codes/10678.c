#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main ()
{
    int n, t;
    double s, a, h, area, d, l;
    scanf("%d", &n);
    for (t=1; t<=n; t++)
    {
        scanf("%lf%lf",&d,&l);
        h= sqrt(((l/2)*(l/2))-((d/2)*(d/2)));
        area= pi*h*(l/2);
        printf("%.3lf\n", area);
    }
    return 0;
}

