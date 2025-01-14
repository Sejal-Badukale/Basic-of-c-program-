//4.Write a program in C to display n terms of natural numbers and their sum using while loop.
#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("Enter n natural number=");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum of n natural numbers =%d",sum);

}
