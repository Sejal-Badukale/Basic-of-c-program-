//1.Subtraction of two number using function(with argument with return).
#include<stdio.h>	
int sub(int x,int y)
	{
	int sub;
	sub=x-y;
	return sub;
	}
int main()
{
	int a=10,b=20,result;
	result=sub(a,b);
	printf("Subtraction of two numbers: %d\n", result);
	
}

