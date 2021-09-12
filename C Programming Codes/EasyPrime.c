#include<stdio.h>
int main()
{
    int n,i,prime = 0;
    scanf("%d",&n);
    if(n==1)
    {
        prime = 1;
    }
    else
    {
        for (i=2;i<=n; i++)
        {
            if(n%i==0)
            {
                if(n==i) {prime = 1; break;}
                else {prime =0; break;}
            } else
            {
                prime =1;}
        }

    }
    if (prime == 1) printf("Prime!");else printf("Not Prime!");
    return 0;
}
