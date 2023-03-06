#include<stdio.h>
#include<iostream>
int main()
{ int i,j,k;
  for(i=1;i<=3;i++)
  {for(j=3-i; j>0; j--)
    std::cout<<" ";
    for(k=1;k<=i;k++)
    std::cout<<"* ";
    std::cout<<"\n";
    for(i=3;i>=1;i--)
     {for(j=3-i; j>0; j--)
       std::cout<<" ";
       for(k=i;k>0;k--)
       std::cout<<"* ";
       std::cout<<"\n";
       
	 } return 0;
    
  }
}
