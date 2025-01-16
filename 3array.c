//Q.3 Write a program in C to separate odd and even integers into separate arrays.

#include<stdio.h>
int main()
{
	int arr[10];
	int evenarr[5],oddarr[5],j=0,k=0,i;
	printf("Enter element:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
		evenarr[j]=arr[i];
		j++;	
		}
	}
 for(i=0;i<10;i++)
	{
	if(arr[i]%2!=0)
		{
		oddarr[k]=arr[i];
		k++;	
		}	
	}
	printf("Original array=");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEven array=");
	for(j=0;j<5;j++)
	{
		printf("%d ",evenarr[j]);
	}
	printf("\nOdd array=");
	for(k=0;k<5;k++)
	{
		printf("%d ",oddarr[k]);
	}
}




