#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main ()
{
    int t, i;
    double w, rec, cir, l, r, area;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%lf", &l);
        w= (6*l)/10;
        area= l*w;
        r= l/5;
        cir= pi*r*r;
        rec= area-cir;
        printf("%.2lf %.2lf\n", cir, rec);
    }
    return 0;
}
