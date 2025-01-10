//10.Write a C program to calculate the factorial of a given number 5.
#include<stdio.h>
int main()
{
	int i,n=5,fact=1;
	for(i=1;i<=5;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of 5=%d",fact);
}
