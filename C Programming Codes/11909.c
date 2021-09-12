#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main()
{
    double l, w, h, a, d, ans;
    while (scanf("%lf %lf %lf %lf", &l, &w, &h, &a)==4)
    {
        d= l*tan(a*pi/180.0);
        if (d>h)
            ans= (0.5*h*h*l*w)/d;
        else
            ans= l*w*((h)-(d*0.5));
        printf("%.3lf mL\n", ans);
    }
    return 0;
}
