//1.Subtraction of two number using function(with argument without return).
#include<stdio.h>	
void sub(int x,int y)
	{
	int sub;
	sub=x-y;
	printf("Subtraction of two numbers: %d\n", sub);
	}
int main()
{
	int a=10,b=20;
	sub(a,b);
}

