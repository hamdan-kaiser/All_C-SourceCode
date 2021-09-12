#include <stdio.h>
#include <string.h>
int main ()
{
    long long int n, sum, c, k, i, b, num, ln, a;
    char str[1010];
    while(gets(str))
    {
        sum=0;
        k=1;
        b=0;
        ln=strlen(str);
        num= str[0]-'0';
        if (num==0 && ln==1)
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
