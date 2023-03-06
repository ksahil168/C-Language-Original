#include<stdio.h>
#include<iostream>
int main()
{
	int i , j;
	for (i=1; i<=5; i++)
	  {
	  	for(j=5; j>=i;j--)
	  	{
	  	 std::cout<<"*";
		}
	  std::cout<<"\n";	 
	  
	  }
	  
	  return 0;
}
