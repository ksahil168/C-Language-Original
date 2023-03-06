//function without arguments and with return values

#include<stdio.h>
int main()
{
	int sum();
	int c;
	c = sum();
	printf("sum = %d", c);
	
}

int sum()
{int a, b,c;
printf("enter two number ");
scanf("%d %d", &a,&b);
c= a+b;
return c;
}