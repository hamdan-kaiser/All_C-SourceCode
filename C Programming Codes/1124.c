#include <stdio.h>
#include <string.h>
int main ()
{
    char str[1000000];
    while (gets(str))
    printf ("%s\n", str);
    return 0;
}
