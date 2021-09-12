#include <stdio.h>
#include <string.h>
int main ()
{
    char str[1000];
    int i, ln, j, x;
    while (gets(str))
    {
        ln= strlen(str);
        x=0;
        for (i=0; i<ln; i++)
        {
            if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                j=1;
            else if (j==1)
            {
                    x++;
                    j=0;
            }
        if (str[ln-1]>='A' && str[ln-1]<='z')
            if (str[ln-1]<='Z' && str[ln-1]>='a')
                x++;
        }
        printf("%d\n", x);
    }
    return 0;
}
