#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    gets(arr);
    int i,j,n,temp;
    n=  strlen(arr);
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                //swipe
                temp = arr[i];
                arr[i]  =arr[j];
                arr[j] = temp;
            }
        }
        printf("%c",arr[i]);
    }
    return 0;
}
