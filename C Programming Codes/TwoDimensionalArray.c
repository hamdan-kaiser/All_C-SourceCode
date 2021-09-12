#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int totalsize = n;
    int size1 = totalsize-1;
    int size2 = totalsize - 2;
    int arr1[size1],arr2[size2];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);

    }
    return 0;
}
