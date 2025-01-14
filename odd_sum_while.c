//8.write a C program to display the n terms of odd natural numbers and their sum using while loop.
#include<stdio.h>
int main()
{
	int n,i=1,sum=0,odd;
	printf("Enter n term=");
	scanf("%d",&n);
	while(i<=n)
	{
		odd=(2*i)-1;
		printf("%d ",odd);
		sum=odd+sum;
		i++;
	}
	printf("\nSum of odd number=%d",sum);
}
