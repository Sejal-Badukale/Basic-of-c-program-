//6.Write a program in C to find the factorial of a given number using pointers. 
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter n=");
	scanf("%d",&n);
	int *ptr;
	ptr=&n;
   for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of a numbers:%d",fact);
} 
