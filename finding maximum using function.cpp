//finding maximum using function

#include<stdio.h>
int max(int x, int y)
{
if(x>y)
return x;
else
return y;
}

int temp(int a, int b)
{
	int s; 
	int max(int ,int);
	s = max(a,b);
	return s;
}

int main()
{
	int x,y,z;
	int temp(int,int);
	printf("enter two number ");
	scanf("%d%d", &x,&y);
	z = temp(x,y);
	printf("maximum = %d", z);
}