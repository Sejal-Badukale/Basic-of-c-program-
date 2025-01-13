//11.Write a C program to reverse a number using do while loop.
#include<stdio.h>
int main()
{
	int num,rem;
	printf("Enter number=");
	scanf("%d",&num);
	do
	{
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}while(num>0);
}
