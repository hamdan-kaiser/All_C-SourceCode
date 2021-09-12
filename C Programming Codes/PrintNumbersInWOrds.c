#include<stdio.h>
int main()
{
    int i,n, reverse = 0, counts = 0, m = 0;
    printf("Enter Number= ");
    printf("Number %d in Words: ",(scanf("%d",&n),n));
    getchar();
    while(m==0)
    {
        m = n%10;
        if (m == 0) {
            counts++;
            n = n/10;
        } else {
            m = 1;
        }
    }
    while(n !=0)
    {
        reverse  = (reverse*10) + (n%10);
        n = n/10;
    }
    for(i = reverse; i>0 ; i/=10)
    {
        switch(i % 10)
        {
        case 0:
            printf ("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }
    for (int i = 0; i < counts; i++) {
        printf ("Zero ");
    }
    return 0;
}
