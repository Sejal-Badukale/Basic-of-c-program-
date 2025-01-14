//12 C program to find number is palindrome or not using while oop.
#include<stdio.h>
int main()
{
	int rem,n,rev=0;
	printf("enter n=");
	scanf("%d",&n);
	int a=n;
do
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}while(n>0);
	if(a==rev)
	{
		printf("Enter number is palindrome");
	}
	else
	{
	printf("Enter number is not a palindrome");
	}
}
