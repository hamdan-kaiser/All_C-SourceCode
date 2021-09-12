#include <stdio.h>
int main()
{
    int a, b, c, ans;
    while(scanf("%d%d", &a, &b)==2)
    {
        if (a==-1 && b==-1)
            break;
        if (a>=b)
            c=a-b;
        else
            c=b-a;
        if (c>=50)
            ans= 100-c;
        else
            ans=c;
        printf("%d\n", ans);
    }
    return 0;
}
