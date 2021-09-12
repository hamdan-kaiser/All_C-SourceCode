#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[1000010];
    long long int ln;
    while (gets(str))
    {
        ln= strlen(str);
        if (ln==1)
        {
            if (str[0]=='1')
                printf("1\n");
            else
                printf("2\n");
        }
        else if (ln>=2 && ln<=9)
        {
            if (str[0]=='E')
                break;
            else
                printf("3\n");
        }
        else
            printf("4\n");
    }
    return 0;
}
