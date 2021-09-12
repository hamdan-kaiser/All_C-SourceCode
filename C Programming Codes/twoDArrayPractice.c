#include<stdio.h>

/* I have done the following
    * Transpose Matrix
    * Diagonal sum
    * Sum of Rows
    * Sum of Cols*/
int main()
{
    int i,j;
    int row,col,sumForRow =0,sumForCols =0,sum1 = 0,sum2 = 0;
    scanf("%d",&row);
    scanf("%d",&col);
    int k = row;
    int arr1[row][col];
    int arr2[row][col];
    printf("-------------------This Program is Assigned for %dX%d Matrix----------------------\n",row,col);
    printf("\t\tTaking Input for %dX%d Matrix\n",row,col);
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("For Row %d Column %d = ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    for (i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            arr2[i][j] =  arr1[j][i];
        }
    }

    printf("\n----------Transpose Matrix----------\n");

    for (i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",arr2[i][j]);
        }

        printf("\n");
    }

    printf("\n----------Matrix Diagonal Sum----------\n");
    if(row!=col)
    {
        printf("Diagonal Matrix is not possible!!(Should be equal mXn Matrix)");
        goto repeat;
    }
    else
    {
        for (i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(i == j)
                {
                    sum1+=arr1[i][j];
                    sum2+= arr1[i][col-k];
                    k--;
                }
            }
        }
        printf("Sum1 = %d, Sum2 = %d",sum1,sum2);
    }
    repeat:
    printf("\n----------Sum of Rows & Columns----------\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            sumForRow+= arr1[i][j];
            arr2[i][j] = arr1[j][i];
            sumForCols += arr2[i][j];
        }
        printf("Sum of Row %d = %d\n",i+1, sumForRow);
        printf("Sum of Col %d = %d\n",i+1, sumForCols);
        sumForRow =0;
        sumForCols = 0;
    }
    return 0;
}
