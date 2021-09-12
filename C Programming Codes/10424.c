#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], c='%';
    int sum1, sum2, i, j, ln1, ln2, ans, a, x1 x2;
    double sum3, sum4, cal;
    while (gets(str1), gets(str2))
    {


        ln1=strlen(str1);
        ln2= strlen(str2);

        sum1=0;
        sum2=0;

        for (i=0; i<ln1; i++)
        {
            if (str1[i]>='A' && str1[i]<='Z')
                sum1+= str1[i]-64;
            else if (str1[i]>='a' && str1[i]<='z')
                sum1+= str1[i]-96;
        }
        for (j=0; j<ln2; j++)
        {
            if (str2[j]>='A' && str2[j]<='Z')
                sum2+= str2[j]-64;
            else if (str2[j]>='a' && str2[j]<='z')
                sum2+= str2[j]-96;
        }

        while (sum1>9)
        {
            ans=0;
            while (sum1>0)
            {
                a=sum1%10;
                sum1=sum1/10;
                ans= ans+a;
            }
            sum1=ans;
        }
        while (sum2>9)
        {
            ans=0;
            while (sum2>0)
            {
                a=sum2%10;
                sum2=sum2/10;
                ans= ans+a;
            }
            sum2=ans;
        }
        sum3=sum1;
        sum4=sum2;
        if (sum3==0 && sum4==0)
        	printf("0.00 %c\n", c);
        else if (sum3<=sum4)
            {
                cal= (sum3/sum4)*100;
                printf("%.2lf %c\n", cal, c);
            }

        else
        {
            cal= (sum4/sum3)*100;
            printf("%.2lf %c\n", cal, c);
        }
    }
    return 0;
}
