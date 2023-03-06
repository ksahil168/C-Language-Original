#include <stdio.h>
int main()
{
	float height,weight;
	printf("Enter the height");
	scanf("%f", &height);
	printf("Enter the weight");
	scanf("%f", &weight);
	if (height > 175 && weight < 80 )
        printf("Person is handsome");
	else    
	   printf("Normal Human Being");
	return 0;
}
