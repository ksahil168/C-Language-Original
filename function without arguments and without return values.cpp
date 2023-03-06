//function without arguments and without return values

#include<stdio.h>
int main()
{
    
	void sum();
	sum();
}

void sum()
{int a,b,c;
printf("enter two number ");
scanf("%d %d", &a,&b);
c= a+b;
printf("sum is : %d", c);

}