#include<stdio.h>

int main()
{
    int row1,col1,row2,col2,i,j,k;
    printf("Number of rows: ");
    scanf("%d",&row1);
    printf("Number of cols: ");
    scanf("%d",&col1);

    int arr[row1][col1];

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("row1 = %d, column = %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("%d\t",arr[i][j]);

        }
        printf("\n");
    }

    printf("Number of rows: ");
    scanf("%d",&row2);
    printf("Number of cols: ");
    scanf("%d",&col2);

    int arr2[row2][col2];

    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("row = %d, column = %d: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d\t",arr2[i][j]);

        }
        printf("\n");
    }

    printf("Result:\n");

    for(i=0; i<row1; i++)
    {
        for(k=0; k<col2; k++)
        {
            for(j=0; j<row2; j++)
            {
                printf("%d\t",arr[i][j]*arr2[k][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
