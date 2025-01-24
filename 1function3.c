//1.addition of two number using function(with argument without return).
#include<stdio.h>	
void add(int x,int y)
	{
	int sum;
	sum=x+y;
	printf("Sum of two numbers: %d\n", sum);
	}
int main()
{
	int a=10,b=20;
	add(a,b);
}

