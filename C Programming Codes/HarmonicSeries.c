#include<stdio.h>
int main()
{
    double sum = 0.0;
    int i, n;
    printf("Enter Number: ");
    printf("Sum of n number: ",(scanf("%d", &n)),n);
    for (i=1; i<=n; i++)
    {
        sum = sum + (1.0/i);
    }

    printf(" %.2lf",sum);
    return 0;
}
