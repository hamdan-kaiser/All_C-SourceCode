#include <stdio.h>
int main ()
{
    char s[100], s1[100];
    int i, ln;
    scanf ("%s %s", s, s1);
    for (ln=0; s[ln]!='\0'; ln++);
    for (i=0; s1[i]!='\0'; i++)
        s[ln+i]=s1[i];
        s[ln+i]=s1[i];
    printf ("%s", s);
    return 0;
}
