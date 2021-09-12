#include <stdio.h>
#include <math.h>
int main ()
{
    double a1,a2,a3,b1,b2,b3,x,y,r,z,ans;
    while (scanf ("%lf%lf%lf%lf%lf%lf", &a1,&b1,&a2,&b2,&a3,&b3)==6)
    {
        x= sqrt ((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
        y= sqrt ((a3-a2)*(a3-a2)+(b3-b2)*(b3-b2));
        z= sqrt ((a1-a3)*(a1-a3)+(b1-b3)*(b1-b3));
        r= (x*y*z)/(sqrt((x+y+z)*(x+y-z)*(x-y+z)*(y+z-x)));
        ans= 2.0*3.1415926535897932384626433832795*r;
        printf ("%.2lf\n", ans);
    }
    return 0;
}
