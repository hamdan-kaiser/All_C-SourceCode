#include <stdio.h>
#include <math.h>
#include<string.h>
#include <stdlib.h>
int main ()
{
    int n, a, i;
    char str[10000], ans[10000];
    while (scanf("%d %d", &n, &a)!=EOF)
    {
        for (i=1; i<=n; i++)
        {
            ans = (i*(pow(a,i)))-'0';
            //str= a
            printf("%s\n", ans);
        }
    }
    return 0;
}
