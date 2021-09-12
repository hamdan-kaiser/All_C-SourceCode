#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z;
    x = 5;
    y=6;
    printf("Main 1:\tx = %d\ty = %d\n",x,y);
    z = Mystery(&x,y);
    printf("Main 2:\tx = %d\ty = %d\tz = %d\n",x,y,z);
    NotEasy(&z,y,&y);
    printf("Main 3:\tx = %d\ty = %d\tz = %d\n",x,y,z);
    return 0;
}
int Mystery(int *y,int x)
{
    *y = x;
    printf("add. of x ======= %d\n",x);
    printf("add. of y ======= %d\n",y);
    x+=y;
    printf("Mystery:\tx = %d\t*y = %d\n",x,*y);
    return (x);
}
void NotEasy(int *x,int y, int *z)
{
    int *p1;
    printf("*x ========= %d\n",*x);
    printf("z ========= %d\n",z);
    y= Mystery(z, *x);
    p1 = z;
    printf("\t\t\t\%d\n",p1);
    z = x;
    x = p1;
    *p1 = y + *z/2;
    printf("NotEasy:\t*x = %d\ty = %d\t*z = %d\t*p1 = %d\n",*x,y,*z,*p1);
}
