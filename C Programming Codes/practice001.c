#include<stdio.h>
int main()
{
    char arr1[10][100];
    int i,j,n =3;
    for (i=0; i<n; i++)
    {
        scanf("%s",arr1[i]);
    }
    for(j = n-1; j>=0; --j)
    {
        printf("%s",arr1[j]);
        //else if(p == '\n') break;
    }
    printf("Checked!");
    return 0;
}
