#include <stdio.h>
int main()
{
    int a, b, i, sum=0;
    scanf("%d %d", &a, &b);
     for (i=a; i<=b; i++)
     {
         if (i%2!=0)
            sum= sum+1;
         else
            continue;
    }
    printf ("%d", sum);
    return 0;
}
