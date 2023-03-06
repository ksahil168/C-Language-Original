//read 10 employee data having eno , ename ,salary. arrange the employees in the ascending orde of ename

#include<stdio.h>
#include<string.h>
struct employee{
int eno;
char ename[20];
float salary; 
};
 
int main()
{
	struct employee e[10], temp;
	int i;
//read the data through keyboard
for(i=0;i<5;i++)
{
printf("Enter Eno, Ename and salary of %d employee ", i+1);
scanf("%d%s%f", &e[i].eno, &e[i].ename, &e[i].salary);
}
//bubble sort to sort the employee array based on empoyee name
for(i=0;i<10-1;i++)
{
for(int j =0; j<5-i-1;j++)
{if (strcmp(e[j].ename, e[j+1].ename)>0)
{temp = e[j];
 e[j]=e[j+1];
 e[j+1]=temp;
 }
}
}
//display the employee information in the sorted order of Emp_Name
for(i=0;i<5;i++)
printf("%d\t %s\t %3.2f\n", e[i].eno, e[i].ename,e[i].salary);

}