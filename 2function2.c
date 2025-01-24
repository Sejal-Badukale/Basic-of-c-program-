//2.Substraction of two number using function(without argument with return).
#include<stdio.h>	
int sub()
	{
	int a=10,b=20; 
	int sub;
	sub=a-b;
	return sub;
	}
int main()
{
	int result;
	result=sub();
	printf("Sum of two numbers: %d\n",result);
}

