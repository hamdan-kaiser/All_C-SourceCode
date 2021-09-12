#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str1[1000], str2[1000], str3[1010], str4[1010], str5[1010];
    long int ln1, ln2, ln, a, sum, i, j, x, k;
    scanf("%s %s", str1, str2);

    ln1=strlen(str1);
    ln2=strlen(str2);

    if (ln1>=ln2)
        {
            ln=ln1;
            x=ln2;
        }
    else
        {
            ln=ln2;
            x=ln1;
        }

    for (i=ln1-1,j=0; i>=0; i--,j++)
        str3[j]=str1[i];

    for (i=ln2-1,j=0; i>=0; i--,j++)
        str4[j]=str2[i];

    sum=0;
    j=0;
    for (i=0, k=0; i<ln; i++, k++)
    {
        if (ln==ln1)
        {
            if (k>=x)
                sum+=str3[i]-'0';
            else
                sum+= str3[i]-'0'+str4[k]-'0';
        }
        else
        {
            if (k>=x)
                sum+=str4[i]-'0';
            else
                sum+= str3[k]-'0'+str4[i]-'0';
        }
        if (sum<=9)
        {
            str5[j]=sum+48;
            j++;
            sum=0;
        }
        else
        {
            a=sum%10;
            str5[j]=a+48;
            j++;
            sum= sum/10;
        }
        if (i==ln-1 && sum>0 && ln==x)
        {
            str5[j]=sum+48;
            printf(" %d\n", sum);
            j++;
        }
    }
    str5[j]='\0';
    for (i=j-1; i>=0;i--)
        printf("%c", str5[i]);
    return 0;
}
