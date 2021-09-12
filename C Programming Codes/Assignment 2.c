#include<stdio.h>

void LSM(int arr[3][3]);
int main()
{

    int Lo_Shu[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&Lo_Shu[i][j]);
        }
    }

    LSM(Lo_Shu);
    return 0;
}

void LSM(int arr[3][3])
{
    int i,j,arr2[3][3];
    int result1, result2,result3=0,result4=0,flag = 1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }

        for(i=0;i<3;i++)
    {
        result2 = 0;

        for(j=0;j<3;j++)
        {
            result2 += arr2[i][j];

            if(i == j) result4+=arr2[i][j]; else result4+=0;
        }

        if(result2 == 15) flag = flag*1; else flag = flag * 0;
    }
     if(result4 == 15) flag = flag*1; else flag = flag * 0;

    for(i=0;i<3;i++)
    {
        result1 = 0;
        result2 = 0;

        for(j=0;j<3;j++)
        {
           // arr2[i][j] = arr[j][i];
            result1+= arr[i][j];

            if(i == j)
            {
                result3+= arr[i][j];
                //result4 += arr2[i][j];
            }

        }
        if(result1 == 15)
        {
            flag *= 1;
        }else flag *= 0;

    }
       if(result3 == 15)
        {
            flag *= 1;
        }else flag *= 0;

    if(flag == 1) printf("Its a Lo Shu Magic Square.\nAnd, the magic number is %d",result3); else printf("Its Not.....");
}
