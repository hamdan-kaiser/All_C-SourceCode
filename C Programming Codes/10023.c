#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    char str[1000000], str1[1000000];
    while (gets(str))
    {
        str1= atoi(pow(str, 1/2))+'0';
        printf("%s\n", str1);
    }
    return 0;
}
