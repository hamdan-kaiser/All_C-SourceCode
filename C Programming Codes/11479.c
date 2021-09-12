#include <stdio.h>
int main ()
{
    long t, i, a, b, c;
    double s, area;
    scanf("%d", &t);
    if (t<20 && t>0)
    {
        for (i=1; i<=t; i++)
        {
            scanf("%ld %ld %ld", &a, &b, &c);
            if ((a+b<=c) || (b+c<=a) || (c+a<=b))
                printf ("Case %ld: Invalid\n", i);

           else if (a==b && b==c)
            printf("Case %ld: Equilateral\n", i);

            else if (a==b || b==c || a==c)
                printf("Case %ld: Isosceles\n", i);

            else if (a!=b && b!=c && c!=a)
                printf("Case %ld: Scalene\n", i);
           }

            }

    return 0;
}
