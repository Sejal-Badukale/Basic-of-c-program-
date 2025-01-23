//4.Write a program in C to store n elements in an array and print the elements using a pointer.  
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter n=");
	scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr=arr;
	printf("Enter Element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
		printf("Array=");
		for(i=0;i<n;i++)
	{
		printf("%d ",ptr[i]);
	}
	
}
