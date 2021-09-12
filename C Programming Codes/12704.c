#include <stdio.h>
#include <math.h>
int main ()
{
    int i, t, x, y, r;
    double z, ans1, ans2;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%d %d %d", &x, &y, &r);
        {
            z= sqrt ((x*x)+(y*y));
            ans1= r-z;
            ans2= (2*r)-ans1;
            printf ("%.2lf %.2lf\n", ans1, ans2);
        }
    }
    return 0;
}
