#include <stdio.h>
int main ()
{
	 int sum, i, t, a, c, b;
    scanf ("%d", &c);

    for (t=1; t<=c; t++)
          {
              sum=0;
              scanf ("%d %d", &a, &b);
              for (i=a; i<=b; i++)
	 {
		  if (i%2==1)
				sum= sum+i;
		  else
				continue;
	 }
	             printf ("Case %d: %d\n", t,sum);
          }

	 return 0;
}
