//1.addition of two number using function(without argument with return).
#include<stdio.h>	
int add()
	{
	int a=10,b=20; 
	int sum;
	sum=a+b;
	return sum;
	}
int main()
{
	int result;
	result=add();
	printf("Sum of two numbers: %d\n",result);
}

