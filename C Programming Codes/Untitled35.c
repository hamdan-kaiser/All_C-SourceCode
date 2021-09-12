#include <stdio.h>
int main ()
{
    char s[100], s1[100];
    int c, i;
    scanf ("%s %s", s, s1);
    c=1;
    i=0;
    while (s[i]!='\0' || s1[i]!='\0')
    {
        if (s[i]==s1[i])
            i++;
        else
        {
            c=0;
            break;
        }
    }
    if (c==1)
        printf ("Same!\n");
    else
        printf("Not Same!\n");
    return 0;
}
