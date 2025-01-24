//4.divison of two numbers using function(with argument with return).
#include<stdio.h>	
int div(int x,int y)
	{
	int div;
	div=x/y;
	return div;
	}
int main()
{
	int a=10,b=2,result;
	result=div(a,b);
	printf("Divison of two numbers: %d\n", result);
}
