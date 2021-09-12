#include <stdio.h>
#include <string.h>
int main ()
{
    int i;
    char a[20], b[20];
    gets(a);
    i=0;
    while(1)
    {
        b[i]=a[i];
        if (a[i]=='\0')
            break;
        i++;
    }
    printf("%s", b);
    return 0;
}
