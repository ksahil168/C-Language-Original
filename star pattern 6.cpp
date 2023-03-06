
#include<iostream>
int main()
{
int i , j,k;
for (i=1; i<=5; i++)
{
for(j=i; j<5 ;j++)
{
std::cout<<" ";
}
for(k= j; k <= (2*i-1); k++)
{ 
std::cout<< "*";
}
std::cout<<"\n";
} 
return 0 ;
}
	  	   
