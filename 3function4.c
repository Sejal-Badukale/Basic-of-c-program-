//3.Multiaction of two number using function(with argument with return).
#include<stdio.h>	
int mul(int a,int b)
	{
	int mult;
	mult=a*b;
	return mult;
	}
int main()
{
	int x=10,y=2;
	int result;
	result=mul(x,y);
	printf("Sum of two numbers: %d\n",result);
}

