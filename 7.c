#include <stdio.h>
int pro(int a,int b)
{ 
	if (a==1 && b==1)
	   return 1;
	else
	  return a*b;
}
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Product of %d and %d is:%d",a,b,pro(a,b));
	return 0;
}
