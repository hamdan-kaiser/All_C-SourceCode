#include<stdio.h>
//916438
//365854
int main()
{
    char name[100];
    int i,j,length = 0,further = 0,flag = 1;
    char *p;
   /* for (i=0; name[i]!= '\0';i++)
    {
        scanf("%c", &name[i]);
    }*/

    gets(name);

    printf("a Found in ");
    for (j=0; name[j]!= NULL;j++)
    {
        if(name[j] == 'a')
        {
            //p = &name[j];
            printf("%d ", j);
        }
      //  printf(" ");
    }

    for (i =0;name[i]!= NULL;i++)
    {
        if(name[i] != ' ')
            length = length + 1;
        further = further+1;
    }

    printf("Length: %d %d", length,further);
    printf("\nIn reverse: ");
    for (i = further; i>=0; i--)
    {
        printf("%c",name[i]);
    }

    for (i=0,j = further-1;i<further;i++,j--)
    {

            if(name[i] != name[j])
                flag = flag * 0;
            else
                flag = flag * 1;
    }

    if(flag == 1)
        printf("\nIts a palindrome!");
    else
        printf("\nIts not a palindrome!");


    return 0;
}
