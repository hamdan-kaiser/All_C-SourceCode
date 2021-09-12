#include <stdio.h>
int main ()
{
    char ch;
    printf ("Enter the alphabet:");
    ch=getchar();
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("%c is vowel\n", ch);
    else
        printf("%c is consonent\n", ch);
    return 0;
}
