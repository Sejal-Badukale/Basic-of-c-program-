//10.Write a C program to calculate the factorial of a given number 5 using do while loop.
#include<stdio.h>
int main()
{
	int i=1;
	int fact=1;
do
	{
		fact=fact*i;
		i++;
	}	while(i<=5);
	printf("Factorial of 5 is %d",fact);
}
