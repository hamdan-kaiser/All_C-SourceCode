#include<stdio.h>
int main()
{
    int i,j,row = 5,col = 5,k;
    int a = 97;
    int s = row;
    for (i=1;i<row;i++)
    {
        for (j=1;j<s;j++)
        {
            printf(" ");
        }
        s--;
        for (k =1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
