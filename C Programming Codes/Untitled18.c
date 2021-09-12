#include <stdio.h>
int main ()
{
    int d1, d2, d3;
    d1= 65;
    d2= d1++;
    d3= d2++;
    printf ("%c %c %c\n", d1, d2, d3);
    return 0;
}
