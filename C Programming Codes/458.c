#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int ln, i, j;
    while (gets(str))
    {
        ln= strlen(str);
        for (i=0, j=0; i<ln; i++, j++)
            str[j]=str[i]-7;
        puts(str);
    }
    return 0;
}
