//4.Write a program in C to display n terms of natural numbers and their sum.
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of 10 natural number is=%d",sum);
}
