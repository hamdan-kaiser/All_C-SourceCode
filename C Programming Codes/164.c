#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[50], str2[50];
    int ln1,ln2, i, j, k, l;
    while (scanf("%s%s", str1, str2)==2)
    {
        if (str1[0]=='#')
            break;
        else
        {
            ln1= strlen(str1);
            ln2= strlen(str2);
            for (i=0, j=0, k=0; i<ln1; i++)
            {
                if ((j==0 && str1[i]!=str2[j]) || (k>=ln2))
                {
                    if (i<9)
                        printf ("D%c0%d", str1[i], k+1);
                    else
                        printf ("D%c%d", str1[i], k+1);
                }

                else if (str1[i]==str2[j])
                {
                    j++;
                    k++;
                }

                else if (str1[i]!=str2[j])
                {
                    for (l=j+1; l<ln2; l++)
                    {
                        if (str1[i]==str2[l])
                        {
                            if (k<9)
                            {
                                printf("I%c0%d", str2[j], k+1);
                                j++;
                                k++;
                                i--;
                            }

                            else
                            {
                                printf("I%c%d", str2[j], k+1);
                                j++;
                                k++;
                                i--;
                            }

                            break;
                        }

                        else if (l==ln2)
                        {
                            if (k<9)
                            {
                                printf("C%c0%d", str2[j], k+1);
                                j++;
                                k++;
                            }

                            else
                            {
                                printf("C%c%d", str2[j], k+1);
                                j++;
                                k++;
                            }
                            break;
                        }
                    }
                }
            }
            printf ("E\n");
        }
    }
    return 0;
}
