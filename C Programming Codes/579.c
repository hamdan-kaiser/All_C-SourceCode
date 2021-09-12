#include <stdio.h>
int main ()
{
    char c;
    double a, b, d, h, m;
    while (scanf("%lf%c%lf", &h, &c, &m)==3)
    {
        if (h==0 && m==0)
            break;
        else
    {
        a= ((60*h)+m)/2;
        b= a-(6*m);
        if (b>180)
        {
            d= 360-b;
            printf("%.3lf\n", d);
        }
        else if (b<0)
        {
            d= b*(-1);
            if (d>180)
            {
                d= 360-d;
            printf("%.3lf\n", d);
            }
            else
            printf("%.3lf\n", d);
        }
        else
            printf("%.3lf\n", b);
    }
    }
    return 0;
}
