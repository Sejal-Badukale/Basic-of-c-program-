//10.Write a C program to calculate the factorial of a given number 5 using while loop.
#include<stdio.h>
int main()
{
	int i=1;
	int fact=1;
	while(i<=5)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial of 5 is %d",fact);
}
