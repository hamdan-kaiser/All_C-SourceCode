#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int i,j,k,x,temp;
    for (k = 0; k<size; k++)
    {
        scanf("%d",&arr[k]);
    }
    for(i=0; i<size-1; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            for (x=0; x<size; x++)
                printf("%d ",arr[x]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
