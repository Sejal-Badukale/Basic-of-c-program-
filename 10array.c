//Q.10  Write a program in C to find minimum element.

#include<stdio.h>
int main()
{
	int a[5],min,i;
	printf("Enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
		printf("%d",min);
}
