#include <stdio.h>
int main ()
{
    int a, x;
    printf ("Enter the number: ");
    scanf ("%d", &x);
    for(a=2;a<x;a++)
    {
        if (x%a==0)
            printf("Not prime");
        break;
    }
    if (x%a!=0)
        printf ("Prime");
    return 0;
}
