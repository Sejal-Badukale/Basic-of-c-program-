//11.Write a C program to reverse a number using while loop.
#include<stdio.h>
int main()
{
	int num,rem;
	printf("Enter number=");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}
}
