#include <stdio.h>
int main ()
{
    long int a, n, s;
        while (scanf("%ld", &n)==1)
        {
            if (n<0)
            break;
        else
        {
            s= (n*(n+1)/2)+1;
            printf("%ld\n", s);
        }

    }
    return 0;
}
