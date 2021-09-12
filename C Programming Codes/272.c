#include <stdio.h>
#include <string.h>

int main ()
{
    char str[100000], str2[100000];
    long long int ln, i, x=1, j,ln2;
    while (gets(str))
    {
        ln= strlen(str);
        for (i=0, j=0; i<ln; i++, j++)
        {
            if (str[i]=='"')
            {
                if (x%2==0)
                    {
                        str2[j]='\'';
                        j++;
                        str2[j]='\'';
                        x++;
                    }
                else
                    {
                        str2[j]='`';
                        j++;
                        str2[j]='`';
                        x++;
                    }
            }
            else
                    str2[j]=str[i];
        }
        str2[j]='\0';
        puts(str2);
    }
    return 0;
}
