//Q.5 Write a program in C to sort the elements of the array in descending order.
#include<stdio.h>
int main()
{
	int a[5]={5,8,9,4,1};
	int i,j,t;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
		        a[j]=t;
			}
		}
	}
	printf("sorting in descending order:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
