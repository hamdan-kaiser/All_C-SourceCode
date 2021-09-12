#include <stdio.h>
int main ()
{
    int d1, d2, d3, d4;
    d1= 65;
    d2= 66;
    d3= d2++ + ++d1;
    d4= d3++;
    printf ("%d %d %d %d\n", d1, d2, d3, d4);
    return 0;
}
