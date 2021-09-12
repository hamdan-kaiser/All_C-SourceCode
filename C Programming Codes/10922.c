#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    char str[1010];
    long long int n, i, ln, sum, a, b, x;
    while (gets(str))
    {
        ln=strlen(str);
        sum=0;
        if (ln==1 && str[0]=='0')
            break;
        for (i=0; i<ln; i++)
            sum+=str[i]-'0';
        if (sum%9!=0)
            printf ("%s is not a multiple of 9.\n", str);
        else
        {
            x=1;
            while (sum>9)
            {
                a=sum;
                sum=0;
                while (a>0)
                {
                    b=a%10;
                    a=a/10;
                    sum+=b;
                }
                x++;
            }
            printf("%s is a multiple of 9 and has 9-degree %lld.\n", str, x);
        }
    }
    return 0;
}
