#include<stdio.h>
#include<string.h>
int CountVowel(char arr[], int size);

int main()
{
    char arr1[100];
    gets(arr1);
    int n = sizeof(arr1);
    printf("%d",CountVowel(arr1,n));
    return 0;
}

int CountVowel(char arr[], int size)
{
    //size = sizeof(arr);
    int count = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == 'a'||arr[i] == 'e'||arr[i] == 'i'||arr[i] == 'o'||arr[i] == 'u'||arr[i] == 'A'||arr[i] == 'E'||arr[i] == 'I'||
            arr[i] == 'O'||arr[i] == 'U')
            count++;
    }
    return count;
}
