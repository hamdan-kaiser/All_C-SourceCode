#include <stdio.h>
#include<math.h>

int main ()
{
    int a, b, c;
    double s, area;

    printf ("Enter the value of a= ");
    scanf ("%d", &a);

    printf ("Enter the value of b= ");
    scanf ("%d", &b);

    printf ("Enter the value of c= ");
    scanf ("%d", &c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf ("\nThe area of the triangle is =  %lf\n", area);

    return 0;
}
