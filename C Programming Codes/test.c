#include<stdio.h>

int main()
{
    int a,b,c;

    a = 10;
    b = 20;
    c = 100;
    a > b > c ? printf("A > B > C") : (a == b == c ? printf("A = B = C") : printf("A < B < C ") );
   //printf("%d", a<b<c);
    return 0;
}
