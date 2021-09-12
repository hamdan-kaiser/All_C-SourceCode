#include <stdio.h>
int main ()
{
    int t, i;
    double a, b, d, avg;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &d);
        avg= (d/((a+b)/3))*(a-((a+b)/3));
        printf("%.0lf\n", avg);
    }
    return 0;
}
