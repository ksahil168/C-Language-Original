#include <stdio.h>
#include<iostream>
int main()
{
int i ,j, k;
for (i= 5; i>=1; i--)
{
for(j=5-i; j>0; j--)
std::cout<<" ";
for(k=i; k>0 ; k--)
std::cout<<"* ";
std::cout<<"\n";
}
return 0;
}
