#include <stdio.h>
int main ()
{
    char str[1000000];
    int n;
    while (gets(str)!=EOF)
    {
        ln = strlen(str);
        n=0;
          m=0;
            p=0;
            q=0;
            r=0;
        for (i=0; i<ln; i++)
        {
            n= n + (int)(str[i]);
            if (n>=4)
                n= (n%4)*10;
            if (i==(ln-1) && n!=0)
                sum=0;
            else
                sum1=1;
        }
        for (i=0; i<ln; i++)
        {
            m= m + (int)(str[i]);
            if (m>=15)
                m= (m%15)*10;
            if (i==(ln-1) && m==0)
                sum2=2;
            else
                sum3=3;
        }
        for (i=0; i<ln; i++)
        {
            p= p + (int)(str[i]);
            if (p>=55)
                p= (p%55)*10;
            if (i==(ln-1) && p==0)
                sum4=4;
            else
                sum5=5;
        }
        for (i=0; i<ln; i++)
        {
            q= q + (int)(str[i]);
            if (q>=100)
                q= (q%100)*10;
            if (i==(ln-1) && q==0)
                sum6=6;
            else
                sum7=7;
        }
        for (i=0; i<ln; i++)
        {
            r= r + (int)(str[i]);
            if (r>=400)
                r= (r%400)*10;
            if (i==(ln-1) && r==0)
                sum8=8;
            else
                sum9=9;
        }
        if (sum==0)
            {
                if (sum2==2)
                    printf();
                if (sum4==4)
                    printf();
                else
                    printf();
            }
            if (sum==1)
            {

            }
}
return 0;
}
