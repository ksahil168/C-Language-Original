//program to check if a given number is a power of 2 

int ispoweroftwo(int n)
{
	return (n &&!(n&(n-1))));
	/*n will check if n==0 and !(n&(n-1)) will check if n is a power of 2 or not */
}