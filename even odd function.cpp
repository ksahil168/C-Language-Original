#include<stdio.h>
#include<iostream>
int main()

int evenodd(int);
{
	int num , flag;
	std::cout<<"enter the number : ";
	std::cin>>num;
	flag = evenodd(num);
	if(flag == 1)
	  std::cout<<num<<" odd number";
	else
	  std::cout<<num<<" even number";
    return 0;	  
}
int evenodd(int a)
{ 
  if (a%2 ==0)
    return 1;
  else 
    return 0;  
}
