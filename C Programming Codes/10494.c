#include <stdio.h>
#include <string.h>
int main ()
{
    unsigned long long int a, b, ans, ln, i, k;
    char c, str1[100000];
    while (scanf ("%s %c %lld", str1, &c, &b)==3)
    {
        ans=0;
        ln= strlen(str1);
        if (c=='/')
        {
            a=0;
            k=1;
            for (i=0; i<ln; i++)
            {
                a= str1[i]-48+(a*10);
                if(a/b!=0)
                k=0;
                if(k==0)
                printf("%lld",a/b);
                a= a%b;
            }
            if (k!=0)
                printf("0");
                printf("\n");
        }
        else
        {
            a=0;
            for (i=0; i<ln; i++)
            {
                a= (a*10)+str1[i]-48;
                if (a>=b)
                    a=a%b;
            }
            printf("%lld\n", a);
        }
    }
    return 0;
}
