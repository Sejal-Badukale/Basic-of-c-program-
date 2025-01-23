#include<stdio.h>
void fun(int x,int y)
{
	x=10;
	y=10;
	printf("%d %d",x,y);
}
int main()
{
	int a=5;
	int b=5;
	fun(a,b);
	printf("\n%d %d",a,b);
}
