//Functions without arguments and without return values.

#include<stdio.h>
void sum()
{
	int a,b,s;
	printf("enter 2 numbers");
	scanf("%d%d", &a,&b);
	s = a+b;
	printf("sum = %d", s);
}

int main()
{ 
void sum();
sum();
}