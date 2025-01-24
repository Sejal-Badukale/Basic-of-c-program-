//4.divison of two numbers using function(without argument with return).
#include<stdio.h>	
int div()
	{
	int a=10,b=2; 
	int div;
	div=a/b;
	return div;
	}
int main()
{
	int result;
	result=div();
	printf("Divison of two numbers: %d\n", result);
}
