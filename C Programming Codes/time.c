#include<stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    double value =0;
    double i, f;
    float input;

    /* Assign the value we will calculate the modf of */
    for(i=0;i<50;i++)
    {
        scanf("%f",&input);
        value+=input;
    }

    /* Calculate the modf of the value returning the fractional and integral parts */
    f = modf(value, &i);
    result =

    /* Display the result of the calculation */
    printf("The Integral and Fractional parts of %f are %.2f and %.2f\n", value, i, f);

    return 0;
}
