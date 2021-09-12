#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[1010];
    int ln, a, b, c, d, i;
    while(gets(str))
    {
        b=0;
        ln=strlen(str);
        if (str[0]=='0' && ln==1)
            break;
        else
        {
            for (i=0; i<ln; i++)
            {
                a= str[i]-'0';
                b= b+a;
                if (b>16)
                    {
                        c= b%17;
                        b= c*10;
                    }
                else
                    b=b*10;
            }
            if (c==0 && b==0)
                printf("1\n");
            else
                printf("0\n");
        }
    }
    return 0;
}
