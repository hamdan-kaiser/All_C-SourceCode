#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    int arr1[1000], arr2[1000], n, t, i, j, k, ln;

    scanf("%d", &n);

    for (k=1; k<=n; k++)
    {
        scanf("%d", &t);

        for (i=0; i<t; i++)
            scanf("%d", &arr1[i]);

        for (i=0; i<t; i++)
            scanf("%d", &arr2[i]);

        for (j=0; j<t; j++)
        {
            if (arr1[j]==0)
                str[j]=32;

            else if (arr1[j]==1)
            {
                if (arr2[j]==1)
                    str[j]= '.';
                else if (arr2[j]==2)
                    str[j]= ',';
                else if (arr2[j]==3)
                    str[j]= '?';
                else if (arr2[j]==4)
                    str[j]= '"';
            }

            else if (arr1[j]>=2 && arr1[j]<=7)
                str[j]= 93+(arr1[j]-1)*3+ arr2[j];

            else if (arr1[j]==8 || arr1[j]==9)
                str[j]= 94+(arr1[j]-1)*3+ arr2[j];
        }

        str[t]='\0';
        printf("%s\n", str);
    }
    return 0;
}
