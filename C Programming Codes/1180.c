#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d\n", arr[i]);
    }
    return 0;
}
