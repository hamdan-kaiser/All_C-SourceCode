#include<stdio.h>
#include<math.h>
/**
    Name: Hamdan Kaiser
    ID: 1512080042
    Sec: 13*/

//function declaration
void Lo_Shu_Magic(int arr[3][3]);
int main()
{
    int n,row,col;
    printf("Please enter the desired grid dimension: ");
    scanf("%d %d",&row,&col);
    int Lo_Shu[row][col];
    int i,j,s;
    if(row == col) n = row; else return 0;
    s = n*(pow(n,2)+1)/2;
    if(!s ==15) return 0;
    printf("Please enter the desired input:\n\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            //input for 3X3
            scanf("%d",&Lo_Shu[i][j]);
        }
        if(Lo_Shu[i][j]>9 && Lo_Shu<0) break;
        else continue;
    }
    //calling user-defined function
    Lo_Shu_Magic(Lo_Shu);
    return 0;
}

//user-defined function
void Lo_Shu_Magic(int arr[3][3])
{
    int i,j,arr2[3][3];
    int a, b,c=0,d=0,flag = 1;

    //transpose
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }

    for(i=0; i<3; i++)
    {
        b = 0;
        for(j=0; j<3; j++)
        {
            //storing values for column i;
            b += arr2[i][j];
            //for top right to bottom left single-cross addition
            if(i == j)
                d+=arr2[i][j];
            else
                d+=0;
        }
        //checking the stored value for column i;
        if(b == 15)
            flag = flag*1;
        else
            flag = flag * 0;
    }
    //checking stored value for top right to bottom left single-cross
    if(d == 15)
        flag = flag*1;
    else
        flag = flag * 0;

    for(i=0; i<3; i++)
    {
        a = 0;
        b = 0;

        for(j=0; j<3; j++)
        {
            //storing values for row i;
            a+= arr[i][j];

            if(i == j)
            {
                //for top left to bottom right single-cross addition
                c+= arr[i][j];
            }
        }

        //checking the stored value for row i;
        if(a == 15)
        {
            flag *= 1;
        }
        else
            flag *= 0;

    }
    //checking stored value for top left to bottom right single-cross
    if(c == 15)
    {
        flag *= 1;
    }
    else
        flag *= 0;

    if(flag == 1)
        printf("\nThis is a Lo Shu Magic Square.\nAnd, the magic number is %d.\n\nThank You!!!",c);
    else
        return 0;
}

