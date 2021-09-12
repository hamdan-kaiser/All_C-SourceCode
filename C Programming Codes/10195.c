#include <stdio.h>
#include <math.h>
int main ()
{
    double x,y,z,p,q,r,ans;
    while (scanf("%lf%lf%lf", &x,&y,&z)==3)
    {
        if (x>0 && y>0 && z>0)
        {
        p= (x+y+z)/2;
        q= (p-x)*(p-y)*(p-z);
        r= sqrt (p*q);
        ans= r/p;
        printf ("The radius of the round table is: %.3lf\n", ans);
        }
        else
            printf ("The radius of the round table is: 0.000\n");


    }
    return 0;
}
