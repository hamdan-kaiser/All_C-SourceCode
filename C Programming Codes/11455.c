#include <stdio.h>
int main ()
{
    long long int n, i, a, b, c, d;
    scanf("%lld", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

        if (a==b && b==c && c==d)
            printf("square\n");

        else if ((a==b && c==d)|| (a==c && b==d) || (a==d && b==c))
           printf("rectangle\n");

        else if ((a>(b+c+d)) || (b>(a+c+d)) || (c>(b+a+d)) || (d>(b+c+a)))
            printf("banana\n");

        else
           printf("quadrangle\n");
    }
    return 0;
}
