#include<stdio.h>
#include <string.h>

struct studentList
{
    char name1[300];
    char name2[300];
    int id;
    int dayCount;
    int percentage;
    int count;
    int marks;
};

int main()
{
    FILE *file, *fp;
    int n,i,j, k;
    int count = 0;
    file = fopen("Input.txt","r");

    struct studentList student[13];
    for(i=0; i<13; i++)
    {
        //fgets(student[i].name, 30,file);
        fscanf(file,"%s",student[i].name1);
        fscanf(file,"%s",student[i].name2);
        fscanf(file,"%d",&student[i].id);
        fscanf(file,"%d",&student[i].dayCount);
    }

    for (k=0; k<13; k++)
    {
        student[k].percentage = (100*student[k].dayCount)/19;
        if (student[k].percentage >=70)
            student[k].marks = 5;
        else if(student[k].percentage >= 60)
            student[k].marks = 4;
        else if(student[k].percentage >= 45)
            student[k].marks = 3;
        else if(student[k].percentage <= 30)
            student[k].marks = 2;
    }

    fp = fopen("Output.txt","w");
    // fwrite(file,1,sizeof(file),fp);
    int x = 1;
    fprintf(fp,"No.\tName\t\t\tID\tPercentage\tMarks\n");
    for (j = 0; j<13; j++)
    {
        fprintf(fp,"%d\t%s %s\t\t%d\t\t%d%%\t%d\n",x,student[j].name1,student[j].name2, student[j].id, student[j].percentage,student[j].marks);
        x++;
    }

    fprintf(fp,"\n\nAttendance Percentage (Student Count):\n");
    fprintf(fp,"No.\tPercentage\tCount\n");

    int count1= 0,count2=0,count3=0,count4=0;
    for(i=0;i<13;i++)
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
    fprintf(fp,"%d\t%d%%\t\t%d\n",1,70,count1);
    fprintf(fp,"%d\t%d%%\t\t%d\n",2,60,count2);
    fprintf(fp,"%d\t%d%%\t\t%d\n",3,45,count3);
    fprintf(fp,"%d\t%d%%\t\t%d\n",4,30,count4);

    return 0;
}

