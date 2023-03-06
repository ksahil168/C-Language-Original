#include<stdio.h>
int main()
{ int a[10] , even[10], odd[10],i, m=0,n=0, sum=0, sum2=0;
 float avg, avg_even, avg_odd;

printf("Enter elements of an array");
for(i =0; i<5;i++)
scanf("%d", &a[i]);

// transfer the elements into even or odd
for(i=0;i<5;i++)
{  if(a[i]%2==0)// even elemment
  {
   even[m] = a[i];
   m++;
  }
  else
  {
   odd[n] = a[i];
   n++;
  }
}
//average of original array
for(i=0;i<5;i++)
{sum = sum + a[i];
  avg = (float)sum/5;
}  

//average of even array
for(i=0;i<m;i++)
{sum2 = sum2 + even[i];
  avg_even = (float)sum2/m;
} 

printf("sum of number is%d " , sum );
printf("\nAverage of number is%f " , avg );
printf("\nsum of number is%d " , sum2 );
printf("\nAverage of number is%f " , avg_even );
}

