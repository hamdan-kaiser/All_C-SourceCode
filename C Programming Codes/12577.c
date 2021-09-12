#include <stdio.h>
#include <string.h>
int main ()
{
    char  str[100];
    char prev1[100]={"Hajj"}, prev2[100]={"Umrah"};
    int i, l1, l2, l3;
    i=1;
    l1=strlen(prev1);
    l2=strlen(prev2);
    while (1)
    {
        scanf("%s", str);
        l3=strlen(str);
        if (l3==l1)
           printf("Case %d: Hajj-e-Akbar\n", i);
        else if (l3==l2)
            printf("Case %d: Hajj-e-Asghar\n", i);
        else
            break;
            i++;
    }
    return 0;
}
