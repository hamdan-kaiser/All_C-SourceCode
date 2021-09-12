#include<stdio.h>
#include <string.h>

struct studentList
{
    char name[300];
    int id;
    int dayCount;
    int percentage;
    int count;
    int marks;
};

int main()
{
    FILE *file;
    int n,i,j;
    int count = 0;
    printf("Please enter the Number of Students: ");
    scanf("%d",&n);
    printf("Write Down The Following-\n1.\tStudents Name.(One Word Only).\n2.\tStudent ID.\n3.\tDay of Total Attendance\n");
    struct studentList student[n];
    for(i=0; i<n; i++)
    {
        scanf("%s %d %d",&student[i].name, &student[i].id, &student[i].dayCount);
    }

    for (i=0; i<n; i++)
    {
        student[i].percentage = (100*student[i].dayCount)/19;
        if (student[i].percentage >=70)
            student[i].marks = 5;
        else if(student[i].percentage >= 60)
            student[i].marks = 4;
        else if(student[i].percentage >= 45)
            student[i].marks = 3;
        else if(student[i].percentage <= 30)
            student[i].marks = 2;
    }

    printf("No.\tName\t\t\tID\tPercentage\tMarks\n");
    for (j = 0; j<n; j++)
    {
        printf("%d\t%s\t\t\t%d\t\t%d%%\t%d\n",j+1,student[j].name, student[j].id, student[j].percentage,student[j].marks);
    }

    printf("\n\nAttendance Percentage (Student Count):\n");
    printf("No.\tPercentage\tCount\n");

    int count1= 0,count2=0,count3=0,count4=0;
    for(i=0;i<n;i++)
    {
        if (student[i].percentage >=70)
            count1++;

        else if(student[i].percentage >= 60)
            count2++;

        else if(student[i].percentage >= 45)
            count3++;

        else if(student[i].percentage <= 30)
           count4++;

    }
    printf("%d\t%d%%\t\t%d\n",1,70,count1);
    printf("%d\t%d%%\t\t%d\n",2,60,count2);
    printf("%d\t%d%%\t\t%d\n",3,45,count3);
    printf("%d\t%d%%\t\t%d\n",4,30,count4);
    return 0;
}
