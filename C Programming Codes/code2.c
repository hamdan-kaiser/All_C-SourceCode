#include <stdio.h>
int main()
{
    int i, j;
    for (i=1; i<=4; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf (" ");
        }
        for (i=j;i<=4 ;i++ )
        {
            printf ("*");
        }
        printf ("\n");
    }

    return 0;
}
