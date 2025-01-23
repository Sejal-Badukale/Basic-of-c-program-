//recursion example.
#include<stdio.h>
void fun(int x)
{
	printf("%d ",x);
	if(x==10)
	{
		return;
	}
	fun(x+1);
}
int main()
{
int a=1;
fun(1);
}
