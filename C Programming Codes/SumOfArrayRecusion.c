#include<stdio.h>
int sumOfArray(int a[],int size);
int main()
{
    int i,sum =0;
    int arr[] = {1,2,3,4,5};
    for(i=0;i<5;i++)
        sum = sumOfArray(arr,i);
    printf("%d",sum);
    return 0;
}

int sumOfArray(int a[], int size)
{
    if(size!=0)
        return a[size]+ sumOfArray(a,size-1);
    return 1;
}
