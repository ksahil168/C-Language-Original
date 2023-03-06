#include <stdio.h>
#include<iostream>
int main()
{
int i ,j, k;
for (i= 5; i>=1; i--)
{
for(j=i; j<5; j++)
std::cout<<" ";
for(k=1; k<=i ; k++)
std::cout<<"* ";
std::cout<<"\n";
}
return 0;
}
