#include <stdio.h>
int main ()
{
    int x, y, z;
    printf ("Enter the value of x, y & z: ");
    scanf ("%d%d%d", &x, &y, &z);
    if (x<y && y<z)
        printf ("x is the smallest number.\n");
    else if (y<x && x<z)
        printf ("y is the smallest number.\n");
    else
        printf ("z is the smallest number.\n");
    return 0;
}
