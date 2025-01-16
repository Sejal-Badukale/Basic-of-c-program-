//11.write a c program to create new array from a given array of integers shifting all even numbers before odd numbers.

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
	
	printf("array=");
	for(j=0;j<5;j++)
	{
		printf("%d ",evenarr[j]);
	}
	for(k=0;k<5;k++)
	{
		printf("%d ",oddarr[k]);
	}
}



