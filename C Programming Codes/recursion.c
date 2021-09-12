#include<stdio.h>
int sumOf(int x);
void main()
{
    int n;
    scanf("%d",&n);
    printf("Sum of nth term = %d", sumOf(n));
}

int sumOf(int x)
{
    if(x!=0){
        return x + sumOf(x-1);}
        else return x;

}
