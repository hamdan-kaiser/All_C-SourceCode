#include <stdio.h>
int main ()
{
    int a, b, i, n, sum;
    printf ("Enter the 2 numbers: ");
    scanf ("%d %d", &a, &b);
    a>2;
    for (i=a; i<=b; i++)
    {
        for (n=2; n<i; n++)
        {
            if (i%n!=0)
                continue;
            else
                break;
        }
    }
    return 0;
}
