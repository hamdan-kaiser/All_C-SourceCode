#include<stdio.h>
int main()
{
    int n = 125,k =++n,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("i = %d, j = %d,  k = %d\n",i,j,k);
            k++;
        }
    }
    printf("\n%d",k);
    return 0;
}
