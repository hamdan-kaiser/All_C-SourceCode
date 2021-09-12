#include<stdio.h>
#include<string.h>
int countTheVowels(char a[],int size);
int main()
{
    int i,sum = 0;
    char arr[100];
    gets(arr);
    for(i=0; i<strlen(arr) ; i++)
    {
        sum += countTheVowels(arr,i);
    }
   printf("%d",sum);
    return 0;
}

int countTheVowels(char a[],int size)
{
    int count = 0;
    if(size>=0)
    {
        if(a[size] == 'A'||a[size] == 'E'||a[size] == 'I'||a[size] == 'O'||a[size] == 'U'||
           a[size] == 'a'||a[size] == 'e'||a[size] == 'i'
                ||a[size] == 'o'|| a[size] == 'u')
            count++;
    }
    return count;
}
