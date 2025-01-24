//4.divison of two numbers using function(with argument without return).
#include<stdio.h>	
void div(int x,int y)
	{
	int div;
	div=x/y;
	printf("Divison of two numbers: %d\n", div);
	}
int main()
{
	int a=10,b=2;
	div(a,b);
}
