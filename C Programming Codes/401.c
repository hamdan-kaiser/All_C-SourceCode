#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i, j, k, m, p, ln, n;
    while(gets(str))
    {
        ln= strlen(str);
        k=0;
        m=0;
        p=0;
        for (i=0, j=ln-1; i<ln; i++, j--)
        {
            if (str[i]!=str[j])
            {
                if ((str[i]=='E' && str[j]=='3') || (str[i]=='3' && str[j]=='E') || (str[i]=='J' && str[j]=='L') || (str[i]=='L' && str[j]=='J') || (str[i]=='S' && str[j]=='2') || (str[i]=='2' && str[j]=='S') || (str[i]=='Z' && str[j]=='5') || (str[i]=='5' || str[j]=='Z'))
                {
                    k++;
                    p++;
                }
                else
                {
                    printf("%s -- is not a palindrome.\n\n", str);
                    break;
                }
            }
            else
            {
                if (str[i]=='A' || str[i]=='H' || str[i]=='I' || str[i]=='M' || str[i]=='U' ||  str[i]=='V' ||  str[i]=='W' ||  str[i]=='X' || str[i]=='O' || str[i]=='Y' || str[i]=='T' || str[i]=='1' || str[i]=='8')
                {
                    m++;
                    p++;
                }
                else
                    p++;
            }
        }
        if (p==ln)
        {
            if (m==ln)
                printf("%s -- is a mirrored palindrome.\n\n", str);
            else if (k>0 && k+m==ln)
                printf("%s -- is a mirrored string.\n\n", str);
            else if (k==0)
                printf("%s -- is a regular palindrome.\n\n", str);
            else
                printf("%s -- is not a palindrome.\n\n", str);
        }
    }
    return 0;
}
