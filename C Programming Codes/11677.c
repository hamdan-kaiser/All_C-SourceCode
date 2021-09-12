#include <stdio.h>
int main()
{
    int h1, h2, m1, m2, m, h, ans;
    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2))
    {
        if (h1==0 && m1==0 && h2==0 && m2==0)
            break;
        else
        {
            if (h1==0)
                h1=24;
            if (h2==0)
                h2=24;
            if (m1>m2)
            {
                m= (m2+60)-m1;
                if (h1+1>h2)
                    h= (h2+24)-(h1+1);
                else
                    h= h2-(h1+1);
            }
            else
            {
                m= m2-m1;
                if (h1>h2)
                    h= (h2+24)-h1;
                else
                    h=h2-h1;
            }
        }
        ans= h*60+m;
        printf("%d\n", ans);
    }
    return 0;
}
