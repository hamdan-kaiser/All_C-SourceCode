#include <stdio.h>
#include <math.h>
void main()
{
    int i;
    float input,sum,result,minute;
    sum =0;
    printf("Username: Virus\n");
    printf("Password: *************\n");
    printf("**********************Welcome! Virus**********************\n");
    printf("Please Enter your Incoming calls durations: \n");
    for(i=0; i<50;i++)
    {
        scanf("%f",&input);
        sum+=input;
    }
    float a_frac = sum - (int) sum;
    float a_int = sum - a_frac;
    result = a_int * 60 + a_frac;
    minute = result/60;
    //printf("Total Talktime = %.4f \t Integer = %.1f \t Fraction = %.2f", sum, a_int, a_frac);
    printf("\n**************Total Talktime**************\n\t\t %.5f seconds,%.2f Minutes\n", result, minute);
    printf("Balance for Talktime: %.2f BDT.\n", minute*2.24);
    printf("You have searched for this: 27/06/2019");
}
