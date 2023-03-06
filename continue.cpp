#include<stdio.h>
int main()
{
	int i, b = 2;
	for(i= 1; i<=20; i++)
	{ 
	  if(i==b)
	  { 
	     b=b+2;
	     continue;
	  }
	  printf("%d",i);
	}
}