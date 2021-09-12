#include <stdio.h>
int main ()
{
    int a, b;
    double c;
    printf ("Enter the value of a & b: ");
    scanf ("%d %d", &a, &b);
    c= (double)(a*a+b*b+2*a*b)/(2*a*b);
    printf ("%.2lf", c);
    return 0;
}
