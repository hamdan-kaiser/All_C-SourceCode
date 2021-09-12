#include <stdio.h>

int main ()
{
    long long int n, a, x=1, c, arr[100];
    int i, j;
    while (scanf("%lld", &c)==1)
    {
        n=c;
        i=0;
        while (n>0)
        {
            if (i==1 || i==5)
            {
                a = n%10;
                n = n/10;
            }
            else
            {
                a=n%100;
                n=n/100;
            }
            arr[i]=a;
            i++;
        }
        printf("   %d.", x);
        if (c==0)
            printf(" 0");
        else
        {
            for (j=i-1; j>=0; j--)
            {
                if (j==0)
                {
                    if (arr[j]>0)
                        printf(" %lld", arr[j]);
                }
                else if (j==1 || j==5)
                {
                    if (arr[j]>0)
                        printf(" %lld shata", arr[j]);
                }
                else if (j==2 || j==6)
                {
                    if (arr[j]>0)
                        printf(" %lld hajar", arr[j]);
                }
                else if (j==3 || j==7)
                {
                    if (arr[j]>0)
                        printf(" %lld lakh", arr[j]);
                }
                else
                {
                    if (arr[j]==0)
                        printf(" kuti");
                    else if (arr[j]>0)
                        printf(" %lld kuti", arr[j]);
                }
            }
        }
        printf("\n");
        x++;
    }
    return 0;
}
