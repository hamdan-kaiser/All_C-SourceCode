#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    double n, ans1, ans2, p;
    while (scanf("%lf %lf", &n, &p)==2)
    {
        ans1= n*(p/100)+n;
        ans2= abs(ans1);
        if (ans1==ans2)
            printf("%.2lf\n\n", ans2);
        else
            printf("%.2lf\n\n", ans2+1);
    }
    return 0;
}
