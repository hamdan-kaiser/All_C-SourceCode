#include<stdio.h>
int main()
{
    int row,col;
    printf("Row = ");
    scanf("%d",&row);
    printf("\nColumn = ");
    scanf("%d",&col);
    printf("\n");
    int arr[row][col];
    int i,j,k;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("For Row %d Col %d =  ",i+1,j+1);
            scanf("%d",&arr[i][j]);

        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Row = %d\tCol = %d\tValue = %d\n",i+1,j+1,arr[i][j]);

        }
    }
    return 0;
}
