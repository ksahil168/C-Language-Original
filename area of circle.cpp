#include<stdio.h>
#include<math.h>
int main()
{
	double area ; float r;
	printf("\n Enter Radius of circle :");
	scanf("%f", &r);
	area = 3.14* r*r;
	printf("Area Of the Circle is : %.2lf", area);
    return 0;
}
