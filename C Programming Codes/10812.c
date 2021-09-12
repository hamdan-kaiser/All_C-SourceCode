#include <stdio.h>
int main ()
{
    int t, i, a, s, d, b, ans1, ans2;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%d %d", &s, &d);
        a= s-d;
        if (s<d || a%2!=0)
            printf ("impossible\n");
        else
        {
            b= a/2;
            ans1= b+d;
            ans2= s-ans1;
            printf ("%d %d\n", ans1, ans2);
        }
    }
    return 0;
}
