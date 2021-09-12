#include<stdio.h>
int main()
{
    int n,i, prime =0,k;
    while(k!=1)
    {
        scanf("%d",&n);
        if(n==1)
        {
            prime =1;
        }
        for(i=2; i<=n; i++)
        {
            if(n%i !=0)
            {
                prime = 1;
            }
            else
            {
                if( n == i)
                {
                    prime =1;
                }
                else
                {
                    prime =0;
                    break;
                }
            }
        }
        if(prime == 1)
            printf("Prime!\n");
        else
            printf("Not Prime!\n");
    }
    return 0;
}
