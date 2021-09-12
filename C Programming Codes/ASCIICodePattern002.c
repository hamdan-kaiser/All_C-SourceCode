#include<stdio.h>

int main()
{
    int i,j,row = 5,col = 10;
    int a = 97;

    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            if(i==j || i<=j)
            {
                printf("%c",a);
                a++;

            }
            else
                printf(" ");
        }
        col--;
        printf("\n");
    }

    return 0;
}
