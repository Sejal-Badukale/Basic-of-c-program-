//14 .C program to calculate product of numbers using while loop
#include<stdio.h>
int main()
{
	int n,i=1,product=1,num;
	printf("enter number=");
	scanf("%d",&n);
	while(i<=n)
	{
		product=product*i;
		i++;
	}
	printf("Product=%d",product);
}


