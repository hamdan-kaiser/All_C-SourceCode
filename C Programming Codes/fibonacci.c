#include<stdio.h>
int main()
{
    int i,input, firstNumber=0, secondNumber =1, output;
    printf("***************Fibonacci of n series***************\n");
    printf("Enter nth Number: ");
    printf("Fibonacci Series of %d : ",(scanf("%d",&input),input));
    getchar();
    for(i=0; i< input; i++)
    {
        if (i == 0 || i == 1)
        {
            output = i;
        }
        else
        {
            output = firstNumber + secondNumber;
            firstNumber = secondNumber;
            secondNumber = output;
        }
        printf("%d   ",output);
    }
    return 0;
}
