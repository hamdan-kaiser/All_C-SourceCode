#include <stdio.h>
int main ()
{
    long int i, j, a, b, sum, n, p, x, ans;
    while (scanf("%ld %ld", &i,&j)==2)
    {
        if (j>=i)
        {
            p=0;
            x=-1;
            for (b=i; b<=j; b++)
            {
                a=b;
                sum=0;
                while (a>0)
                {
                    if (a==1)
                    {
                        break;
                    }
                    else
                    {
                        n=a%2;
                        if (n==1)
                        {
                            a= (3*a)+1;
                        }
                        else
                        {
                            a= a/2;
                        }
                        sum++;
                    }
                }
                p= sum+1;
                if (p>x)
                {
                    x=p;
                }
            }
        }
        else
        {
            p=0;
            x=-1;
            for (b=j; b<=i; b++)
            {
                a=b;
                sum=0;
                while (a>0)
                {
                    if (a==1)
                    {
                        break;
                    }
                    else
                    {
                        n=a%2;
                        if (n==1)
                        {
                            a= (3*a)+1;
                        }
                        else
                        {
                            a= a/2;
                        }
                        sum++;
                    }
                }
                p= sum+1;
                if (p>x)
                {
                    x=p;
                }
            }
        }
            printf("%ld %ld %ld\n", i, j, x);
        }
        return 0;
    }
