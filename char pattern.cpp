#include<stdio.h>
#include<iostream>
int main()
{
	int i , j; 
	char ch = 'A';
	for (i=0; i<=5; i++)
	  {
	  	for(j=0; j<=i;j++)
	  	{ 
	  	 std::cout<<ch;
	  	 ch++;
	  	 
		}
	  std::cout<<"\n";	 
	  
	  }
	  
	  return 0;
}
