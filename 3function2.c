//3.Multiaction of two number using function(without argument with return).
#include<stdio.h>	
int mul()
	{
	int a=10,b=20; 
	int mult;
	mult=a*b;
	return mult;
	}
int main()
{
	int result;
	result=mul();
	printf("Sum of two numbers: %d\n",result);
}

