#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[30];
    int id;
    double cgpa;
}student;
student info[2];
void print (student info[])
{
    int i;
    for (i=0; i<2; i++)
    {
        printf ("Student Name: %s\n", info[i].name);
        printf ("Student Id: %d\n", info[i].id);
        printf ("Student CGPA: %.2lf\n", info[i].cgpa);
    }

}
int main()
{
    int i, n;
    scanf ("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf ("%s %d %lf", &info[i].name, &info[i].id, &info[i].cgpa);
    }
    namesort();
    print(info);
    return 0;
}
