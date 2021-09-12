#include <stdio.h>
int main()
{
    long long int l, h, v, y, i, x, p, a, m;
    while (scanf("%lld %lld", &l, &h)==2)
    {
        if (l==0 && h==0)
            break;
        if (l>h)
        {
            a=l;
            l=h;
            h=a;
        }
        y=0;
        v=0;
        for (i=l; i<=h; i++)
        {
            p=i;
            x=0;
            m=i;
            do
            {
                if (p%2==0)
                    p=p/2;
                else
                    p=(3*p)+1;
                x++;
            }while(p!=1);
            if (x>y)
            {
                y=x;
                v=m;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", l, h, v, y);
    }
    return 0;
}
