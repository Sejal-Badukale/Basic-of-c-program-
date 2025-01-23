//7. Sum of all elements in an array. 
#include<stdio.h>
int main()
{
	int i,n,sum=0;
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
		sum=sum+ptr[i];
	}
	printf("%d ",sum);
	
}
