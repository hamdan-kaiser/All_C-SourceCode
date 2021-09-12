#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i, j, ln, b;
    while (gets(str))
    {
        ln= strlen(str);
        b=0;
        for (i=0; i<ln; i++)
        {
            if (str[i]==' ')
            {
                for (j=i-1; j>=b; j--)
                    printf("%c", str[j]);
                    printf(" ");
                    b=i+1;
            }
        }
        for (j=ln-1; j>=b; j--)
            printf("%c", str[j]);
        printf("\n");
    }
    return 0;
}
