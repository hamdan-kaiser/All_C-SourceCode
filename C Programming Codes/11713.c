#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100];
    int t, i, ln1, ln2, x, j;
    while(scanf("%d", &t)==1)
    {
        for (j=1; j<=t; j++)
        {
            scanf("%s %s", str1, str2);
            ln1=strlen(str1);
            ln2=strlen(str2);
            x=0;
            if (ln1!=ln2)
                printf("No\n");
            else
            {
                for (i=0; i<ln1; i++)
                {
                    if (str1[i]!=str2[i])
                    {
                        if (str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
                        {
                            if (str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u')
                                x++;
                                else
                                {
                                    printf("No\n");
                                    break;
                                }
                        }
                        else
                        {
                            printf("No\n");
                            break;
                        }
                    }
                    if (i==ln1-1)
                    {
                        printf("Yes\n");
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
