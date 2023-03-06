//read 10 numbers and display the largest one

// write a programm to calculate average of first n numbers
#include<stdio.h>
#include<conio.h>
#include<iostream>
int main()
{
	int n[10] , i, largest;
	for(i=0; i<10; i++)
	{
	std::cout<<"Enter the Number "<<i+1<<":";
    
     std::cin>>n[i];
	}
	largest =  n[0];
	for(i=0; i<10; i++){
		if(n[i] > largest)
	{
			largest = n[i];}
		
	} 
	printf("largest number is : %d", largest);
   return 0;
	
}
