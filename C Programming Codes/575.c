#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str[50];
    int n, i, k, ln, sum, j;
    while (gets(str))
    {
        ln= strlen(str);
        if (ln==1 && str[0]=='0')
            break;
        sum=0;
        for (i=ln-1, j=1; i>=0; i--, j++)
            sum+= (str[i]-'0')*(pow(2,j)-1);
        printf ("%d\n", sum);
    }
    return 0;
}
