//Q1. Write a program in C to store elements in an array and print them.
#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	printf("Enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}
