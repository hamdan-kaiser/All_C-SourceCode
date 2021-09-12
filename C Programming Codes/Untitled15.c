#include <stdio.h>
int main ()
{
    int a, b, rem;
    double add, sub, mult, div;
    printf ("Enter the value of a & b: ");
    scanf ("%d %d", &a, &b);
    add= a+b;
    sub= a-b;
    mult= a*b;
    div= a/b;
    rem= a%b;
    printf ("\nAdd: %.2lf", add);
    printf ("\nSub: %.2lf", sub);
    printf ("\nMult: %.2lf", mult);
    printf ("\nDiv: %.2lf", div);
    printf ("\nRem: %d", rem);
    return 0;
}
