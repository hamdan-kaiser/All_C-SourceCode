#include <stdio.h>
#include <string.h>
int main ()
{
    int i, j, t, n, temp, a, b, c, d, l, sum;
    int str[100];
    scanf ("%d", &t);
    for (l=1; l<=t; l++)
    {
        scanf ("%d", &n);
        if (t==0 && n==0)
            break;
        for (j=0; j<n; j++)
            scanf("%d",&str[j]);
            printf("%d\n", str);
        if (n==1)
            printf("0\n");
        else
        {
            for (j=0; j<n-1; j++)
            {
                for (i=j+1; i<n; i++)
                {
                    if (str[j]>str[i])
                    {
                        temp=str[j];
                        str[j]=str[i];
                        str[i]=temp;
                    }
                }
            }
            a= n/2+1;
            b= str[0];
            c= str[i-1];
            d= str[a-1];
            sum= ((d-b)*2)+((c-d)*2);
            printf("%d\n", sum);
        }
    }
    return 0;
}
