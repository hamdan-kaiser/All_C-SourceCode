#include <stdio.h>
int main ()
{
    int number, reminder;
    number=5;
    reminder= number%2;
    if (number==0){
        printf ("The number is even.\n");
    }
    else {
        printf ("The number is odd.\n");
    }
    return 0;
}
