#include<stdio.h>
#include<string.h>

#define NS 4
#define Size 40

void printArray(char array[NS][Size])
{
    int i;
    for(i=0;i<NS;i++)
    {
        printf("%s\n",array[i]);
    }
}
int main()
{
    int i,j,k;
    char temp;
    char arr[NS][Size] = {"Final","Best", "Make","The"};
    for(i=0;i<NS;i++)
    {
        for(j =0, k = strlen(arr[i])-1; j<k;j++,k--)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][k];
            arr[j][k] = temp;
        }
    }

    printf("After Reverse:\n");
    printArray(arr);
    return 0;
}
