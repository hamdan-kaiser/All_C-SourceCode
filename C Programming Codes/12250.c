#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    char str1[50]= {"HELLO"}, str2[50]= {"HOLA"}, str3[50]= {"HALLO"}, str4[50]= {"BONJOUR"}, str5[50]= {"CIAO"}, str6[50]= {"ZDRAVSTVUJTE"};
    int l, l1, l2, l3, l4, l6, i;

    l1=strlen(str1);
    l2=strlen(str2);
    l4=strlen(str4);
    l6=strlen(str6);
    i=0;
    while (gets(str))
    {
        l=strlen(str);
        i++;
        if (l==1 && str[0]=='#')
        break;
        if (l==l1)
        {
            if (strncmp(str,str1,l)==0)
                printf("Case %d: ENGLISH\n", i);
            else if (strncmp(str,str3,l)==0)
                printf("Case %d: GERMAN\n", i);
            else
                printf("Case %d: UNKNOWN\n", i);
        }
        else if (l==l2)
        {
            if (strncmp(str,str2,l)==0)
                printf("Case %d: SPANISH\n", i);
            else if (strncmp(str,str5,l)==0)
                printf("Case %d: ITALIAN\n", i);
            else
                printf("Case %d: UNKNOWN\n", i);
        }
        else if (l==l4)
        {
            if (strncmp(str,str4,l)==0)
                printf("Case %d: FRENCH\n", i);
            else
                printf("Case %d: UNKNOWN\n", i);
        }
        else if (l==l6)
        {
            if (strncmp(str,str6,l)==0)
                printf("Case %d: RUSSIAN\n", i);
            else
                printf("Case %d: UNKNOWN\n", i);
        }
        else
            printf("Case %d: UNKNOWN\n", i);
    }
    return 0;
}
