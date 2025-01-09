//2.Write a C program to find maximum between three numbers.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b and c=");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is maximum number");
	}
	else if(b>c)
	{
	printf("b is maximum number");	
	}
	else
	{
	printf("c is maximum number");		
	}
}
