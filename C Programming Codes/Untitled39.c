#include <stdio.h>
#include <math.h>
#include <string.h>

int fun(char arr[1000])
{
    int i, ln;
    for (i=ln-1; i>=0; i--)
        printf("%s", arr[i]);
    printf("\n");
    return arr;
}

int main()
{
    int a, ln;
    char arr[1000];
    gets(arr);
    ln = strlen(arr);
    a= fun(arr);
    printf("%s\n", a);
    return 0;
}
