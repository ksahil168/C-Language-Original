#include <stdio.h>
#include <iostream>
int main()
{
	char Name[20], gender[2], Marital_s[3];
	printf("Enter the Name");
	scanf("%c\n", &Name);
	printf("Enter the gender M/m or F/f");
	scanf("%c\n", &gender);
	printf("Enter the Marital_s Yes or No");
	scanf("%c\n", &Marital_s);
	if (gender == 'M' && Marital_s == 'No' ) 
        std::cout<<"Mr."<< Name;
	else if (gender == 'M' && Marital_s == 'Yes' )  
        std::cout<<"Mr."<< Name;
	else if (gender == 'F' && Marital_s == 'Yes' ) 
        std::cout<<"Mrs."<< Name;
	else		   
	    std::cout<<"Miss"<< Name;
	
	return 0;
}
