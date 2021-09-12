#include <stdio.h>
int main ()
{
    int i, t;
    double o1, o2, x1, x2, c1, c2, r, l, w, a, b;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%lf %lf %lf %lf %lf %lf %lf", &o1, &o2, &x1, &x2, &c1, &c2, &r);
        l= x1-o1;
        w= x2-o2;
        a= (l*0.45)+o1;
        b= (w/2)+o2;
        if (w!=(l*6)/10)
            printf ("NO\n");
        else if (r!=(l/5))
            printf ("NO\n");
        else if (c1!=a)
            printf ("NO\n");
        else if (c2!=b)
            printf ("NO\n");
        else
            printf ("YES\n");
    }
    return 0;
}
