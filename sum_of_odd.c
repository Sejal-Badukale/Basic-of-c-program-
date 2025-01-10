//8.write a C program to display the n terms of odd natural numbers and their sum.
#include<stdio.h>
int main()
{
	int n,i,odd,sum=0;
	printf("Enter n terms=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		odd=(2*i)-1;
		printf("%d ",odd);
		sum=odd+sum;
	}
	printf("\nsum of odd=%d",sum);
}
