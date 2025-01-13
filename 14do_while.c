//14 .C program to calculate product of numbers using do while loop
#include<stdio.h>
int main()
{
	int n,i=1,product=1,num;
	printf("enter number=");
	scanf("%d",&n);
do
	{
		product=product*i;
		i++;
	}while(i<=n);
	printf("Product=%d",product);
}
