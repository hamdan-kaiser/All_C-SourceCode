#include <stdio.h>
int main ()
{
    int a, b, c, sum;
    char A, B, C;
    while (scanf("%d %d %d", &a, &b, &c)==3)
    {
        if (a==b && c!=a)
            printf ("C\n");
            else if (b==c && a!=b)
               printf ("A\n");
            else if (c==a && b!=c)
                printf ("B\n");
            else
                printf ("*\n");
    }
    return 0;
}
