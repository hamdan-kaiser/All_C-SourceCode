#include <stdio.h>
#include <string.h>
int main ()
{
    int n, i, sum, num;
    char str[100][100];
    sum=0;
    scanf("%d", &n);
        for (i=0; i<n; i++)
        {
            scanf("%s", str[i]);
        }
        for (i=0; i<n; i++)
            {
                sum= atoi(str[i]);
                printf("%d\n", sum);
            }
    return 0;
}
