//1.Add two numbers using pointer.
#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int add;
	int *p;
	int *q;
	p=&a;
	q=&b;
    add=*p+*q;
	printf("%d",add);
	
}
