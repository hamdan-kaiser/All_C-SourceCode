#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter a String: ");
    gets(string);

    int i =0,length = 0;
    while(i!= '\0')
    {
        length++;
        i++;
    }
    printf("Length of the string: %d",length);
    return 0;
}
