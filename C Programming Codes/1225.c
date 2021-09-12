#include <stdio.h>
int main()
{
    int n, i, t, j, sum, sum1, sum2, sum3, sum4, sum5, sum6, sum7, sum8, sum9, a, b;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        sum=0;
        sum1=0;
        sum2=0;
        sum3=0;
        sum4=0;
        sum5=0;
        sum6=0;
        sum7=0;
        sum8=0;
        sum9=0;
        scanf("%d", &n);
        for (j=1; j<=n; j++)
        {
            a=j;
            while(a>0)
            {
                b=a%10;
                a=a/10;
                if (b==0)
                    sum++;
                else if (b==1)
                    sum1++;
                else if (b==2)
                    sum2++;
                else if (b==3)
                    sum3++;
                else if (b==4)
                    sum4++;
                else if (b==5)
                    sum5++;
                else if (b==6)
                    sum6++;
                else if (b==7)
                    sum7++;
                else if (b==8)
                    sum8++;
                else
                    sum9++;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", sum, sum1, sum2, sum3, sum4, sum5, sum6, sum7, sum8, sum9);
    }
    return 0;
}
