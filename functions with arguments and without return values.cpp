//functions with arguments and without return values

#include<stdio.h>
int main()
{
	void sum(int , int);
	int a, b;
    printf("enter two number ");
    scanf("%d %d", &a,&b);
    sum(a,b);	
}

void sum(int a, int b)
{int c;
c= a+b;
printf("sum = %d ", c);
}