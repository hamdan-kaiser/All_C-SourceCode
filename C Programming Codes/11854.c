#include <stdio.h>
int main()
{
    int a,b,c,x,y;
    while(scanf("%d%d%d", &a,&b,&c)==3)
    {
        if (a>0 && b>0 && c>0)
        {
            if (a>b && a>c)
        {
            x= (c*c)+(b*b);
            y= a*a;
        }
        else if (b>a && b>c)
        {
            x= (a*a)+(c*c);
            y= b*b;
        }
        else
        {
            x= (a*a)+(b*b);
            y= c*c;
        }
        if (x==y)
                printf("right\n");
        else
                printf("wrong\n");
        }
        else
            break;
    }
    return 0;
}
