#include <stdio.h>
typedef struct
{
    int reg;
    char name[100];
    double cgpa;
}student;
student number[100];
student m;
int main ()
{
    int n, i;
    m.cgpa=0;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf ("%d %s %lf", &number[i].reg, number[i].name, &number[i].cgpa);

        if (number[i].cgpa > m.cgpa)
            {
                m=number[i];
            }


    }
    printf ("\nreg:%d name: %s cgpa: %lf\n", m.reg, m.name, m.cgpa);


    return 0;
}
