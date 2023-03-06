#include <stdio.h>
#include<iostream>
int main()
{
	float height;
	float weight;
	std::cout<< "Enter the height of the person : ";
	std::cin>> height;
	std::cout<< "Enter the weight of the person : ";
	std::cin>> weight;
	if (height > 175) && (weight < 80 )
        std::cout<<"Person is Smart";
	else    
	    std::cout<<"Normal Human Being";
	return 0;
}
