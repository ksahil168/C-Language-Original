
#include <iostream>  
int main()  
{  
int n,sum=0,m;    
std::cout<<"Enter a number: ";    
std::cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
std::cout<<"Sum is= "<<sum<<std::endl;    
return 0;  
}  