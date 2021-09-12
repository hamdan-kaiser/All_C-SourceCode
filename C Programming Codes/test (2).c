#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,temp;
	while(scanf("%d",&n)!=EOF)
    {
        //temp =0;
        for(i=0;i<n;i++)
        {
            printf("2^%d = %d\n",i,pow(2,i));
//            if(pow(2.0,i)<=n)
//            {
//                temp+=i;
//
//            }
//
//           else if(n<0)
//                break;
//        }
//         printf("%d\n",temp);

    }
}
    return 0;
}
