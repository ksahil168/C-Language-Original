//Functions without arguments and with return values. means main() should NOT have arguments such as printf scanf

#include<stdio.h>

int sum()
{ 
int a, b,s;
printf("enter two numbers : ");
scanf("%d%d", &a,&b);
return(a+b);
}


int main()
{
int sum();
int s;
s = sum();
printf("sum = %d", s);
}