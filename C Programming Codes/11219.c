#include <stdio.h>
int main ()
{
    int n, i, d1, d2, m1, m2, y1, y2, d, m, y;
    char c;
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf ("%d %c %d %c %d", &d1, &c, &m1, &c, &y1);
        scanf ("%d %c %d %c %d", &d2, &c, &m2, &c, &y2);
        d= d1-d2;
        m= m1-m2;
        y= y1-y2;
        if (y<0)
            printf("Case #%d: Invalid birth date\n", i);
        else if (y==0)
        {
            if (m<0)
                printf("Case #%d: Invalid birth date\n", i);
            else if (m==0)
            {
                if (d<0)
                    printf("Case #%d: Invalid birth date\n", i);
                else
                    printf("Case #%d: %d\n", i, y);
            }
            else
                printf("Case #%d: %d\n", i, y);
        }
        else if (y>0 && y<=130)
        {
            if (m<0)
                printf("Case #%d: %d\n", i, y-1);
            else if (m==0)
            {
                if (d<0)
                    printf("Case #%d: %d\n", i, y-1);
                else
                    printf("Case #%d: %d\n", i, y);
            }
            else
                printf("Case #%d: %d\n", i, y);
        }
        else if (y==131)
        {
                if (m<0)
                    printf("Case #%d: %d\n", i, y-1);
                else if (m==0)
                {
                    if (d<0)
                        printf("Case #%d: %d\n", i, y-1);
                    else
                        printf("Case #%d: Check birth date\n", i);
                }
                else
                    printf("Case #%d: Check birth date\n", i);
        }
        else
            printf("Case #%d: Check birth date\n", i);
    }
    return 0;
}
