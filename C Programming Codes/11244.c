#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int m, n, i, j, star;
    char arr[110][110];
    while(scanf("%d %d", &m, &n)==2)
    {
        if (m==0 && n==0)
            break;
        star=0;
        getchar();
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
                scanf ("%c", &arr[i][j]);
            getchar();
        }

        for (i=0; i<m; i++)
            for (j=0; j<n; j++)
            {
                if (arr[i][j]=='*')
                {
                    star++;
                    if (arr[i-1][j]=='*' && i-1>=0)
                        star--;
                    else if(arr[i-1][j-1]=='*' && i-1>=0 && j-1>=0)
                        star--;
                    else if(arr[i-1][j+1]=='*' && i-1>=0 && j+1<n)
                        star--;
                    else if(arr[i][j-1]=='*' && j-1>=0)
                        star--;
                    else if(arr[i][j+1]=='*' && j+1<n)
                        star--;
                    else if(arr[i+1][j]=='*' && i+1<m)
                        star--;
                    else if(arr[i+1][j-1]=='*' && i+1<m && j-1>=0)
                        star--;
                    else if(arr[i+1][j+1]=='*' && i+1<m && j+1<n)
                        star--;
                }
            }
        printf ("%d\n", star);
    }
    return 0;
}
