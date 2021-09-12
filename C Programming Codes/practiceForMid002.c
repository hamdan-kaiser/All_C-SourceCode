#include<stdio.h>
int main()
{
    int row,column,n = 5;
    for(row=0; row<n; row++)
    {
        for(column=0; column<n; column++)
        {
            if (row == 0)
            {
                printf("*");
                continue;
            }
            else if (column >= row)
            {
                if (row == column || column == (n-1))
                {
                    if(row%2!=0)
                        printf("+");
                    else
                        printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
