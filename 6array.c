//Q.6 Write a program in C to read n number of values in an array and display them in reverse order.
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("Enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nReverse:");
	for(i=i-1;i>=0;i--)
	{
	printf("%d ",a[i]);
	}
}
