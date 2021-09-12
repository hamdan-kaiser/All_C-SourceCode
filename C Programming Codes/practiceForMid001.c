#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum =0;

    scanf("%d",&n);

    for(i=2;i<=n;)
    {
        for(j=2;j<=n;j++)
        {
            i = i*j;
            sum += pow(i,2);
        }
    }
    printf("%d",sum);
}
