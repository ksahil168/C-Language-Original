// Reverse of a number and sum of digits using function

#include<stdio.h>
int reverse(int no)
{ int sum =0, remainder;
   while(no>0)
   {
   remainder = no%10;
   sum = sum * 10 + remainder;
   no = no/10;
   }
  return (sum);
}
 
int digit_sum(int no)
{ int sum = 0, remainder;
   while (no>0)
   {
    remainder = no%10;
    sum = sum + remainder;
    no = no/10;
    
   }
   return (sum);
}

int main()
{
int no, r, s;
int reverse(int);
int digit_sum(int);
printf("Enter the number for which you want reverse and digit sum :");
scanf("%d", &no);
r = reverse(no);
printf("Reverse of the number is %d\n", r);
s = digit_sum(no);
printf("The sum of the digits of number is %d", s);
return 0;
}





 