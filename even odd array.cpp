#include<stdio.h>
int main()
{ int a[10] , even[10], odd[10],i, m=0,n=0, sum=0;
 float avg, avg_even, avg_odd;

printf("Enter elements of an array");
for(i =0; i<10;i++)
scanf("%d", &a[i]);

// transfer the elements into even or odd
for(i=0;i<10;i++)
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
for(i=0;i<10;i++)
 {sum = sum + a[i];
  avg = (float)sum/10;
 }

//average of even array
for(i=0;i<m;i++)
 {sum = sum + even[m];
  avg_even = (float)sum/m;
 } 

//average of odd array
for(i=0;i<n;i++)
 {sum = sum + odd[n];
  avg_odd = (float)sum/n;
 } 
 
printf("sum of number is%d " , sum );
printf("\nAverage of number is%f " , avg ); 
 
printf("the elements of even array are : ");
for(i=0; i<m; i++)
{printf("%d ", even[i]);
}
printf("\nthe elements of odd array are : ");
for(i=0; i<n; i++)
{printf("%d ", odd[i]);
}

//display which array avg is greater than the original array
if(avg_even > avg)
printf("even avg is greater than the orginal avg%d%d");
if(avg_odd > avg)
printf("odd avg is greater than the oroginal avg%d%d");
 
}

