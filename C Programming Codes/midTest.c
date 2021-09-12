#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,m,sum =0;
    scanf("%d",&n);
    for (i=2; i<=n;)
    {
        for (j=2; j<=n;)
        {
            m = i*j;
            sum += pow(m,2);
            j++;
            i = m;
            printf("i = %d\n",i);
        }
    }
    printf("%d",sum);
    return 0;
}
