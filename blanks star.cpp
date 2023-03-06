#include<stdio.h>
#include<iostream>
int main()
{
	int i , j,k;
	for (i=1; i<=5; i++)
	  {
	  	for(j=5-i; j>=0;j--)
	  	   std::cout<<"*";
	  	     for(k=1; k<=i; k++)
	  	       { std::cout<<"*";
				 }
		
	  std::cout<<"\n";	 
	  
	  }
	  
	  return 0;
}
