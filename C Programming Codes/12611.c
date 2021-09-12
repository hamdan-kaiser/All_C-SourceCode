#include <stdio.h>
int main ()
{
    int i, t, r, l, w, l2, w1, l1, w2;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d", &r);
        {
            l= 5*r;
            w= (6*l)/10;
            l1= (55*(l/2-(l/20)))/45;
            l2= -(l-l1);
            w1= w/2;
            w2= -w1;
        }
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n", i, l2, w1, l1, w1, l1, w2, l2, w2);
    }
    return 0;
}
