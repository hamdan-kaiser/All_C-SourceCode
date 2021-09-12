#include<stdio.h>
#include <string.h>

struct student
{
    char arr[300];
    int id_number;
    int count;
    int day;
    int counter;
    int mark;
};
int main()
{
    FILE *a, *b;
    int n,i,j, k;
    int maximum = 0;
    a = fopen ("CInput.txt","r");
    struct student student[13];
    for(i=0; i<13; i++)
    {
        fscanf(a,"%s",student[i].arr);
        fscanf(a,"%d",&student[i].id_number);
        fscanf(a,"%d",&student[i].day);
    }
    for (j=0; j<13; j++)
    {
        student[j].counter = (100*student[j].day)/19;
        if (student[j].counter >=70)
            student[j].mark = 5;
        else if (student[j].counter >= 60)
            student[j].mark = 4;
        else if(student[j].counter >= 45)
            student[j].mark = 3;
        else if(student[j].counter <= 30)
            student[j].mark = 2;
    }

    b = fopen("Result.txt","w");
    for (j = 0; j<13; j++)
    {
        fprintf(b,"%s  %d     %d percent     %d\n",student[j].arr,student[j].id_number, student[j].counter,student[j].mark);
    }
    return 0;
}
