//3.Write a C program to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	if(n>0)
	{
		printf("n is positive number");
	}
	else if(n<0)
	{
	printf("n is negative number");	
	}
	else
	{
	printf("n is equal to zero");		
	}
}
