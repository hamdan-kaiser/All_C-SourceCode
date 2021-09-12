#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    long int t, k, n, ln, i, j, m, sum;
    scanf("%ld", &t);
    getchar();
    i=0;
    m=0;
    while (i<t)
    {
        sum=0;
        k=1;
        gets(str);
        ln=strlen(str);
        if (ln>6)
        {
            for(j=(ln-1); j>=0; j--)
            {
                if(str[j]>='0' && str[j]<='9')
                {
                    sum= sum+((str[j]-'0')*k);
                    k=k*10;
                }
            }
            m=m+sum;
        }
        else
            printf("%ld\n", m);
        i++;
    }
    return 0;
}
