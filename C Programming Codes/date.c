#include <stdio.h>
int main ()
{
    int d1, d2, m1, m2, t, n;
    scanf("%d", &t);
    for (n=1; n<=t; n++)
    {
        scanf("%d %d %d %d", &d1, &m1, &d2, &m2);

        if ((d1>d2 && m1>m2) || (d1==d2==m1==m2))
            printf("Case %d: I am sure there is some kinda mistake!\n", n);
        else if (d1==d2 || m1==m2 || d1>d2 || m1>m2)
            printf("Case %d: Okay got it!\n", n);
        else
            printf("Case %d: Oh no it is ambiguous!\n", n);
    }
    return 0;
}
