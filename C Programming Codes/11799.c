#include <stdio.h>
int main ()
{
    int i, n, max, j, m;
    int num[10000];
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        max=-1;
        scanf("%d", &m);
            for (j=0; j<m; j++)
            {
                scanf("%d", &num[j]);
                if (max<num[j])
                    max= num[j];
            }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}
