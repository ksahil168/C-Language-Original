#include<stdio.h>
#include<iostream>
int main()
{
	int l;
	std::cout<<"Enter year";
	std::cin>>l;
	if (l%4==0)
	 std::cout<<"Its a leap year";
	else
	  std::cout<<"Not a leap year";
 return 0;	
}
