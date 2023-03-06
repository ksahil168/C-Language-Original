//Functions with arguments and return values. means main() should have arguments such as printf scanf 

#include<stdio.h>
int sum(int a, int b)
{
return (a+b);
}

int main()
{
int a,b,z;
int sum(int ,int);
printf("enter two numbers to add");
scanf("%d%d", &a,&b);
z = sum(a,b);
printf("sum = %d",z);
}
