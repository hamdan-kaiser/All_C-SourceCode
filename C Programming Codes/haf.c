#include<stdio.h>
int main ()
{
    int a,b,p,s,t,i,m,n;
    scanf("%d",&i);
    for(t=1;t<=i;t++)
    {
        scanf("%d %d",&a,&b);
        s=(a+1)/2;
        p=(b-1)/2;
        m=s*s;
        n=p*p;
        if(m>n)
            printf("Case %d: %d\n",t,m-n);
        else
            printf("Case %d: %d\n",t,n-m);
    }
        return 0;
}
