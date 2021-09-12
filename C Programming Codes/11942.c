#include <stdio.h>
#include <string.h>
int main ()
{
    int arr[10], n, i, j, k, l, x, y;
    scanf ("%d", &n);
    printf ("Lumberjacks:\n");
    i=1;
    while (i<=n)
    {
        x=0;
        y=0;
        for (j=0; j<10; j++)
            scanf ("%d", &arr[j]);
        for (k=0; k<9; k++)
        {
            if (arr[k]>arr[k+1])
                x++;
            else if (arr[k]<arr[k+1])
                y++;
        }
        if (x==9)
            printf("Ordered\n");
        else if (y==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
        i++;
    }
    return 0;
}
