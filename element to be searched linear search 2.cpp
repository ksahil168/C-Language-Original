#include<stdio.h>
int main()
{ int a[20],i, box, item, count=0;
printf("enter the number of boxes u want ");
scanf("%d", &box);

printf("enter the elements to put in box");
for(i=0; i<box; i++)
scanf("%d", &a[i]);

printf("enter the element to be searched");
scanf("%d", &item);

//searching the element
for(i=0; i<box ; i++)
 {
 count++;
 if(item == a[i])
 break;
 }
 if(i==20)
 printf("%d no. is not found in the box");
 else
 printf("%d no. is found at location %d and the searches required is %d", item,a[i],count);
return 0; 
}