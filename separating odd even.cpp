// separating even odd array with function

#include<stdio.h>
int main()

{
	int a[20],even[20],odd[20],n,i;
	void separate (int[20], int[20],int[20]);
	
    printf("Enter 20 integer numbers\n");
    for(i = 0; i < 20; i++)  
    scanf("%d", &a[i]); 
	separate( a,even, odd);
	
	printf("contents of even array\n");
	for(i=0; i<10; i++)
	printf("%d\n", even[i]);
	
	printf("contents of odd array\n");
	for(i=0; i<10; i++)
	printf("%d\n", odd[i]);
	
	return 0;
}

void separate(int b[20], int e[10],int o[10])
{
	int i, k=0, l=0;
	
    for(i = 0; i < 20; i++)  
    {  
        if(b[i] % 2 == 0)  
            e[k++] = b[i];  
        else  
            o[l++] = b[i];  
    }  
}
