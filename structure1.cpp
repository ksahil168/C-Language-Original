//read a student information (rollNo name and marks from the keyboard and display on the screen)

#include<stdio.h>
struct student {
	int roll_no;
	char name[15];
	float marks;
	
};
int main()
{
	struct student x;
	printf("Enter Roll No ");
	scanf("%d", &x.marks);
	printf("Enter Name ");
	scanf("%s", &x.name);
	printf("enter marks ");
	scanf("%f", &x.marks);	
	printf("------student information------\n");
	printf("\n-----------------------------\n");
	printf("roll no %d\n", x.roll_no);
	printf("name %s\n", x.name);
	printf("makrs %f\n", x.marks);
}