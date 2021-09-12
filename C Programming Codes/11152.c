#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main ()
{
    double a, b, c, r1, r2, area_t, area_t1, area_c1, area_c2, s;
    while (scanf("%lf %lf %lf", &a, &b, &c)==3)
    {
        s= (a+b+c)/2;
        area_t= sqrt(s*(s-a)*(s-b)*(s-c));
        r1= (area_t/s);
        area_c2= pi*r1*r1;
        r2= ((a*b*c)/(area_t))/4;
        area_c1= (pi*r2*r2)-area_t;
        area_t1= area_t-area_c2;
        printf("%.4lf %.4lf %.4lf\n", area_c1, area_t1, area_c2);
    }
    return 0;
}
