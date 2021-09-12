#include <stdio.h>
int main ()
{
	 int a, b, n;
	 for (a=1,b=1,n=1; n<=20; a++,b=b*2,n++)
	 {
		  printf ("%d%d\n", a*a, b);
	 }
	 return 0;
}
