//3.Multiplication of two number using function(with argument without return).
#include<stdio.h>	
void mul(int x,int y)
	{
	int mul;
	mul=x*y;
	printf("Multiplication of two numbers: %d\n", mul);
	}
int main()
{
	int a=10,b=20;
	mul(a,b);
}

