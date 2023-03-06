//printinf 10 number of fibonnacci serires using recursion and without recursion

#include<stdio.h>
int fib_series(int n)
{if(n==0)
  return 0;
 if(n==1)
  return 1;
 else 
  return fib_series (n-1)+ fib_series(n-2);
}

int main()
{
	int n = 5, i;
	for (i=1; i<=n; i++)
	{
	printf("%d\t", fib_series(i));
	}
return 0;
}