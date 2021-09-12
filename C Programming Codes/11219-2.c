#include <stdio.h>
int main()
{
    int n, i, d1, d2, m1, m2, y1, y2, sum;
    char c;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf ("%d %c %d %c %d", &d1, &c, &m1, &c, &y1);
        scanf ("%d %c %d %c %d", &d2, &c, &m2, &c, &y2);
        if (d1>d2)
            m2+=1;
        if (m1>m2)
            y2+=1;
        sum= y1-y2;
        if (sum<=0)
            printf("Case #%d: Invalid birth date\n", i);
        else if (sum>130)
            printf("Case #%d: Check birth date\n", i);
        else
            printf("Case #%d: %d\n", i, sum);
    }
    return 0;
}
