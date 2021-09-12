#include <stdio.h>
int main ()
{
    int a, i, x, j=0;
    while(scanf("%d", &a)==1)
    {
        j++;
        if (a<0)
            break;
        else
        {
            x=0;
            i=1;
            while (i<a)
            {
                i= i*2;
                x++;
            }
            printf ("Case %d: %d\n", j, x);
        }
    }
    return 0;
}
