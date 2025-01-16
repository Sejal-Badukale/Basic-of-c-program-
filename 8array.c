//Q.8 Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
int main()
{
	int a[5],newarr[5],i;
	printf("Enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		newarr[i]=a[i];
	}
	printf("New Array:");
	for(i=0;i<5;i++)
	{
		printf("%d ",newarr[i]);
	}
	
}
