#include <stdio.h>
#include <string.h>
int main ()
{
    int i, j;
    char text[10];
    scanf("%s", &text);
    printf("%s\n", text);
    for (i=0; ; i++)
    {
        if (text[i]='\0')
            break;
    }
    printf("%d\n", i);
    for (j=1; j<i; j++)
    {
        printf("%c\n", text[i]);
    }
    return 0;
}
