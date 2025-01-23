//2.find maximum between two numbers using pointers                                
#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int *p;
	int *q;
	p=&a;
	q=&b;
    if(*p<*q)
    {
    printf("b is largest number");	
	}
	else
	{
	printf("a is largest number");
	}
	
}
