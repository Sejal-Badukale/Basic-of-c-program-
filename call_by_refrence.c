#include<stdio.h>
int main()
{
	int a=10;
	int b=10;
	fun(&a,&b);
	printf("\n%d %d",a,b);
}
void fun(int *x,int *y)
{
	*x=5;
	*y=5;
	printf("%d %d",*x,*y);
}
