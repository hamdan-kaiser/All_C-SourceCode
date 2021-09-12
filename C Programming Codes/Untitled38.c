#include<stdio.h>
#include <string.h>

typedef struct
{
    char name[1000];
    int bach;
    int reg;
    float cgpa;

}info[100];
int main()
{
    int i,n;
    scanf("%d",&n);
    //student max_cgpa;
    //max_cgpa. cgpa=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %f %s",&info[i].bach,&info[i].reg,&info[i].cgpa, info[i].name);
    }
    /*for(i=1; i<=n; i++)
    {
        if(max_cgpa .cgpa<info[i].cgpa)
        {
            max_cgpa=info[i];
        }
    }*/

    for(i=1; i<=n; i++)
    printf("%d %d %.2f %s",info[i].bach,info[i].reg,info[i].cgpa, info[i].name);
    return 0;
}
