//2.Addition of two number using function(with argument with return).
#include<stdio.h>	
int addition(int a,int b)
	{
	int add;
	add=a+b;
	return add;
	}
int main()
{
	int x=10,y=2;
	int result;
	result=addition(x,y);
	printf("Sum of two numbers: %d\n",result);
}

