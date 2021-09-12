#include <stdio.h>

int main ()
{
    int arr[1], i, x, b, r, k;
    scanf ("%d", &arr[0]);
    x=arr[0];
    r=0;
    while (x>0)
    {
        b=x%10;
        x=x/10;
        r= r*10+b;
    }
    arr[0]=r;
    printf ("%d\n", arr[0]);
    return 0;
}
