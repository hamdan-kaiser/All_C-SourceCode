#include<stdio.h>
#include<stdlib.h>
int main()
{
       

            int x[10],y[10];
            int i,j,k,l,n;;
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
        system("pwd");
    
    return 0;
}


