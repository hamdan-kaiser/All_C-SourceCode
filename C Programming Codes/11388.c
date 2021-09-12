#include <stdio.h>
int main ()
{
    int a, b, n, i;
    scanf("%d", &n);
    i=1;
    while (i<=n)
    {
        scanf("%d %d", &a, &b);
        if (b%a==0)
            printf("%d %d\n", a, b);
        else
            printf("-1\n");
            i++;
    }
    return 0;
}
