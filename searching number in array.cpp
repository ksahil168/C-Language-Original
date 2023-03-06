//searching number in array

#include<stdio.h>
int main()
{ int no, a[20],i, item;
printf("enter the number of elements in an array : ");
scanf("%d", &no);
printf("Input the number in array", no);
for(i=0; i<no; i++)
scanf("%d", &a[i]);
for(i=0; i<=no; i++)
  if(a[i] ==  item)
  break;
  if(i==no)
  printf("%d is not found", item);
  else
  printf(" %d is found at index %d" , item , i);

 return 0;
}