//swapping student structure information variable

#include<stdio.h>
#include<string.h>
struct student {
	int roll_no;
	char name[15];
	float marks;
	
};
int main()
{
	struct student x,y ,temp;
	printf("Enter Roll No of student 1 : ");
	scanf("%d", &x.marks);
	printf("Enter Name of student 1 : ");
	scanf("%s", &x.name);
	printf("enter marks student 1 : ");
	scanf("%.2f", &x.marks);	
	
	printf("Enter Roll No of student 2 : ");
	scanf("%d", &y.marks);
	printf("Enter Name student 2 : ");
	scanf("%s", &y.name);
	printf("enter marks student 2 : ");
	scanf("%.2f", &y.marks);
	
	printf("------student information before swapping------\n");
	printf("\n-----------------------------\n");
	printf("roll no of student 1 %d\n", x.roll_no);
	printf("name student 1 %s\n", x.name);
	printf("makrs student 1 %f\n", x.marks);
	
	printf("roll no of student 2 %d\n", y.roll_no);
	printf("name student 2 %s\n", y.name);
	printf("makrs student 2 %f\n", y.marks);
	
	//student 1 information into temp structure 
	temp.roll_no = x.roll_no;
	strcpy(temp.name, x.name);
	temp.marks = x.marks;
	
	//student 2 information into student 2 structure 
	x.roll_no =y.roll_no;
	strcpy(x.name,y.name);
	x.marks=y.marks;
	
	//student 1 information into student 2 structure
	y.roll_no = temp.roll_no;
	strcpy(y.name,temp.name);
	y.marks= temp.marks;
	
	printf("------student information after swapping------\n");
	printf("\n-----------------------------\n");
	printf("roll no of student 1 %d\n", x.roll_no);
	printf("name student 1 %s\n", x.name);
	printf("makrs student 1 %f\n", x.marks);
	
	printf("roll no of student 2 %d\n", y.roll_no);
	printf("name student 2 %s\n", y.name);
	printf("makrs student 2 %f\n", y.marks);
	
	
	
} 