#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main ()
{
    char str1[10]= {"one"}, str[10];
    int ln, i, j, x, y, n;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%s", str);
        ln= strlen(str);
        if (ln==5)
            printf("3\n");
        else
        {
            j=0;
            x=0;
            y=0;
            while (str[j]!='\0' && str1[j]!='\0')
            {
                if (str[j]==str1[j])
                    x++;
                else
                    y++;
                j++;
            }
            if (x>y)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
