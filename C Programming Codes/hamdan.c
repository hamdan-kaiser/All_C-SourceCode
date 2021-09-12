#include <stdio.h>

int compare(char str1[1000], char str2[1000])
{
    int i,j,k;
    i=0;
    while (str1[i]!='\0')
    {
        i++;
    }
    j=0;
    while (str2[j]!='\0')
    {
        j++;
    }

    if (i==j)
    printf ("0\n");
    else if (i>j)
    printf ("1\n");
    else
    printf ("-1\n");

}

int main ()
{
    char str1[1000], str2[1000];
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);

    compare(str1,str2);

    return 0;
}
