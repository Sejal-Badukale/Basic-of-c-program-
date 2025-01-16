//Q.2write a c program to create new array of integers shifting all zeroes to left direction. 
#include<stdio.h>
int main()
{
	int arr[5]={1,8,0,9,0};
	int newarr[5],j=0,i;
	for(i=0;i<5;i++)
	{
		if(arr[i]==0)
		{
		newarr[j]=arr[i];
		j++;	
		}
	}
	for(i=0;i<5;i++)
	{
	if(arr[i]!=0)
		{
		newarr[j]=arr[i];
		j++;	
		}	
	}
	for(j=0;j<5;j++)
	{
		printf("%d",newarr[j]);
	}
}
