#include <stdio.h>
int add(int n)
{
	if (n<=1)
	{
	    return 1;
	}
	else 
	{
	    return n+add(n-1); 
	}   
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Sum of numbers: %d",add(n));
	return 0;
}
