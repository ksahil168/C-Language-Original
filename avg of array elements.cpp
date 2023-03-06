// program to write  average of elements present in an array . also write the main program

#include<stdio.h>
float avg_array(int b[200], int n)
{
int sum =0, i;
float avg;
for (i =0; i<n;i++)
sum = sum+b[i];
avg = (float)sum/n;
return (avg);
}

int main()
{int a[200], n,i; float avg; 
 float avg_array(int[200], int);
 printf("how many elements in the array");
 scanf("%d",&n);
 printf("enter number of array elements ");
 for (i =0; i<n;i ++)
 scanf("%d", &a[i]);
 avg = avg_array(a,n);
 printf("average is %3.2f", avg);
 return 0;
} 