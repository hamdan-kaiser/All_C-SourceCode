#include <stdio.h>
int main()
{
    int n, t1, t2, f, a, ct1, ct2, ct3, i;
    double  ct, ans;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d%d%d%d%d%d%d", &t1, &t2, &f, &a, &ct1, &ct2, &ct3);
        if (ct1<=ct2 && ct1<=ct3)
            ct= (ct2+ct3)/2;
        else if (ct2<=ct1 && ct2<=ct3)
            ct= (ct1+ct3)/2;
        else
            ct= (ct2+ct1)/2;
        ans= t1+t2+f+a+ct;
        if (ans>=90)
            printf("Case %d: A\n", i);
        else if (ans>=80)
            printf("Case %d: B\n", i);
        else if (ans>=70)
            printf("Case %d: C\n", i);
        else if (ans>=60)
            printf("Case %d: D\n", i);
        else
            printf("Case %d: F\n", i);
    }
    return 0;
}
