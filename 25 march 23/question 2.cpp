//find the maximum and minimum of three number without using any control statement and conditional operator

int findmax(int a , int b, int c)
{
	int max = a;
	(max<b) && (max = b);
	(max<c) && (max=c);
	return max;
	
}

int findmin(int a , int b, int c)
{
	int max = a;
	(max>b) && (max = b);
	(max>c) && (max=c);
	return min;
	
}