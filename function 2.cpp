//Functions with arguments and without return values. means main() should have arguments such as printf scanf and calculation should be done in function

#include<stdio.h>
void sum(int a, int b)
{
	int s;
	s= a+b;
	printf("sum = %d", s);
	
}
 int main()
 { 
 int x,y;
 void sum(int , int);
 printf("enter two numbers");
 scanf("%d%d", &x, &y);
 sum(x,y);
 }