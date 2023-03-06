// write a programm to enetr sum of numbers  from m to n
 # include<stdio.h>
 #include<iostream>
 int main ()
 {
 	
 	int  n,m,i, sum= 0;
 	printf("Enter a number m ");
 	scanf("%d", &m);
 	i = m;
 	printf("enter a number n ");
 	scanf("%d", &n);
 	while(i<=n)
 	{ 
	 sum = sum + i;
	 i = i+1;
 	
	 }
    printf("the sum of number from %d to %d = %d ", m,n,sum);
	 return 0;
 }
