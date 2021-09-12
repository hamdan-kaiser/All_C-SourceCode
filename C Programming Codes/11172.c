#include <stdio.h>
int main ()
{
    int t, a, b;
    scanf ("%d", &t);
    while (scanf ("%d %d", &a, &b)==2)
    {
        if (a>b)
            printf(">\n");
            else if (a<b)
                printf("<\n");
            else
                printf("=\n");
    }
    return 0;
}
