//Q.7 Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
int main()
{
	int a[5],sum=0,i;
	printf("Enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sum:");
	for(i=0;i<=5;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	
}
