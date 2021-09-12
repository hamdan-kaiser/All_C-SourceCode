#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str[100];
    int i, t, ln, j;
    scanf ("%d", &t);
    getchar();
    for(j=1; j<=t; j++)
    {
        while (gets(str))
        {
            ln=strlen(str);
            if (ln==0)
                break;
            for (i=0; i<ln; i++)
            {
                if (str[i]=='3')
                    str[i]='E';
                else if (str[i]=='1')
                    str[i]='I';
                else if (str[i]=='0')
                    str[i]='O';
                else if (str[i]=='2')
                    str[i]='Z';
                else if (str[i]=='4')
                    str[i]='A';
                else if (str[i]=='5')
                    str[i]='S';
                else if (str[i]=='9')
                    str[i]='P';
                else if (str[i]=='8')
                    str[i]='B';
                else if (str[i]=='7')
                    str[i]='T';
                else if (str[i]=='6')
                    str[i]='G';
            }
            str[i]='\0';
            puts(str);
        }
        if (j!=t)
            printf ("\n");
    }
    return 0;
}
