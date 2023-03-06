#include<stdio.h>
#include<conio.h>

struct student{
int marks;
}st[10];


int main()
{
int i,n;
float total=0,avgmarks;
//clrscr();
printf("\nEnter the number of students in class(<=10):");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter student %d marks :",i+1);
scanf("%d",&st[i].marks);
}
for(i=0;i<n;i++)
{
total = total + st[i].marks;
}
avgmarks=total/n;
printf("\nAverage marks = %.2f",avgmarks);
for(i=0;i<n;i++)
{
if(st[i].marks>=avgmarks)
{
printf("\n student %d marks = %d above average",i+1,st[i].marks);
}
else
{
printf("\n student %d marks = %d below average",i+1,st[i].marks);
}
}
getch();
}