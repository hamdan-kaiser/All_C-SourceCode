#include <stdio.h>
#include <string.h>
int main()
{
    long int t, i, ln, a, sum, j;
    char str[100];
    scanf("%ld", &t);
    for (i=1; i<=t; i++)
    {
        a=0;
        sum=0;
        scanf("%s", str);
        ln=strlen(str);
        for (j=0; j<ln; j++)
        {
            if (str[j]=='O')
            {
                sum++;
                a= a+sum;
            }
            else
                sum=0;
        }
        printf("%ld\n", a);
    }
    return 0;
}
