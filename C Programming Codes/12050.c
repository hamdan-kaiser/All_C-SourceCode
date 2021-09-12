#include <stdio.h>
#include <string.h>
int main ()
{
    long long int i, j, ln, k, l, ln1;
    char str[10000], str1[10000];
    while (gets(str)!=0)
    {
        ln1= strlen(str);
        for (k=1; ; k++)
        {
            str1[0]=(int)(k);
            ln= strlen(str1);
        for (i=0, j=(ln-1); i<(ln/2)+1, j>(ln/2); i++, j--)
        {
            if (str[i]!=str[j])
                break;
        }
        if (i=((ln/2)+1))
            l++;
        if (ln1=l)
            printf("%s\n", str1);
        }
    }
    return 0;
}
