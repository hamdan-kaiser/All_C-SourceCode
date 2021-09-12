#include<stdio.h>
int main()
{
    int a = 5;
    printf("%d\n",a);
    setToZero(&a);
    return 0;
}
void setToZero(int *x)
{
    *x = 0;
    printf("%d",*x);
}
