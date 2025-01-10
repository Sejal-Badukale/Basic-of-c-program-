//9.Write a C program to display the sum of n terms of even natural numbers.
#include<stdio.h>
int main()
{
	int n,i,even,sum=0;
	printf("Enter n terms=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		even=2*i;
		printf("%d ",even);
		sum=even+sum;
	}
	printf("\nsum of odd=%d",sum);
}

