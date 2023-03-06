//functions with arguments and with return values

#include<stdio.h>
int main()
{
	int sum(int, int);
    int a, b,c;
    printf("enter two number ");
    scanf("%d %d", &a,&b);
    c = sum(a ,b);
	printf("sum = %d", c);
}

int sum(int a, int b)
{ int c ;
c= a+b ;
return c ;
}
