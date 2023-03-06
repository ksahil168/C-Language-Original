//Wrtite a code to check the frequency of numbers in array

#include<stdio.h>
int main()
{
	int no, freq[10]={0,0,0,0,0,0,0,0,0,0}, remainder,i;
	printf("enter a number with atleast one number repeated");
	scanf("%d", &no);
	while(no>0)
	{
		remainder = no%10;
		freq[remainder]= freq[remainder] + 1;
		no = no/10;
		
	}
	{for (i=0; i<10; i++)
	printf("frequency of %d is %d \n", i, freq[i]);
	}

}