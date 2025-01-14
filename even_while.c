//9.Write a C program to display the sum of n terms of even natural numbers using while loop.
#include<stdio.h>
int main()
{
	int n,i=1,sum=0,even;
	printf("Enter n term=");
	scanf("%d",&n);
	while(i<=n)
	{
		even=(2*i);
		printf("%d ",even);
		sum=even+sum;
		i++;
	}
	printf("\nSum of even number=%d",sum);
}
