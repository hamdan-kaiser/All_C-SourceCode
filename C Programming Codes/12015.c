#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    char str[110];
    int num;
} a;
a arr[20];

int main()
{
    int t, i, j, k, temp, a;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        a=0;
        for (j=1; j<=10; j++)
        {
            scanf("%s %d", arr[j].str, &arr[j].num);
            if (arr[j].num>a)
                a=arr[j].num;
        }
        printf("Case #%d:\n", i);
        for (j=1; j<=10; j++)
        {
            if (arr[j].num==a)
                printf("%s\n", arr[j].str);
        }
    }
    return 0;
}

