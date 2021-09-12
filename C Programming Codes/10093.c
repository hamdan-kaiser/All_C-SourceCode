#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char str[100];
    while(gets(str))
    {
        if (strlen(str)==1 && (str[0]>='1' && str[0]<='9'))
        {
            a= str[0]-47;
            printf("%d\n", a);
        }
        else if (strlen(str)==1 && (str[0]>='A' && str[0]<='Z'))
        {
            a= str[0]-54;
            printf("%d\n", a);
        }
        else if (strlen(str)==1 && (str[0]>='a' && str[0]<='z'))
        {
            a= str[0]-60;
            printf("%d\n", a);
        }
        else if (strlen(str)==1)
            printf("2\n");
        else if (strlen(str)==2)
        {
                a=str[0]-'0'+str[1]-'0'+1;
                if (a>3)
                printf("%d\n", a);
            else
                printf("2\n");
        }
    }
    return 0;
}
