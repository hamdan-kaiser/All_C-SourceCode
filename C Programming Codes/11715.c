#include <stdio.h>
#include <math.h>
int main()
{
    int i,c=0;
    double u, v, s, a, t;
    while(scanf("%d",&i)==1)
    {
        c++;
        if (i==0)
            break;
        else if (i==1)
        {
            scanf("%lf %lf %lf", &u, &v, &t);
            a= (v-u)/t;
            s= (u*t) + (.5*a*t*t);
            printf("Case %d: %.03lf %.03lf\n", c, s, a);
        }
        else if (i==2)
           {
            scanf("%lf %lf %lf", &u, &v, &a);
            t= (v-u)/a;
            s= (u*t) + (.5*a*t*t);
            printf("Case %d: %.03lf %.03lf\n", c, s, t);
           }
           else if (i==3)
           {
            scanf("%lf %lf %lf", &u, &a, &s);
            v= sqrt(u*u+2*a*s);
            t= (v-u)/a;
            printf("Case %d: %.03lf %.03lf\n", c, v, t);
           }
           else if (i==4)
           {
            scanf("%lf %lf %lf", &v, &a, &s);
            u= sqrt(v*v-2*a*s);
            t= (v-u)/a;
            printf("Case %d: %.03lf %.03lf\n", c, u, t);
           }
    }
    return 0;
}
