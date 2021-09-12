#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,n;
    while(b!=1)
    {
        start:
        printf("1. Hello World (problem solved,uva)\n");
        printf("2. Array Swapping\n");
        scanf("%d",&a);
        if(a>=2&&a<=1)
            break;
        if(a==1)
        {
            int a,b,c=1,i;
            while(scanf("%d",&a)>=0)
            {
                if(a==1)
                    printf("Case %d: 0\n",c);
                else if(a<0)
                {
                    printf("Wrong Input!\n try again!\n");

                    goto start;
                }
                for(i=0; i<a; i++)
                    {
                    if(pow(2,i)<a && a<=pow(2,i+1))
                        printf("Case %d: %d\n",c,i+1);
                    }
                c++;
            }
            return 0;
        }
        if(a==2)
        {

            int x[10],y[10];
            int i,j,k,l;
            int temp=0;
            printf("How Many Numbers U Wana Swap?\n");
            scanf("%d",&n);
            printf("Put Values For x [%d only]...\n",n);
            for(i=0; i<n; i++)
            {
                scanf("%d",&x[i]);
            }
            printf("Put Values For y [%d only]...\n",n);
            for(j=0; j<n; j++)
            {
                scanf("%d",&y[j]);

            }
            printf("Ow Yeah!;)\n");

            for(k=0,l=0; k<n,l<n; k++,l++)
            {
                temp = x[k];
                x[k] = y[l];
                y[l] = temp;
                printf("x= %d y= %d\n",x[k],y[l]);
            }
            goto start;
        }
    }
    return 0;
}


