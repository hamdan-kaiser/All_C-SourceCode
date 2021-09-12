#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    char str[250];
    int ln, i;
    double sum, ans;
    while (gets(str))
    {
        ans=0;
        sum=0;
        ln=strlen(str);
        if (str[0]=='*')
            break;
        for (i=1; i<ln; i++)
        {
            if (str[i]=='/')
            {
                if (sum==1)
                    ans+=sum;
                sum=0;
            }
            if (str[i]=='W')
                sum+=1;
            else if (str[i]=='H')
                sum+=.5;
            else if (str[i]=='Q')
                sum+=.25;
            else if (str[i]=='E')
                sum+=.125;
            else if (str[i]=='S')
                sum+=.0625;
            else if (str[i]=='T')
                sum+=.03125;
            else if (str[i]=='X')
                sum+=.015625;
        }
        printf("%.0lf\n", ans);
    }
    return 0;
}
