#include<stdio.h>
int main()
{
    int i, a,b, gcd =0,k;
    while (k!=1)
    {
        printf("Enter TWO integers: ");
        printf("GCD: ",(scanf("%d %d", &a,&b)), a,b);
        for (i=1; i<= a; i++)
        {
            if (i <= b)
            {
                if (a%i ==0 && b%i ==0)
                {
                    gcd = i;
                }
            }
        }
        printf(" %d\n", gcd);
    }
    return 0;
}
